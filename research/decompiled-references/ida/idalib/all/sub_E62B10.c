void __fastcall sub_E62B10(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // r13
  void **v15; // rax
  _QWORD *v16; // rdx
  void **v17; // rdx
  void **v18; // rax
  void *v19; // rdx
  void *v20; // rax
  __int64 v21; // r13
  int v22; // eax
  void *v23; // rcx
  bool v24; // al
  void **v25; // r15
  char *v26; // r15
  bool v27; // al
  __int64 v28; // r15
  void **v29; // rcx
  void **v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rbp
  unsigned __int64 v33; // r13
  void **v34; // rbx
  void **v35; // rdi
  void *v36; // rax
  _QWORD *v37; // r12
  void **v38; // [rsp+0h] [rbp-98h]
  void **v39; // [rsp+0h] [rbp-98h]
  _QWORD *v40; // [rsp+0h] [rbp-98h]
  size_t v41; // [rsp+0h] [rbp-98h]
  void **v42; // [rsp+0h] [rbp-98h]
  __int64 v43; // [rsp+18h] [rbp-80h] BYREF
  void *v44; // [rsp+20h] [rbp-78h] BYREF
  void *s2; // [rsp+28h] [rbp-70h]
  void *v46; // [rsp+30h] [rbp-68h]
  void *v47; // [rsp+40h] [rbp-58h] BYREF
  void *v48[2]; // [rsp+48h] [rbp-50h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  *(_QWORD *)a1 = sub_22300B0((unsigned __int64)v10 << 6, 8, a3, a4, a5, a6);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v11 = v8 << 6;
    v12 = v9 + v11;
    sub_E59960((void ***)&v47, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    v13 = *(_QWORD *)a1;
    v14 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
    if ( *(_QWORD *)a1 != v14 )
    {
      do
      {
        while ( 1 )
        {
          *(_QWORD *)(v13 + 16) = 0;
          *(_OWORD *)v13 = 0;
          v40 = v47;
          if ( v47 )
            break;
          v13 += 64;
          *(__m128i *)(v13 - 56) = _mm_loadu_si128((const __m128i *)v48);
          if ( v14 == v13 )
            goto LABEL_13;
        }
        v15 = (void **)operator new(0x20u);
        v16 = v40;
        v38 = v15;
        *v15 = v15 + 2;
        sub_E586C0(v15, (_BYTE *)*v16, *v16 + v16[1]);
        v17 = *(void ***)v13;
        v18 = v38;
        *(_QWORD *)v13 = v38;
        if ( v17 )
        {
          if ( *v17 != v17 + 2 )
          {
            v39 = v17;
            operator delete(*v17);
            v17 = v39;
          }
          operator delete(v17, 0x20u);
          v18 = *(void ***)v13;
        }
        v19 = *v18;
        v20 = v18[1];
        v13 += 64;
        *(_QWORD *)(v13 - 56) = v19;
        *(_QWORD *)(v13 - 48) = v20;
      }
      while ( v14 != v13 );
    }
LABEL_13:
    if ( v47 )
      sub_E58590((void **)v47);
    v21 = v9;
    sub_E59960((void ***)&v44, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    sub_E59960((void ***)&v47, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
    if ( v12 == v9 )
    {
LABEL_42:
      if ( v47 )
        sub_E58590((void **)v47);
      if ( v44 )
        sub_E58590((void **)v44);
      operator delete(v9, v11, 8);
      return;
    }
    while ( 1 )
    {
      v26 = *(char **)(v21 + 8);
      v23 = *(void **)(v21 + 16);
      if ( s2 == (void *)-1LL )
      {
        if ( v26 == (char *)-1LL )
          goto LABEL_22;
      }
      else
      {
        if ( s2 == (void *)-2LL )
        {
          v24 = v26 + 2 == nullptr;
        }
        else
        {
          if ( v46 != v23 )
            goto LABEL_29;
          if ( !v23 )
            goto LABEL_22;
          v41 = *(_QWORD *)(v21 + 16);
          v22 = memcmp(*(const void **)(v21 + 8), s2, v41);
          v23 = (void *)v41;
          v24 = v22 == 0;
        }
        if ( v24 )
          goto LABEL_22;
      }
LABEL_29:
      if ( v48[0] == (void *)-1LL )
      {
        v27 = v26 + 1 == nullptr;
        goto LABEL_34;
      }
      if ( v48[0] == (void *)-2LL )
      {
        v27 = v26 + 2 == nullptr;
LABEL_34:
        if ( !v27 )
        {
LABEL_35:
          sub_E5E370((__int64 *)a1, v21, &v43);
          v28 = v43;
          v29 = *(void ***)v21;
          *(_QWORD *)v21 = 0;
          v30 = *(void ***)v28;
          v31 = v28;
          *(_QWORD *)v28 = v29;
          if ( v30 )
          {
            if ( *v30 != v30 + 2 )
            {
              v42 = v30;
              operator delete(*v30);
              v30 = v42;
            }
            operator delete(v30, 0x20u);
            v31 = v43;
          }
          *(__m128i *)(v28 + 8) = _mm_loadu_si128((const __m128i *)(v21 + 8));
          sub_2229580(v31 + 24, v21 + 24);
          ++*(_DWORD *)(a1 + 8);
          sub_222B2A0(v21 + 24);
          goto LABEL_22;
        }
        goto LABEL_22;
      }
      if ( v23 != v48[1] )
        goto LABEL_35;
      if ( v23 )
      {
        v27 = memcmp(v26, v48[0], (size_t)v23) == 0;
        goto LABEL_34;
      }
LABEL_22:
      v25 = *(void ***)v21;
      if ( *(_QWORD *)v21 )
      {
        if ( *v25 != v25 + 2 )
          operator delete(*v25);
        operator delete(v25, 0x20u);
      }
      v21 += 64;
      if ( v12 == v21 )
        goto LABEL_42;
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
  sub_E59960((void ***)&v47, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v32 = *(_QWORD *)a1;
  v33 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
  if ( *(_QWORD *)a1 != v33 )
  {
    do
    {
      while ( 1 )
      {
        *(_QWORD *)(v32 + 16) = 0;
        *(_OWORD *)v32 = 0;
        v37 = v47;
        if ( v47 )
          break;
        v32 += 64;
        *(__m128i *)(v32 - 56) = _mm_loadu_si128((const __m128i *)v48);
        if ( v33 == v32 )
          goto LABEL_56;
      }
      v34 = (void **)operator new(0x20u);
      *v34 = v34 + 2;
      sub_E586C0(v34, (_BYTE *)*v37, *v37 + v37[1]);
      v35 = *(void ***)v32;
      *(_QWORD *)v32 = v34;
      if ( v35 )
      {
        sub_E58590(v35);
        v34 = *(void ***)v32;
      }
      v36 = v34[1];
      v32 += 64;
      *(_QWORD *)(v32 - 56) = *v34;
      *(_QWORD *)(v32 - 48) = v36;
    }
    while ( v33 != v32 );
  }
LABEL_56:
  if ( v47 )
    sub_E58590((void **)v47);
}
