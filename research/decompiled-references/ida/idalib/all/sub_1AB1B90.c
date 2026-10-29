__int64 __fastcall sub_1AB1B90(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __m128i *v13; // r15
  unsigned __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rax
  char v17; // dl
  int v18; // eax
  int v19; // eax
  __m128i *v20; // rbx
  __m128i *v21; // rcx
  __m128i *v22; // r14
  __m128i *v23; // r12
  _BYTE *v24; // rsi
  _BYTE *v25; // rax
  size_t v26; // r13
  unsigned __int64 v27; // rbp
  __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int32 v34; // ebp
  _BYTE *v35; // rdi
  char *v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r10
  char *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  unsigned int v47; // eax
  void **v48; // r12
  unsigned __int64 v49; // rax
  void **v50; // r13
  void **v51; // rbx
  void **v52; // rdi
  void **v53; // rdi
  void **v54; // rbx
  void **v55; // r13
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // r14
  __int64 v60; // rbp
  void *v61; // rdi
  int v62; // eax
  __m128i *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rbx
  __int64 v70; // r14
  void *v71; // rdi
  _BYTE *v74; // [rsp+18h] [rbp-60h]
  void *v75; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v76; // [rsp+28h] [rbp-50h]
  int v77; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v7 + 17) & 2) != 0 )
    return 0;
  v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  if ( (_BYTE)v12 != 13 )
  {
    if ( (_BYTE)v12 == 47 )
    {
      v30 = sub_F60F10(v11, a2, a3, a4, a5, a6);
      if ( (*((_BYTE *)v30 + 74) & 1) == 0 && (v30[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_6;
    }
    else
    {
      if ( (unsigned __int8)v12 > 0x2Au )
        goto LABEL_6;
      v31 = 0x40600004C00LL;
      if ( !_bittest64(&v31, v12) )
        goto LABEL_6;
    }
    return 0;
  }
  if ( (((*(_WORD *)(v11 + 18) >> 3) + 76) & 0x1FFu) <= 0x34 )
    return 0;
LABEL_6:
  v13 = *(__m128i **)a3;
  v14 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 )
  {
    v15 = v13->m128i_u8[0];
    v16 = (unsigned __int8)(v15 + 1);
    v17 = v15 + 2;
  }
  else
  {
    v62 = *(_DWORD *)(v14 + 14976);
    if ( v62 )
    {
      v67 = (unsigned int)(v62 - 1);
      *(_DWORD *)(v14 + 14976) = v67;
      v13 = *(__m128i **)(v14 + 8 * v67 + 14848);
      v68 = v13[33].m128i_u32[2];
      v13->m128i_i8[0] = 0;
      v69 = v13[33].m128i_i64[0];
      v13[26].m128i_i32[2] = 0;
      v70 = v69 + (v68 << 6);
      if ( v69 == v70 )
      {
        v15 = 0;
        v17 = 2;
        v16 = 1;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v70 -= 64;
            v71 = *(void **)(v70 + 24);
            if ( v71 == (void *)(v70 + 40) )
              break;
            operator delete(v71);
            if ( v69 == v70 )
              goto LABEL_92;
          }
        }
        while ( v69 != v70 );
LABEL_92:
        v15 = v13->m128i_u8[0];
        v14 = *(_QWORD *)(a3 + 8);
        v17 = v15 + 2;
        v16 = (unsigned __int8)(v15 + 1);
      }
      v13[33].m128i_i32[2] = 0;
    }
    else
    {
      v63 = (__m128i *)operator new(0x3A0u);
      v17 = 2;
      v15 = 0;
      v13 = v63;
      v63->m128i_i8[0] = 0;
      v63[6].m128i_i64[0] = (__int64)v63[7].m128i_i64;
      v63[8].m128i_i64[0] = (__int64)v63[9].m128i_i64;
      v63[10].m128i_i64[0] = (__int64)v63[11].m128i_i64;
      v63[12].m128i_i64[0] = (__int64)v63[13].m128i_i64;
      v63[14].m128i_i64[0] = (__int64)v63[15].m128i_i64;
      v63[16].m128i_i64[0] = (__int64)v63[17].m128i_i64;
      v63[18].m128i_i64[0] = (__int64)v63[19].m128i_i64;
      v63[20].m128i_i64[0] = (__int64)v63[21].m128i_i64;
      v63[22].m128i_i64[0] = (__int64)v63[23].m128i_i64;
      v63[24].m128i_i64[0] = (__int64)v63[25].m128i_i64;
      v63[26].m128i_i64[0] = (__int64)v63[27].m128i_i64;
      v63[6].m128i_i64[1] = 0;
      v63[7].m128i_i8[0] = 0;
      v63[8].m128i_i64[1] = 0;
      v63[9].m128i_i8[0] = 0;
      v63[10].m128i_i64[1] = 0;
      v63[11].m128i_i8[0] = 0;
      v63[12].m128i_i64[1] = 0;
      v63[13].m128i_i8[0] = 0;
      v63[14].m128i_i64[1] = 0;
      v63[15].m128i_i8[0] = 0;
      v63[16].m128i_i64[1] = 0;
      v63[17].m128i_i8[0] = 0;
      v63[18].m128i_i64[1] = 0;
      v63[19].m128i_i8[0] = 0;
      v63[20].m128i_i64[1] = 0;
      v63[21].m128i_i8[0] = 0;
      v63[22].m128i_i64[1] = 0;
      v63[23].m128i_i8[0] = 0;
      v63[24].m128i_i64[1] = 0;
      v63[25].m128i_i8[0] = 0;
      v63[26].m128i_i64[1] = 0x800000000LL;
      v14 = *(_QWORD *)(a3 + 8);
      v63[33].m128i_i64[0] = (__int64)v63[34].m128i_i64;
      v63[33].m128i_i64[1] = 0x600000000LL;
      v16 = 1;
    }
    *(_QWORD *)a3 = v13;
  }
  v13->m128i_i8[v15 + 1] = 2;
  v13[1].m128i_i64[v15] = 1;
  v13->m128i_i8[v16 + 1] = 8;
  v13->m128i_i8[0] = v17;
  v13[1].m128i_i64[v16] = v6;
  v18 = *(_DWORD *)(a3 + 16);
  v75 = nullptr;
  v77 = v18;
  v19 = *(_DWORD *)(v14 + 14976);
  v76 = v14;
  if ( v19 )
  {
    v57 = (unsigned int)(v19 - 1);
    *(_DWORD *)(v14 + 14976) = v57;
    v20 = *(__m128i **)(v14 + 8 * v57 + 14848);
    v58 = v20[33].m128i_u32[2];
    v20->m128i_i8[0] = 0;
    v59 = v20[33].m128i_i64[0];
    v20[26].m128i_i32[2] = 0;
    v60 = v59 + (v58 << 6);
    if ( v59 != v60 )
    {
      do
      {
        while ( 1 )
        {
          v60 -= 64;
          v61 = *(void **)(v60 + 24);
          if ( v61 == (void *)(v60 + 40) )
            break;
          operator delete(v61);
          if ( v59 == v60 )
            goto LABEL_75;
        }
      }
      while ( v59 != v60 );
LABEL_75:
      v13 = *(__m128i **)a3;
    }
    v20[33].m128i_i32[2] = 0;
    v21 = v20 + 6;
  }
  else
  {
    v20 = (__m128i *)operator new(0x3A0u);
    v20->m128i_i8[0] = 0;
    v21 = v20 + 6;
    v20[6].m128i_i64[0] = (__int64)v20[7].m128i_i64;
    v20[8].m128i_i64[0] = (__int64)v20[9].m128i_i64;
    v20[10].m128i_i64[0] = (__int64)v20[11].m128i_i64;
    v20[12].m128i_i64[0] = (__int64)v20[13].m128i_i64;
    v20[14].m128i_i64[0] = (__int64)v20[15].m128i_i64;
    v20[16].m128i_i64[0] = (__int64)v20[17].m128i_i64;
    v20[18].m128i_i64[0] = (__int64)v20[19].m128i_i64;
    v20[20].m128i_i64[0] = (__int64)v20[21].m128i_i64;
    v20[22].m128i_i64[0] = (__int64)v20[23].m128i_i64;
    v20[24].m128i_i64[0] = (__int64)v20[25].m128i_i64;
    v20[26].m128i_i64[0] = (__int64)v20[27].m128i_i64;
    v20[6].m128i_i64[1] = 0;
    v20[7].m128i_i8[0] = 0;
    v20[8].m128i_i64[1] = 0;
    v20[9].m128i_i8[0] = 0;
    v20[10].m128i_i64[1] = 0;
    v20[11].m128i_i8[0] = 0;
    v20[12].m128i_i64[1] = 0;
    v20[13].m128i_i8[0] = 0;
    v20[14].m128i_i64[1] = 0;
    v20[15].m128i_i8[0] = 0;
    v20[16].m128i_i64[1] = 0;
    v20[17].m128i_i8[0] = 0;
    v20[18].m128i_i64[1] = 0;
    v20[19].m128i_i8[0] = 0;
    v20[20].m128i_i64[1] = 0;
    v20[21].m128i_i8[0] = 0;
    v20[22].m128i_i64[1] = 0;
    v20[23].m128i_i8[0] = 0;
    v20[24].m128i_i64[1] = 0;
    v20[25].m128i_i8[0] = 0;
    v20[26].m128i_i64[1] = 0x800000000LL;
    v13 = *(__m128i **)a3;
    v20[33].m128i_i64[0] = (__int64)v20[34].m128i_i64;
    v20[33].m128i_i64[1] = 0x600000000LL;
  }
  v75 = v20;
  v20->m128i_i8[0] = v13->m128i_i8[0];
  v20->m128i_i8[1] = v13->m128i_i8[1];
  v20->m128i_i8[2] = v13->m128i_i8[2];
  v20->m128i_i8[3] = v13->m128i_i8[3];
  v20->m128i_i8[4] = v13->m128i_i8[4];
  v20->m128i_i8[5] = v13->m128i_i8[5];
  v20->m128i_i8[6] = v13->m128i_i8[6];
  v20->m128i_i8[7] = v13->m128i_i8[7];
  v20->m128i_i8[8] = v13->m128i_i8[8];
  v20->m128i_i8[9] = v13->m128i_i8[9];
  v20->m128i_i8[10] = v13->m128i_i8[10];
  if ( &v20[1] < &v13[2] && &v13[1] < &v20[2] )
  {
    v20[1].m128i_i64[0] = v13[1].m128i_i64[0];
    v20[1].m128i_i64[1] = v13[1].m128i_i64[1];
    v20[2].m128i_i64[0] = v13[2].m128i_i64[0];
    v20[2].m128i_i64[1] = v13[2].m128i_i64[1];
    v20[3].m128i_i64[0] = v13[3].m128i_i64[0];
    v20[3].m128i_i64[1] = v13[3].m128i_i64[1];
    v20[4].m128i_i64[0] = v13[4].m128i_i64[0];
    v20[4].m128i_i64[1] = v13[4].m128i_i64[1];
    v20[5].m128i_i64[0] = v13[5].m128i_i64[0];
    v20[5].m128i_i64[1] = v13[5].m128i_i64[1];
  }
  else
  {
    v20[1] = _mm_loadu_si128(v13 + 1);
    v20[2] = _mm_loadu_si128(v13 + 2);
    v20[3] = _mm_loadu_si128(v13 + 3);
    v20[4] = _mm_loadu_si128(v13 + 4);
    v20[5] = _mm_loadu_si128(v13 + 5);
  }
  v22 = v13 + 6;
  v23 = v21;
  do
  {
    if ( v23 != v22 )
    {
      v25 = (_BYTE *)v23->m128i_i64[0];
      v26 = v22->m128i_u64[1];
      if ( &v23[1] == (__m128i *)v23->m128i_i64[0] )
        v27 = 15;
      else
        v27 = v23[1].m128i_u64[0];
      if ( v26 > v27 )
      {
        if ( (v26 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        v28 = 2 * v27;
        if ( v26 < v28 )
        {
          v29 = v28 + 1;
          if ( v28 < 0 )
          {
            v29 = 0x8000000000000000LL;
            v28 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v29 = v26 + 1;
          v28 = v22->m128i_i64[1];
        }
        v25 = (_BYTE *)operator new(v29);
        if ( &v23[1] != (__m128i *)v23->m128i_i64[0] )
        {
          v74 = v25;
          operator delete((void *)v23->m128i_i64[0]);
          v25 = v74;
        }
        v23->m128i_i64[0] = (__int64)v25;
        v23[1].m128i_i64[0] = v28;
      }
      if ( v26 )
      {
        v24 = (_BYTE *)v22->m128i_i64[0];
        if ( v26 == 1 )
          *v25 = *v24;
        else
          memcpy(v25, v24, v26);
        v25 = (_BYTE *)v23->m128i_i64[0];
      }
      v23->m128i_i64[1] = v26;
      v25[v26] = 0;
    }
    v22 += 2;
    v23 += 2;
  }
  while ( v22 != &v13[26] );
  if ( &v20[26] != v22 )
  {
    v32 = v13[26].m128i_u32[2];
    v33 = v20[26].m128i_u32[2];
    v34 = v13[26].m128i_i32[2];
    if ( v32 <= v33 )
    {
      if ( v13[26].m128i_i32[2] )
      {
        v64 = v20[26].m128i_i64[0];
        v65 = v13[26].m128i_i64[0];
        v66 = 0;
        do
        {
          *(_QWORD *)(v64 + v66) = *(_QWORD *)(v65 + v66);
          *(_BYTE *)(v64 + v66 + 8) = *(_BYTE *)(v65 + v66 + 8);
          v66 += 12;
        }
        while ( 12 * v32 != v66 );
      }
    }
    else
    {
      if ( v32 > v20[26].m128i_u32[3] )
      {
        v20[26].m128i_i32[2] = 0;
        sub_2237220(&v20[26], &v20[27], v32, 12);
        v36 = (char *)v13[26].m128i_i64[0];
        v35 = (_BYTE *)v20[26].m128i_i64[0];
        v40 = 0;
        v32 = v13[26].m128i_u32[2];
        v41 = v36;
      }
      else
      {
        v35 = (_BYTE *)v20[26].m128i_i64[0];
        v36 = (char *)v13[26].m128i_i64[0];
        if ( v20[26].m128i_i32[2] )
        {
          v37 = 3 * v33;
          v38 = 0;
          v39 = 4 * v37;
          v40 = v39;
          do
          {
            *(_QWORD *)&v35[v38] = *(_QWORD *)&v36[v38];
            v35[v38 + 8] = v36[v38 + 8];
            v38 += 12;
          }
          while ( v39 != v38 );
          v32 = v13[26].m128i_u32[2];
          v35 += v39;
          v41 = &v36[v39];
        }
        else
        {
          v41 = (char *)v13[26].m128i_i64[0];
          v40 = 0;
        }
      }
      v42 = 12 * v32;
      if ( v41 != &v36[v42] )
        memcpy(v35, v41, v42 - v40);
    }
    v20[26].m128i_i32[2] = v34;
  }
  sub_9EED30((__int64)v20[33].m128i_i64, v13[33].m128i_i64);
  v46 = sub_C00A40(a2, (__int64)v13[33].m128i_i64, v43, v44, v45);
  v47 = sub_1AAB2D0(a1, v46, (__int64)&v75);
  v48 = (void **)v75;
  v8 = v47;
  if ( v75 )
  {
    v49 = v76;
    if ( v76 )
    {
      if ( (unsigned __int64)v75 < v76 || (unsigned __int64)v75 > v76 + 14848 )
      {
        v50 = *((void ***)v75 + 66);
        v51 = &v50[8 * (unsigned __int64)*((unsigned int *)v75 + 134)];
        if ( v50 != v51 )
        {
          do
          {
            while ( 1 )
            {
              v51 -= 8;
              v52 = (void **)v51[3];
              if ( v52 == v51 + 5 )
                break;
              operator delete(v52);
              if ( v50 == v51 )
                goto LABEL_55;
            }
          }
          while ( v50 != v51 );
LABEL_55:
          v51 = (void **)v48[66];
        }
        if ( v51 != v48 + 68 )
          free(v51);
        v53 = (void **)v48[52];
        v54 = v48 + 52;
        if ( v53 != v48 + 54 )
          free(v53);
        v55 = v48 + 12;
        do
        {
          while ( 1 )
          {
            v54 -= 4;
            if ( *v54 == v54 + 2 )
              break;
            operator delete(*v54);
            if ( v54 == v55 )
              goto LABEL_63;
          }
        }
        while ( v54 != v55 );
LABEL_63:
        operator delete(v48, 0x3A0u);
      }
      else
      {
        v56 = *(unsigned int *)(v76 + 14976);
        *(_DWORD *)(v76 + 14976) = v56 + 1;
        *(_QWORD *)(v49 + 8 * v56 + 14848) = v48;
      }
    }
  }
  return v8;
}
