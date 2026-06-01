__int64 sub_40EC60()
{
  size_t v0; // rbp
  const char *v2; // rdx
  const char *v3; // rdx
  __int64 v4; // [rsp+0h] [rbp-E0h]
  _BYTE *v5; // [rsp+8h] [rbp-D8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-D0h]
  _BYTE *v7; // [rsp+28h] [rbp-B8h] BYREF
  __int128 v8; // [rsp+30h] [rbp-B0h]
  void *v9; // [rsp+48h] [rbp-98h] BYREF
  __int128 v10; // [rsp+50h] [rbp-90h]
  __int64 v11; // [rsp+60h] [rbp-80h]
  _QWORD v12[3]; // [rsp+68h] [rbp-78h] BYREF
  char v13; // [rsp+80h] [rbp-60h]
  void *src; // [rsp+88h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+90h] [rbp-50h]
  char v16; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v17; // [rsp+B0h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v9 = 0;
  v10 = 0;
  if ( n[0] )
  {
    v9 = (void *)qalloc_or_throw();
    *((_QWORD *)&v10 + 1) = v0;
    memcpy(v9, src, v0);
    *(_QWORD *)&v10 = v0;
  }
  v11 = -1;
  netnode_check();
  netnode_check();
  if ( v4 == -1 )
  {
    v5 = 0;
    netnode_supset();
    v7 = &byte_1;
    netnode_supset();
    v12[0] = 1;
    netnode_supset();
  }
  else
  {
    v11 = v12[0];
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v6 = 0;
  v5 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v6 = 2;
  *v5 = 65;
  v5[1] = 0;
  sub_40D2B0((__int64)v12, (__int64)&v9, (__int64)&v5);
  if ( v13 )
  {
    v3 = s1;
    if ( v12[1] )
      v3 = (const char *)v12[0];
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v3);
    if ( v12[0] )
    {
      qfree();
      if ( !v5 )
        goto LABEL_16;
      goto LABEL_32;
    }
    goto LABEL_29;
  }
  v7 = 0;
  v8 = 0;
  v7 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v8 = 2;
  *v7 = 66;
  v7[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v9, (__int64)&v7);
  if ( v16 )
  {
    v2 = s1;
    if ( n[0] )
      v2 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v2);
    if ( src )
      qfree();
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
      if ( !v5 )
        goto LABEL_16;
LABEL_32:
      *(_QWORD *)&v6 = 0;
      qfree();
      goto LABEL_16;
    }
LABEL_29:
    if ( !v5 )
      goto LABEL_16;
    goto LABEL_32;
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  src = 0;
  netnode_supset();
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 2;
  *(_BYTE *)src = 67;
  *((_BYTE *)src + 1) = 0;
  sub_40D8B0((__int64)&v9, (__int64)&src);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  sub_6C720((__int64)"test_contains_corruption: expected error on contains corruption\n");
LABEL_16:
  netnode_kill();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return 0;
}
