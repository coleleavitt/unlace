__int64 __fastcall sub_165FA10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 *m128i_i64; // r13
  __int64 v8; // rax
  unsigned __int64 v10; // rdi
  __int64 (*v11)(void); // rax
  __int64 v12; // rax
  const __m128i *v13; // r14
  const __m128i *v14; // r12
  _BYTE *v15; // rsi
  __int64 *v16; // rax
  size_t v17; // rbp
  unsigned __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 *v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int32 v24; // ebx
  _BYTE *v25; // rdi
  char *v26; // rcx
  char *v27; // rsi
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  void **v31; // rbp
  unsigned __int64 v32; // rax
  void **v33; // r12
  void **v34; // rbx
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbx
  void **v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  int v48; // eax
  __m128i *v49; // r15
  __m128i *v50; // rcx
  const __m128i *v51; // r14
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // r13
  void *v56; // rdi
  __int64 *v59; // [rsp+20h] [rbp-A8h]
  char v60[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-80h]
  __int64 v62; // [rsp+50h] [rbp-78h]
  __int64 v63; // [rsp+58h] [rbp-70h]
  void *v64; // [rsp+60h] [rbp-68h]
  unsigned __int64 v65; // [rsp+68h] [rbp-60h]
  int v66; // [rsp+70h] [rbp-58h]
  char v67; // [rsp+78h] [rbp-50h]
  __int64 v68; // [rsp+80h] [rbp-48h]
  unsigned __int64 v69; // [rsp+88h] [rbp-40h]

  if ( (a3 & 3) == 0 )
  {
    LODWORD(m128i_i64) = 1;
    return (unsigned int)m128i_i64;
  }
  LODWORD(m128i_i64) = 1;
  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) != 0 )
  {
    v8 = a1[31];
    v10 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    v61 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    v62 = a2;
    v63 = a4;
    v60[0] = a3 & 3 | v60[0] & 0xFC | 4;
    v64 = nullptr;
    v66 = 0;
    v65 = v8 + 2448;
    if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v43 = sub_B72F20(v10);
      v10 = v61;
      v68 = 0;
      v67 = v43 & 1 | v67 & 0xFC;
      if ( (v60[0] & 4) == 0 )
        goto LABEL_7;
    }
    else
    {
      v67 &= 0xFCu;
      v68 = 0;
    }
    v10 = sub_1654A20(v10);
