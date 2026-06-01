__int64 __fastcall sub_1D70940(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        __int64 a10,
        __int64 *a11,
        int a12,
        int a13,
        int a14)
{
  __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i *v20; // r13
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 result; // rax
  _DWORD *v28; // rdx
  bool v29; // dl
  __int64 v30; // r14
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128i v33; // xmm0
  int v34; // eax
  __m128i v35; // xmm2
  __m128i v36; // xmm1
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  int v41; // r8d
  int v42; // r9d
  unsigned int v43; // edx
  unsigned int i; // r13d
  char *v45; // rax
  __m128i v46; // xmm3
  __int64 v47; // rax
  void *v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // r12
  int v57; // eax
  __int64 *v58; // rsi
  __int64 v59; // r14
  __int64 v60; // rbx
  unsigned __int8 v61; // al
  unsigned __int8 v62; // r14
  __int64 v63; // r15
  __int64 v64; // rbp
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v74; // [rsp+8h] [rbp-3D0h]
  __int64 v77; // [rsp+30h] [rbp-3A8h]
  unsigned int v78; // [rsp+38h] [rbp-3A0h]
  unsigned int v79; // [rsp+3Ch] [rbp-39Ch]
  const __m128i *v80; // [rsp+40h] [rbp-398h] BYREF
  __int64 v81; // [rsp+48h] [rbp-390h]
  __m128i v82; // [rsp+50h] [rbp-388h] BYREF
  __m128i v83; // [rsp+60h] [rbp-378h] BYREF
  void *v84; // [rsp+78h] [rbp-360h] BYREF
  __m128i v85; // [rsp+80h] [rbp-358h] BYREF
  __m128i v86; // [rsp+90h] [rbp-348h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-338h]
  __m128i v88; // [rsp+B0h] [rbp-328h]
  __int64 v89; // [rsp+C0h] [rbp-318h]
  __m128i v90; // [rsp+D0h] [rbp-308h]
  __int64 v91; // [rsp+E0h] [rbp-2F8h]
  __m128i v92; // [rsp+F0h] [rbp-2E8h] BYREF
  void **p_ptr; // [rsp+100h] [rbp-2D8h]
  __m128i v94; // [rsp+110h] [rbp-2C8h]
  __int64 v95; // [rsp+120h] [rbp-2B8h]
  void *ptr; // [rsp+130h] [rbp-2A8h] BYREF
  __int64 v97; // [rsp+138h] [rbp-2A0h]
  _BYTE v98[96]; // [rsp+140h] [rbp-298h] BYREF
  __int64 v99; // [rsp+1A0h] [rbp-238h] BYREF
  __int64 *v100; // [rsp+1A8h] [rbp-230h]
  __int64 *v101; // [rsp+1B0h] [rbp-228h]
  __int64 v102; // [rsp+1B8h] [rbp-220h]
  __int64 v103; // [rsp+1C0h] [rbp-218h]
  int v104; // [rsp+1C8h] [rbp-210h]
  __int64 *v105; // [rsp+1D0h] [rbp-208h]
  __int64 v106; // [rsp+1D8h] [rbp-200h]
  __int64 v107; // [rsp+1E0h] [rbp-1F8h] BYREF

  v14 = a3;
  v15 = a4;
  LODWORD(v80) = a12;
  LODWORD(v81) = a13;
  v78 = a14 - 1;
  v79 = a14 & 0xFFFFFFFD;
  if ( (a14 & 0xFFFFFFFD) != 0 )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_16:
    if ( a6 != v15 )
    {
      v28 = (_DWORD *)(a5 + 24 * v15);
      if ( (*v28 & 0x7FFFFFFF) != 9 || 3LL * (unsigned int)v28[1] )
        return 16;
    }
    return 0;
  }
  v29 = sub_1D36810(a3, a4);
  result = 0;
  if ( !v29 )
  {
    if ( v15 )
    {
LABEL_3:
      v77 = v15;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = v14 + 24 * v18;
        if ( (*(_DWORD *)v19 & 0x7FFFFFFF) == 9 )
        {
          v14 = *(_QWORD *)(v19 + 8);
          v77 = *(unsigned int *)(v19 + 4);
          if ( !(24 * v77) )
            goto LABEL_15;
          v20 = *(__m128i **)(v19 + 8);
          v16 = 0;
        }
        else
        {
          v20 = (__m128i *)(v14 + 24LL * v16);
        }
        v21 = v17;
        if ( sub_F1D570((__int64)v20) )
        {
          v30 = v17;
LABEL_26:
          v80 = &v92;
          v31 = _mm_loadh_ps((const double *)&v80);
          v80 = (const __m128i *)&v99;
          v83 = (__m128i)v31;
          v32 = _mm_loadh_ps((const double *)&v80);
          v80 = &v86;
          v82 = (__m128i)v32;
          sub_F1DF30((__int64)&v86, v20->m128i_i64, v22, v23);
          v33 = _mm_load_si128(&v86);
          v105 = &v107;
          v99 = a1;
          v101 = a11;
          v89 = v87;
          v91 = v87;
          v34 = *(_DWORD *)(a2 + 20);
          v102 = a10;
          v106 = 0x200000000LL;
          v100 = (__int64 *)a2;
          LODWORD(v81) = v34;
          v88 = v33;
          v103 = 0;
          v104 = 0;
          v90 = v33;
          sub_1504FB0((__int64 *)&v84, v34 & 0x1FFFFFFF, 0);
          v35 = _mm_load_si128(&v82);
          v36 = _mm_load_si128(&v83);
          ptr = v98;
          p_ptr = &ptr;
          v97 = 0x400000000LL;
          v92 = v35;
          v85 = v36;
          sub_1D6A330(
            (__int64)&v85,
            (unsigned __int64 ***)&v85.m128i_i64[1],
            v37,
            v38,
            v39,
            v40,
            v90.m128i_i64[0],
            v90.m128i_i64[1],
            v91);
          v43 = v97;
          for ( i = v106; (_DWORD)v97; v43 = v97 )
          {
            v45 = (char *)ptr + 24 * v43;
            v46 = _mm_loadu_si128((const __m128i *)(v45 - 24));
            v47 = *((_QWORD *)v45 - 1);
            LODWORD(v97) = v43 - 1;
            v94 = v46;
            v95 = v47;
            sub_1D6A330(
              (__int64)&v85,
              (unsigned __int64 ***)&v85.m128i_i64[1],
              v43 - 1,
              (int)ptr,
              v41,
              v42,
              v46.m128i_i64[0],
              v46.m128i_i64[1],
              v47);
          }
          if ( ptr != v98 )
            free(ptr);
          v48 = v84;
          if ( ((unsigned __int8)v84 & 1) == 0 && v84 )
          {
            if ( *(void **)v84 != (char *)v84 + 16 )
              free(*(void **)v84);
            operator delete(v48, 0x48u);
          }
          v49 = i;
          sub_1D37560(&v99, i);
          if ( a6 != v30 )
          {
            if ( v78 <= 1 )
            {
              if ( v79 )
              {
                v67 = a5;
                do
                {
                  v68 = v67 + 24 * v30;
                  v50 = *(_DWORD *)v68 & 0x7FFFFFFF;
                  if ( (_DWORD)v50 == 9 )
                  {
                    v67 = *(_QWORD *)(v68 + 8);
                    v69 = 24LL * *(unsigned int *)(v68 + 4);
                    v50 = 0xAAAAAAAAAAAAAAABLL * (v69 >> 3);
                    a6 = v50;
                    if ( !v69 )
                      break;
                    v17 = 0;
                  }
                  if ( v104 && (unsigned int)v103 >= v104 - 1 )
                    break;
                  if ( !sub_F1D570(v67 + 24LL * v17) )
                  {
LABEL_81:
                    v57 = 16;
                    goto LABEL_48;
                  }
                  v49 = a2;
                  v57 = sub_1D70320(
                          a1,
                          a2,
                          v80,
                          a10,
                          a13,
                          a11,
                          *(double *)v33.m128i_i64,
                          *(double *)v36.m128i_i64,
                          v35,
                          *(_QWORD *)(v67 + 24LL * v17),
                          *(__int64 **)(v67 + 24LL * v17 + 8));
                  if ( v57 )
                    goto LABEL_48;
                  v30 = ++v17;
                  sub_1D38630((__int64)&v99);
                }
                while ( a6 != v17 );
              }
              else
              {
                v64 = a6;
                v65 = a5;
                v66 = v30;
                do
                {
                  v50 = v65 + 24 * v66;
                  if ( (*(_DWORD *)v50 & 0x7FFFFFFF) == 9 )
                  {
                    v65 = *(_QWORD *)(v50 + 8);
                    v64 = *(unsigned int *)(v50 + 4);
                    if ( !(24 * v64) )
                      break;
                    v17 = 0;
                  }
                  if ( v104 && v104 - 1 <= (unsigned int)v103 )
                    break;
                  if ( !sub_F1D570(v65 + 24LL * v17) )
                    *(_BYTE *)(a10 + 21) = 1;
                  v49 = a2;
                  v57 = sub_1D70320(
                          a1,
                          a2,
                          v80,
                          a10,
                          a13,
                          a11,
                          *(double *)v33.m128i_i64,
                          *(double *)v36.m128i_i64,
                          v35,
                          *(_QWORD *)(v65 + 24LL * v17),
                          *(__int64 **)(v65 + 24LL * v17 + 8));
                  if ( v57 )
                    goto LABEL_48;
                  sub_1D38630((__int64)&v99);
                  v66 = ++v17;
                }
                while ( v64 != v17 );
              }
            }
            else if ( v79 )
            {
              v70 = a5;
              do
              {
                v71 = v70 + 24 * v30;
                v50 = *(_DWORD *)v71 & 0x7FFFFFFF;
                if ( (_DWORD)v50 == 9 )
                {
                  v70 = *(_QWORD *)(v71 + 8);
                  v72 = 24LL * *(unsigned int *)(v71 + 4);
                  v50 = 0xAAAAAAAAAAAAAAABLL * (v72 >> 3);
                  a6 = v50;
                  if ( !v72 )
                    break;
                  v17 = 0;
                }
                if ( v104 && (unsigned int)v103 >= v104 - 1 )
                  break;
                if ( !sub_F1D570(v70 + 24LL * v17) )
                  goto LABEL_81;
                v49 = a2;
                v57 = sub_1D70320(
                        a1,
                        a2,
                        v80,
                        a10,
                        a13,
                        a11,
                        *(double *)v33.m128i_i64,
                        *(double *)v36.m128i_i64,
                        v35,
                        *(_QWORD *)(v70 + 24LL * v17),
                        *(__int64 **)(v70 + 24LL * v17 + 8));
                if ( v57 )
                  goto LABEL_48;
                v30 = ++v17;
                sub_1D38630((__int64)&v99);
              }
              while ( a6 != v17 );
            }
            else
            {
              v54 = v30;
              v55 = a6;
              v56 = a5;
              do
              {
                v50 = v56 + 24 * v54;
                if ( (*(_DWORD *)v50 & 0x7FFFFFFF) == 9 )
                {
                  v56 = *(_QWORD *)(v50 + 8);
                  v55 = *(unsigned int *)(v50 + 4);
                  if ( !(24 * v55) )
                    break;
                  v17 = 0;
                }
                if ( v104 && (unsigned int)v103 >= v104 - 1 )
                  break;
                sub_F1D570(v56 + 24LL * v17);
                v49 = a2;
                v57 = sub_1D70320(
                        a1,
                        a2,
                        v80,
                        a10,
                        a13,
                        a11,
                        *(double *)v33.m128i_i64,
                        *(double *)v36.m128i_i64,
                        v35,
                        *(_QWORD *)(v56 + 24LL * v17),
                        *(__int64 **)(v56 + 24LL * v17 + 8));
                if ( v57 )
                  goto LABEL_48;
                sub_1D38630((__int64)&v99);
                v54 = ++v17;
              }
              while ( v17 != v55 );
            }
          }
          v57 = 0;
          if ( !HIBYTE(v103) )
            v57 = sub_1D3CBA0((__int64)&v99, v49, v50, v51, v52, v53);
LABEL_48:
          v74 = v57;
          sub_1D36980((__int64)&v99);
          return v74;
        }
        if ( a6 == v17 )
          break;
        v24 = a5 + 24LL * v17;
        if ( (*(_DWORD *)v24 & 0x7FFFFFFF) == 9 )
        {
          a5 = *(_QWORD *)(v24 + 8);
          a6 = *(unsigned int *)(v24 + 4);
          if ( !(24 * a6) )
            break;
          v24 = *(_QWORD *)(v24 + 8);
          v21 = 0;
          v17 = 0;
        }
        if ( sub_F1D570(v24) )
        {
          v58 = (__int64 *)v24;
          result = 16;
          v59 = v21;
          v60 = v77;
          if ( v78 <= 1 )
          {
            sub_F1DF30((__int64)&v99, v58, v25, v26);
            v61 = v81;
            LODWORD(v80) = v17;
            v81 = v59;
            v62 = v61;
            while ( 1 )
            {
              result = sub_1D70320(a1, a2, (const __m128i *)(v14 + 24LL * v16), a10, v62, a11, a7, a8, a9, v99, v100);
              if ( (_DWORD)result )
                break;
              if ( ++v16 == v60 )
                break;
              v63 = v14 + 24LL * v16;
              if ( (*(_DWORD *)v63 & 0x7FFFFFFF) == 9 )
              {
                v14 = *(_QWORD *)(v63 + 8);
                v60 = *(unsigned int *)(v63 + 4);
                if ( !(24 * v60) )
                  return result;
                v63 = *(_QWORD *)(v63 + 8);
                v16 = 0;
              }
              if ( sub_F1D570(v63) )
              {
                v20 = (__m128i *)v63;
                v30 = v81;
                v17 = (unsigned int)v80;
                goto LABEL_26;
              }
            }
          }
          return result;
        }
        result = sub_1D70320(a1, a2, v20, a10, a13, a11, a7, a8, a9, *(_QWORD *)v24, *(__int64 **)(v24 + 8));
        if ( (_DWORD)result )
          return result;
        ++v17;
        v18 = ++v16;
        if ( v16 == v77 )
        {
LABEL_15:
          v15 = v17;
          if ( !v79 )
            return 0;
          goto LABEL_16;
        }
      }
      if ( v78 <= 1 )
        return 0;
      if ( !(_BYTE)v80 )
        return 0;
      return 16;
    }
    return 0;
  }
  return result;
}
