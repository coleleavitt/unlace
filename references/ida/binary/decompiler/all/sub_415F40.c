__int64 sub_415F40()
{
  size_t v0; // rbx
  unsigned int v1; // r14d
  void *v2; // r15
  char v3; // r13
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  const char *v10; // rdx
  const char *v11; // rdx
  const char *v12; // rdx
  char *v13; // [rsp+0h] [rbp-138h]
  void *v14; // [rsp+8h] [rbp-130h]
  _BYTE *v15; // [rsp+10h] [rbp-128h] BYREF
  __int128 v16; // [rsp+18h] [rbp-120h]
  _BYTE *v17; // [rsp+30h] [rbp-108h] BYREF
  __int128 v18; // [rsp+38h] [rbp-100h]
  _BYTE *v19; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-E0h]
  void *v21; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v23; // [rsp+88h] [rbp-B0h]
  _QWORD v24[3]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int8 v25; // [rsp+A8h] [rbp-90h]
  const char *v26; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-80h]
  char v28; // [rsp+C8h] [rbp-70h]
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
    v24[0] = 1;
    netnode_supset();
    v26 = &byte_1;
    netnode_supset();
  }
  else
  {
    v23 = (unsigned __int64)v26;
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
  sub_40D2B0((__int64)v24, (__int64)&v21, (__int64)&v15);
  v1 = v25;
  if ( v25 )
  {
    v11 = s1;
    if ( v24[1] )
      v11 = (const char *)v24[0];
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v11);
    if ( v24[0] )
      qfree();
    goto LABEL_46;
  }
  v2 = (void *)v24[0];
  v18 = 0;
  v17 = 0;
  v17 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v18 = 2;
  *v17 = 66;
  v17[1] = 0;
  sub_40D2B0((__int64)&v26, (__int64)&v21, (__int64)&v17);
  v3 = v28;
  if ( v28 )
  {
    v10 = s1;
    if ( (_QWORD)v27 )
      v10 = v26;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v10);
    if ( v26 )
      qfree();
LABEL_39:
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
      if ( !v15 )
        goto LABEL_48;
      goto LABEL_14;
    }
LABEL_46:
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    goto LABEL_48;
  }
  v19 = 0;
  v20 = 0;
  v13 = (char *)v26;
  v19 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v20 = 2;
  *v19 = 67;
  v19[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v21, (__int64)&v19);
  v3 = n[2];
  if ( LOBYTE(n[2]) )
  {
    v12 = s1;
    if ( n[0] )
      v12 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v12);
    if ( src )
      qfree();
    if ( v19 )
    {
LABEL_11:
      *(_QWORD *)&v20 = 0;
      qfree();
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree();
      }
      if ( !v15 )
      {
LABEL_15:
        if ( !v3 )
          goto LABEL_16;
LABEL_48:
        v1 = 0;
        goto LABEL_32;
      }
LABEL_14:
      *(_QWORD *)&v16 = 0;
      qfree();
      goto LABEL_15;
    }
    goto LABEL_39;
  }
  v14 = src;
  if ( v19 )
    goto LABEL_11;
  if ( !v17 )
  {
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    goto LABEL_16;
  }
  *(_QWORD *)&v18 = 0;
  qfree();
  if ( v15 )
    goto LABEL_14;
LABEL_16:
  v26 = 0;
  src = v14;
  memset(n, 0, 24);
  v27 = 0;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 67;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v26, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v13;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 66;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v26, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  src = v2;
  memset(n, 0, 24);
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 65;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v26, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  v4 = sub_411A30((__int64)&v21, "add_and_iteration.order", &v26);
  if ( (_BYTE)v4 )
  {
    if ( sub_40DB00(&v21, "add_and_iteration.order") == 3 )
      v1 = v4;
    else
      sub_6C720((__int64)"add_and_iteration: size != 3\n");
  }
  v5 = (unsigned __int64)v26;
  if ( v26 )
  {
    v6 = v27;
    if ( (_QWORD)v27 )
    {
      v7 = 0;
      do
      {
        v8 = v5 + 32 * v7;
        if ( *(_QWORD *)(v8 + 8) )
        {
          *(_QWORD *)(v8 + 16) = 0;
          qfree();
          v5 = (unsigned __int64)v26;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
LABEL_32:
  netnode_kill();
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v1;
}
