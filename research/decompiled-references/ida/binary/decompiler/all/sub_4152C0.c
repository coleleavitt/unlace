__int64 sub_4152C0()
{
  size_t v0; // rbx
  unsigned int v1; // ebx
  const char *v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  const char *v7; // rdx
  const char *v9; // rdx
  const char *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rax
  const char *v15; // rdx
  char *v16; // [rsp+0h] [rbp-160h]
  char *v17; // [rsp+8h] [rbp-158h]
  void *v18; // [rsp+10h] [rbp-150h]
  _BYTE *v19; // [rsp+18h] [rbp-148h] BYREF
  __int128 v20; // [rsp+20h] [rbp-140h]
  _BYTE *v21; // [rsp+38h] [rbp-128h] BYREF
  __int128 v22; // [rsp+40h] [rbp-120h]
  _BYTE *v23; // [rsp+58h] [rbp-108h] BYREF
  __int128 v24; // [rsp+60h] [rbp-100h]
  void *v25; // [rsp+78h] [rbp-E8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-E0h]
  __int64 v27; // [rsp+90h] [rbp-D0h]
  const char *v28[3]; // [rsp+98h] [rbp-C8h] BYREF
  char v29; // [rsp+B0h] [rbp-B0h]
  const char *v30; // [rsp+B8h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-A0h]
  unsigned __int8 v32; // [rsp+D0h] [rbp-90h]
  __int64 v33; // [rsp+D8h] [rbp-88h] BYREF
  __int128 v34; // [rsp+E0h] [rbp-80h]
  unsigned __int8 v35; // [rsp+F0h] [rbp-70h]
  void *src; // [rsp+F8h] [rbp-68h] BYREF
  size_t n[12]; // [rsp+100h] [rbp-60h] BYREF

  n[4] = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v25 = 0;
  v26 = 0;
  if ( n[0] )
  {
    v25 = (void *)qalloc_or_throw();
    *((_QWORD *)&v26 + 1) = v0;
    memcpy(v25, src, v0);
    *(_QWORD *)&v26 = v0;
  }
  v27 = -1;
  netnode_check();
  netnode_check();
  if ( v23 == (_BYTE *)-1LL )
  {
    v28[0] = 0;
    netnode_supset();
    v30 = &byte_1;
    netnode_supset();
    v33 = 1;
    netnode_supset();
  }
  else
  {
    v27 = v33;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v20 = 0;
  v19 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v20 = 2;
  *v19 = 65;
  v19[1] = 0;
  sub_40D2B0((__int64)v28, (__int64)&v25, (__int64)&v19);
  if ( v29 )
  {
    if ( v28[1] )
      sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v28[0]);
    else
      sub_6C720((__int64)"FAIL (%s): %s\n", "add A", s1);
    if ( v28[0] )
      qfree();
    goto LABEL_50;
  }
  v21 = 0;
  v22 = 0;
  v16 = (char *)v28[0];
  v21 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v22 = 2;
  *v21 = 66;
  v21[1] = 0;
  sub_40D2B0((__int64)&v30, (__int64)&v25, (__int64)&v21);
  v1 = v32;
  if ( v32 )
  {
    v7 = s1;
    if ( (_QWORD)v31 )
      v7 = v30;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v7);
    if ( v30 )
      qfree();
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
      if ( !v19 )
        goto LABEL_42;
      goto LABEL_20;
    }
