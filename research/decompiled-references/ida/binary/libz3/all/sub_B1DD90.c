__m128i *__fastcall sub_B1DD90(__m128i *a1, __int64 *a2, unsigned int a3, __m128i a4, __m128 a5)
{
  char **exception; // r12
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned int *v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // edx
  _DWORD *v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // r14
  unsigned int *v18; // r12
  char *v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int *v22; // r14
  char *v23; // rbp
  double v24; // xmm0_8
  unsigned int v25; // ebx
  unsigned int *v26; // rax
  unsigned int v27; // edx
  unsigned int *v28; // rdi
  __int64 v29; // rcx
  unsigned int v30; // edx
  unsigned int *v31; // rax
  unsigned int v32; // r8d
  unsigned int *v33; // rdi
  __int64 v34; // rcx
  unsigned int *v35; // r14
  unsigned int v36; // r15d
  char v37; // al
  __int64 v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned int v42; // r14d
  size_t v43; // rsi
  unsigned int *v44; // rax
  int v45; // esi
  _QWORD *v46; // rax
  char *v47; // rbp
  __int64 v48; // rsi
  unsigned int v49; // ebx
  unsigned int *v50; // rax
  unsigned int v51; // edx
  unsigned int *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rdi
  char v55; // al
  __int64 v56; // r13
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  char v60; // al
  unsigned int *v61; // rdi
  __m128i v62; // xmm1
  __m128i v63; // xmm0
  __int64 v64; // rax
  char v65; // al
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rdi
  char v69; // al
  __int64 v70; // r13
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rax
  char v74; // dl
  int v75; // eax
  int v76; // eax
  __int64 *v78; // [rsp+10h] [rbp-A8h]
  unsigned int v79; // [rsp+10h] [rbp-A8h]
  unsigned int v80; // [rsp+10h] [rbp-A8h]
  unsigned int v81; // [rsp+10h] [rbp-A8h]
  __int64 *v82; // [rsp+10h] [rbp-A8h]
  unsigned int v84; // [rsp+1Ch] [rbp-9Ch]
  double v85; // [rsp+20h] [rbp-98h]
  unsigned int v86; // [rsp+28h] [rbp-90h]
  int v87; // [rsp+2Ch] [rbp-8Ch]
  __int64 v88; // [rsp+30h] [rbp-88h]
  double v89; // [rsp+38h] [rbp-80h]
  char v90; // [rsp+48h] [rbp-70h]
  int v91; // [rsp+48h] [rbp-70h]
  char v92; // [rsp+4Fh] [rbp-69h]
  __int64 v93[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a2;
  sub_8F91D0(*a2);
  v7 = *a2;
  v8 = *(_QWORD *)(*a2 + 8840);
  if ( !v8 )
    goto LABEL_88;
  v9 = *(unsigned int *)(v8 - 4);
  if ( !(_DWORD)v9 )
    goto LABEL_88;
  v10 = 0;
  v11 = nullptr;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v8 + 8 * v10);
    v13 = v10;
    if ( v12 && !*(_BYTE *)(*(_QWORD *)(v7 + 8848) + (unsigned int)(2 * v10)) )
    {
      if ( *(_WORD *)(v12 + 4) )
        goto LABEL_11;
      v14 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( !v14 )
        goto LABEL_11;
      if ( *v14 )
        goto LABEL_10;
      v45 = v14[1];
      if ( v45 != 5 && v45 != 6 && v45 != 8 && v45 != 4 && v45 != 9 )
      {
        if ( v45 != 2 )
        {
LABEL_51:
          if ( v14[1] == 7 )
            goto LABEL_15;
          if ( !v11 )
            goto LABEL_53;
          goto LABEL_12;
        }
        v65 = sub_15D2CB0(v6[1], *(_QWORD *)(v12 + 32));
        v13 = v10;
        if ( v65 )
          goto LABEL_15;
        if ( !*(_WORD *)(v12 + 4) )
        {
          v14 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
          if ( v14 )
          {
LABEL_10:
            if ( !*v14 )
              goto LABEL_51;
          }
        }
LABEL_11:
        if ( !v11 )
        {
LABEL_53:
          v81 = v13;
          v46 = (_QWORD *)sub_186B270(0x10u);
          v11 = (unsigned int *)(v46 + 1);
          *v46 = 2;
          v13 = v81;
          v16 = (unsigned int *)(v46 + 1);
LABEL_14:
          *v16 = v13;
          ++*(v11 - 1);
LABEL_15:
          v7 = *v6;
          goto LABEL_16;
        }
LABEL_12:
        v15 = *(v11 - 1);
        if ( (_DWORD)v15 == *(v11 - 2) )
        {
          v42 = (unsigned int)(3 * v15 + 1) >> 1;
          v43 = 4 * v42 + 8;
          if ( 4 * (int)v15 + 8 >= (unsigned int)v43 || (unsigned int)v15 >= v42 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v93, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v93);
            sub_233E40((__int64)v93);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v80 = v13;
          v44 = (unsigned int *)sub_186B300(v11 - 2, v43);
          v11 = v44 + 2;
          *v44 = v42;
          v13 = v80;
          v16 = &v44[v44[1] + 2];
        }
        else
        {
          v16 = &v11[v15];
        }
        goto LABEL_14;
      }
    }
LABEL_16:
    if ( v9 == ++v10 )
      break;
    v8 = *(_QWORD *)(v7 + 8840);
  }
  if ( !v11 )
  {
LABEL_88:
    v79 = 0x7FFFFFFF;
    v18 = nullptr;
    goto LABEL_83;
  }
  v17 = *(v11 - 1);
  v18 = &v11[v17];
  if ( v11 != &v11[v17] )
  {
    v19 = (char *)(v11 + 1);
    _BitScanReverse64(&v20, (v17 * 4) >> 2);
    sub_B1ED00(v11, &v11[v17], 2LL * (int)v20, v7);
    if ( (unsigned __int64)v17 <= 16 )
    {
      if ( v17 != 1 )
      {
        v82 = v6;
        v47 = (char *)v11;
        do
        {
          while ( 1 )
          {
            v48 = *(_QWORD *)(v7 + 8880);
            a4 = (__m128i)*(unsigned __int64 *)(v48 + 8LL * *(unsigned int *)v19);
            v49 = *(_DWORD *)v19;
            if ( *(double *)a4.m128i_i64 > *(double *)(v48 + 8LL * *(unsigned int *)v47) )
              break;
            v50 = (unsigned int *)(v19 - 4);
            v51 = *((_DWORD *)v19 - 1);
            if ( *(double *)a4.m128i_i64 <= *(double *)(v48 + 8LL * v51) )
            {
              *(_DWORD *)v19 = v49;
            }
            else
            {
              do
              {
                v50[1] = v51;
                v52 = v50;
                v53 = *--v50;
                v51 = v53;
              }
              while ( *(double *)a4.m128i_i64 > *(double *)(v48 + 8 * v53) );
              *v52 = v49;
            }
            v19 += 4;
            if ( v18 == (unsigned int *)v19 )
              goto LABEL_64;
          }
          if ( v19 - v47 <= 4 )
          {
            if ( v19 - v47 == 4 )
              *(_DWORD *)v19 = *(_DWORD *)v47;
          }
          else
          {
            memmove(v47 + 4, v47, v19 - v47);
          }
          v19 += 4;
          *(_DWORD *)v47 = v49;
        }
        while ( v18 != (unsigned int *)v19 );
LABEL_64:
        v11 = (unsigned int *)v47;
        v6 = v82;
      }
    }
    else
    {
      v78 = v6;
      v21 = *(_QWORD *)(v7 + 8880);
      v22 = v11 + 16;
      v23 = (char *)v11;
      do
      {
        while ( 1 )
        {
          v24 = *(double *)(v21 + 8LL * *(unsigned int *)v19);
          v25 = *(_DWORD *)v19;
          if ( v24 > *(double *)(v21 + 8LL * *(unsigned int *)v23) )
            break;
          v26 = (unsigned int *)(v19 - 4);
          v27 = *((_DWORD *)v19 - 1);
          if ( v24 <= *(double *)(v21 + 8LL * v27) )
          {
            *(_DWORD *)v19 = v25;
          }
          else
          {
            do
            {
              v26[1] = v27;
              v28 = v26;
              v29 = *--v26;
              v27 = v29;
            }
            while ( v24 > *(double *)(v21 + 8 * v29) );
            *v28 = v25;
          }
          v19 += 4;
          if ( v22 == (unsigned int *)v19 )
            goto LABEL_29;
        }
        if ( v19 - v23 <= 4 )
        {
          if ( v19 - v23 == 4 )
            *(_DWORD *)v19 = *(_DWORD *)v23;
        }
        else
        {
          memmove(v23 + 4, v23, v19 - v23);
          v21 = *(_QWORD *)(v7 + 8880);
        }
        v19 += 4;
        *(_DWORD *)v23 = v25;
      }
      while ( v22 != (unsigned int *)v19 );
LABEL_29:
      v11 = (unsigned int *)v23;
      v6 = v78;
      do
      {
        while ( 1 )
        {
          v30 = *(v22 - 1);
          v31 = v22 - 1;
          a4 = (__m128i)*(unsigned __int64 *)(v21 + 8LL * *v22);
          v32 = *v22;
          if ( *(double *)a4.m128i_i64 > *(double *)(v21 + 8LL * v30) )
            break;
          v61 = v22++;
          *v61 = v32;
          if ( v18 == v22 )
            goto LABEL_33;
        }
        do
        {
          v31[1] = v30;
          v33 = v31;
          v34 = *--v31;
          v30 = v34;
        }
        while ( *(double *)a4.m128i_i64 > *(double *)(v21 + 8 * v34) );
        ++v22;
        *v33 = v32;
      }
      while ( v18 != v22 );
    }
LABEL_33:
    v18 = &v11[*(v11 - 1)];
    if ( v11 != v18 )
    {
      v86 = 0;
      v35 = v11;
      v84 = 0;
      v79 = 0x7FFFFFFF;
      v85 = -1.0;
      while ( 2 )
      {
        v36 = *v35;
        if ( !*(_QWORD *)(*(_QWORD *)(v7 + 8840) + 8LL * *v35) )
          goto LABEL_78;
        v37 = sub_18290A0(v6[1]);
        v7 = *v6;
        if ( !v37 )
          goto LABEL_79;
        sub_8F5330(*v6, a4, a5);
        v38 = *v6;
        if ( *(_QWORD *)(*v6 + 8984) != qword_1C7ED28 || *(_BYTE *)(v38 + 2416) )
        {
          v39 = v6[1];
          v40 = *(_QWORD *)(v39 + 864);
          *a1 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(unsigned __int64)v39);
          if ( !v40 )
            goto LABEL_40;
          goto LABEL_39;
        }
        sub_8EC360(v38);
        v54 = *v6;
        v93[0] = 2;
        v87 = 2 * v36;
        v88 = 2 * v36;
        v55 = *(_BYTE *)(*(_QWORD *)(v54 + 8848) + v88);
        if ( v55 == -1 )
        {
          sub_8E8670(v54, v93, v87 ^ 1);
LABEL_69:
          v54 = *v6;
        }
        else if ( !v55 )
        {
          sub_8F28B0(v54, v87, 2, 1u);
          goto LABEL_69;
        }
        sub_8F5330(v54, a4, a5);
        v56 = *v6;
        if ( *(_QWORD *)(*v6 + 8984) != qword_1C7ED28 )
        {
          *(double *)a4.m128i_i64 = sub_B1DC70(v6);
          sub_8F7780(v56, 1u);
          v57 = *v6;
LABEL_72:
          v58 = *(_QWORD *)(v57 + 8848);
          v59 = v57;
          v93[0] = 2;
          v60 = *(_BYTE *)(v58 + (v87 ^ 1u));
          if ( v60 == -1 )
          {
            sub_8E8670(v57, v93, v87);
LABEL_75:
            v59 = *v6;
          }
          else if ( !v60 )
          {
            sub_8F28B0(v57, v87 ^ 1, 2, 0);
            goto LABEL_75;
          }
          sub_8F5330(v59, a4, a5);
          goto LABEL_77;
        }
        v90 = *(_BYTE *)(v56 + 2416);
        *(double *)a4.m128i_i64 = sub_B1DC70(v6);
        v89 = *(double *)a4.m128i_i64;
        sub_8F7780(v56, 1u);
        v57 = *v6;
        if ( v90 )
          goto LABEL_72;
        sub_8F5330(v57, a4, a5);
        v66 = *v6;
        if ( *(_QWORD *)(*v6 + 8984) != qword_1C7ED28 || *(_BYTE *)(v66 + 2416) )
        {
          v67 = v6[1];
          v40 = *(_QWORD *)(v67 + 864);
          *a1 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(unsigned __int64)v67);
          if ( v40 )
LABEL_39:
            ++*(_DWORD *)(v40 + 8);
LABEL_40:
          sub_186B220(v11 - 2);
          return a1;
        }
        sub_8EC360(v66);
        v68 = *v6;
        v93[0] = 2;
        v91 = v87 ^ 1;
        v69 = *(_BYTE *)(*(_QWORD *)(v68 + 8848) + (v87 ^ 1u));
        if ( v69 == -1 )
        {
          sub_8E8670(v68, v93, v87);
LABEL_108:
          v68 = *v6;
        }
        else if ( !v69 )
        {
          sub_8F28B0(v68, v91, 2, 1u);
          goto LABEL_108;
        }
        sub_8F5330(v68, a4, a5);
        v70 = *v6;
        if ( *(_QWORD *)(*v6 + 8984) != qword_1C7ED28 )
        {
          *(double *)a4.m128i_i64 = sub_B1DC70(v6);
          sub_8F7780(v70, 1u);
          v71 = *v6;
LABEL_111:
          v72 = *(_QWORD *)(v71 + 8848);
          v73 = v71;
          v93[0] = 2;
          v74 = *(_BYTE *)(v72 + v88);
          if ( v74 == -1 )
          {
            sub_8E8670(v71, v93, v91);
LABEL_114:
            v73 = *v6;
          }
          else if ( !v74 )
          {
            sub_8F28B0(v71, v87, 2, 0);
            goto LABEL_114;
          }
          sub_8F5330(v73, a4, a5);
LABEL_77:
          v7 = *v6;
          goto LABEL_78;
        }
        v92 = *(_BYTE *)(v70 + 2416);
        *(double *)a4.m128i_i64 = sub_B1DC70(v6);
        sub_8F7780(v70, 1u);
        v7 = *v6;
        a5 = (__m128)a4.m128i_u64[0];
        v71 = *v6;
        if ( v92 )
          goto LABEL_111;
        a4 = (__m128i)0x4090000000000000uLL;
        *(double *)a4.m128i_i64 = 1024.0 * v89 * *(double *)a5.m128_u64 + *(double *)a5.m128_u64 + v89;
        a5 = (__m128)0x3FF199999999999AuLL;
        if ( v85 * 1.1 >= *(double *)a4.m128i_i64 )
        {
          *(double *)a5.m128_u64 = 1.1 * *(double *)a4.m128i_i64;
          if ( 1.1 * *(double *)a4.m128i_i64 >= v85 )
          {
            ++v86;
            v75 = 214013 * *(_DWORD *)(v7 + 7504) + 2531011;
            *(_DWORD *)(v7 + 7504) = v75;
            if ( !((HIWORD(v75) & 0x7FFFu) % v86) )
              goto LABEL_126;
            goto LABEL_127;
          }
        }
        if ( *(double *)a4.m128i_i64 <= v85
          || (v76 = 214013 * *(_DWORD *)(v71 + 7504) + 2531011, *(_DWORD *)(v71 + 7504) = v76, (v76 & 0x10000) != 0) )
        {
          ++v84;
        }
        else
        {
          v86 = 0;
LABEL_126:
          v79 = v36;
          v85 = *(double *)a4.m128i_i64;
LABEL_127:
          v84 = 1;
        }
        if ( a3 < v84 )
        {
LABEL_79:
          v18 = v11;
          goto LABEL_83;
        }
LABEL_78:
        if ( v18 == ++v35 )
          goto LABEL_79;
        continue;
      }
    }
  }
  v79 = 0x7FFFFFFF;
LABEL_83:
  v62 = _mm_loadl_epi64((const __m128i *)(v6 + 1));
  if ( *(_QWORD *)(v7 + 8984) != qword_1C7ED28 || *(_BYTE *)(v7 + 2416) )
  {
    v63 = _mm_loadl_epi64((const __m128i *)(v62.m128i_i64[0] + 864));
    v64 = v63.m128i_i64[0];
    if ( !v63.m128i_i64[0] )
      goto LABEL_86;
    goto LABEL_85;
  }
  if ( v79 != 0x7FFFFFFF )
  {
    v63 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v7 + 8840) + 8LL * v79));
    v64 = v63.m128i_i64[0];
    if ( !v63.m128i_i64[0] )
      goto LABEL_86;
LABEL_85:
    ++*(_DWORD *)(v64 + 8);
    goto LABEL_86;
  }
  v63 = _mm_loadl_epi64((const __m128i *)(v62.m128i_i64[0] + 856));
  v64 = v63.m128i_i64[0];
  if ( v63.m128i_i64[0] )
    goto LABEL_85;
LABEL_86:
  *a1 = _mm_unpacklo_epi64(v63, v62);
  if ( v18 )
  {
    v11 = v18;
    goto LABEL_40;
  }
  return a1;
}

