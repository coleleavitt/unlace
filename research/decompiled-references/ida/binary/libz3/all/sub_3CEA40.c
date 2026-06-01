void __fastcall sub_3CEA40(
        char *a1,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(_QWORD, _QWORD))
{
  __int64 v8; // rax
  char *v9; // r11
  char *v10; // r15
  char *v11; // rbx
  unsigned __int8 (__fastcall *v12)(_QWORD, _QWORD); // r8
  __int64 v13; // rax
  __int64 v14; // r13
  char *v15; // r12
  char *v16; // rbp
  __int64 v17; // r15
  unsigned __int8 (__fastcall *v18)(_QWORD, _QWORD, char *, __int64, unsigned __int8 (__fastcall *)(_QWORD, _QWORD)); // r14
  char *v19; // r13
  char *v20; // r12
  __int64 v21; // rbx
  char *v22; // rbp
  __int64 v23; // rax
  char *v24; // rsi
  size_t v25; // r15
  signed __int64 v26; // rcx
  size_t v27; // rdx
  __int64 v28; // rax
  char *v29; // rcx
  __int64 v30; // r15
  unsigned __int8 (__fastcall *v31)(_QWORD, _QWORD, char *, char *, unsigned __int8 (__fastcall *)(_QWORD, _QWORD)); // r14
  char *v32; // r13
  __int64 v33; // rbx
  char *v34; // rbp
  signed __int64 v35; // r8
  size_t v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char *v39; // rbx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __m128i v44; // xmm0
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rdi
  char *v47; // rdx
  __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  char *v51; // r9
  __int64 v52; // r11
  __int64 v53; // rdx
  __int64 v54; // rdi
  char *v55; // rdi
  __int64 v56; // rsi
  char *v57; // rbx
  __int64 v58; // rdx
  __m128i v59; // xmm0
  unsigned __int64 v60; // rdx
  char *v61; // rcx
  char *v62; // rdx
  __int64 v63; // rsi
  __int64 i; // rdx
  __int64 v65; // rsi
  char *v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // r10
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  __m128i v73; // xmm0
  unsigned __int64 v74; // rax
  char *v75; // rdx
  char *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  void *v80; // r8
  signed __int64 v81; // rdx
  void *v82; // rcx
  __int64 v83; // rax
  char *v84; // rax
  char *v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rsi
  char *v88; // [rsp-10h] [rbp-A8h]
  __int64 v89; // [rsp-8h] [rbp-A0h]
  __int64 v90; // [rsp+8h] [rbp-90h]
  __int64 v91; // [rsp+10h] [rbp-88h]
  char *src; // [rsp+18h] [rbp-80h]
  char *srca; // [rsp+18h] [rbp-80h]
  char *srcb; // [rsp+18h] [rbp-80h]
  void *srcc; // [rsp+18h] [rbp-80h]
  void *srcd; // [rsp+18h] [rbp-80h]
  char *v97; // [rsp+20h] [rbp-78h]
  __int64 v98; // [rsp+28h] [rbp-70h]
  __int64 v100; // [rsp+40h] [rbp-58h]
  char *v101; // [rsp+48h] [rbp-50h]
  size_t v102; // [rsp+50h] [rbp-48h]
  size_t v103; // [rsp+50h] [rbp-48h]
  size_t n; // [rsp+58h] [rbp-40h]

  v8 = a4;
  v9 = a6;
  v10 = a1;
  v11 = a2;
  if ( a5 <= a4 )
    v8 = a5;
  v91 = a5;
  v97 = a1;
  v12 = a8;
  v101 = a3;
  v90 = a4;
  if ( a7 >= v8 )
    goto LABEL_39;
  src = a2;
  v13 = a4;
  v14 = (__int64)a8;
  if ( v91 >= a4 )
    goto LABEL_21;
  while ( 2 )
  {
    v15 = src;
    v16 = &v97[8 * (v13 / 2)];
    v102 = v13 / 2;
    v100 = v13 / 2;
    v17 = (v101 - src) >> 3;
    if ( v101 - src <= 0 )
    {
      v90 -= v100;
      if ( v90 > 0 )
      {
        LODWORD(v98) = 0;
        if ( a7 >= 0 )
          goto LABEL_81;
      }
      LODWORD(v98) = 0;
      v15 = src;
      if ( a7 < v90 )
      {
        if ( v16 == src )
        {
          v10 = &v97[8 * (v13 / 2)];
          goto LABEL_17;
        }
        goto LABEL_81;
      }
      goto LABEL_28;
    }
    v18 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, char *, __int64, unsigned __int8 (__fastcall *)(_QWORD, _QWORD)))v14;
    v19 = src;
    v20 = &v97[8 * (v13 / 2)];
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = v17 >> 1;
        v22 = &v19[8 * (v17 >> 1)];
        if ( !v18(*(_QWORD *)v22, *(_QWORD *)v20, a3, a4, v12) )
          break;
        v19 = v22 + 8;
        v17 = v17 - v21 - 1;
        if ( v17 <= 0 )
          goto LABEL_9;
      }
      if ( !v21 )
        break;
      v17 >>= 1;
    }
