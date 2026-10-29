__int64 __fastcall sub_21AC40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int *a7,
        int *a8,
        int *a9,
        int *a10,
        int *a11,
        int *a12)
{
  __m128i v12; // xmm5
  __int64 v13; // r15
  int v14; // ebp
  __int64 v16; // r11
  int v17; // ebx
  int *v18; // r13
  int v19; // edx
  int *v20; // rcx
  unsigned __int64 v21; // r10
  __int64 v22; // rdi
  int *v23; // rax
  int v24; // esi
  __int64 v25; // rax
  int *v26; // r10
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r12d
  int v31; // ecx
  _DWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r11
  _DWORD *v35; // rax
  int v36; // edx
  int v37; // eax
  unsigned int v38; // eax
  double v39; // xmm3_8
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // esi
  __int64 v44; // r14
  int *v45; // rbp
  __int64 v46; // r13
  int *v47; // r11
  int v48; // ecx
  __int64 v49; // r10
  int v50; // ecx
  int v51; // r9d
  _DWORD *v52; // rsi
  __int64 v53; // rdx
  __int64 i; // rax
  int v55; // r8d
  double *v56; // rax
  __int64 v57; // xmm2_8
  double v58; // xmm0_8
  int v59; // edx
  __int64 v60; // rax
  int *v61; // rdx
  __int64 v62; // rax
  __int64 v64; // rdi
  int v65; // r8d
  double v66; // xmm4_8
  __int64 v67; // rcx
  __int64 *v68; // rdi
  __int64 v69; // xmm1_8
  int *v70; // rax
  int v71; // ecx
  __int64 v72; // [rsp+8h] [rbp-110h]
  __int64 v73; // [rsp+10h] [rbp-108h]
  int *v74; // [rsp+18h] [rbp-100h]
  __int64 v75; // [rsp+18h] [rbp-100h]
  __int64 v76; // [rsp+20h] [rbp-F8h]
  __int64 v77; // [rsp+28h] [rbp-F0h]
  int v78; // [rsp+34h] [rbp-E4h]
  __int64 v79; // [rsp+38h] [rbp-E0h]
  int *v80; // [rsp+40h] [rbp-D8h]
  int *v81; // [rsp+40h] [rbp-D8h]
  __int64 v82; // [rsp+40h] [rbp-D8h]
  int *v84; // [rsp+50h] [rbp-C8h]
  __int64 v85; // [rsp+50h] [rbp-C8h]
  int v86; // [rsp+58h] [rbp-C0h]
  unsigned int v87; // [rsp+5Ch] [rbp-BCh]
  __int64 v88; // [rsp+60h] [rbp-B8h]
  __int64 v89; // [rsp+68h] [rbp-B0h]
  int v91; // [rsp+78h] [rbp-A0h]
  int v92; // [rsp+7Ch] [rbp-9Ch]
  int v93; // [rsp+80h] [rbp-98h]
  int v94; // [rsp+84h] [rbp-94h]
  double v95; // [rsp+88h] [rbp-90h]
  __m128i v96; // [rsp+90h] [rbp-88h]
  __m128i v97; // [rsp+90h] [rbp-88h]
  int v98; // [rsp+90h] [rbp-88h]
  __int64 v99; // [rsp+B0h] [rbp-68h]
  int v100; // [rsp+B0h] [rbp-68h]
  __int64 v101; // [rsp+B8h] [rbp-60h]
  unsigned int v102; // [rsp+C0h] [rbp-58h]
  int v103; // [rsp+C4h] [rbp-54h]
  int v105; // [rsp+D0h] [rbp-48h]

  v72 = *(_QWORD *)(a1 + 160);
  v95 = *(double *)a1;
  v79 = *(_QWORD *)(a1 + 72);
  v77 = *(_QWORD *)(a1 + 40);
  v73 = *(_QWORD *)(a1 + 168);
  v88 = *(_QWORD *)(a1 + 48);
  v76 = *(_QWORD *)(a1 + 56);
  v89 = *(_QWORD *)(a1 + 64);
  v101 = *(_QWORD *)(a1 + 80);
  v91 = *(_DWORD *)(a1 + 240);
  v86 = *a8;
  v87 = *a7;
  v103 = *a10;
  v92 = *a9;
  v94 = *a11;
  v105 = *a12;
  v78 = *(_DWORD *)(a1 + 260) - *a12 + 1;
  if ( *(int *)(v79 + 4) > 0 )
  {
    v12 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    v13 = *(_QWORD *)(a1 + 176);
    v14 = *(_DWORD *)(v79 + 4);
    v102 = 0;
    v93 = -1;
    while ( 1 )
    {
      v74 = (int *)(v77 + 4LL * v14);
      v16 = *(int *)(v72 + 4LL * *v74);
      v17 = *(_DWORD *)(v72 + 4LL * *v74);
      v18 = (int *)(v89 + 4 * v16);
      v19 = *(_DWORD *)(4 * v16 + v88);
      v84 = (int *)(4 * v16 + v88);
      if ( v19 < v19 + *v18 )
      {
        v20 = (int *)(v73 + 4LL * v19);
        v21 = v73 + 4 * (v19 + (unsigned __int64)(unsigned int)(*v18 - 1)) + 4;
        do
        {
          v22 = *v20;
          v23 = (int *)(a2 + 8 * v22);
          v24 = v23[1];
          v25 = *v23;
          if ( v24 > 0 )
            *(_DWORD *)(a2 + 8LL * v24) = v25;
          else
            *(_DWORD *)(v79 + 4LL * *(int *)(v76 + 4 * v22)) = v25;
          if ( (int)v25 > 0 )
            *(_DWORD *)(a2 + 8 * v25 + 4) = v24;
          ++v20;
        }
        while ( (int *)v21 != v20 );
      }
      v26 = (int *)(a3 + 8 * v16);
      v27 = v26[1];
      if ( v27 <= v91 )
      {
        v28 = *v26;
        if ( v27 <= 0 )
          *(_DWORD *)(v101 + 4LL * *v18) = v28;
        else
          *(_DWORD *)(a3 + 8LL * v27) = v28;
        if ( (int)v28 > 0 )
          *(_DWORD *)(a3 + 8 * v28 + 4) = v27;
      }
      v29 = 4LL * v19;
      v30 = *v18 - 1;
      v31 = v19 + v30;
      v32 = (_DWORD *)(v73 + v29);
      if ( v19 <= v19 + v30 && *v32 != v14 )
      {
        v33 = v73 + v29 + 4;
        do
        {
          ++v19;
          v32 = (_DWORD *)v33;
          if ( v31 < v19 )
            break;
          v33 += 4;
        }
        while ( *(_DWORD *)(v33 - 4) != v14 );
      }
      v34 = a2 + 8LL * v14;
      v35 = (_DWORD *)(v73 + 4LL * v31);
      *v32 = *v35;
      *v35 = 0;
      LODWORD(v35) = *(_DWORD *)(a1 + 296);
      v36 = (_DWORD)v35 + 1;
      LODWORD(v35) = ~(_DWORD)v35;
      *(_DWORD *)(a1 + 296) = v36;
      *(_DWORD *)(v34 + 4) = (_DWORD)v35;
      v26[1] = (int)v35;
      if ( v30 + v86 < v78 )
        break;
      v80 = v26;
      v96 = v12;
      if ( v30 + v92 >= v78 )
        return (unsigned int)-5;
      v37 = c_ekkrwcs(a1, v13, v72, v77, v76, a4, a5);
      ++v94;
      v103 += v86 - v37;
      v86 = v37 - 1;
      v26 = v80;
      v34 = a2 + 8LL * v14;
      v12 = v96;
      if ( (int)(v30 + v87) >= v78 )
        goto LABEL_24;
LABEL_25:
      *v18 = 0;
      v39 = *(double *)(v13 + 8LL * *v74);
      if ( v95 > COERCE_DOUBLE(*(_QWORD *)&v39 & v12.m128i_i64[0]) )
      {
        v102 = 7;
        *(_DWORD *)(v34 + 4) = ~v91;
        v26[1] = ~v91;
        ++*a6;
      }
      if ( v30 > 0 )
      {
        v105 += v30;
        v92 -= v30;
        v40 = *(_DWORD *)(a1 + 304) + 1;
        *(_DWORD *)(a1 + 304) = v40;
        *(_DWORD *)(v88 + 4LL * v40) = v78 - 1;
        *(_DWORD *)(v101 + 4LL * *(int *)(a1 + 304)) = v14;
        v41 = *v84;
        v42 = v30 + *v84;
        v100 = *v84;
        v43 = *v84;
        v98 = v42;
        if ( *v84 < v42 )
        {
          v75 = v78;
          v85 = a2;
          v44 = v78 - 1LL;
          v45 = (int *)(v73 + 4LL * v41);
          v82 = v44 - (unsigned int)(v42 + ~v43);
          while ( 1 )
          {
            v46 = *v45;
            *v45 = 0;
            v47 = (int *)(v76 + 4 * v46);
            v48 = *v47 - 1;
            *v47 = v48;
            v49 = *(int *)(v77 + 4 * v46);
            v50 = v49 + v48;
            v51 = *(_DWORD *)(v77 + 4 * v46);
            v52 = (_DWORD *)(v72 + 4 * v49);
            if ( (int)v49 > v50 || v17 == *v52 )
            {
              i = *(int *)(v77 + 4 * v46);
              v55 = *(_DWORD *)(v77 + 4 * v46);
            }
            else
            {
              v53 = v72 + 4 * v49 + 4;
              for ( i = (int)v49 + 1; ; ++i )
              {
                v55 = i;
                v52 = (_DWORD *)v53;
                if ( v50 < (int)i )
                  break;
                v53 += 4;
                if ( *v52 == v17 )
                  break;
              }
            }
            v56 = (double *)(v13 + 8 * i);
            v57 = *(_QWORD *)(v13 + 8LL * v50);
            v58 = *v56;
            v59 = *(_DWORD *)(v72 + 4LL * v50);
            *(_QWORD *)v56 = v57;
            *v52 = v59;
            if ( v51 == v55 && *v47 > 1 )
            {
              if ( v51 <= v50 )
              {
                v64 = v49 + 1;
                v65 = v93;
                v66 = 0.0;
                v67 = v49 + 1 + (unsigned int)(v50 - v51);
                while ( 1 )
                {
                  if ( v66 < COERCE_DOUBLE(*(_QWORD *)(v13 + 8 * v49) & v12.m128i_i64[0]) )
                  {
                    *(_QWORD *)&v66 = *(_QWORD *)(v13 + 8 * v49) & v12.m128i_i64[0];
                    v65 = v49;
                  }
                  v49 = v64;
                  if ( v67 == v64 )
                    break;
                  ++v64;
                }
                v93 = v65;
              }
              v68 = (__int64 *)(v13 + 8LL * v93);
              v69 = *v68;
              *v68 = v57;
              *(_QWORD *)v56 = v69;
              v70 = (int *)(v72 + 4LL * v93);
              v71 = *v70;
              *v70 = v59;
              *v52 = v71;
            }
            *(double *)(v13 + 8 * v75 - 8) = -v58 / v39;
            *(_DWORD *)(v73 + 4 * v75 - 4) = v46;
            v60 = *v47;
            if ( (int)v60 > 0 )
            {
              v61 = (int *)(v79 + 4 * v60);
              v62 = *v61;
              *v61 = v46;
              *(_QWORD *)(v85 + 8 * v46) = (unsigned int)v62;
              if ( (_DWORD)v62 )
                *(_DWORD *)(v85 + 8 * v62 + 4) = v46;
            }
            ++v45;
            v75 = v44;
            if ( v82 == v44 )
              break;
            --v44;
          }
          a2 = v85;
          v78 = v100 + v78 - v98;
        }
        ++*(_DWORD *)(a1 + 352);
      }
      v14 = *(_DWORD *)(v79 + 4);
      if ( v14 <= 0 )
        goto LABEL_45;
    }
    if ( (int)(v30 + v87) < v78 )
      goto LABEL_25;
    if ( v30 + v92 >= v78 )
      return (unsigned int)-5;
LABEL_24:
    v99 = v34;
    v81 = v26;
    v97 = v12;
    v38 = c_ekkclco(a1, v73, v88, v89, v87);
    ++v94;
    v34 = v99;
    v26 = v81;
    v87 = v38;
    v12 = v97;
    goto LABEL_25;
  }
  v102 = 0;
LABEL_45:
  *a8 = v86;
  *a7 = v87;
  *a10 = v103;
  *a9 = v92;
  *a11 = v94;
  *a12 = v105;
  return v102;
}

