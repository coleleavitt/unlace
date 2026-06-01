__int64 __fastcall sub_1660BC0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  const __m128i *v25; // r14
  const __m128i *v26; // r12
  __int64 *m128i_i64; // rbp
  _BYTE *v28; // rsi
  __int64 *v29; // rax
  size_t v30; // r13
  unsigned __int64 v31; // rbx
  __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  __int64 *v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int32 v37; // ebx
  _BYTE *v38; // rdi
  char *v39; // rcx
  char *v40; // rsi
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned int v43; // eax
  void **v44; // rbp
  unsigned __int64 v45; // rax
  void **v46; // r12
  void **v47; // rbx
  void **v48; // rdi
  void **v49; // rdi
  void **v50; // rbx
  void **v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // al
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  int v63; // eax
  __m128i *v64; // r15
  __m128i *v65; // rcx
  const __m128i *v66; // r14
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // r14
  __int64 v70; // r13
  void *v71; // rdi
  __int64 *v74; // [rsp+20h] [rbp-A8h]
  __int64 v76; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  unsigned __int64 v78; // [rsp+50h] [rbp-78h]
  unsigned __int64 v79; // [rsp+58h] [rbp-70h]
  void *v80; // [rsp+60h] [rbp-68h]
  unsigned __int64 v81; // [rsp+68h] [rbp-60h]
  int v82; // [rsp+70h] [rbp-58h]
  char v83; // [rsp+78h] [rbp-50h]
  __int64 v84; // [rsp+80h] [rbp-48h]
  unsigned __int64 v85; // [rsp+88h] [rbp-40h]

  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
    return 0;
  v6 = a4 & 3;
  if ( (a4 & 3) != 0 )
  {
    v14 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
    if ( (v14 & 4) != 0 )
      v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
      v15 -= 64LL;
    if ( (unsigned int)(*(_DWORD *)a5 - 10) > 1 || *(_QWORD *)(a5 + 8) )
    {
      v16 = a4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)((a4 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) != 0x36 )
      {
        v18 = v15;
        goto LABEL_15;
      }
      v17 = (_QWORD *)(*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v16 + 16) & 4) != 0 )
        v17 = (_QWORD *)*v17;
    }
    else
    {
      v57 = a1[68];
      if ( v57 )
        v57 -= 72;
      v58 = *(_QWORD *)(sub_B8C1B0(v57 + 72) + 16);
      if ( (v58 & 4) != 0 )
        v17 = *(_QWORD **)(v58 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v17 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF8LL);
    }
    if ( !v17 )
      BUG();
    v18 = (__int64)(v17 - 8);
LABEL_15:
    v19 = a1[31];
    v20 = *(_QWORD *)(v18 + 48);
    if ( v20 )
    {
      v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v21 = sub_A7AA70(a1[31], v18, v11, v19, v12, v13);
      v19 = a1[31];
    }
    v78 = v15;
    v79 = v21;
    v76 = a3 | v6;
    v22 = v76 & 0xFFFFFFFFFFFFFFF8LL;
    LOBYTE(v76) = a3 | v6 | 4;
    v77 = v22;
    v80 = nullptr;
    v81 = v19 + 2448;
    v82 = 0;
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v56 = sub_B72F20(v22);
      v22 = v77;
      v84 = 0;
      v83 = v56 & 1 | v83 & 0xFC;
      if ( (v76 & 4) == 0 )
        goto LABEL_20;
    }
    else
    {
      v83 &= 0xFCu;
      v84 = 0;
    }
    v22 = sub_1654A20(v22);