LABEL_9:
    v16 = v20;
    v15 = v19;
    v14 = (__int64)v18;
    v90 -= v102;
    v91 -= (v15 - src) >> 3;
    v98 = (v15 - src) >> 3;
    v23 = v98;
    if ( v98 >= v90 )
      goto LABEL_27;
LABEL_10:
    if ( v23 <= a7 )
    {
      if ( v23 )
      {
        v24 = src;
        v25 = v15 - src;
        v26 = src - v16;
        if ( v15 - src > 8 )
        {
          v27 = v15 - src;
          srca = (char *)(src - v16);
          memmove(a6, v24, v27);
          if ( (__int64)srca <= 8 )
          {
            if ( srca == &byte_8 )
              *((_QWORD *)v15 - 1) = *(_QWORD *)v16;
          }
          else
          {
            memmove((void *)(v15 - srca), v16, (size_t)srca);
          }
          memmove(v16, a6, v25);
          goto LABEL_16;
        }
        if ( v15 - src != 8 )
        {
          if ( v26 <= 8 )
          {
            if ( v26 == 8 )
              *((_QWORD *)v15 - 1) = *(_QWORD *)v16;
          }
          else
          {
            memmove(&v15[-v26], v16, src - v16);
          }
          goto LABEL_16;
        }
        v78 = *(_QWORD *)src;
        *(_QWORD *)a6 = *(_QWORD *)src;
        if ( v26 <= 8 )
        {
          if ( v26 != 8 )
            goto LABEL_100;
          *((_QWORD *)v15 - 1) = *(_QWORD *)v16;
        }
        else
        {
          memmove(&v15[-v26], v16, v26);
        }
        v78 = *(_QWORD *)a6;
LABEL_100:
        *(_QWORD *)v16 = v78;
LABEL_16:
        src = v15;
        v10 = &v16[v25];
        goto LABEL_17;
      }
LABEL_81:
      src = v15;
      v10 = v16;
      goto LABEL_17;
    }
