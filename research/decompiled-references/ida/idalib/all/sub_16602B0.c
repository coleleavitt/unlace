__int64 __fastcall sub_16602B0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v5; // r13d
  unsigned __int8 v6; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 (*v20)(void); // rax
  __int64 v21; // rax
  const __m128i *v22; // r14
  const __m128i *v23; // r12
  __int64 *m128i_i64; // rbp
  _BYTE *v25; // rsi
  __int64 *v26; // rax
  size_t v27; // r13
  unsigned __int64 v28; // rbx
  __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  __int64 *v31; // rdi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int32 v34; // ebx
  _BYTE *v35; // rdi
  char *v36; // rcx
  char *v37; // rsi
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned int v40; // eax
  void **v41; // rbp
  unsigned __int64 v42; // rax
  void **v43; // r12
  void **v44; // rbx
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // rbx
  void **v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // al
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rdx
  int v58; // eax
  __m128i *v59; // r15
  __m128i *v60; // rcx
  const __m128i *v61; // r14
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // r13
  void *v66; // rdi
  __int64 *v69; // [rsp+18h] [rbp-A0h]
  __int64 v70; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-80h]
  unsigned __int64 v72; // [rsp+40h] [rbp-78h]
  unsigned __int64 v73; // [rsp+48h] [rbp-70h]
  void *v74; // [rsp+50h] [rbp-68h]
  unsigned __int64 v75; // [rsp+58h] [rbp-60h]
  int v76; // [rsp+60h] [rbp-58h]
  char v77; // [rsp+68h] [rbp-50h]
  __int64 v78; // [rsp+70h] [rbp-48h]
  unsigned __int64 v79; // [rsp+78h] [rbp-40h]

  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
    return 0;
  v5 = 0;
  v6 = (*(_BYTE *)(a3 + 29) >> 5) & 3;
  if ( v6 )
  {
    v11 = a5;
    v15 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
    if ( (v15 & 4) != 0 )
      v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 )
      v16 -= 64LL;
    v17 = a1[31];
    if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v18 = *(_QWORD *)(v16 + 48);
      if ( v18 )
      {
        v11 = v18 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v11 = sub_A7AA70(a1[31], v16, 0, v12, v13, v14);
        v17 = a1[31];
      }
    }
    v72 = v16;
    v73 = v11;
    v70 = a3 | v6;
    v19 = v70 & 0xFFFFFFFFFFFFFFF8LL;
    LOBYTE(v70) = a3 | v6 | 4;
    v71 = v19;
    v74 = nullptr;
    v75 = v17 + 2448;
    v76 = 0;
    if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v53 = sub_B72F20(v19);
      v19 = v71;
      v78 = 0;
      v77 = v53 & 1 | v77 & 0xFC;
      if ( (v70 & 4) == 0 )
        goto LABEL_14;
    }
    else
    {
      v77 &= 0xFCu;
      v78 = 0;
    }
    v19 = sub_1654A20(v19);