LABEL_20:
    v85 = v22;
    v23 = *(__int64 (**)(void))(*(_QWORD *)v22 + 32LL);
    if ( (char *)v23 == (char *)sub_A01140 )
      v24 = sub_B70A60(v22);
    else
      v24 = v23();
    v25 = *(const __m128i **)a6;
    v85 = v24;
    v82 = *(_DWORD *)(a6 + 16);
    if ( v25 )
    {
      v62 = v81;
      v63 = *(_DWORD *)(v81 + 14976);
      if ( v63 )
      {
        v67 = (unsigned int)(v63 - 1);
        *(_DWORD *)(v81 + 14976) = v67;
        v64 = *(__m128i **)(v62 + 8 * v67 + 14848);
        v68 = v64[33].m128i_u32[2];
        v64->m128i_i8[0] = 0;
        v69 = v64[33].m128i_i64[0];
        v64[26].m128i_i32[2] = 0;
        v70 = v69 + (v68 << 6);
        while ( v69 != v70 )
        {
          while ( 1 )
          {
            v70 -= 64;
            v71 = *(void **)(v70 + 24);
            if ( v71 == (void *)(v70 + 40) )
              break;
            operator delete(v71);
            if ( v69 == v70 )
              goto LABEL_107;
          }
        }
LABEL_107:
        v64[33].m128i_i32[2] = 0;
        v65 = v64 + 6;
      }
      else
      {
        v64 = (__m128i *)operator new(0x3A0u);
        v64->m128i_i8[0] = 0;
        v65 = v64 + 6;
        v64[6].m128i_i64[0] = (__int64)v64[7].m128i_i64;
        v64[8].m128i_i64[0] = (__int64)v64[9].m128i_i64;
        v64[10].m128i_i64[0] = (__int64)v64[11].m128i_i64;
        v64[12].m128i_i64[0] = (__int64)v64[13].m128i_i64;
        v64[14].m128i_i64[0] = (__int64)v64[15].m128i_i64;
        v64[16].m128i_i64[0] = (__int64)v64[17].m128i_i64;
        v64[18].m128i_i64[0] = (__int64)v64[19].m128i_i64;
        v64[20].m128i_i64[0] = (__int64)v64[21].m128i_i64;
        v64[22].m128i_i64[0] = (__int64)v64[23].m128i_i64;
        v64[24].m128i_i64[0] = (__int64)v64[25].m128i_i64;
        v64[26].m128i_i64[0] = (__int64)v64[27].m128i_i64;
        v64[6].m128i_i64[1] = 0;
        v64[7].m128i_i8[0] = 0;
        v64[8].m128i_i64[1] = 0;
        v64[9].m128i_i8[0] = 0;
        v64[10].m128i_i64[1] = 0;
        v64[11].m128i_i8[0] = 0;
        v64[12].m128i_i64[1] = 0;
        v64[13].m128i_i8[0] = 0;
        v64[14].m128i_i64[1] = 0;
        v64[15].m128i_i8[0] = 0;
        v64[16].m128i_i64[1] = 0;
        v64[17].m128i_i8[0] = 0;
        v64[18].m128i_i64[1] = 0;
        v64[19].m128i_i8[0] = 0;
        v64[20].m128i_i64[1] = 0;
        v64[21].m128i_i8[0] = 0;
        v64[22].m128i_i64[1] = 0;
        v64[23].m128i_i8[0] = 0;
        v64[24].m128i_i64[1] = 0;
        v64[25].m128i_i8[0] = 0;
        v64[26].m128i_i64[1] = 0x800000000LL;
        v64[33].m128i_i64[0] = (__int64)v64[34].m128i_i64;
        v64[33].m128i_i64[1] = 0x600000000LL;
      }
      v80 = v64;
      v66 = *(const __m128i **)a6;
      v64->m128i_i8[0] = v66->m128i_i8[0];
      v64->m128i_i8[1] = v66->m128i_i8[1];
      v64->m128i_i8[2] = v66->m128i_i8[2];
      v64->m128i_i8[3] = v66->m128i_i8[3];
      v64->m128i_i8[4] = v66->m128i_i8[4];
      v64->m128i_i8[5] = v66->m128i_i8[5];
      v64->m128i_i8[6] = v66->m128i_i8[6];
      v64->m128i_i8[7] = v66->m128i_i8[7];
      v64->m128i_i8[8] = v66->m128i_i8[8];
      v64->m128i_i8[9] = v66->m128i_i8[9];
      v64->m128i_i8[10] = v66->m128i_i8[10];
      if ( &v64[1] < &v66[2] && &v66[1] < &v64[2] )
      {
        v64[1].m128i_i64[0] = v66[1].m128i_i64[0];
        v64[1].m128i_i64[1] = v66[1].m128i_i64[1];
        v64[2].m128i_i64[0] = v66[2].m128i_i64[0];
        v64[2].m128i_i64[1] = v66[2].m128i_i64[1];
        v64[3].m128i_i64[0] = v66[3].m128i_i64[0];
        v64[3].m128i_i64[1] = v66[3].m128i_i64[1];
        v64[4].m128i_i64[0] = v66[4].m128i_i64[0];
        v64[4].m128i_i64[1] = v66[4].m128i_i64[1];
        v64[5].m128i_i64[0] = v66[5].m128i_i64[0];
        v64[5].m128i_i64[1] = v66[5].m128i_i64[1];
      }
      else
      {
        v64[1] = _mm_loadu_si128(v66 + 1);
        v64[2] = _mm_loadu_si128(v66 + 2);
        v64[3] = _mm_loadu_si128(v66 + 3);
        v64[4] = _mm_loadu_si128(v66 + 4);
        v64[5] = _mm_loadu_si128(v66 + 5);
      }
      v26 = v66 + 6;
      m128i_i64 = v65[1].m128i_i64;
      do
      {
        if ( v26 != (const __m128i *)(m128i_i64 - 2) )
        {
          v29 = (__int64 *)*(m128i_i64 - 2);
          v30 = v26->m128i_u64[1];
          if ( v29 == m128i_i64 )
            v31 = 15;
          else
            v31 = *m128i_i64;
          if ( v30 > v31 )
          {
            if ( (v30 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v32 = 2 * v31;
            if ( v30 < v32 )
            {
              v33 = v32 + 1;
              if ( v32 < 0 )
              {
                v33 = 0x8000000000000000LL;
                v32 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v33 = v30 + 1;
              v32 = v26->m128i_i64[1];
            }
            v29 = (__int64 *)operator new(v33);
            v34 = (__int64 *)*(m128i_i64 - 2);
            if ( v34 != m128i_i64 )
            {
              v74 = v29;
              operator delete(v34);
              v29 = v74;
            }
            *(m128i_i64 - 2) = (__int64)v29;
            *m128i_i64 = v32;
          }
          if ( v30 )
          {
            v28 = (_BYTE *)v26->m128i_i64[0];
            if ( v30 == 1 )
              *(_BYTE *)v29 = *v28;
            else
              memcpy(v29, v28, v30);
            v29 = (__int64 *)*(m128i_i64 - 2);
          }
          *(m128i_i64 - 1) = v30;
          *((_BYTE *)v29 + v30) = 0;
        }
        v26 += 2;
        m128i_i64 += 4;
      }
      while ( v26 != &v66[26] );
      if ( &v64[26] != v26 )
      {
        v35 = v66[26].m128i_u32[2];
        v36 = v64[26].m128i_u32[2];
        v37 = v66[26].m128i_i32[2];
        if ( v35 <= v36 )
        {
          if ( v66[26].m128i_i32[2] )
          {
            v53 = v64[26].m128i_i64[0];
            v54 = v66[26].m128i_i64[0];
            v55 = 0;
            do
            {
              *(_QWORD *)(v53 + v55) = *(_QWORD *)(v54 + v55);
              *(_BYTE *)(v53 + v55 + 8) = *(_BYTE *)(v54 + v55 + 8);
              v55 += 12;
            }
            while ( 12 * v35 != v55 );
          }
        }
        else
        {
          if ( v35 > v64[26].m128i_u32[3] )
          {
            v64[26].m128i_i32[2] = 0;
            sub_2237220(&v64[26], &v64[27], v35, 12);
            v39 = (char *)v66[26].m128i_i64[0];
            v38 = (_BYTE *)v64[26].m128i_i64[0];
            v41 = 0;
            v35 = v66[26].m128i_u32[2];
            v40 = v39;
          }
          else
          {
            v38 = (_BYTE *)v64[26].m128i_i64[0];
            v39 = (char *)v66[26].m128i_i64[0];
            if ( v64[26].m128i_i32[2] )
            {
              v59 = 3 * v36;
              v60 = 0;
              v61 = 4 * v59;
              v41 = v61;
              do
              {
                *(_QWORD *)&v38[v60] = *(_QWORD *)&v39[v60];
                v38[v60 + 8] = v39[v60 + 8];
                v60 += 12;
              }
              while ( v61 != v60 );
              v38 += v61;
              v35 = v66[26].m128i_u32[2];
              v40 = &v39[v61];
            }
            else
            {
              v40 = (char *)v66[26].m128i_i64[0];
              v41 = 0;
            }
          }
          v42 = 12 * v35;
          if ( v40 != &v39[v42] )
            memcpy(v38, v40, v42 - v41);
        }
        v64[26].m128i_i32[2] = v37;
      }
      sub_9EED30((__int64)v64[33].m128i_i64, v66[33].m128i_i64);
    }
    v43 = sub_165D180(a1, a2, (__int64)&v76);
    v44 = (void **)v80;
    v6 = v43;
    if ( v80 )
    {
      v45 = v81;
      if ( v81 )
      {
        if ( (unsigned __int64)v80 < v81 || (unsigned __int64)v80 > v81 + 14848 )
        {
          v46 = *((void ***)v80 + 66);
          v47 = &v46[8 * (unsigned __int64)*((unsigned int *)v80 + 134)];
          if ( v46 != v47 )
          {
            do
            {
              while ( 1 )
              {
                v47 -= 8;
                v48 = (void **)v47[3];
                if ( v48 == v47 + 5 )
                  break;
                operator delete(v48);
                if ( v46 == v47 )
                  goto LABEL_63;
              }
            }
            while ( v46 != v47 );
LABEL_63:
            v47 = (void **)v44[66];
          }
          if ( v47 != v44 + 68 )
            free(v47);
          v49 = (void **)v44[52];
          v50 = v44 + 52;
          if ( v49 != v44 + 54 )
            free(v49);
          v51 = v44 + 12;
          do
          {
            while ( 1 )
            {
              v50 -= 4;
              if ( *v50 == v50 + 2 )
                break;
              operator delete(*v50);
              if ( v50 == v51 )
                goto LABEL_71;
            }
          }
          while ( v50 != v51 );
LABEL_71:
          operator delete(v44, 0x3A0u);
        }
        else
        {
          v52 = *(unsigned int *)(v81 + 14976);
          *(_DWORD *)(v81 + 14976) = v52 + 1;
          *(_QWORD *)(v45 + 8 * v52 + 14848) = v44;
        }
      }
    }
  }
  return v6;
}