LABEL_27:
    if ( a7 >= v90 )
    {
LABEL_28:
      if ( !v90 )
      {
LABEL_40:
        src = v15;
        v10 = v15;
        goto LABEL_17;
      }
      v35 = v15 - src;
      v10 = &v15[-(src - v16)];
      if ( src - v16 > 8 )
      {
        n = v15 - src;
        memmove(a6, v16, src - v16);
        v36 = src - v16;
        if ( v15 - src <= 8 )
        {
          if ( n == 8 )
            *(_QWORD *)v16 = *(_QWORD *)src;
        }
        else
        {
          memmove(v16, src, n);
          v36 = src - v16;
        }
        memmove(v10, a6, v36);
        goto LABEL_33;
      }
      if ( src - v16 != 8 )
      {
        if ( v35 <= 8 )
        {
          if ( v35 == 8 )
            *(_QWORD *)v16 = *(_QWORD *)src;
        }
        else
        {
          memmove(v16, src, v15 - src);
        }
        goto LABEL_33;
      }
      v83 = *(_QWORD *)v16;
      *(_QWORD *)a6 = *(_QWORD *)v16;
      if ( v35 <= 8 )
      {
        if ( v35 != 8 )
          goto LABEL_115;
        *(_QWORD *)v16 = *(_QWORD *)src;
      }
      else
      {
        memmove(v16, src, v35);
      }
      v83 = *(_QWORD *)a6;
LABEL_115:
      *((_QWORD *)v15 - 1) = v83;
      goto LABEL_33;
    }
    if ( v16 == src )
      goto LABEL_40;
    if ( v15 == src )
      goto LABEL_81;
    v37 = (src - v16) >> 3;
    v38 = (v15 - v16) >> 3;
    if ( v37 == v38 - v37 )
    {
      v70 = src - 8 - v16;
      if ( v70 <= 8 || (unsigned __int64)(v16 + 15 - src) <= 0x1E )
      {
        v84 = src;
        v85 = v16;
        do
        {
          v86 = *(_QWORD *)v85;
          v87 = *(_QWORD *)v84;
          v84 += 8;
          v85 += 8;
          *((_QWORD *)v85 - 1) = v87;
          *((_QWORD *)v84 - 1) = v86;
        }
        while ( &src[src - v16] != v84 );
      }
      else
      {
        v71 = 0;
        v72 = (v70 >> 3) + 1;
        do
        {
          v73 = _mm_loadu_si128((const __m128i *)&v16[v71]);
          *(__m128i *)&v16[v71] = _mm_loadu_si128((const __m128i *)&src[v71]);
          *(__m128i *)&src[v71] = v73;
          v71 += 16;
        }
        while ( v71 != 16 * (v72 >> 1) );
        if ( (v72 & 1) != 0 )
        {
          v74 = 8 * (v72 & 0xFFFFFFFFFFFFFFFELL);
          v75 = &src[v74];
          v76 = &v16[v74];
          v77 = *(_QWORD *)v76;
          *(_QWORD *)v76 = *(_QWORD *)v75;
          *(_QWORD *)v75 = v77;
        }
      }
      v10 = src;
      goto LABEL_33;
    }
    v39 = v16;
    v10 = &v16[v15 - src];
    while ( 1 )
    {
      v40 = v38 - v37;
      if ( v37 < (__int64)(v38 - v37) )
        break;
LABEL_58:
      v50 = 8 * v38;
      v51 = &v39[8 * v38];
      if ( v40 == 1 )
      {
        v82 = *(void **)&v39[v50 - 8];
        if ( v50 - 8 <= 8 )
        {
          if ( v50 == 16 )
            *((_QWORD *)v51 - 1) = *(_QWORD *)v39;
        }
        else
        {
          srcd = *(void **)&v39[v50 - 8];
          memmove(v39 + 8, v39, v50 - 8);
          v82 = srcd;
        }
        *(_QWORD *)v39 = v82;
        goto LABEL_33;
      }
      v52 = 8 * v37;
      srcb = &v39[8 * v37];
      if ( v37 > 0 )
      {
        if ( (unsigned __int64)(v37 - 1) <= 1 )
        {
          v66 = &v39[8 * v37];
          v67 = 0;
        }
        else
        {
          v53 = v50 - 16;
          v54 = v52 - 16;
          if ( v50 - 16 >= v52 || v54 >= v50 )
          {
            v55 = &v39[v54];
            v56 = 0;
            v57 = &v39[v53];
            v58 = 0;
            do
            {
              v59 = _mm_loadu_si128((const __m128i *)&v55[v58]);
              ++v56;
              *(__m128i *)&v55[v58] = _mm_loadu_si128((const __m128i *)&v57[v58]);
              *(__m128i *)&v57[v58] = v59;
              v58 -= 16;
            }
            while ( (unsigned __int64)v37 >> 1 != v56 );
            if ( (v37 & 1) != 0 )
            {
              v60 = -8LL * (v37 & 0xFFFFFFFFFFFFFFFELL) - 8;
              v61 = &srcb[v60];
              v62 = &v51[v60];
              v63 = *(_QWORD *)v61;
              *(_QWORD *)v61 = *(_QWORD *)v62;
              *(_QWORD *)v62 = v63;
            }
            goto LABEL_67;
          }
          v66 = &v39[8 * v37];
          v67 = 0;
        }
        do
        {
          v68 = *((_QWORD *)v66 - 1);
          v69 = *((_QWORD *)v51 - 1);
          ++v67;
          v66 -= 8;
          v51 -= 8;
          *(_QWORD *)v66 = v69;
          *(_QWORD *)v51 = v68;
        }
        while ( v67 != v37 );
LABEL_67:
        v39 = &srcb[-v52];
        goto LABEL_68;
      }
      v39 += 8 * v37;
LABEL_68:
      v37 = v38 % v40;
      if ( !(v38 % v40) )
        goto LABEL_33;
      v38 = v40;
    }
    while ( v37 != 1 )
    {
      v41 = (unsigned __int64)&v39[8 * v37];
      if ( (__int64)v40 > 0 )
      {
        if ( v40 - 1 <= 1 || v41 < (unsigned __int64)(v39 + 16) && 8 * v37 + 16 > 0 )
        {
          for ( i = 0; i != v40; ++i )
          {
            v65 = *(_QWORD *)&v39[8 * i];
            *(_QWORD *)&v39[8 * i] = *(_QWORD *)(v41 + 8 * i);
            *(_QWORD *)(v41 + 8 * i) = v65;
          }
        }
        else
        {
          v42 = 0;
          v43 = 0;
          do
          {
            v44 = _mm_loadu_si128((const __m128i *)&v39[v42]);
            ++v43;
            *(__m128i *)&v39[v42] = _mm_loadu_si128((const __m128i *)(v41 + v42));
            *(__m128i *)(v41 + v42) = v44;
            v42 += 16;
          }
          while ( v40 >> 1 != v43 );
          if ( (v40 & 1) != 0 )
          {
            v45 = 8 * (v40 & 0xFFFFFFFFFFFFFFFELL);
            v46 = (_QWORD *)(v45 + v41);
            v47 = &v39[v45];
            v48 = *(_QWORD *)v47;
            *(_QWORD *)v47 = *v46;
            *v46 = v48;
          }
        }
        v39 += 8 * v40;
      }
      v49 = v38 % v37;
      if ( !(v38 % v37) )
        goto LABEL_33;
      v38 = v37;
      v37 -= v49;
      v40 = v38 - v37;
      if ( v37 >= (__int64)(v38 - v37) )
        goto LABEL_58;
    }
    v79 = 8 * v38;
    v80 = *(void **)v39;
    v81 = 8 * v38 - 8;
    if ( v81 <= 8 )
    {
      if ( 8 * v38 == 16 )
        *(_QWORD *)v39 = *((_QWORD *)v39 + 1);
    }
    else
    {
      v103 = 8 * v38;
      srcc = *(void **)v39;
      memmove(v39, v39 + 8, v81);
      v80 = srcc;
      v79 = v103;
    }
    *(_QWORD *)&v39[v79 - 8] = v80;
