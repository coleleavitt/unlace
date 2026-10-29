__int64 __fastcall sub_F0C60(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rax
  size_t v5; // r13
  size_t v6; // r13
  __int16 v7; // dx
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  const char *v12; // rdi
  unsigned __int64 v13; // r12
  size_t v15; // r12
  size_t v16; // r12
  _QWORD *v17; // r12
  __int64 v18; // r13
  size_t v19; // r14
  size_t v20; // r14
  void *v21; // r14
  void *v22; // rdi
  void *v23; // r14
  void *v24; // rdi
  void *v25; // r8
  void *v26; // rax
  void *v27; // r8
  void *v28; // rax
  void *v29; // [rsp+30h] [rbp-E0h]
  void *v30; // [rsp+30h] [rbp-E0h]
  __int16 v32; // [rsp+40h] [rbp-D0h] BYREF
  __int16 v33; // [rsp+42h] [rbp-CEh]
  unsigned __int64 v34; // [rsp+44h] [rbp-CCh] BYREF
  int v35; // [rsp+4Ch] [rbp-C4h] BYREF
  void *v36; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+58h] [rbp-B8h]
  void *v38; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+78h] [rbp-98h]
  unsigned __int64 v40; // [rsp+90h] [rbp-80h]
  void *dest; // [rsp+98h] [rbp-78h] BYREF
  size_t v42[2]; // [rsp+A0h] [rbp-70h]
  void *src; // [rsp+B0h] [rbp-60h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-58h]
  int v45; // [rsp+C8h] [rbp-48h]
  __int16 v46; // [rsp+CCh] [rbp-44h]
  unsigned __int64 v47; // [rsp+D8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  v2 = (_QWORD *)a1[24];
  if ( a2 >= v2[1] )
    return -1;
  v3 = *v2 + (a2 << 6);
  if ( !v3 )
    return -1;
  v4 = *(_QWORD *)v3;
  dest = nullptr;
  *(_OWORD *)v42 = 0;
  v5 = *(_QWORD *)(v3 + 16);
  v40 = v4;
  if ( v5 )
  {
    v42[1] = v5;
    dest = (void *)qalloc_or_throw();
    memcpy(dest, *(const void **)(v3 + 8), v5);
    v42[0] = v5;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v6 = *(_QWORD *)(v3 + 40);
  if ( v6 )
  {
    src = (void *)qalloc_or_throw();
    n[1] = v6;
    memcpy(src, *(const void **)(v3 + 32), v6);
    n[0] = v6;
  }
  v7 = *(_WORD *)(v3 + 60);
  v8 = *(_DWORD *)(v3 + 56);
  v36 = nullptr;
  v37 = 0;
  v46 = v7;
  v45 = v8;
  v34 = v40;
  v35 = v8;
  if ( v42[0] )
  {
    v36 = (void *)qalloc_or_throw();
    *((_QWORD *)&v37 + 1) = v42[0];
    memcpy(v36, dest, v42[0]);
    *(_QWORD *)&v37 = v42[0];
  }
  v38 = nullptr;
  v39 = 0;
  if ( n[0] )
  {
    v38 = (void *)qalloc_or_throw();
    *((_QWORD *)&v39 + 1) = n[0];
    memcpy(v38, src, n[0]);
    *(_QWORD *)&v39 = n[0];
  }
  v32 = (unsigned __int8)v46;
  v33 = (HIBYTE(v46) >> 2) & 1 | HIBYTE(v46) & 2 | (4 * HIBYTE(v46)) & 4;
  while ( 1 )
  {
    v12 = s1;
    if ( a1[33] )
      v12 = (const char *)a1[32];
    if ( (int)sub_8F730((__int64)v12, &v34, (char *)&v34 + 4, &v35, &v36, &v38, &v32) <= 0 )
    {
      *(_BYTE *)(a1[24] + 48LL) = 0;
      goto LABEL_18;
    }
    v9 = v35;
    v10 = HIDWORD(v34);
    v11 = v34;
    if ( (unsigned __int8)sub_C2110((__int64)a1, v34, HIDWORD(v34), v35, 1u, a2) )
      break;
    sub_92120((__int64)"AUTOHIDE NONE\nIllegal memory region boundaries");
  }
  v45 = v9;
  v15 = v37;
  v40 = __PAIR64__(v10, v11);
  if ( (unsigned __int64)v37 > 1 )
  {
    v23 = v36;
    v24 = dest;
    if ( v42[1] < (unsigned __int64)v37 )
    {
      dest = (void *)qvector_reserve();
      v24 = dest;
    }
    v42[0] = v15;
    memmove(v24, v23, v15 - 1);
    *((char *)dest + v15 - 1) = 0;
  }
  else
  {
    v42[0] = 0;
  }
  v16 = v39;
  if ( (unsigned __int64)v39 > 1 )
  {
    v21 = v38;
    v22 = src;
    if ( n[1] < (unsigned __int64)v39 )
    {
      src = (void *)qvector_reserve();
      v22 = src;
    }
    n[0] = v16;
    memmove(v22, v21, v16 - 1);
    *((char *)src + v16 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
  HIBYTE(v46) = ((v33 & 4) != 0) | v33 & 2 | (4 * v33) & 4;
  LOBYTE(v46) = v32;
  v17 = (_QWORD *)a1[24];
  if ( a2 < v17[1] )
  {
    v18 = *v17 + (a2 << 6);
    *(_QWORD *)v18 = v40;
    if ( (void **)(v18 + 8) != &dest )
    {
      v19 = v42[0];
      if ( v42[0] > 1 )
      {
        v25 = dest;
        v26 = *(void **)(v18 + 8);
        if ( *(_QWORD *)(v18 + 24) < v42[0] )
        {
          v29 = dest;
          v26 = (void *)qvector_reserve();
          *(_QWORD *)(v18 + 8) = v26;
          v25 = v29;
        }
        *(_QWORD *)(v18 + 16) = v19;
        memmove(v26, v25, v19 - 1);
        *(_BYTE *)(*(_QWORD *)(v18 + 8) + v19 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v18 + 16) = 0;
      }
    }
    if ( (void **)(v18 + 32) != &src )
    {
      v20 = n[0];
      if ( n[0] > 1 )
      {
        v27 = src;
        v28 = *(void **)(v18 + 32);
        if ( *(_QWORD *)(v18 + 48) < n[0] )
        {
          v30 = src;
          v28 = (void *)qvector_reserve();
          *(_QWORD *)(v18 + 32) = v28;
          v27 = v30;
        }
        *(_QWORD *)(v18 + 40) = v20;
        memmove(v28, v27, v20 - 1);
        *(_BYTE *)(*(_QWORD *)(v18 + 32) + v20 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = 0;
      }
    }
    *(_DWORD *)(v18 + 56) = v45;
    *(_WORD *)(v18 + 60) = v46;
  }
  sub_F0430((__int64)v17, (__int64)a1, 1);
LABEL_18:
  v13 = a2;
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( dest )
  {
    v42[0] = 0;
    qfree();
  }
  return v13;
}

