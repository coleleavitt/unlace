void __fastcall sub_1EC5FF0(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int64 v15; // r9
  _QWORD *v16; // rdx
  void *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  _BYTE *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // r14
  __int64 *v25; // r13
  char v26; // dl
  __int64 v27; // r15
  char *v28; // rcx
  __int64 v29; // rsi
  char *v30; // rdi
  char *v31; // rax
  char *v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // esi
  int v36; // r10d
  __int64 v37; // rdi
  void *ptr; // [rsp+20h] [rbp-138h] BYREF
  unsigned int v39; // [rsp+28h] [rbp-130h]
  unsigned int v40; // [rsp+2Ch] [rbp-12Ch]
  _QWORD v41[4]; // [rsp+30h] [rbp-128h] BYREF
  void *v42; // [rsp+50h] [rbp-108h] BYREF
  __int64 v43; // [rsp+58h] [rbp-100h]
  int v44; // [rsp+60h] [rbp-F8h]
  char v45; // [rsp+64h] [rbp-F4h]
  char v46; // [rsp+68h] [rbp-F0h] BYREF
  __m128 v47; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v49[176]; // [rsp+A8h] [rbp-B0h] BYREF

  v5 = v41;
  v43 = 4;
  v42 = &v46;
  v6 = 1;
  v44 = 0;
  v45 = 1;
  ptr = v41;
  v40 = 4;
  v41[0] = a2;
  do
  {
    while ( 1 )
    {
      v7 = v6--;
      v8 = v5[v7 - 1];
      v39 = v6;
      if ( *(_DWORD *)(v8 + 908) < a3 && (*(_BYTE *)(v8 + 904) & 1) == 0 )
        break;
      if ( !v6 )
        goto LABEL_43;
    }
    *(_DWORD *)(v8 + 908) = a3;
    v9 = *(unsigned int *)(a1 + 4600);
    v10 = *(_QWORD *)(a1 + 4584);
    if ( (_DWORD)v9 )
    {
      v11 = (v9 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v12 = (__int64 *)(v10 + 40LL * v11);
      v13 = *v12;
      if ( v8 == *v12 )
        goto LABEL_7;
      v35 = 1;
      if ( v13 != -4096 )
      {
        while ( 1 )
        {
          v36 = v35 + 1;
          v11 = (v9 - 1) & (v35 + v11);
          v12 = (__int64 *)(v10 + 40LL * v11);
          v37 = *v12;
          if ( v8 == *v12 )
            break;
          v35 = v36;
          if ( v37 == -4096 )
            goto LABEL_56;
        }
LABEL_7:
        sub_1EC5AF0(&v47, v12, (_QWORD *)(v10 + 40 * v9), a1 + 4584, 1);
        v14 = v47.m128_u64[0];
        v15 = a1 + 4584;
        goto LABEL_8;
      }
    }
LABEL_56:
    sub_1EC5AF0(&v47, (_QWORD *)(v10 + 40 * v9), (_QWORD *)(v10 + 40 * v9), a1 + 4584, 1);
    v14 = v47.m128_u64[0];
    v15 = a1 + 4584;
LABEL_8:
    v16 = (_QWORD *)(*(_QWORD *)(a1 + 4584) + 40LL * *(unsigned int *)(a1 + 4600));
    sub_1EC5AF0(&v47, v16, v16, v15, 1);
    if ( v14 != v47.m128_u64[0] )
    {
      v47.m128_u64[0] = *(_QWORD *)v14;
      v47.m128_u64[1] = (unsigned __int64)v49;
      v48 = 0x200000000LL;
      if ( *(_DWORD *)(v14 + 16) )
        sub_AEA8A0((char ***)&v47.m128_u64[1], (char ***)(v14 + 8));
      v17 = *(void **)(v14 + 8);
      if ( v17 != (void *)(v14 + 24) )
        free(v17);
      *(_QWORD *)v14 = -8192;
      v18 = (unsigned int)v48;
      v19 = v47.m128_u64[1];
      --*(_DWORD *)(a1 + 4592);
      ++*(_DWORD *)(a1 + 4596);
      v20 = (_BYTE *)(v19 + 8 * v18);
      if ( (_BYTE *)v19 != v20 )
      {
        do
        {
          v21 = *(_QWORD *)v19;
          v22 = *(_QWORD *)(*(_QWORD *)v19 + 8LL);
          if ( (v22 & 6) != 0 )
          {
            *(_QWORD *)(v21 + 8) = v22 & 0xFFFFFFFFFFFFFFF8LL | 1;
            v23 = *(_QWORD *)(a1 + 128);
            if ( v23 )
            {
              if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0x12 )
                sub_1EC5920(v23, v21);
            }
          }
          v19 += 8LL;
        }
        while ( v20 != (_BYTE *)v19 );
        v20 = (_BYTE *)v47.m128_u64[1];
      }
      if ( v20 != v49 )
        free(v20);
    }
    v47.m128_u64[0] = (unsigned __int64)&v48;
    v47.m128_u64[1] = 0x1000000000LL;
    sub_FEF2B0(v8, (__int64)&v47);
    v24 = (_QWORD *)v47.m128_u64[0];
    v25 = (__int64 *)(v47.m128_u64[0] + 8LL * v47.m128_u32[2]);
    if ( (__int64 *)v47.m128_u64[0] != v25 )
    {
      while ( 1 )
      {
        v26 = v45;
        v27 = *v24;
        if ( v45 )
        {
          v28 = (char *)v42;
          v29 = 8LL * HIDWORD(v43);
          v30 = (char *)v42 + v29;
          if ( v42 != (char *)v42 + v29 )
          {
            v31 = (char *)v42;
            if ( v27 == *(_QWORD *)v42 )
            {
LABEL_52:
              v26 = 0;
              goto LABEL_31;
            }
            while ( 1 )
            {
              v31 += 8;
              if ( v30 == v31 )
                break;
              if ( v27 == *(_QWORD *)v31 )
                goto LABEL_52;
            }
          }
          if ( HIDWORD(v43) < (unsigned int)v43 )
          {
            ++HIDWORD(v43);
            *(_QWORD *)v30 = v27;
            v28 = (char *)v42;
            v31 = (char *)v42 + v29;
LABEL_31:
            v32 = &v28[8 * HIDWORD(v43)];
            goto LABEL_32;
          }
        }
        v31 = (char *)sub_2236760(&v42, *v24);
        v28 = (char *)v42;
        if ( v45 )
          goto LABEL_31;
        v32 = (char *)v42 + 8 * (unsigned int)v43;
LABEL_32:
        if ( v32 != v31 && (unsigned __int64)(*(_QWORD *)v31 + 2LL) <= 1 )
        {
          do
            v31 += 8;
          while ( v32 != v31 && *(_QWORD *)v31 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v26 )
        {
          v33 = v39;
          v34 = v39 + 1LL;
          if ( v34 > v40 )
          {
            sub_2237220(&ptr, v41, v34, 8);
            v33 = v39;
          }
          *((_QWORD *)ptr + v33) = v27;
          ++v39;
        }
        if ( ++v24 == v25 )
        {
          v25 = (__int64 *)v47.m128_u64[0];
          break;
        }
      }
    }
    if ( v25 != &v48 )
      free(v25);
    v6 = v39;
    v5 = ptr;
  }
  while ( v39 );
LABEL_43:
  if ( v5 != v41 )
    free(v5);
  if ( !v45 )
    free(v42);
}
