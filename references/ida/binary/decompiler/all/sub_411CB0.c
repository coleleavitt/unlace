__int64 sub_411CB0()
{
  size_t v0; // rbx
  char v1; // r15
  char v2; // bp
  unsigned int v3; // ebp
  const char *v5; // rdx
  const char *v6; // rdx
  const char *v7; // rdx
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rdx
  struct _Unwind_Exception *v15; // [rsp+0h] [rbp-218h]
  void *v16; // [rsp+8h] [rbp-210h]
  const char *v17; // [rsp+10h] [rbp-208h]
  void *v18; // [rsp+18h] [rbp-200h]
  void *v19; // [rsp+20h] [rbp-1F8h]
  char v20; // [rsp+2Dh] [rbp-1EBh]
  _BYTE *v21; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v22; // [rsp+38h] [rbp-1E0h]
  _BYTE *v23; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v24; // [rsp+58h] [rbp-1C0h]
  _BYTE *v25; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v26; // [rsp+78h] [rbp-1A0h]
  _BYTE *v27; // [rsp+90h] [rbp-188h] BYREF
  __int128 v28; // [rsp+98h] [rbp-180h]
  _BYTE *v29; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-160h]
  void *v31; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-140h]
  unsigned __int64 v33; // [rsp+E8h] [rbp-130h]
  _QWORD v34[3]; // [rsp+F0h] [rbp-128h] BYREF
  char v35; // [rsp+108h] [rbp-110h]
  _QWORD v36[3]; // [rsp+110h] [rbp-108h] BYREF
  char v37; // [rsp+128h] [rbp-F0h]
  const char *v38[3]; // [rsp+130h] [rbp-E8h] BYREF
  char v39; // [rsp+148h] [rbp-D0h]
  const char *v40[3]; // [rsp+150h] [rbp-C8h] BYREF
  char v41; // [rsp+168h] [rbp-B0h]
  _QWORD v42[3]; // [rsp+170h] [rbp-A8h] BYREF
  char v43; // [rsp+188h] [rbp-90h]
  char *v44; // [rsp+190h] [rbp-88h] BYREF
  __int128 v45; // [rsp+198h] [rbp-80h]
  char v46; // [rsp+1A8h] [rbp-70h]
  void *src; // [rsp+1B0h] [rbp-68h] BYREF
  size_t n[12]; // [rsp+1B8h] [rbp-60h] BYREF

  n[4] = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v31 = 0;
  v32 = 0;
  if ( n[0] )
  {
    v31 = (void *)qalloc_or_throw();
    *((_QWORD *)&v32 + 1) = v0;
    memcpy(v31, src, v0);
    *(_QWORD *)&v32 = v0;
  }
  v33 = -1;
  netnode_check();
  netnode_check();
  if ( v38[0] == (const char *)-1LL )
  {
    v40[0] = 0;
    netnode_supset();
    v42[0] = 1;
    netnode_supset();
    v44 = &byte_1;
    netnode_supset();
  }
  else
  {
    v33 = (unsigned __int64)v44;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v22 = 0;
  v21 = 0;
  v21 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v22 = 2;
  *v21 = 65;
  v21[1] = 0;
  sub_40D2B0((__int64)v34, (__int64)&v31, (__int64)&v21);
  v1 = v35;
  if ( !v35 )
  {
    v23 = 0;
    v24 = 0;
    v19 = (void *)v34[0];
    v23 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v24 = 2;
    *v23 = 66;
    v23[1] = 0;
    sub_40D2B0((__int64)v36, (__int64)&v31, (__int64)&v23);
    v20 = v37;
    if ( v37 )
    {
      v5 = s1;
      if ( v36[1] )
        v5 = (const char *)v36[0];
      sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v5);
      v2 = v37;
      if ( !v37 )
      {
        v2 = v20;
LABEL_19:
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree();
        }
        goto LABEL_21;
      }
LABEL_34:
      if ( v36[0] )
        qfree();
      goto LABEL_19;
    }
    v25 = 0;
    v26 = 0;
    v16 = (void *)v36[0];
    v25 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v26 = 2;
    *v25 = 67;
    v25[1] = 0;
    sub_40D2B0((__int64)v38, (__int64)&v31, (__int64)&v25);
    v2 = v39;
    if ( v39 )
    {
      if ( v38[1] )
        sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v38[0]);
      else
        sub_6C720((__int64)"FAIL (%s): %s\n", "add C", s1);
      if ( v38[0] )
        qfree();
