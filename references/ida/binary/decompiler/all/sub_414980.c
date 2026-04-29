__int64 sub_414980()
{
  size_t v0; // rbx
  unsigned int v1; // r14d
  char v2; // r13
  const char *v3; // rdx
  unsigned int v4; // r13d
  const char *v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  const char *v11; // rdx
  const char *v12; // rdx
  char *v13; // [rsp+0h] [rbp-138h]
  char *v14; // [rsp+8h] [rbp-130h]
  _BYTE *v15; // [rsp+10h] [rbp-128h] BYREF
  __int128 v16; // [rsp+18h] [rbp-120h]
  _BYTE *v17; // [rsp+30h] [rbp-108h] BYREF
  __int128 v18; // [rsp+38h] [rbp-100h]
  char *v19; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-E0h]
  void *v21; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+78h] [rbp-C0h]
  __int64 v23; // [rsp+88h] [rbp-B0h]
  const char *v24; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+98h] [rbp-A0h]
  unsigned __int8 v26; // [rsp+A8h] [rbp-90h]
  char *v27; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-80h]
  char v29; // [rsp+C8h] [rbp-70h]
  void *src; // [rsp+D0h] [rbp-68h] BYREF
  size_t n[12]; // [rsp+D8h] [rbp-60h] BYREF

  n[4] = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v21 = 0;
  v22 = 0;
  if ( n[0] )
  {
    v21 = (void *)qalloc_or_throw();
    *((_QWORD *)&v22 + 1) = v0;
    memcpy(v21, src, v0);
    *(_QWORD *)&v22 = v0;
  }
  v23 = -1;
  netnode_check();
  netnode_check();
  if ( v17 == (_BYTE *)-1LL )
  {
    v19 = 0;
    netnode_supset();
    v24 = &byte_1;
    netnode_supset();
    v27 = &byte_1;
    netnode_supset();
  }
  else
  {
    v23 = (__int64)v27;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v16 = 0;
  v15 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v16 = 2;
  *v15 = 65;
  v15[1] = 0;
  sub_40D2B0((__int64)&v24, (__int64)&v21, (__int64)&v15);
  v1 = v26;
  if ( v26 )
  {
    v12 = s1;
    if ( (_QWORD)v25 )
      v12 = v24;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v12);
    if ( v24 )
      qfree();
    goto LABEL_54;
  }
  v18 = 0;
  v17 = 0;
  v14 = (char *)v24;
  v17 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v18 = 2;
  *v17 = 66;
  v17[1] = 0;
  sub_40D2B0((__int64)&v27, (__int64)&v21, (__int64)&v17);
  v2 = v29;
  if ( v29 )
  {
    v11 = s1;
    if ( (_QWORD)v28 )
      v11 = v27;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v11);
    if ( v27 )
      qfree();
LABEL_47:
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
      if ( !v15 )
        goto LABEL_56;
      goto LABEL_18;
    }
LABEL_54:
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    goto LABEL_56;
  }
  v19 = 0;
  v20 = 0;
  v13 = v27;
  v19 = (char *)qvector_reserve();
  *(_QWORD *)&v20 = 3;
  strcpy(v19, "B2");
  sub_40CE30((__int64)&src, (__int64)&v21, (__int64)v13, (__int64)&v19);
  v2 = n[2];
  if ( LOBYTE(n[2]) )
  {
    v3 = s1;
    if ( n[0] )
      v3 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "update B->B2", v3);
    if ( src )
      qfree();
    if ( v19 )
    {
LABEL_15:
      *(_QWORD *)&v20 = 0;
      qfree();
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree();
      }
      if ( !v15 )
      {
LABEL_19:
        if ( !v2 )
          goto LABEL_20;
LABEL_56:
        v1 = 0;
        goto LABEL_40;
      }
LABEL_18:
      *(_QWORD *)&v16 = 0;
      qfree();
      goto LABEL_19;
    }
    goto LABEL_47;
  }
  if ( v19 )
    goto LABEL_15;
  if ( !v17 )
  {
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    goto LABEL_20;
  }
  *(_QWORD *)&v18 = 0;
  qfree();
  if ( v15 )
    goto LABEL_18;
LABEL_20:
  v24 = 0;
  src = v13;
  memset(n, 0, 24);
  v25 = 0;
  n[0] = qvector_reserve();
  n[1] = 3;
  strcpy((char *)n[0], "B2");
  sub_40FA00((unsigned __int64 *)&v24, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v14;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 65;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v24, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  if ( (unsigned __int8)sub_411A30((__int64)&v21, "update_entry.content", &v24) )
  {
    v28 = 0;
    v27 = 0;
    v27 = (char *)qvector_reserve();
    *(_QWORD *)&v28 = 2;
    *v27 = 120;
    v27[1] = 0;
    sub_40CE30((__int64)&src, (__int64)&v21, (__int64)(v13 + 100), (__int64)&v27);
    v4 = LOBYTE(n[2]);
    if ( LOBYTE(n[2]) )
    {
      v5 = s1;
      if ( n[0] )
        v5 = (const char *)src;
      sub_6C720((__int64)"FAIL (%s): %s\n", "update invalid should fail", v5);
      if ( src )
        qfree();
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree();
      }
      v1 = v4;
    }
    else
    {
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree();
      }
      sub_6C720((__int64)"update_entry: expected failure on invalid index\n");
    }
  }
  v6 = (unsigned __int64)v24;
  if ( v24 )
  {
    v7 = v25;
    if ( (_QWORD)v25 )
    {
      v8 = 0;
      do
      {
        v9 = v6 + 32 * v8;
        if ( *(_QWORD *)(v9 + 8) )
        {
          *(_QWORD *)(v9 + 16) = 0;
          qfree();
          v6 = (unsigned __int64)v24;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v25 = 0;
    qfree();
  }
LABEL_40:
  netnode_kill();
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v1;
}
