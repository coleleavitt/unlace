__int64 __fastcall sub_40F1E0()
{
  void *v0; // r12
  size_t v1; // rbp
  char v2; // bp
  __int64 v3; // rbp
  unsigned int v4; // ebx
  const char *v6; // rdx
  const char *v7; // rdx
  __int64 v8; // rbp
  const char *v9; // rdx
  _BYTE *v10; // [rsp+8h] [rbp-128h] BYREF
  __int128 v11; // [rsp+10h] [rbp-120h]
  _BYTE *v12; // [rsp+28h] [rbp-108h] BYREF
  __int128 v13; // [rsp+30h] [rbp-100h]
  _BYTE *v14; // [rsp+48h] [rbp-E8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-E0h]
  void *v16; // [rsp+68h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+70h] [rbp-C0h]
  __int64 v18; // [rsp+80h] [rbp-B0h]
  _QWORD v19[3]; // [rsp+88h] [rbp-A8h] BYREF
  char v20; // [rsp+A0h] [rbp-90h]
  _QWORD v21[3]; // [rsp+A8h] [rbp-88h] BYREF
  char v22; // [rsp+C0h] [rbp-70h]
  void *src; // [rsp+C8h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-60h]
  char v25; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v26; // [rsp+F0h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v1 = n[0];
  v16 = 0;
  v17 = 0;
  if ( n[0] )
  {
    v16 = (void *)qalloc_or_throw();
    *((_QWORD *)&v17 + 1) = v1;
    memcpy(v16, src, v1);
    *(_QWORD *)&v17 = v1;
  }
  v18 = -1;
  netnode_check();
  netnode_check();
  if ( v12 == (_BYTE *)-1LL )
  {
    v14 = 0;
    netnode_supset();
    v19[0] = 1;
    netnode_supset();
    v21[0] = 1;
    netnode_supset();
  }
  else
  {
    v18 = v21[0];
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v11 = 0;
  v10 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v11 = 2;
  *v10 = 65;
  v10[1] = 0;
  sub_40D2B0((__int64)v19, (__int64)&v16, (__int64)&v10);
  if ( v20 )
  {
    v7 = s1;
    if ( v19[1] )
      v7 = (const char *)v19[0];
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A1", v7);
    if ( v19[0] )
      qfree();
    goto LABEL_35;
  }
  v13 = 0;
  v12 = 0;
  v12 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v13 = 2;
  *v12 = 66;
  v12[1] = 0;
  sub_40D2B0((__int64)v21, (__int64)&v16, (__int64)&v12);
  v2 = v22;
  if ( v22 )
  {
    v6 = s1;
    if ( v21[1] )
      v6 = (const char *)v21[0];
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v6);
    if ( v21[0] )
      qfree();
LABEL_28:
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_14;
    }
LABEL_35:
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
    goto LABEL_20;
  }
  v15 = 0;
  v14 = 0;
  v14 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v15 = 2;
  *v14 = 65;
  v14[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v16, (__int64)&v14);
  v2 = v25;
  if ( v25 )
  {
    v9 = s1;
    if ( n[0] )
      v9 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A2", v9);
    if ( src )
      qfree();
    if ( v14 )
      goto LABEL_11;
    goto LABEL_28;
  }
  v0 = src;
  if ( !v14 )
  {
    if ( !v12 )
    {
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
      goto LABEL_16;
    }
    *(_QWORD *)&v13 = 0;
    qfree();
    if ( !v10 )
      goto LABEL_16;
    goto LABEL_14;
  }
LABEL_11:
  *(_QWORD *)&v15 = 0;
  qfree();
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  if ( v10 )
  {
LABEL_14:
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  if ( v2 )
  {
LABEL_20:
    v4 = 0;
    goto LABEL_21;
  }
LABEL_16:
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 2;
  *(_BYTE *)src = 65;
  *((_BYTE *)src + 1) = 0;
  v3 = sub_40D8B0((__int64)&v16, (__int64)&src);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( (void *)v3 != v0 )
  {
    sub_6C720((__int64)"contains.dup: expected most-recent A index\n");
    goto LABEL_20;
  }
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 2;
  *(_BYTE *)src = 90;
  *((_BYTE *)src + 1) = 0;
  v8 = sub_40D8B0((__int64)&v16, (__int64)&src);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v4 = 1;
  if ( v8 != -1 )
  {
    sub_6C720((__int64)"contains.dup: expected miss for Z\n");
    goto LABEL_20;
  }
LABEL_21:
  netnode_kill();
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v4;
}
