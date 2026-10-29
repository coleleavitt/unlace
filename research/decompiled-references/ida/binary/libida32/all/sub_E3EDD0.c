void __fastcall sub_E3EDD0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // r13
  void **v14; // rax
  _QWORD *v15; // rdx
  void **v16; // rdx
  void **v17; // rax
  void *v18; // rdx
  void *v19; // rax
  __int64 v20; // r13
  int v21; // eax
  void *v22; // rcx
  bool v23; // al
  void **v24; // r15
  char *v25; // r15
  bool v26; // al
  __int64 v27; // r15
  void **v28; // rcx
  void **v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rbp
  unsigned __int64 v32; // r13
  void **v33; // rbx
  void **v34; // rdi
  void *v35; // rax
  _QWORD *v36; // r12
  void **v37; // [rsp+0h] [rbp-98h]
  void **v38; // [rsp+0h] [rbp-98h]
  _QWORD *v39; // [rsp+0h] [rbp-98h]
  size_t v40; // [rsp+0h] [rbp-98h]
  void **v41; // [rsp+0h] [rbp-98h]
  __int64 v42; // [rsp+18h] [rbp-80h] BYREF
  void *v43; // [rsp+20h] [rbp-78h] BYREF
  void *s2; // [rsp+28h] [rbp-70h]
  void *v45; // [rsp+30h] [rbp-68h]
  void *v46; // [rsp+40h] [rbp-58h] BYREF
  void *v47[2]; // [rsp+48h] [rbp-50h] BYREF

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
  *(_QWORD *)a1 = sub_220C370((unsigned __int64)v10 << 6, 8, a3, a4, a5, a6);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v11 = v9 + (v8 << 6);
    sub_E35C20((void ***)&v46, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    v12 = *(_QWORD *)a1;
    v13 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
    if ( *(_QWORD *)a1 != v13 )
    {
      do
      {
        while ( 1 )
        {
          *(_QWORD *)(v12 + 16) = 0;
          *(_OWORD *)v12 = 0;
          v39 = v46;
          if ( v46 )
            break;
          v12 += 64;
          *(__m128i *)(v12 - 56) = _mm_loadu_si128((const __m128i *)v47);
          if ( v13 == v12 )
            goto LABEL_13;
        }
        v14 = (void **)operator new(0x20u);
        v15 = v39;
        v37 = v14;
        *v14 = v14 + 2;
        sub_E34980(v14, (_BYTE *)*v15, *v15 + v15[1]);
        v16 = *(void ***)v12;
        v17 = v37;
        *(_QWORD *)v12 = v37;
        if ( v16 )
        {
          if ( *v16 != v16 + 2 )
          {
            v38 = v16;
            operator delete(*v16);
            v16 = v38;
          }
          operator delete(v16, 0x20u);
          v17 = *(void ***)v12;
        }
        v18 = *v17;
        v19 = v17[1];
        v12 += 64;
        *(_QWORD *)(v12 - 56) = v18;
        *(_QWORD *)(v12 - 48) = v19;
      }
      while ( v13 != v12 );
    }
LABEL_13:
    if ( v46 )
      sub_E34850((void **)v46);
    v20 = v9;
    sub_E35C20((void ***)&v43, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    sub_E35C20((void ***)&v46, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
    if ( v11 == v9 )
    {
LABEL_42:
      if ( v46 )
        sub_E34850((void **)v46);
      if ( v43 )
        sub_E34850((void **)v43);
      operator delete();
      return;
    }
    while ( 1 )
    {
      v25 = *(char **)(v20 + 8);
      v22 = *(void **)(v20 + 16);
      if ( s2 == (void *)-1LL )
      {
        if ( v25 == (char *)-1LL )
          goto LABEL_22;
      }
      else
      {
        if ( s2 == (void *)-2LL )
        {
          v23 = v25 + 2 == nullptr;
        }
        else
        {
          if ( v45 != v22 )
            goto LABEL_29;
          if ( !v22 )
            goto LABEL_22;
          v40 = *(_QWORD *)(v20 + 16);
          v21 = memcmp(*(const void **)(v20 + 8), s2, v40);
          v22 = (void *)v40;
          v23 = v21 == 0;
        }
        if ( v23 )
          goto LABEL_22;
      }
LABEL_29:
      if ( v47[0] == (void *)-1LL )
      {
        v26 = v25 + 1 == nullptr;
        goto LABEL_34;
      }
      if ( v47[0] == (void *)-2LL )
      {
        v26 = v25 + 2 == nullptr;
LABEL_34:
        if ( !v26 )
        {
LABEL_35:
          sub_E3A630((__int64 *)a1, v20, &v42);
          v27 = v42;
          v28 = *(void ***)v20;
          *(_QWORD *)v20 = 0;
          v29 = *(void ***)v27;
          v30 = v27;
          *(_QWORD *)v27 = v28;
          if ( v29 )
          {
            if ( *v29 != v29 + 2 )
            {
              v41 = v29;
              operator delete(*v29);
              v29 = v41;
            }
            operator delete(v29, 0x20u);
            v30 = v42;
          }
          *(__m128i *)(v27 + 8) = _mm_loadu_si128((const __m128i *)(v20 + 8));
          sub_2205840(v30 + 24, v20 + 24);
          ++*(_DWORD *)(a1 + 8);
          sub_2207560(v20 + 24);
          goto LABEL_22;
        }
        goto LABEL_22;
      }
      if ( v22 != v47[1] )
        goto LABEL_35;
      if ( v22 )
      {
        v26 = memcmp(v25, v47[0], (size_t)v22) == 0;
        goto LABEL_34;
      }
LABEL_22:
      v24 = *(void ***)v20;
      if ( *(_QWORD *)v20 )
      {
        if ( *v24 != v24 + 2 )
          operator delete(*v24);
        operator delete(v24, 0x20u);
      }
      v20 += 64;
      if ( v11 == v20 )
        goto LABEL_42;
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
  sub_E35C20((void ***)&v46, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v31 = *(_QWORD *)a1;
  v32 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
  if ( *(_QWORD *)a1 != v32 )
  {
    do
    {
      while ( 1 )
      {
        *(_QWORD *)(v31 + 16) = 0;
        *(_OWORD *)v31 = 0;
        v36 = v46;
        if ( v46 )
          break;
        v31 += 64;
        *(__m128i *)(v31 - 56) = _mm_loadu_si128((const __m128i *)v47);
        if ( v32 == v31 )
          goto LABEL_56;
      }
      v33 = (void **)operator new(0x20u);
      *v33 = v33 + 2;
      sub_E34980(v33, (_BYTE *)*v36, *v36 + v36[1]);
      v34 = *(void ***)v31;
      *(_QWORD *)v31 = v33;
      if ( v34 )
      {
        sub_E34850(v34);
        v33 = *(void ***)v31;
      }
      v35 = v33[1];
      v31 += 64;
      *(_QWORD *)(v31 - 56) = *v33;
      *(_QWORD *)(v31 - 48) = v35;
    }
    while ( v32 != v31 );
  }
LABEL_56:
  if ( v46 )
    sub_E34850((void **)v46);
}

