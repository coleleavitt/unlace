__int64 sub_40E180()
{
  size_t v0; // rbx
  __int64 v1; // r14
  const char *v3; // rdx
  const char *v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-E0h]
  _BYTE *v6; // [rsp+8h] [rbp-D8h] BYREF
  __int128 v7; // [rsp+10h] [rbp-D0h]
  _BYTE *v8; // [rsp+28h] [rbp-B8h] BYREF
  __int128 v9; // [rsp+30h] [rbp-B0h]
  void *v10; // [rsp+48h] [rbp-98h] BYREF
  __int128 v11; // [rsp+50h] [rbp-90h]
  __int64 v12; // [rsp+60h] [rbp-80h]
  _QWORD v13[3]; // [rsp+68h] [rbp-78h] BYREF
  char v14; // [rsp+80h] [rbp-60h]
  void *src; // [rsp+88h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+90h] [rbp-50h]
  char v17; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v18; // [rsp+B0h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v10 = 0;
  v11 = 0;
  if ( n[0] )
  {
    v10 = (void *)qalloc_or_throw();
    *((_QWORD *)&v11 + 1) = v0;
    memcpy(v10, src, v0);
    *(_QWORD *)&v11 = v0;
  }
  v12 = -1;
  netnode_check();
  netnode_check();
  if ( v5 == -1 )
  {
    v6 = 0;
    netnode_supset();
    v8 = &byte_1;
    netnode_supset();
    v13[0] = 1;
    netnode_supset();
  }
  else
  {
    v12 = v13[0];
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v7 = 0;
  v6 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v7 = 2;
  *v6 = 65;
  v6[1] = 0;
  sub_40D2B0((__int64)v13, (__int64)&v10, (__int64)&v6);
  if ( v14 )
  {
    v4 = s1;
    if ( v13[1] )
      v4 = (const char *)v13[0];
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v4);
    if ( v13[0] )
    {
      qfree();
      if ( !v6 )
        goto LABEL_14;
      goto LABEL_30;
    }
    goto LABEL_27;
  }
  v1 = v13[0];
  v8 = 0;
  v9 = 0;
  v8 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v9 = 2;
  *v8 = 66;
  v8[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v10, (__int64)&v8);
  if ( v17 )
  {
    v3 = s1;
    if ( n[0] )
      v3 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v3);
    if ( src )
      qfree();
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
      if ( !v6 )
        goto LABEL_14;
LABEL_30:
      *(_QWORD *)&v7 = 0;
      qfree();
      goto LABEL_14;
    }
LABEL_27:
    if ( !v6 )
      goto LABEL_14;
    goto LABEL_30;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  src = 0;
  netnode_supset();
  sub_40DB00(&v10, v1);
  sub_6C720((__int64)"test_size_corruption: expected error on size corruption\n");
LABEL_14:
  netnode_kill();
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return 0;
}
