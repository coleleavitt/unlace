unsigned __int16 *__fastcall sub_1DE0870(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r15
  __int64 v9; // r13
  char v10; // r12
  unsigned __int64 v11; // r14
  bool v12; // sf
  unsigned __int64 v13; // rbx
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  unsigned __int64 v20; // rbx
  unsigned __int16 *v21; // rax
  _BYTE *v22; // rbx
  const __m128i *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int16 *v26; // rbx
  int *v28; // rax
  int v29; // ebp
  __int64 v30; // rbp
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // r14
  int v34; // eax
  unsigned __int16 *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned __int16 *v42; // rax
  unsigned __int64 v43; // rax
  const __m128i *v44; // rbx
  _BYTE *v45; // rbp
  unsigned __int64 v46; // rdx
  __m128i *v47; // rax
  int v48; // ebp
  __int64 v49; // r14
  int v50; // r12d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int16 *v55; // r15
  unsigned __int16 *v56; // rax
  _DWORD *v57; // rax
  int v58; // edx
  const __m128i *v59; // rax
  __int64 v60; // rax
  void **v61; // rsi
  __m128 *v62; // r15
  void **v63; // rsi
  void **v64; // rsi
  unsigned __int64 v65; // [rsp-10h] [rbp-1E8h]
  unsigned __int64 v66; // [rsp-8h] [rbp-1E0h]
  unsigned __int64 v68; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v69; // [rsp+18h] [rbp-1C0h]
  int v70; // [rsp+20h] [rbp-1B8h]
  int v71; // [rsp+24h] [rbp-1B4h]
  void **p_ptr; // [rsp+28h] [rbp-1B0h]
  __m128 *v73; // [rsp+30h] [rbp-1A8h]
  __int64 v74; // [rsp+38h] [rbp-1A0h]
  __int64 v75; // [rsp+40h] [rbp-198h]
  void *v76; // [rsp+48h] [rbp-190h]
  char v77; // [rsp+5Ah] [rbp-17Eh] BYREF
  char v78; // [rsp+5Bh] [rbp-17Dh] BYREF
  _DWORD v79[9]; // [rsp+5Ch] [rbp-17Ch] BYREF
  __m128 v80; // [rsp+80h] [rbp-158h] BYREF
  int v81; // [rsp+90h] [rbp-148h]
  int v82; // [rsp+94h] [rbp-144h]
  void *v83[2]; // [rsp+A0h] [rbp-138h] BYREF
  _QWORD v84[4]; // [rsp+B0h] [rbp-128h] BYREF
  void *ptr; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v86; // [rsp+D8h] [rbp-100h]
  char v87; // [rsp+E0h] [rbp-F8h] BYREF

  v8 = a2;
  p_ptr = &ptr;
  ptr = &v87;
  v86 = 0x800000000LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x7FFFFFFF) == 0 )
  {
    v10 = 0;
LABEL_13:
    v25 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) || v10 )
      v26 = sub_19E4C10(*(_QWORD *)(v25 + 736), *(_QWORD *)(v8 + 20), (const __m128i *)ptr, (unsigned int)v86, a7, a8);
    else
      v26 = sub_19A3E40(v25, (unsigned __int16 *)v8, a3, a4, (__int64)a5, a7, a8);
    goto LABEL_16;
  }
  v9 = 0;
  v10 = 0;
  v69 = 8LL * ((*(_DWORD *)(a2 + 16) & 0x7FFFFFFFu) - 1) + 8;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v8 + 2 * v9 + 48);
    v12 = *(char *)(v8 + 19) < 0;
    v13 = *(_QWORD *)(v8 + 2 * v9 + 40);
    v68 = v11;
    if ( v12 )
    {
      v28 = (int *)(v8 + v9 + 16LL * (*(_DWORD *)(v8 + 16) & 0x7FFFFFFF) + 40);
      v29 = v28[1];
      v70 = *v28;
      if ( v70 )
        break;
    }
    v14 = sub_1DC71F0(a1, v13, a3, a4, (__int64)a5, a6, a7, a8);
    if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      goto LABEL_55;
    v19 = v13 == ((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL);
    v20 = v68;
    if ( !v19 )
      v10 = 1;
    v21 = sub_1DC71F0(a1, v68, v15, v16, v17, v18, a7, a8);
    if ( v21 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
LABEL_55:
      v26 = (_WORD *)(&dword_0 + 1);
      goto LABEL_16;
    }
    v68 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v20 == ((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFELL);
    v22 = ptr;
    if ( !v19 )
      v10 = 1;
    v84[0] = 0;
    a3 = (unsigned int)v86 + 1LL;
    a7 = _mm_loadh_ps((const double *)&v68);
    a4 = (unsigned __int64)ptr + 24 * (unsigned int)v86;
    v23 = (const __m128i *)v83;
    *(__m128 *)v83 = a7;
    if ( a3 > HIDWORD(v86) )
    {
      v61 = p_ptr + 2;
      if ( ptr > v83 || a4 <= (unsigned __int64)v83 )
      {
        sub_2237220(p_ptr, v61, a3, 24);
        a3 = 3LL * (unsigned int)v86;
        a4 = (unsigned __int64)ptr + 24 * (unsigned int)v86;
        v23 = (const __m128i *)v83;
      }
      else
      {
        sub_2237220(p_ptr, v61, a3, 24);
        a3 = (unsigned __int64)ptr;
        v23 = (const __m128i *)((char *)ptr + (char *)v83 - v22);
        a4 = (unsigned __int64)ptr + 24 * (unsigned int)v86;
      }
    }
    a8 = (__m128)_mm_loadu_si128(v23);
    *(__m128 *)a4 = a8;
    v24 = v23[1].m128i_i64[0];
    LODWORD(v86) = v86 + 1;
    *(_QWORD *)(a4 + 16) = v24;
LABEL_12:
    v9 += 8;
    if ( v9 == v69 )
      goto LABEL_13;
  }
  v83[0] = v84;
  v83[1] = (void *)0x200000000LL;
  sub_1E4CA90(v13);
  sub_1E4CA90(v11);
  v79[0] = v29;
  v77 = 1;
  v78 = 0;
  v30 = (unsigned int)sub_EEC140(v11);
  v31 = sub_EEB7E0(v13, (__int64)v83, *(double *)a7.m128_u64);
  v79[5] = v70;
  v32 = sub_1DDBB60(
          a1,
          v70,
          (v30 << 32) | v31,
          (__int64)v83[0],
          LODWORD(v83[1]),
          (__int64)&v77,
          a7,
          a8,
          (__int64)&v78,
          (__int64)v79);
  a3 = v65;
  a4 = v66;
  if ( v32 )
  {
    v26 = (_WORD *)(&dword_0 + 1);
    goto LABEL_44;
  }
  LOBYTE(v71) = v77;
  if ( !v77 )
  {
    v33 = *a1;
    v34 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v71 = v34;
    v35 = sub_1DC71F0(a1, v13, v65, v66, (__int64)a5, a6, a7, a8);
    if ( v35 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      goto LABEL_43;
    v40 = (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v13 == v40;
    v41 = v68;
    v73 = (__m128 *)v40;
    if ( !v19 )
      v10 = 1;
    v42 = sub_1DC71F0(a1, v68, v36, v37, v38, v39, a7, a8);
    if ( v42 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
LABEL_43:
      v26 = (_WORD *)(&dword_0 + 1);
      *(_DWORD *)(v33 + 12632) = v71;
      goto LABEL_44;
    }
    v43 = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFELL;
    a4 = HIDWORD(v86);
    v19 = v41 == v43;
    v68 = v43;
    v44 = (const __m128i *)&v80;
    if ( !v19 )
      v10 = 1;
    v45 = ptr;
    v81 = v70;
    a7 = _mm_loadh_ps((const double *)&v68);
    v82 = v79[0];
    v80 = a7;
    v46 = (unsigned int)v86 + 1LL;
    v47 = (__m128i *)((char *)ptr + 24 * (unsigned int)v86);
    if ( v46 > HIDWORD(v86) )
    {
      v64 = p_ptr + 2;
      if ( ptr > &v80 || v47 <= (__m128i *)&v80 )
      {
        sub_2237220(p_ptr, v64, v46, 24);
        v47 = (__m128i *)((char *)ptr + 24 * (unsigned int)v86);
      }
      else
      {
        sub_2237220(p_ptr, v64, v46, 24);
        v44 = (const __m128i *)((char *)ptr + (char *)&v80 - v45);
        v47 = (__m128i *)((char *)ptr + 24 * (unsigned int)v86);
      }
    }
    *v47 = _mm_loadu_si128(v44);
    a3 = v44[1].m128i_u64[0];
    LODWORD(v86) = v86 + 1;
    v47[1].m128i_i64[0] = a3;
    *(_DWORD *)(v33 + 12632) = v71;
    goto LABEL_30;
  }
  if ( v79[0] == 1 )
  {
LABEL_41:
    v10 = v71;
LABEL_30:
    if ( v83[0] != v84 )
      free(v83[0]);
    goto LABEL_12;
  }
  v75 = v8;
  v48 = 0;
  v73 = &v80;
  v74 = v9;
  while ( 1 )
  {
    v49 = *a1;
    ++v48;
    v50 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = v48;
    v55 = sub_1DC71F0(a1, v13, a3, a4, (__int64)a5, a6, a7, a8);
    if ( v55 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      break;
    v56 = sub_1DC71F0(a1, v68, v51, v52, v53, v54, a7, a8);
    if ( v56 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      break;
    v57 = (_DWORD *)((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFELL);
    v81 = 0;
    v80.m128_u64[1] = (unsigned __int64)v57;
    v80.m128_u64[0] = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFELL;
    v58 = *(_DWORD *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFELL);
    v82 = v79[0];
    if ( (v58 & 0x4000) != 0 || (*v57 & 0x4000) != 0 )
      v81 = v70;
    a5 = ptr;
    a3 = (unsigned int)v86 + 1LL;
    a4 = (unsigned __int64)ptr + 24 * (unsigned int)v86;
    v59 = (const __m128i *)v73;
    if ( a3 > HIDWORD(v86) )
    {
      v62 = v73;
      v76 = ptr;
      v63 = p_ptr + 2;
      if ( ptr > v73 || a4 <= (unsigned __int64)v73 )
      {
        sub_2237220(p_ptr, v63, a3, 24);
        a3 = 3LL * (unsigned int)v86;
        a4 = (unsigned __int64)ptr + 24 * (unsigned int)v86;
        v59 = (const __m128i *)v73;
      }
      else
      {
        sub_2237220(p_ptr, v63, a3, 24);
        a5 = v76;
        a3 = (unsigned __int64)ptr;
        v59 = (const __m128i *)((char *)ptr + (char *)v62 - (_BYTE *)v76);
        a4 = (unsigned __int64)ptr + 24 * (unsigned int)v86;
      }
    }
    *(__m128i *)a4 = _mm_loadu_si128(v59);
    v60 = v59[1].m128i_i64[0];
    LODWORD(v86) = v86 + 1;
    *(_QWORD *)(a4 + 16) = v60;
    LODWORD(v60) = v79[0];
    *(_DWORD *)(v49 + 12632) = v50;
    if ( (_DWORD)v60 - 1 == v48 )
    {
      v9 = v74;
      v8 = v75;
      goto LABEL_41;
    }
  }
  v26 = (_WORD *)(&dword_0 + 1);
  *(_DWORD *)(v49 + 12632) = v50;
LABEL_44:
  if ( v83[0] != v84 )
    free(v83[0]);
LABEL_16:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v26;
}
