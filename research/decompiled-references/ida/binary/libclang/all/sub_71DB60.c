void __fastcall sub_71DB60(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // r14
  int v11; // edx
  __int64 *v12; // r13
  unsigned __int64 v13; // r12
  __m128i si128; // xmm0
  __int64 v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  __int64 *v19; // rax
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 *v28; // rcx
  __int64 *i; // rax
  unsigned __int64 v30; // rdx
  int v31; // edi
  int v32; // edi
  __int64 v33; // r11
  __int64 *v34; // r14
  __int32 v35; // r15d
  __int64 v36; // rsi
  __int64 *v37; // r8
  __int64 v38; // r10
  int v39; // eax
  int v40; // edx
  __int64 v41; // rdi
  __int64 *v42; // r8
  __int64 v43; // r15
  int v44; // r9d
  __int64 v45; // rsi
  unsigned int v46; // esi
  __int64 v47; // rdi
  __int64 v48; // r8
  int v49; // r10d
  __int64 *v50; // r9
  _QWORD *v51; // rcx
  __m128i v52[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(char *)(a2 + 28) < 0 || (unsigned __int8)sub_79BA50(a2) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_87;
  v4 = sub_79A2B0(a2);
  v5 = *(_QWORD **)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( (unsigned __int64)v5 < v6 )
  {
    v7 = v5;
    while ( *(_WORD *)(*v7 + 32LL) != 343 )
    {
      if ( (_QWORD *)v6 == ++v7 )
        goto LABEL_87;
    }
    goto LABEL_9;
  }
  if ( v5 == (_QWORD *)v6 )
LABEL_87:
    BUG();
  while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 343 )
  {
    v6 += 8LL;
    if ( v5 == (_QWORD *)v6 )
      goto LABEL_87;
  }
  v7 = v5;
LABEL_9:
  if ( v7 == (_QWORD *)v6 )
    goto LABEL_87;
  v8 = *v5;
  if ( *(_WORD *)(*v5 + 32LL) != 343 )
  {
    v9 = v5 + 1;
    do
      v8 = *v9++;
    while ( *(_WORD *)(v8 + 32) != 343 );
  }
  v10 = *(unsigned int *)(a1 + 22688);
  v11 = 0;
  v12 = *(__int64 **)(a1 + 22672);
  v13 = *(_QWORD *)&byte_8[**(_QWORD **)(v8 + 40) & 0xFFFFFFFFFFFFFFF0LL] | **(_QWORD **)(v8 + 40) & 7LL;
  si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( !(_DWORD)v10 )
    goto LABEL_30;
  LODWORD(v15) = (v10 - 1) & (v13 ^ (v13 >> 9));
  v16 = &v12[3 * (unsigned int)v15];
  v17 = *v16;
  if ( v13 == *v16 )
    return;
  v18 = 1;
  v19 = nullptr;
  while ( v17 )
  {
    if ( !v19 && v17 == -1 )
      v19 = v16;
    v15 = ((_DWORD)v10 - 1) & (unsigned int)(v15 + v18);
    v16 = &v12[3 * v15];
    v17 = *v16;
    if ( v13 == *v16 )
      return;
    ++v18;
  }
  if ( !v19 )
    v19 = v16;
  v20 = *(_DWORD *)(a1 + 22680) + 1;
  v11 = 2 * v10;
  if ( 4 * v20 >= (unsigned int)(3 * v10) )
  {
LABEL_30:
    v52[0] = si128;
    v21 = (((((((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
              | (unsigned int)(v11 - 1)
              | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
            | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
            | (unsigned int)(v11 - 1)
            | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
            | (unsigned int)(v11 - 1)
            | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
          | (unsigned int)(v11 - 1)
          | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
            | (unsigned int)(v11 - 1)
            | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
          | (unsigned int)(v11 - 1)
          | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
          | (unsigned int)(v11 - 1)
          | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
        | (unsigned int)(v11 - 1)
        | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1);
    v22 = v21 + 1;
    if ( v22 < 0x40 )
      v22 = 64;
    *(_DWORD *)(a1 + 22688) = v22;
    v23 = sub_25CC9C0(24LL * v22, 8);
    si128 = _mm_load_si128(v52);
    v24 = (_QWORD *)v23;
    *(_QWORD *)(a1 + 22672) = v23;
    v25 = *(_DWORD *)(a1 + 22688);
    v26 = 24LL * v25;
    v27 = (_QWORD *)(v23 + v26);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 22680) = 0;
      v28 = &v12[3 * v10];
      if ( v26 )
      {
        if ( (((_BYTE)v27 - (_BYTE)v24) & 8) == 0 || (*v24 = 0, v24 += 3, v24 != v27) )
        {
          do
          {
            *v24 = 0;
            v24 += 6;
            *(v24 - 3) = 0;
          }
          while ( v24 != v27 );
        }
      }
      for ( i = v12; v28 != i; i += 3 )
      {
        v30 = *i;
        if ( (unsigned __int64)(*i - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v31 = *(_DWORD *)(a1 + 22688);
          if ( !v31 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v32 = v31 - 1;
          v33 = *(_QWORD *)(a1 + 22672);
          v34 = nullptr;
          v35 = 1;
          LODWORD(v36) = v32 & (v30 ^ (v30 >> 9));
          v37 = (__int64 *)(v33 + 24LL * (unsigned int)v36);
          v38 = *v37;
          if ( v30 != *v37 )
          {
            while ( v38 )
            {
              if ( v38 == -1 && !v34 )
                v34 = v37;
              v52[0].m128i_i32[0] = v35 + 1;
              v36 = v32 & (unsigned int)(v36 + v35);
              v37 = (__int64 *)(v33 + 24 * v36);
              v38 = *v37;
              if ( v30 == *v37 )
                goto LABEL_43;
              v35 = v52[0].m128i_i32[0];
            }
            if ( v34 )
              v37 = v34;
          }
LABEL_43:
          *v37 = *i;
          *(__m128i *)(v37 + 1) = _mm_loadu_si128((const __m128i *)(i + 1));
          ++*(_DWORD *)(a1 + 22680);
        }
      }
      v52[0] = si128;
      operator delete();
      v25 = *(_DWORD *)(a1 + 22688);
      v24 = *(_QWORD **)(a1 + 22672);
      si128 = _mm_load_si128(v52);
      v20 = *(_DWORD *)(a1 + 22680) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 22680) = 0;
      v51 = v24;
      if ( v24 != v27 )
      {
        if ( (((_BYTE)v27 - (_BYTE)v24) & 8) == 0 || (v51 = v24 + 3, *v24 = 0, v24 + 3 != v27) )
        {
          do
          {
            *v51 = 0;
            v51 += 6;
            *(v51 - 3) = 0;
          }
          while ( v51 != v27 );
        }
      }
      v20 = 1;
    }
    if ( v25 )
    {
      v46 = v25 - 1;
      LODWORD(v47) = v46 & (v13 ^ (v13 >> 9));
      v19 = &v24[3 * (unsigned int)v47];
      v48 = *v19;
      if ( v13 != *v19 )
      {
        v49 = 1;
        v50 = nullptr;
        while ( v48 )
        {
          if ( v48 == -1 && !v50 )
            v50 = v19;
          v47 = v46 & ((_DWORD)v47 + v49);
          v19 = &v24[3 * v47];
          v48 = *v19;
          if ( v13 == *v19 )
            goto LABEL_21;
          ++v49;
        }
        if ( v50 )
          v19 = v50;
      }
      goto LABEL_21;
    }
    goto LABEL_88;
  }
  if ( (unsigned int)v10 >> 3 >= (int)v10 - *(_DWORD *)(a1 + 22684) - v20 )
  {
    v52[0] = si128;
    sub_71D940(a1 + 22672, v10);
    v39 = *(_DWORD *)(a1 + 22688);
    v20 = *(_DWORD *)(a1 + 22680) + 1;
    if ( v39 )
    {
      v40 = v39 - 1;
      v41 = *(_QWORD *)(a1 + 22672);
      v42 = nullptr;
      si128 = _mm_load_si128(v52);
      LODWORD(v43) = (v39 - 1) & (v13 ^ (v13 >> 9));
      v44 = 1;
      v19 = (__int64 *)(v41 + 24LL * (unsigned int)v43);
      v45 = *v19;
      if ( v13 != *v19 )
      {
        while ( v45 )
        {
          if ( v45 == -1 && !v42 )
            v42 = v19;
          v43 = v40 & (unsigned int)(v43 + v44);
          v19 = (__int64 *)(v41 + 24 * v43);
          v45 = *v19;
          if ( v13 == *v19 )
            goto LABEL_21;
          ++v44;
        }
        if ( v42 )
          v19 = v42;
      }
      goto LABEL_21;
    }
LABEL_88:
    ++*(_DWORD *)(a1 + 22680);
    BUG();
  }
LABEL_21:
  *(_DWORD *)(a1 + 22680) = v20;
  if ( *v19 )
    --*(_DWORD *)(a1 + 22684);
  v19[2] = a2;
  *(__m128i *)v19 = si128;
}

