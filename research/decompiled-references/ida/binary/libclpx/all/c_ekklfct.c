__int64 __fastcall c_ekklfct(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  double v3; // xmm4_8
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // r14d
  int v10; // ebp
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // ebp
  int v14; // r12d
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rbp
  int v29; // ecx
  __int64 v30; // rax
  int v31; // esi
  int v32; // r8d
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rsi
  double v38; // xmm1_8
  __int64 v39; // r8
  __int64 *v40; // r8
  int *v41; // rdi
  __int64 *v42; // rsi
  int *v43; // rdx
  int v44; // r9d
  __int64 v45; // xmm0_8
  unsigned int v46; // edx
  signed int v47; // eax
  int v48; // ecx
  int v49; // esi
  unsigned int v50; // edi
  __m128i v51; // xmm0
  const __m128i *v52; // rdx
  unsigned int v53; // edi
  unsigned int v54; // eax
  __m128i si128; // xmm2
  __m128i v56; // xmm1
  __m128i v57; // xmm2
  unsigned int v58; // ecx
  __m128i v59; // xmm1
  __m128i v60; // xmm0
  __m128i v61; // xmm2
  __m128i v62; // xmm1
  int v63; // eax
  int v64; // ecx
  double v65; // [rsp+0h] [rbp-D8h]
  __int64 v66; // [rsp+8h] [rbp-D0h]
  __int64 v67; // [rsp+10h] [rbp-C8h]
  __int64 v68; // [rsp+18h] [rbp-C0h]
  __int64 v70; // [rsp+20h] [rbp-B8h]
  _DWORD *v71; // [rsp+28h] [rbp-B0h]
  __int64 v72; // [rsp+30h] [rbp-A8h]
  __int64 v73; // [rsp+38h] [rbp-A0h]
  __int64 v74; // [rsp+40h] [rbp-98h]
  __int64 v75; // [rsp+48h] [rbp-90h]
  __int64 v76; // [rsp+50h] [rbp-88h]
  __int64 v77; // [rsp+58h] [rbp-80h]
  __int64 v78; // [rsp+60h] [rbp-78h]
  int v79; // [rsp+8Ch] [rbp-4Ch] BYREF
  unsigned int v80; // [rsp+90h] [rbp-48h] BYREF
  int v81; // [rsp+94h] [rbp-44h] BYREF
  int v82; // [rsp+98h] [rbp-40h] BYREF
  int v83[15]; // [rsp+9Ch] [rbp-3Ch] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(double *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)(a1 + 168);
  v6 = *(_QWORD *)(a1 + 192);
  v67 = *(_QWORD *)a1;
  v7 = *(int *)(a1 + 240);
  v8 = v7 + 1;
  v78 = *(_QWORD *)(a1 + 208);
  v9 = *(_DWORD *)(a1 + 260);
  v10 = *(_DWORD *)(v2 + 4 * (v7 + 1)) - 1;
  v66 = *(_QWORD *)(a1 + 160);
  v77 = *(_QWORD *)(a1 + 40);
  v71 = *(_DWORD **)(a1 + 56);
  v74 = *(_QWORD *)(a1 + 64);
  v75 = *(_QWORD *)(a1 + 72);
  v76 = *(_QWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 200);
  v65 = v3;
  if ( *(int *)(a1 + 372) > 0 && *(int *)(a1 + 272) < 0 )
  {
    *(_QWORD *)a1 = 0x3E45798EE2308C3ALL;
    *(double *)(a1 + 16) = fmin(0.9, 10.0 * v3);
  }
  v70 = v6;
  v73 = v11 - 8;
  v68 = v4;
  *(_DWORD *)(v66 + 4LL * v9) = 1;
  *(_DWORD *)(v5 + 4LL * v9) = 1;
  v72 = v6 - 8;
  *(_QWORD *)(v4 + 8LL * v9) = 0;
  v82 = 0;
  v79 = 0;
  *(_DWORD *)(a1 + 292) = 0;
  result = c_ekktria(a1, (int)v6 - 8, (int)v11 - 8, (int)&v79, (int)&v81, (int)&v80, (__int64)v83, v10);
  v13 = v10 - *(_DWORD *)(a1 + 288);
  *(_DWORD *)(a1 + 284) = v13;
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result && *(int *)(a1 + 272) >= 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(a1 + 296) >= (int)v7 )
    {
      v14 = v9 + 1;
LABEL_8:
      if ( v79 > 0 || (_DWORD)result == 10 )
      {
        result = 99;
      }
      else if ( !(_DWORD)result )
      {
        v18 = *(_DWORD *)(v1 + 304) + 1;
        *(_DWORD *)(v1 + 304) = v18;
        *(_DWORD *)(v2 + 4LL * v18) = v9 - v13;
        if ( v83[0] > 2 )
        {
          v19 = *(_DWORD *)(v1 + 376);
          v20 = v9 - *(_DWORD *)(v1 + 284) + 4 * *(_DWORD *)(v1 + 288) + 1000;
          if ( v20 < v19 )
            v20 = *(_DWORD *)(v1 + 376);
          v21 = (int)((double)v19 * 1.2);
          if ( v20 <= v21 )
            v21 = v20;
          v22 = *(_DWORD *)(v1 + 384);
          *(_DWORD *)(v1 + 376) = v21;
          if ( v22 > 0 && v22 < v21 )
            *(_DWORD *)(v1 + 376) = v22;
        }
        result = c_ekkshff(v1, v73, v72, v80);
        v23 = *(_QWORD *)(v1 + 144);
        v24 = *(_QWORD *)(v1 + 168);
        *(_DWORD *)(v1 + 360) = 0;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v1 + 136) = v24 + 4LL * v14 - 4;
        *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 176) + 8LL * v14 - 8;
      }
      goto LABEL_12;
    }
    v25 = c_ekkford(a1, (int)v71, v74, v75, v76, v72, v73);
    v79 += v25;
    v26 = v68;
    if ( v25 )
    {
      result = 7;
      if ( *(int *)(a1 + 272) >= 0 )
      {
LABEL_12:
        *(_QWORD *)v1 = v67;
        *(double *)(v1 + 16) = v65;
        return result;
      }
    }
    v27 = *(_DWORD *)(a1 + 240);
    if ( v27 > 0 )
    {
      v28 = 4LL * (unsigned int)(v27 - 1) + 8;
      v29 = -1;
      v30 = 4;
      do
      {
        if ( *(int *)(v70 + 2 * v30 - 4) >= 0 )
        {
          v31 = v71[(unsigned __int64)v30 / 4];
          if ( v31 > 1 )
          {
            v32 = *(_DWORD *)(v77 + v30);
            v33 = v32 + v31;
            v34 = v32;
            if ( v32 < v33 )
            {
              v35 = v32;
              v36 = (unsigned int)(v33 - v32 - 1);
              v37 = v34 + 1;
              v38 = 0.0;
              v39 = v34 + 1 + v36;
              while ( 1 )
              {
                if ( v38 < fabs(*(double *)(v26 + 8 * v35)) )
                {
                  v38 = fabs(*(double *)(v26 + 8 * v35));
                  v29 = v35;
                }
                v35 = v37;
                if ( v37 == v39 )
                  break;
                ++v37;
              }
            }
            v40 = (__int64 *)(v26 + 8LL * v29);
            v41 = (int *)(v66 + 4LL * v29);
            v42 = (__int64 *)(v26 + 8 * v34);
            v43 = (int *)(v66 + 4 * v34);
            v44 = *v41;
            v45 = *v40;
            *v40 = *v42;
            *v41 = *v43;
            *v42 = v45;
            *v43 = v44;
          }
        }
        v30 += 4;
      }
      while ( v30 != v28 );
      v1 = a1;
    }
    if ( (int)v7 <= 0x7FFF )
      goto LABEL_45;
    v46 = -(int)((unsigned __int64)(v71 + 1) >> 2) & 3;
    if ( v46 )
    {
      v47 = 0;
      if ( (int)v71[1] >= 0 )
        v47 = v71[1];
      v48 = 2;
      if ( v46 != 1 )
      {
        if ( v47 < v71[2] )
          v47 = v71[2];
        v48 = 3;
        if ( v46 != 2 )
        {
          if ( v47 < v71[3] )
            v47 = v71[3];
          v48 = 4;
        }
      }
    }
    else
    {
      v47 = 0;
      v48 = 1;
    }
    v49 = v7 - v46;
    v50 = v7 - v46;
    v51 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v47), 0);
    v52 = (const __m128i *)&v71[v46 + 1];
    v53 = v50 >> 2;
    v54 = 0;
    do
    {
      si128 = _mm_load_si128(v52);
      ++v54;
      ++v52;
      v56 = _mm_cmpgt_epi32(v51, si128);
      v51 = _mm_or_si128(_mm_and_si128(v51, v56), _mm_andnot_si128(v56, si128));
    }
    while ( v53 > v54 );
    v57 = _mm_srli_si128(v51, 8);
    v58 = (v49 & 0xFFFFFFFC) + v48;
    v59 = _mm_cmpgt_epi32(v57, v51);
    v60 = _mm_or_si128(_mm_andnot_si128(v59, v51), _mm_and_si128(v57, v59));
    v61 = _mm_srli_si128(v60, 4);
    v62 = _mm_cmpgt_epi32(v61, v60);
    v63 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v62, v60), _mm_and_si128(v61, v62)));
    if ( (v49 & 0xFFFFFFFC) != v49 )
    {
      if ( v63 < v71[v58] )
        v63 = v71[v58];
      if ( (int)(v58 + 1) <= (int)v7 )
      {
        if ( v63 < v71[v58 + 1] )
          v63 = v71[v58 + 1];
        if ( (int)v7 >= (int)(v58 + 2) )
        {
          if ( v63 < v71[v58 + 2] )
            v63 = v71[v58 + 2];
          if ( (int)v7 >= (int)(v58 + 3) )
          {
            if ( v63 < v71[v58 + 3] )
              v63 = v71[v58 + 3];
            if ( (int)v7 >= (int)(v58 + 4) )
            {
              if ( v63 < v71[v58 + 4] )
                v63 = v71[v58 + 4];
              if ( (int)v7 >= (int)(v58 + 5) )
              {
                if ( v63 < v71[v58 + 5] )
                  v63 = v71[v58 + 5];
                v64 = v58 + 6;
                if ( (int)v7 >= v64 && v63 < v71[v64] )
                  v63 = v71[v64];
              }
            }
          }
        }
      }
    }
    if ( (int)v7 + v63 - *(_DWORD *)(v1 + 296) <= 0x7FFF )
LABEL_45:
      result = c_ekkcmfc(v1, v72, v73, v78 - 8, v78 - 8 + 8 * v8, v9, &v79, &v82, (int *)&v80, v81, v83);
    else
      result = c_ekkcmfy(v1, v72, v73, v78 - 8, v78 - 8 + 8 * v8, v9, &v79, &v82, (int *)&v80, v81, v83);
    if ( (int)result >= 0 )
    {
      v13 = *(_DWORD *)(v1 + 284);
      v14 = v9 - v13;
      goto LABEL_8;
    }
  }
  v15 = *(_DWORD *)(v1 + 384);
  v16 = *(_DWORD *)(v1 + 376);
  if ( v15 == v16 || !v9 )
  {
    result = 3;
    goto LABEL_12;
  }
  v17 = 2 * v16;
  if ( v15 <= 0 || v15 >= v17 )
  {
    *(_DWORD *)(v1 + 376) = v17;
    return 5;
  }
  else
  {
    *(_DWORD *)(v1 + 376) = v15;
    return 5;
  }
}