LABEL_16:
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
      if ( !v37 )
        goto LABEL_19;
      goto LABEL_34;
    }
    v17 = v38[0];
    sub_40D570((__int64)v40, (__int64)&v31, (__int64)v16);
    if ( v41 )
    {
      if ( v40[1] )
        sub_6C720((__int64)"FAIL (%s): %s\n", "del B (idx1)", v40[0]);
      else
        sub_6C720((__int64)"FAIL (%s): %s\n", "del B (idx1)", s1);
      if ( !v40[0] )
        goto LABEL_15;
      goto LABEL_14;
    }
    sub_40D570((__int64)v42, (__int64)&v31, (__int64)v17);
    if ( v43 )
    {
      v7 = s1;
      if ( v42[1] )
        v7 = (const char *)v42[0];
      sub_6C720((__int64)"FAIL (%s): %s\n", "del C (idx2)", v7);
      if ( !v42[0] )
        goto LABEL_15;
LABEL_14:
      qfree();
LABEL_15:
      v2 = 1;
      goto LABEL_16;
    }
    v28 = 0;
    v27 = 0;
    v27 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v28 = 2;
    *v27 = 68;
    v27[1] = 0;
    sub_40D2B0((__int64)&v44, (__int64)&v31, (__int64)&v27);
    v2 = v46;
    if ( v46 )
    {
      v13 = s1;
      if ( (_QWORD)v45 )
        v13 = v44;
      sub_6C720((__int64)"FAIL (%s): %s\n", "add D", v13);
      if ( v44 )
        qfree();
      goto LABEL_70;
    }
    v29 = 0;
    v30 = 0;
    v15 = (struct _Unwind_Exception *)v44;
    v29 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v30 = 2;
    *v29 = 69;
    v29[1] = 0;
    sub_40D2B0((__int64)&src, (__int64)&v31, (__int64)&v29);
    v2 = n[2];
    if ( LOBYTE(n[2]) )
    {
      v14 = s1;
      if ( n[0] )
        v14 = (const char *)src;
      sub_6C720((__int64)"FAIL (%s): %s\n", "add E", v14);
      if ( src )
        qfree();
      if ( !v29 )
        goto LABEL_70;
    }
    else
    {
      v18 = src;
      if ( !v29 )
        goto LABEL_70;
    }
    *(_QWORD *)&v30 = 0;
    qfree();
LABEL_70:
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
    goto LABEL_16;
  }
  v6 = s1;
  if ( v34[1] )
    v6 = (const char *)v34[0];
  sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v6);
  v2 = v1;
  if ( v34[0] )
    qfree();
LABEL_21:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  if ( v2 )
    goto LABEL_27;
  if ( v15 != (struct _Unwind_Exception *)v17 || v16 != v18 )
  {
    sub_6C720(
      (__int64)"freelist_reuse: expected reuse in LIFO order (d==idx2, e==idx1); got d=%llX, e=%llX\n",
      v15,
      v18);
LABEL_27:
    v3 = 0;
    goto LABEL_28;
  }
  v44 = 0;
  src = v16;
  memset(n, 0, 24);
  v45 = 0;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 69;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v44, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v15;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 68;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v44, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v19;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 65;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v44, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  v8 = sub_411A30((__int64)&v31, "freelist.order", &v44);
  v9 = (unsigned __int64)v44;
  v3 = v8;
  if ( v44 )
  {
    v10 = v45;
    if ( (_QWORD)v45 )
    {
      v11 = 0;
      do
      {
        v12 = v9 + 32 * v11;
        if ( *(_QWORD *)(v12 + 8) )
        {
          *(_QWORD *)(v12 + 16) = 0;
          qfree();
          v9 = (unsigned __int64)v44;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v45 = 0;
    qfree();
  }
LABEL_28:
  netnode_kill();
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v3;
}