LABEL_50:
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    goto LABEL_42;
  }
  v24 = 0;
  v23 = 0;
  v17 = (char *)v30;
  v23 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v24 = 2;
  *v23 = 67;
  v23[1] = 0;
  sub_40D2B0((__int64)&v33, (__int64)&v25, (__int64)&v23);
  v1 = v35;
  if ( !v35 )
  {
    v18 = (void *)v33;
    sub_40CF90((__int64)&src, (__int64)&v25, v33);
    v1 = LOBYTE(n[2]);
    if ( LOBYTE(n[2]) )
    {
      v2 = s1;
      if ( n[0] )
        v2 = (const char *)src;
      sub_6C720((__int64)"FAIL (%s): %s\n", "move head (C) to front", v2);
      if ( src )
        qfree();
    }
    goto LABEL_15;
  }
  v15 = s1;
  if ( (_QWORD)v34 )
    v15 = (const char *)v33;
  sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v15);
  if ( !v33 )
  {
LABEL_15:
    if ( !v23 )
      goto LABEL_17;
    goto LABEL_16;
  }
  qfree();
  if ( v23 )
  {
LABEL_16:
    *(_QWORD *)&v24 = 0;
    qfree();
  }
LABEL_17:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  if ( v19 )
  {
LABEL_20:
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( (_BYTE)v1 )
  {
LABEL_42:
    v1 = 0;
    goto LABEL_43;
  }
  v30 = 0;
  src = v18;
  memset(n, 0, 24);
  v31 = 0;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 67;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v30, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v17;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 66;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v30, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v16;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 65;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v30, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  if ( !(unsigned __int8)sub_411A30((__int64)&v25, "move_to_front.head_noop", &v30) )
    goto LABEL_29;
  sub_40CF90((__int64)&src, (__int64)&v25, (__int64)v16);
  if ( !LOBYTE(n[2]) )
  {
    v33 = 0;
    src = v16;
    memset(n, 0, 24);
    v34 = 0;
    n[0] = qvector_reserve();
    n[1] = 2;
    *(_BYTE *)n[0] = 65;
    *(_BYTE *)(n[0] + 1) = 0;
    sub_40FA00((unsigned __int64 *)&v33, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v18;
    n[0] = qvector_reserve();
    n[1] = 2;
    *(_BYTE *)n[0] = 67;
    *(_BYTE *)(n[0] + 1) = 0;
    sub_40FA00((unsigned __int64 *)&v33, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v17;
    n[0] = qvector_reserve();
    n[1] = 2;
    *(_BYTE *)n[0] = 66;
    *(_BYTE *)(n[0] + 1) = 0;
    sub_40FA00((unsigned __int64 *)&v33, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    if ( (unsigned __int8)sub_411A30((__int64)&v25, "move_to_front.tail", &v33) )
    {
      sub_40CF90((__int64)&src, (__int64)&v25, (__int64)&stru_1E240);
      v1 = LOBYTE(n[2]);
      if ( LOBYTE(n[2]) )
      {
        v10 = s1;
        if ( n[0] )
          v10 = (const char *)src;
        sub_6C720((__int64)"FAIL (%s): %s\n", "move invalid should fail", v10);
        if ( src )
          qfree();
        goto LABEL_71;
      }
      sub_6C720((__int64)"move_to_front_edges: expected failure on invalid index\n");
    }
    v1 = 0;
LABEL_71:
    v11 = v33;
    if ( v33 )
    {
      v12 = v34;
      if ( (_QWORD)v34 )
      {
        v13 = 0;
        do
        {
          v14 = v11 + 32 * v13;
          if ( *(_QWORD *)(v14 + 8) )
          {
            *(_QWORD *)(v14 + 16) = 0;
            qfree();
            v11 = v33;
          }
          ++v13;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    goto LABEL_29;
  }
  v9 = s1;
  if ( n[0] )
    v9 = (const char *)src;
  sub_6C720((__int64)"FAIL (%s): %s\n", "move tail (A) to front", v9);
  if ( src )
    qfree();
LABEL_29:
  v3 = (unsigned __int64)v30;
  if ( v30 )
  {
    v4 = v31;
    if ( (_QWORD)v31 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + 32 * v5;
        if ( *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
          v3 = (unsigned __int64)v30;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v31 = 0;
    qfree();
  }
LABEL_43:
  netnode_kill();
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v1;
}
