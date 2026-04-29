__int64 sub_40E680()
{
  size_t v0; // rbx
  unsigned int v1; // ebx
  void *v3; // r13
  const char *v4; // rdx
  void *v5; // rbx
  const char *v6; // rdx
  const char *v7; // rdx
  const char *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-B0h]
  _BYTE *v10; // [rsp+18h] [rbp-98h] BYREF
  __int128 v11; // [rsp+20h] [rbp-90h]
  void *v12; // [rsp+38h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-60h]
  void *src; // [rsp+58h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+60h] [rbp-50h]
  char v17; // [rsp+70h] [rbp-40h]
  unsigned __int64 v18; // [rsp+80h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v12 = 0;
  v13 = 0;
  if ( n[0] )
  {
    v12 = (void *)qalloc_or_throw();
    *((_QWORD *)&v13 + 1) = v0;
    memcpy(v12, src, v0);
    *(_QWORD *)&v13 = v0;
  }
  v14 = -1;
  netnode_check();
  netnode_check();
  if ( v9 == -1 )
  {
    netnode_supset();
    netnode_supset();
    v10 = &byte_1;
    netnode_supset();
  }
  else
  {
    v14 = (__int64)v10;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( netnode_altval() || sub_40DB00(&v12, 0) )
    goto LABEL_8;
  v11 = 0;
  v10 = 0;
  v10 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v11 = 2;
  *v10 = 65;
  v10[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v12, (__int64)&v10);
  if ( v17 )
  {
    v4 = s1;
    if ( n[0] )
      v4 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v4);
    if ( src )
      qfree();
    if ( !v10 )
      goto LABEL_8;
LABEL_25:
    *(_QWORD *)&v11 = 0;
    qfree();
    goto LABEL_8;
  }
  v3 = src;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  if ( !netnode_altval() || sub_40DB00(&v12, 0) != 1 )
  {
    sub_6C720((__int64)"size_empty: after add A\n", 0);
LABEL_8:
    v1 = 0;
    goto LABEL_9;
  }
  v11 = 0;
  v10 = 0;
  v10 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v11 = 2;
  *v10 = 66;
  v10[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v12, (__int64)&v10);
  if ( v17 )
  {
    v6 = s1;
    if ( n[0] )
      v6 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v6);
    if ( src )
      qfree();
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_25;
  }
  v5 = src;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  if ( sub_40DB00(&v12, &v12) != 2 )
  {
    sub_6C720((__int64)"size_empty: after add B\n");
    goto LABEL_8;
  }
  sub_40D570((__int64)&src, (__int64)&v12, (__int64)v5);
  if ( v17 )
  {
    v7 = s1;
    if ( n[0] )
      v7 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "del B", v7);
    if ( src )
      qfree();
    goto LABEL_8;
  }
  if ( sub_40DB00(&v12, &v12) != 1 )
  {
    sub_6C720((__int64)"size_empty: after del B\n");
    goto LABEL_8;
  }
  sub_40D570((__int64)&src, (__int64)&v12, (__int64)v3);
  if ( v17 )
  {
    v8 = s1;
    if ( n[0] )
      v8 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "del A", v8);
    sub_40BFB0((__int64 *)&src);
    goto LABEL_8;
  }
  if ( netnode_altval() || sub_40DB00(&v12, 0) )
  {
    sub_6C720((__int64)"size_empty: after del A\n", 0);
    goto LABEL_8;
  }
  v1 = 1;
LABEL_9:
  netnode_kill();
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v1;
}