LABEL_14:
    v79 = v19;
    v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 32LL);
    if ( (char *)v20 == (char *)sub_A01140 )
      v21 = sub_B70A60(v19);
    else
      v21 = v20();
    v22 = *(const __m128i **)a4;
    v79 = v21;
    v76 = *(_DWORD *)(a4 + 16);
    if ( v22 )
    {
      v57 = v75;
      v58 = *(_DWORD *)(v75 + 14976);
      if ( v58 )
      {
        v62 = (unsigned int)(v58 - 1);
        *(_DWORD *)(v75 + 14976) = v62;
        v59 = *(__m128i **)(v57 + 8 * v62 + 14848);
        v63 = v59[33].m128i_u32[2];
        v59->m128i_i8[0] = 0;
        v64 = v59[33].m128i_i64[0];
        v59[26].m128i_i32[2] = 0;
        v65 = v64 + (v63 << 6);
        while ( v64 != v65 )
        {
          while ( 1 )
          {
            v65 -= 64;
            v66 = *(void **)(v65 + 24);
            if ( v66 == (void *)(v65 + 40) )
              break;
            operator delete(v66);
            if ( v64 == v65 )
              goto LABEL_95;
          }
        }
LABEL_95:
        v59[33].m128i_i32[2] = 0;
        v60 = v59 + 6;
      }
      else
      {
        v59 = (__m128i *)operator new(0x3A0u);
        v59->m128i_i8[0] = 0;
        v60 = v59 + 6;
        v59[6].m128i_i64[0] = (__int64)v59[7].m128i_i64;
        v59[8].m128i_i64[0] = (__int64)v59[9].m128i_i64;
        v59[10].m128i_i64[0] = (__int64)v59[11].m128i_i64;
        v59[12].m128i_i64[0] = (__int64)v59[13].m128i_i64;
        v59[14].m128i_i64[0] = (__int64)v59[15].m128i_i64;
        v59[16].m128i_i64[0] = (__int64)v59[17].m128i_i64;
        v59[18].m128i_i64[0] = (__int64)v59[19].m128i_i64;
        v59[20].m128i_i64[0] = (__int64)v59[21].m128i_i64;
        v59[22].m128i_i64[0] = (__int64)v59[23].m128i_i64;
        v59[24].m128i_i64[0] = (__int64)v59[25].m128i_i64;
        v59[26].m128i_i64[0] = (__int64)v59[27].m128i_i64;
        v59[6].m128i_i64[1] = 0;
        v59[7].m128i_i8[0] = 0;
        v59[8].m128i_i64[1] = 0;
        v59[9].m128i_i8[0] = 0;
        v59[10].m128i_i64[1] = 0;
        v59[11].m128i_i8[0] = 0;
        v59[12].m128i_i64[1] = 0;
        v59[13].m128i_i8[0] = 0;
        v59[14].m128i_i64[1] = 0;
        v59[15].m128i_i8[0] = 0;
        v59[16].m128i_i64[1] = 0;
        v59[17].m128i_i8[0] = 0;
        v59[18].m128i_i64[1] = 0;
        v59[19].m128i_i8[0] = 0;
        v59[20].m128i_i64[1] = 0;
        v59[21].m128i_i8[0] = 0;
        v59[22].m128i_i64[1] = 0;
        v59[23].m128i_i8[0] = 0;
        v59[24].m128i_i64[1] = 0;
        v59[25].m128i_i8[0] = 0;
        v59[26].m128i_i64[1] = 0x800000000LL;
        v59[33].m128i_i64[0] = (__int64)v59[34].m128i_i64;
        v59[33].m128i_i64[1] = 0x600000000LL;
      }
      v74 = v59;
      v61 = *(const __m128i **)a4;
      v59->m128i_i8[0] = v61->m128i_i8[0];
      v59->m128i_i8[1] = v61->m128i_i8[1];
      v59->m128i_i8[2] = v61->m128i_i8[2];
      v59->m128i_i8[3] = v61->m128i_i8[3];
      v59->m128i_i8[4] = v61->m128i_i8[4];
      v59->m128i_i8[5] = v61->m128i_i8[5];
      v59->m128i_i8[6] = v61->m128i_i8[6];
      v59->m128i_i8[7] = v61->m128i_i8[7];
      v59->m128i_i8[8] = v61->m128i_i8[8];
      v59->m128i_i8[9] = v61->m128i_i8[9];
      v59->m128i_i8[10] = v61->m128i_i8[10];
      if ( &v59[1] < &v61[2] && &v61[1] < &v59[2] )
      {
        v59[1].m128i_i64[0] = v61[1].m128i_i64[0];
        v59[1].m128i_i64[1] = v61[1].m128i_i64[1];
        v59[2].m128i_i64[0] = v61[2].m128i_i64[0];
        v59[2].m128i_i64[1] = v61[2].m128i_i64[1];
        v59[3].m128i_i64[0] = v61[3].m128i_i64[0];
        v59[3].m128i_i64[1] = v61[3].m128i_i64[1];
        v59[4].m128i_i64[0] = v61[4].m128i_i64[0];
        v59[4].m128i_i64[1] = v61[4].m128i_i64[1];
        v59[5].m128i_i64[0] = v61[5].m128i_i64[0];
        v59[5].m128i_i64[1] = v61[5].m128i_i64[1];
      }
      else
      {
        v59[1] = _mm_loadu_si128(v61 + 1);
        v59[2] = _mm_loadu_si128(v61 + 2);
        v59[3] = _mm_loadu_si128(v61 + 3);
        v59[4] = _mm_loadu_si128(v61 + 4);
        v59[5] = _mm_loadu_si128(v61 + 5);
      }
      v23 = v61 + 6;
      m128i_i64 = v60[1].m128i_i64;
      do
      {
        if ( v23 != (const __m128i *)(m128i_i64 - 2) )
        {
          v26 = (__int64 *)*(m128i_i64 - 2);
          v27 = v23->m128i_u64[1];
          if ( m128i_i64 == v26 )
            v28 = 15;
          else
            v28 = *m128i_i64;
          if ( v27 > v28 )
          {
            if ( (v27 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v29 = 2 * v28;
            if ( v27 < v29 )
            {
              v30 = v29 + 1;
              if ( v29 < 0 )
              {
                v30 = 0x8000000000000000LL;
                v29 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v30 = v27 + 1;
              v29 = v23->m128i_i64[1];
            }
            v26 = (__int64 *)operator new(v30);
            v31 = (__int64 *)*(m128i_i64 - 2);
            if ( m128i_i64 != v31 )
            {
              v69 = v26;
              operator delete(v31);
              v26 = v69;
            }
            *(m128i_i64 - 2) = (__int64)v26;
            *m128i_i64 = v29;
          }
          if ( v27 )
          {
            v25 = (_BYTE *)v23->m128i_i64[0];
            if ( v27 == 1 )
              *(_BYTE *)v26 = *v25;
            else
              memcpy(v26, v25, v27);
            v26 = (__int64 *)*(m128i_i64 - 2);
          }
          *(m128i_i64 - 1) = v27;
          *((_BYTE *)v26 + v27) = 0;
        }
        v23 += 2;
        m128i_i64 += 4;
      }
      while ( v23 != &v61[26] );
      if ( &v59[26] != v23 )
      {
        v32 = v61[26].m128i_u32[2];
        v33 = v59[26].m128i_u32[2];
        v34 = v61[26].m128i_i32[2];
        if ( v32 <= v33 )
        {
          if ( v61[26].m128i_i32[2] )
          {
            v50 = v59[26].m128i_i64[0];
            v51 = v61[26].m128i_i64[0];
            v52 = 0;
            do
            {
              *(_QWORD *)(v50 + v52) = *(_QWORD *)(v51 + v52);
              *(_BYTE *)(v50 + v52 + 8) = *(_BYTE *)(v51 + v52 + 8);
              v52 += 12;
            }
            while ( 12 * v32 != v52 );
          }
        }
        else
        {
          if ( v32 > v59[26].m128i_u32[3] )
          {
            v59[26].m128i_i32[2] = 0;
            sub_2237220(&v59[26], &v59[27], v32, 12);
            v36 = (char *)v61[26].m128i_i64[0];
            v35 = (_BYTE *)v59[26].m128i_i64[0];
            v38 = 0;
            v32 = v61[26].m128i_u32[2];
            v37 = v36;
          }
          else
          {
            v35 = (_BYTE *)v59[26].m128i_i64[0];
            v36 = (char *)v61[26].m128i_i64[0];
            if ( v59[26].m128i_i32[2] )
            {
              v54 = 3 * v33;
              v55 = 0;
              v56 = 4 * v54;
              v38 = v56;
              do
              {
                *(_QWORD *)&v35[v55] = *(_QWORD *)&v36[v55];
                v35[v55 + 8] = v36[v55 + 8];
                v55 += 12;
              }
              while ( v56 != v55 );
              v35 += v56;
              v32 = v61[26].m128i_u32[2];
              v37 = &v36[v56];
            }
            else
            {
              v37 = (char *)v61[26].m128i_i64[0];
              v38 = 0;
            }
          }
          v39 = 12 * v32;
          if ( v37 != &v36[v39] )
            memcpy(v35, v37, v39 - v38);
        }
        v59[26].m128i_i32[2] = v34;
      }
      sub_9EED30((__int64)v59[33].m128i_i64, v61[33].m128i_i64);
    }
    v40 = sub_165D180(a1, a2, (__int64)&v70);
    v41 = (void **)v74;
    v5 = v40;
    if ( v74 )
    {
      v42 = v75;
      if ( v75 )
      {
        if ( (unsigned __int64)v74 < v75 || (unsigned __int64)v74 > v75 + 14848 )
        {
          v43 = *((void ***)v74 + 66);
          v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v74 + 134)];
          if ( v43 != v44 )
          {
            do
            {
              while ( 1 )
              {
                v44 -= 8;
                v45 = (void **)v44[3];
                if ( v45 == v44 + 5 )
                  break;
                operator delete(v45);
                if ( v43 == v44 )
                  goto LABEL_57;
              }
            }
            while ( v43 != v44 );
LABEL_57:
            v44 = (void **)v41[66];
          }
          if ( v44 != v41 + 68 )
            free(v44);
          v46 = (void **)v41[52];
          if ( v46 != v41 + 54 )
            free(v46);
          v47 = v41 + 48;
          v48 = v41 + 8;
          do
          {
            while ( *v47 != v47 + 2 )
            {
              operator delete(*v47);
              v47 -= 4;
              if ( v48 == v47 )
                goto LABEL_65;
            }
            v47 -= 4;
          }
          while ( v48 != v47 );
LABEL_65:
          operator delete(v41, 0x3A0u);
        }
        else
        {
          v49 = *(unsigned int *)(v75 + 14976);
          *(_DWORD *)(v75 + 14976) = v49 + 1;
          *(_QWORD *)(v42 + 8 * v49 + 14848) = v41;
        }
      }
    }
  }
  return v5;
}