LABEL_33:
    src = v15;
LABEL_17:
    sub_3CEA40((_DWORD)v97, (_DWORD)v16, (_DWORD)v10, v100, v98, (_DWORD)a6, a7, v14);
    v28 = v90;
    a3 = v88;
    if ( v91 <= v90 )
      v28 = v91;
    a4 = v89;
    if ( a7 < v28 )
    {
      v97 = v10;
      v13 = v90;
      if ( v91 < v90 )
        continue;
LABEL_21:
      v29 = src;
      v16 = v97;
      v15 = &src[8 * (v91 / 2)];
      v98 = v91 / 2;
      v30 = (src - v97) >> 3;
      if ( src - v97 <= 0 )
      {
        LODWORD(v100) = 0;
      }
      else
      {
        v31 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, char *, char *, unsigned __int8 (__fastcall *)(_QWORD, _QWORD)))v14;
        v32 = v97;
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = v30 >> 1;
            v34 = &v32[8 * (v30 >> 1)];
            if ( v31(*(_QWORD *)v15, *(_QWORD *)v34, a3, v29, v12) )
              break;
            v32 = v34 + 8;
            v30 = v30 - v33 - 1;
            if ( v30 <= 0 )
              goto LABEL_25;
          }
          if ( !v33 )
            break;
          v30 >>= 1;
        }
LABEL_25:
        v16 = v32;
        v14 = (__int64)v31;
        v90 -= (v16 - v97) >> 3;
        v100 = (v16 - v97) >> 3;
      }
      v23 = v91 / 2;
      v91 -= v91 / 2;
      if ( v98 < v90 )
        goto LABEL_10;
      goto LABEL_27;
    }
    break;
  }
  v11 = src;
  v9 = a6;
  v12 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))v14;
LABEL_39:
  sub_3CE010(v10, v11, v101, v90, v91, v9, v12);
}