LABEL_7:
    v69 = v10;
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 32LL);
    if ( (char *)v11 == (char *)sub_A01140 )
      v12 = sub_B70A60(v10);
    else
      v12 = v11();
    v13 = *(const __m128i **)a6;
    v69 = v12;
    v66 = *(_DWORD *)(a6 + 16);
    if ( v13 )
    {
      v47 = v65;
      v48 = *(_DWORD *)(v65 + 14976);
      if ( v48 )
      {
        v52 = (unsigned int)(v48 - 1);
        *(_DWORD *)(v65 + 14976) = v52;
        v49 = *(__m128i **)(v47 + 8 * v52 + 14848);
        v53 = v49[33].m128i_u32[2];
        v49->m128i_i8[0] = 0;
        v54 = v49[33].m128i_i64[0];
        v49[26].m128i_i32[2] = 0;
        v55 = v54 + (v53 << 6);
        while ( v54 != v55 )
        {
          while ( 1 )
          {
            v55 -= 64;
            v56 = *(void **)(v55 + 24);
            if ( v56 == (void *)(v55 + 40) )
              break;
            operator delete(v56);
            if ( v54 == v55 )
              goto LABEL_86;
          }
        }
LABEL_86:
        v49[33].m128i_i32[2] = 0;
        v50 = v49 + 6;
      }
      else
      {
        v49 = (__m128i *)operator new(0x3A0u);
        v49->m128i_i8[0] = 0;
        v50 = v49 + 6;
        v49[6].m128i_i64[0] = (__int64)v49[7].m128i_i64;
        v49[8].m128i_i64[0] = (__int64)v49[9].m128i_i64;
        v49[10].m128i_i64[0] = (__int64)v49[11].m128i_i64;
        v49[12].m128i_i64[0] = (__int64)v49[13].m128i_i64;
        v49[14].m128i_i64[0] = (__int64)v49[15].m128i_i64;
        v49[16].m128i_i64[0] = (__int64)v49[17].m128i_i64;
        v49[18].m128i_i64[0] = (__int64)v49[19].m128i_i64;
        v49[20].m128i_i64[0] = (__int64)v49[21].m128i_i64;
        v49[22].m128i_i64[0] = (__int64)v49[23].m128i_i64;
        v49[24].m128i_i64[0] = (__int64)v49[25].m128i_i64;
        v49[26].m128i_i64[0] = (__int64)v49[27].m128i_i64;
        v49[6].m128i_i64[1] = 0;
        v49[7].m128i_i8[0] = 0;
        v49[8].m128i_i64[1] = 0;
        v49[9].m128i_i8[0] = 0;
        v49[10].m128i_i64[1] = 0;
        v49[11].m128i_i8[0] = 0;
        v49[12].m128i_i64[1] = 0;
        v49[13].m128i_i8[0] = 0;
        v49[14].m128i_i64[1] = 0;
        v49[15].m128i_i8[0] = 0;
        v49[16].m128i_i64[1] = 0;
        v49[17].m128i_i8[0] = 0;
        v49[18].m128i_i64[1] = 0;
        v49[19].m128i_i8[0] = 0;
        v49[20].m128i_i64[1] = 0;
        v49[21].m128i_i8[0] = 0;
        v49[22].m128i_i64[1] = 0;
        v49[23].m128i_i8[0] = 0;
        v49[24].m128i_i64[1] = 0;
        v49[25].m128i_i8[0] = 0;
        v49[26].m128i_i64[1] = 0x800000000LL;
        v49[33].m128i_i64[0] = (__int64)v49[34].m128i_i64;
        v49[33].m128i_i64[1] = 0x600000000LL;
      }
      v64 = v49;
      v51 = *(const __m128i **)a6;
      v49->m128i_i8[0] = v51->m128i_i8[0];
      v49->m128i_i8[1] = v51->m128i_i8[1];
      v49->m128i_i8[2] = v51->m128i_i8[2];
      v49->m128i_i8[3] = v51->m128i_i8[3];
      v49->m128i_i8[4] = v51->m128i_i8[4];
      v49->m128i_i8[5] = v51->m128i_i8[5];
      v49->m128i_i8[6] = v51->m128i_i8[6];
      v49->m128i_i8[7] = v51->m128i_i8[7];
      v49->m128i_i8[8] = v51->m128i_i8[8];
      v49->m128i_i8[9] = v51->m128i_i8[9];
      v49->m128i_i8[10] = v51->m128i_i8[10];
      if ( &v49[1] < &v51[2] && &v51[1] < &v49[2] )
      {
        v49[1].m128i_i64[0] = v51[1].m128i_i64[0];
        v49[1].m128i_i64[1] = v51[1].m128i_i64[1];
        v49[2].m128i_i64[0] = v51[2].m128i_i64[0];
        v49[2].m128i_i64[1] = v51[2].m128i_i64[1];
        v49[3].m128i_i64[0] = v51[3].m128i_i64[0];
        v49[3].m128i_i64[1] = v51[3].m128i_i64[1];
        v49[4].m128i_i64[0] = v51[4].m128i_i64[0];
        v49[4].m128i_i64[1] = v51[4].m128i_i64[1];
        v49[5].m128i_i64[0] = v51[5].m128i_i64[0];
        v49[5].m128i_i64[1] = v51[5].m128i_i64[1];
      }
      else
      {
        v49[1] = _mm_loadu_si128(v51 + 1);
        v49[2] = _mm_loadu_si128(v51 + 2);
        v49[3] = _mm_loadu_si128(v51 + 3);
        v49[4] = _mm_loadu_si128(v51 + 4);
        v49[5] = _mm_loadu_si128(v51 + 5);
      }
      v14 = v51 + 6;
      m128i_i64 = v50[1].m128i_i64;
      do
      {
        if ( v14 != (const __m128i *)(m128i_i64 - 2) )
        {
          v16 = (__int64 *)*(m128i_i64 - 2);
          v17 = v14->m128i_u64[1];
          if ( v16 == m128i_i64 )
            v18 = 15;
          else
            v18 = *m128i_i64;
          if ( v17 > v18 )
          {
            if ( (v17 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v19 = 2 * v18;
            if ( v17 < v19 )
            {
              v20 = v19 + 1;
              if ( v19 < 0 )
              {
                v20 = 0x8000000000000000LL;
                v19 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v20 = v17 + 1;
              v19 = v14->m128i_i64[1];
            }
            v16 = (__int64 *)operator new(v20);
            v21 = (__int64 *)*(m128i_i64 - 2);
            if ( v21 != m128i_i64 )
            {
              v59 = v16;
              operator delete(v21);
              v16 = v59;
            }
            *(m128i_i64 - 2) = (__int64)v16;
            *m128i_i64 = v19;
          }
          if ( v17 )
          {
            v15 = (_BYTE *)v14->m128i_i64[0];
            if ( v17 == 1 )
              *(_BYTE *)v16 = *v15;
            else
              memcpy(v16, v15, v17);
            v16 = (__int64 *)*(m128i_i64 - 2);
          }
          *(m128i_i64 - 1) = v17;
          *((_BYTE *)v16 + v17) = 0;
        }
        v14 += 2;
        m128i_i64 += 4;
      }
      while ( v14 != &v51[26] );
      if ( &v49[26] != v14 )
      {
        v22 = v51[26].m128i_u32[2];
        v23 = v49[26].m128i_u32[2];
        v24 = v51[26].m128i_i32[2];
        if ( v22 <= v23 )
        {
          if ( v51[26].m128i_i32[2] )
          {
            v40 = v49[26].m128i_i64[0];
            v41 = v51[26].m128i_i64[0];
            v42 = 0;
            do
            {
              *(_QWORD *)(v40 + v42) = *(_QWORD *)(v41 + v42);
              *(_BYTE *)(v40 + v42 + 8) = *(_BYTE *)(v41 + v42 + 8);
              v42 += 12;
            }
            while ( 12 * v22 != v42 );
          }
        }
        else
        {
          if ( v22 > v49[26].m128i_u32[3] )
          {
            v49[26].m128i_i32[2] = 0;
            sub_2237220(&v49[26], &v49[27], v22, 12);
            v26 = (char *)v51[26].m128i_i64[0];
            v25 = (_BYTE *)v49[26].m128i_i64[0];
            v28 = 0;
            v22 = v51[26].m128i_u32[2];
            v27 = v26;
          }
          else
          {
            v25 = (_BYTE *)v49[26].m128i_i64[0];
            v26 = (char *)v51[26].m128i_i64[0];
            if ( v49[26].m128i_i32[2] )
            {
              v44 = 3 * v23;
              v45 = 0;
              v46 = 4 * v44;
              v28 = v46;
              do
              {
                *(_QWORD *)&v25[v45] = *(_QWORD *)&v26[v45];
                v25[v45 + 8] = v26[v45 + 8];
                v45 += 12;
              }
              while ( v46 != v45 );
              v25 += v46;
              v22 = v51[26].m128i_u32[2];
              v27 = &v26[v46];
            }
            else
            {
              v27 = (char *)v51[26].m128i_i64[0];
              v28 = 0;
            }
          }
          v29 = 12 * v22;
          if ( v27 != &v26[v29] )
            memcpy(v25, v27, v29 - v28);
        }
        v49[26].m128i_i32[2] = v24;
      }
      sub_9EED30((__int64)v49[33].m128i_i64, v51[33].m128i_i64);
    }
    v30 = sub_165D180(a1, a5, (__int64)v60);
    v31 = (void **)v64;
    LOBYTE(m128i_i64) = v30 == 0;
    if ( v64 )
    {
      v32 = v65;
      if ( v65 )
      {
        if ( (unsigned __int64)v64 < v65 || (unsigned __int64)v64 > v65 + 14848 )
        {
          v33 = *((void ***)v64 + 66);
          v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v64 + 134)];
          if ( v33 != v34 )
          {
            do
            {
              while ( 1 )
              {
                v34 -= 8;
                v35 = (void **)v34[3];
                if ( v35 == v34 + 5 )
                  break;
                operator delete(v35);
                if ( v33 == v34 )
                  goto LABEL_49;
              }
            }
            while ( v33 != v34 );
LABEL_49:
            v34 = (void **)v31[66];
          }
          if ( v34 != v31 + 68 )
            free(v34);
          v36 = (void **)v31[52];
          v37 = v31 + 52;
          if ( v36 != v31 + 54 )
            free(v36);
          v38 = v31 + 12;
          do
          {
            while ( 1 )
            {
              v37 -= 4;
              if ( *v37 == v37 + 2 )
                break;
              operator delete(*v37);
              if ( v37 == v38 )
                goto LABEL_57;
            }
          }
          while ( v37 != v38 );
LABEL_57:
          operator delete(v31, 0x3A0u);
        }
        else
        {
          v39 = *(unsigned int *)(v65 + 14976);
          *(_DWORD *)(v65 + 14976) = v39 + 1;
          *(_QWORD *)(v32 + 8 * v39 + 14848) = v31;
        }
      }
    }
  }
  return (unsigned int)m128i_i64;
}
