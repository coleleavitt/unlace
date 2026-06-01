__int64 __fastcall sub_7B5850(__int64 a1, void **a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  _WORD *v14; // rax
  char *v15; // rsi
  _WORD *v16; // rbx
  char *v17; // rdi
  __int64 v18; // r13
  unsigned __int16 v19; // r8
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int16 *v22; // rbx
  size_t v23; // r13
  void *v24; // rax
  unsigned __int64 v25; // r13
  char *v26; // rdx
  char *v27; // rax
  char *v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  char *v31; // rdx
  int v33; // r14d
  unsigned __int64 v34; // r13
  int v35; // edx
  int v36; // eax
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  void *v39; // rax
  unsigned __int64 v40; // r15
  char *v41; // rdx
  char *v42; // rax
  void *v43; // rcx
  void *v44; // rdx
  __m128i v45; // xmm0
  void *v46; // rdi
  __m128i v47; // xmm0
  unsigned __int64 v48; // r13
  __int64 v49; // rax
  unsigned __int16 v50; // ax
  int v51; // ecx
  __int64 *v52; // rdx
  char *v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // r14
  void *v57; // r15
  size_t v58; // rdx
  char *v59; // r13
  __int64 v60; // r14
  __int64 v61; // rbx
  __int128 v62; // xmm1
  __int64 v63; // r14
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // rdx
  __m128i v67; // xmm0
  void *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rdx
  size_t v71; // rcx
  void *v72; // rsi
  char *v73; // r15
  __int64 v74; // rsi
  __int128 v75; // xmm1
  __int64 v76; // r12
  char *v77; // rbx
  __int64 v78; // r15
  void *v79; // rdx
  __m128i v80; // xmm0
  __int64 v81; // rdx
  __m128i v82; // xmm0
  void *v83; // rdi
  void **v85; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v86; // [rsp+10h] [rbp-C0h]
  unsigned __int64 v87; // [rsp+10h] [rbp-C0h]
  unsigned __int64 v88; // [rsp+10h] [rbp-C0h]
  unsigned __int16 v92; // [rsp+30h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+30h] [rbp-A0h]
  unsigned __int16 v94; // [rsp+30h] [rbp-A0h]
  unsigned __int64 v95; // [rsp+30h] [rbp-A0h]
  __int64 v96; // [rsp+30h] [rbp-A0h]
  __int64 v97; // [rsp+30h] [rbp-A0h]
  __int64 *v98; // [rsp+30h] [rbp-A0h]
  __int64 n; // [rsp+38h] [rbp-98h]
  void **na; // [rsp+38h] [rbp-98h]
  size_t nc; // [rsp+38h] [rbp-98h]
  size_t nb; // [rsp+38h] [rbp-98h]
  __int64 v105; // [rsp+48h] [rbp-88h]
  __int64 v106; // [rsp+48h] [rbp-88h]
  unsigned __int64 v107; // [rsp+58h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-70h] BYREF
  __m128i v109; // [rsp+68h] [rbp-68h]
  void *dest; // [rsp+80h] [rbp-50h] BYREF
  __m128i v111; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v112; // [rsp+98h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  v5 = *(_QWORD *)a1;
LABEL_2:
  while ( 1 )
  {
    v6 = v5;
    if ( a4 )
      break;
    while ( 1 )
    {
      v7 = sub_741450(v6);
      if ( !v7 )
        return 0;
LABEL_4:
      v8 = v7 - 1;
      if ( v7 == 1 || *(_BYTE *)(v8 + 3) != 46 )
        return 0;
      v9 = (*(_BYTE *)(v5 + 6016) & 2) != 0 ? _byteswap_ulong(*(_DWORD *)(v8 + 4)) : swap64(*(_QWORD *)(v8 + 4));
      if ( a4 != v9 < a3 )
        return 0;
      v10 = (unsigned __int64)a2[1];
      if ( v10 > 0x1FFF && swap64(*(_QWORD *)(*((_QWORD *)*a2 + 6 * v10 - 6) + 4LL)) != v9 )
        return 1;
      ptr = nullptr;
      v109 = 0;
      v11 = *(unsigned __int16 *)(v8 + 1);
      v12 = *(unsigned __int8 *)(v5 + 5881);
      n = *(unsigned __int16 *)(v8 + 1) + 3LL;
      if ( v11 <= (int)v12 + 1 )
      {
        if ( !under_debugger )
          interr(2095);
        goto LABEL_91;
      }
      if ( a5 )
      {
        v13 = v11 - v12;
        if ( v13 == 3 || v13 - 2 == (_DWORD)v12 )
        {
          v33 = *(unsigned __int8 *)(v8 + v12 + 4);
          v34 = sub_7B51C0(v5, v8);
          if ( (unsigned __int8)sub_7B57A0(a5, v33, v34) )
            break;
        }
      }
      v14 = (_WORD *)sub_7443D0(v5, (unsigned __int16 *)(v8 + 1));
      v15 = (char *)ptr;
      v16 = v14;
      v17 = (char *)ptr;
      if ( v14 )
      {
        v18 = v109.m128i_i64[0];
        v19 = *v14;
        v20 = v109.m128i_i64[0] + n;
        if ( !__CFADD__(v109.m128i_i64[0], n) )
          goto LABEL_17;
        if ( v109.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
        {
          v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
          v21 = v109.m128i_i64[0];
          if ( v109.m128i_i64[1] < v20 )
          {
            v94 = v19;
            ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
            v17 = (char *)ptr;
            v19 = v94;
            v21 = v109.m128i_i64[0];
          }
          v92 = v19;
          memset(&v17[v21], 0, v20 - v21);
          v109.m128i_i64[0] = v20;
          v15 = (char *)ptr;
          v19 = v92;
        }
        else if ( v109.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
        {
          v109.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        }
        v22 = (_WORD *)((char *)v16 + v19 + 2);
        memcpy(&v15[v18], (const void *)v8, n);
        v23 = *v22;
        dest = nullptr;
        v111 = 0;
        if ( v23 )
        {
          dest = (void *)qvector_reserve(&dest, 0, v23, 1);
          memset((char *)dest + v111.m128i_i64[0], 0, v23 - v111.m128i_i64[0]);
          v111.m128i_i64[0] = v23;
          memcpy(dest, v22 + 1, v23);
        }
        v24 = a2[1];
        v25 = (unsigned __int64)a2[2];
        if ( v25 < (unsigned __int64)v24 + 1 )
        {
          v55 = qvector_reserve(a2, 0, (char *)v24 + 1, 48);
          v56 = a2[1];
          v57 = a2[2];
          v58 = v55;
          a2[2] = (void *)v25;
          v59 = (char *)*a2;
          v60 = (__int64)v56 - 1;
          if ( v60 >= 0 )
          {
            na = a2;
            v61 = v55;
            v62 = 0;
            v105 = v60;
            v63 = v55;
            do
            {
              v64 = *(_QWORD *)v59;
              v65 = _mm_loadu_si128((const __m128i *)(v59 + 8));
              *(_QWORD *)v59 = 0;
              *(_OWORD *)(v59 + 8) = v62;
              *(_QWORD *)v61 = v64;
              *(__m128i *)(v61 + 8) = v65;
              v66 = *((_QWORD *)v59 + 3);
              v67 = _mm_loadu_si128((const __m128i *)v59 + 2);
              *((_QWORD *)v59 + 3) = 0;
              *(_QWORD *)(v61 + 24) = v66;
              *(__m128i *)(v61 + 32) = v67;
              v68 = *(void **)v59;
              *((_QWORD *)v59 + 5) = 0;
              if ( v68 )
              {
                *((_QWORD *)v59 + 1) = 0;
                qfree(v68);
                v62 = 0;
              }
              --v105;
              v59 += 48;
              v61 += 48;
            }
            while ( v105 != -1 );
            v58 = v63;
            a2 = na;
            v59 = (char *)*na;
          }
          nc = v58;
          qfree(v59);
          v26 = (char *)nc;
          a2[2] = v57;
          *a2 = (void *)nc;
          v24 = a2[1];
        }
        else
        {
          v26 = (char *)*a2;
        }
        v27 = &v26[48 * (_QWORD)v24];
        *(_QWORD *)v27 = 0;
        v28 = (char *)ptr;
        *(_OWORD *)(v27 + 8) = 0;
        *((_QWORD *)v27 + 3) = 0;
        *((_OWORD *)v27 + 2) = 0;
        a2[1] = (char *)a2[1] + 1;
        v17 = *(char **)v27;
        v29 = _mm_loadu_si128((const __m128i *)(v27 + 8));
        v30 = *((_QWORD *)v27 + 5);
        *(_QWORD *)v27 = v28;
        ptr = v17;
        *(__m128i *)(v27 + 8) = v109;
        v31 = *((char **)v27 + 3);
        v109 = v29;
        *((_QWORD *)v27 + 3) = dest;
        *((__m128i *)v27 + 2) = _mm_loadu_si128(&v111);
        dest = v31;
        v111.m128i_i64[1] = v30;
        if ( v31 )
        {
          v111.m128i_i64[0] = 0;
          qfree(v31);
          v17 = (char *)ptr;
        }
      }
      if ( !v17 )
        goto LABEL_2;
      v109.m128i_i64[0] = 0;
      qfree(v17);
      v6 = v5;
      if ( a4 )
        goto LABEL_3;
    }
    dest = nullptr;
    v111 = 0;
    v35 = *(unsigned __int8 *)(v5 + 5881);
    v107 = v34;
    v36 = v33;
    if ( *(unsigned __int16 *)(v8 + 1) - 3 == v35 )
    {
      BYTE1(v36) = BYTE1(v33) | 8;
      v33 = v36;
    }
    if ( a4 )
    {
LABEL_38:
      v37 = v109.m128i_i64[0];
      v38 = v109.m128i_i64[0] + n;
      if ( __CFADD__(v109.m128i_i64[0], n) )
        goto LABEL_39;
LABEL_60:
      v53 = (char *)ptr;
      v54 = v37;
      if ( v109.m128i_i64[1] < v38 )
      {
        v87 = v37;
        v95 = v38;
        ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
        v53 = (char *)ptr;
        v37 = v87;
        v54 = v109.m128i_i64[0];
        v38 = v95;
      }
      v86 = v37;
      v93 = v38;
      memset(&v53[v54], 0, v38 - v54);
      v37 = v86;
      v109.m128i_i64[0] = v93;
    }
    else
    {
      while ( v34 && (sub_7B4810(a1, v9, v34 - 1, nullptr, 0, v33, 1) & 0x8000000000000000LL) == 0LL )
        --v34;
      v51 = *(unsigned __int8 *)(v5 + 5881);
      v52 = (__int64 *)(v8 + v51 + 5);
      if ( *(unsigned __int16 *)(v8 + 1) - v51 != 3 )
      {
        if ( (*(_BYTE *)(v5 + 6016) & 2) != 0 )
        {
          LODWORD(v69) = _byteswap_ulong(v34);
        }
        else
        {
          v98 = (__int64 *)(v8 + v51 + 5);
          v69 = swap64(v34);
          v52 = v98;
          if ( (*(_BYTE *)(v5 + 6016) & 2) == 0 )
          {
            *v98 = v69;
            goto LABEL_38;
          }
        }
        *(_DWORD *)v52 = v69;
        goto LABEL_38;
      }
      *(_BYTE *)v52 = v34;
      v37 = v109.m128i_i64[0];
      v38 = v109.m128i_i64[0] + n;
      if ( !__CFADD__(v109.m128i_i64[0], n) )
        goto LABEL_60;
LABEL_39:
      if ( v37 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v38 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_60;
      }
      if ( v37 != 0x7FFFFFFFFFFFFFFFLL )
        v109.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
    }
    memcpy((char *)ptr + v37, (const void *)v8, n);
    if ( !sub_7B9A10(a1, v9, (unsigned int)&dest, 1, v34, v33, (__int64)&v107) )
    {
LABEL_50:
      v46 = dest;
      goto LABEL_51;
    }
    v39 = a2[1];
    v40 = (unsigned __int64)a2[2];
    if ( v40 < (unsigned __int64)v39 + 1 )
    {
      v70 = qvector_reserve(a2, 0, (char *)v39 + 1, 48);
      v71 = (size_t)a2[2];
      v72 = a2[1];
      a2[2] = (void *)v40;
      v73 = (char *)*a2;
      nb = v71;
      v74 = (__int64)v72 - 1;
      if ( v74 >= 0 )
      {
        v85 = a2;
        v75 = 0;
        v106 = v70;
        v96 = v5;
        v76 = v74;
        v88 = v9;
        v77 = v73;
        v78 = v70;
        do
        {
          v79 = *(void **)v77;
          v80 = _mm_loadu_si128((const __m128i *)(v77 + 8));
          *(_QWORD *)v77 = 0;
          *(_OWORD *)(v77 + 8) = v75;
          *(_QWORD *)v106 = v79;
          *(__m128i *)(v106 + 8) = v80;
          v81 = *((_QWORD *)v77 + 3);
          v82 = _mm_loadu_si128((const __m128i *)v77 + 2);
          *((_QWORD *)v77 + 3) = 0;
          *(_QWORD *)(v106 + 24) = v81;
          *(__m128i *)(v106 + 32) = v82;
          v83 = *(void **)v77;
          *((_QWORD *)v77 + 5) = 0;
          if ( v83 )
          {
            *((_QWORD *)v77 + 1) = 0;
            qfree(v83);
            v75 = 0;
          }
          v106 += 48;
          v77 += 48;
        }
        while ( v76-- != 0 );
        v70 = v78;
        v5 = v96;
        v9 = v88;
        a2 = v85;
        v73 = (char *)*v85;
      }
      v97 = v70;
      qfree(v73);
      v41 = (char *)v97;
      *a2 = (void *)v97;
      a2[2] = (void *)nb;
      v39 = a2[1];
    }
    else
    {
      v41 = (char *)*a2;
    }
    v42 = &v41[48 * (_QWORD)v39];
    *(_QWORD *)v42 = 0;
    v43 = ptr;
    *(_OWORD *)(v42 + 8) = 0;
    *((_OWORD *)v42 + 2) = 0;
    *((_QWORD *)v42 + 3) = 0;
    a2[1] = (char *)a2[1] + 1;
    v44 = *(void **)v42;
    v45 = _mm_loadu_si128((const __m128i *)(v42 + 8));
    v46 = *((void **)v42 + 3);
    *(_QWORD *)v42 = v43;
    ptr = v44;
    *(__m128i *)(v42 + 8) = v109;
    v109 = v45;
    v47 = _mm_loadu_si128((const __m128i *)v42 + 2);
    *((_QWORD *)v42 + 3) = dest;
    *((__m128i *)v42 + 2) = _mm_loadu_si128(&v111);
    dest = v46;
    v111 = v47;
    if ( a4 )
    {
      if ( v34 < v107 )
      {
        v48 = v107 - 1;
        *(_WORD *)(a1 + 53) = 10;
        v49 = swap64(v9);
        *(_BYTE *)(a1 + 64) = v33;
        *(_QWORD *)(a1 + 56) = v49;
        v50 = *(_WORD *)(a1 + 53);
        if ( (v33 & 0x800) == 0 )
        {
          if ( v50 + 8 <= 0xFFFF )
          {
            *(_WORD *)(a1 + 53) = v50 + 8;
            *(_QWORD *)(a1 + 65) = swap64(v48);
            goto LABEL_50;
          }
LABEL_92:
          abort();
        }
        if ( v50 == 0xFFFF )
          goto LABEL_92;
        v46 = dest;
        *(_WORD *)(a1 + 53) = v50 + 1;
        *(_BYTE *)(a1 + 65) = v48;
        goto LABEL_51;
      }
      if ( !under_debugger )
        interr(2096);
LABEL_91:
      BUG();
    }
LABEL_51:
    if ( v46 )
    {
      v111.m128i_i64[0] = 0;
      qfree(v46);
    }
    if ( ptr )
    {
      v109.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
LABEL_3:
  sub_741460(v6);
  if ( v7 )
    goto LABEL_4;
  return 0;
}
