__int64 __fastcall sub_B3CD90(__int64 a1, int *a2, _DWORD *a3, double a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v9; // rcx
  __int64 v10; // r14
  double v11; // xmm0_8
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  __int64 result; // rax
  __m128 v18; // xmm0
  unsigned __int64 v20; // xmm3_8
  int i; // eax
  __int64 v22; // rdx
  __int64 v23; // r12
  _DWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // r9d
  int v28; // r13d
  unsigned int v29; // edx
  unsigned int v30; // r8d
  __int64 v31; // r11
  double v32; // xmm2_8
  unsigned int *v33; // r12
  double v34; // xmm1_8
  __int64 v35; // rsi
  int v36; // edi
  unsigned int *v37; // r10
  _DWORD *v38; // rdx
  unsigned int v39; // eax
  double v40; // xmm5_8
  int *v41; // rsi
  __m128 v42; // xmm1
  int *v43; // r12
  unsigned __int64 v44; // xmm4_8
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdi
  _DWORD *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // r9d
  int v52; // ebp
  unsigned int v53; // edx
  unsigned int v54; // r8d
  __int64 v55; // r11
  double v56; // xmm2_8
  unsigned int *v57; // rbx
  double v58; // xmm1_8
  __int64 v59; // rsi
  int v60; // edi
  unsigned int *v61; // r10
  _DWORD *v62; // rdx
  unsigned int v63; // eax
  double v64; // xmm0_8
  __int64 v65; // [rsp+8h] [rbp-48h]
  __int64 v66; // [rsp+8h] [rbp-48h]
  int v67; // [rsp+10h] [rbp-40h]
  int v68; // [rsp+10h] [rbp-40h]
  int v69; // [rsp+14h] [rbp-3Ch]
  int v70; // [rsp+14h] [rbp-3Ch]

  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 8);
  *a3 = 0;
  v11 = 32767.0 * *(double *)(v9 + 488);
  v12 = 214013 * *(_DWORD *)(v10 + 7504) + 2531011;
  *(_DWORD *)(v10 + 7504) = v12;
  if ( (int)(HIWORD(v12) & 0x7FFF) >= (int)v11 )
    goto LABEL_4;
  v13 = *(_QWORD *)(v10 + 8560);
  v14 = 214013 * v12 + 2531011;
  *(_DWORD *)(v10 + 7504) = v14;
  v15 = HIWORD(v14) & 0x7FFF;
  if ( !v13 )
    BUG();
  v16 = v15 % *(_DWORD *)(v13 - 4);
  *a2 = v16;
  result = (unsigned int)(2 * v16);
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 8848) + result) )
  {
LABEL_4:
    v18 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 32));
    v20 = _mm_movehl_ps(a7, v18).m128_u64[0];
    for ( i = *(_DWORD *)(v18.m128_u64[0] - 4); ; i = *(_DWORD *)(v18.m128_u64[0] - 4) )
    {
      if ( i == 1 )
      {
        *a2 = 0x7FFFFFFF;
        v41 = a2;
        goto LABEL_24;
      }
      v23 = *(unsigned int *)(v18.m128_u64[0] + 4);
      v24 = (_DWORD *)(v20 + 4 * v23);
      if ( i == 2 )
      {
        *v24 = 0;
        --*(_DWORD *)(v18.m128_u64[0] - 4);
      }
      else
      {
        v25 = *(unsigned int *)(v18.m128_u64[0] + 4LL * (unsigned int)(i - 1));
        *(_DWORD *)(v18.m128_u64[0] + 4) = v25;
        *(_DWORD *)(v20 + 4 * v25) = 1;
        *v24 = 0;
        v26 = *(unsigned int *)(v18.m128_u64[0] + 4);
        v27 = *(_DWORD *)(v18.m128_u64[0] - 4) - 1;
        *(_DWORD *)(v18.m128_u64[0] - 4) = v27;
        v28 = v26;
        if ( v27 <= 2 )
        {
          v38 = (_DWORD *)(v18.m128_u64[0] + 4);
          v30 = 1;
        }
        else
        {
          v29 = 2;
          v30 = 1;
          v67 = v26;
          v31 = **(_QWORD **)(a1 + 24);
          v65 = v26;
          v69 = v23;
          v32 = *(double *)(v31 + 8 * v26);
          while ( 1 )
          {
            v39 = v29 + 1;
            v37 = (unsigned int *)(v18.m128_u64[0] + 4LL * v29);
            v35 = *v37;
            v40 = *(double *)(v31 + 8 * v35);
            v36 = *v37;
            if ( v27 <= (int)(v29 + 1)
              || (v33 = (unsigned int *)(v18.m128_u64[0] + 4LL * v39), v34 = *(double *)(v31 + 8LL * *v33), v34 <= v40) )
            {
              v39 = v29;
              v38 = (_DWORD *)(v18.m128_u64[0] + 4LL * v30);
              if ( v40 <= v32 )
              {
LABEL_18:
                v28 = v67;
                v26 = v65;
                LODWORD(v23) = v69;
                goto LABEL_19;
              }
            }
            else
            {
              v35 = *v33;
              v36 = *v33;
              v37 = (unsigned int *)(v18.m128_u64[0] + 4LL * v39);
              v38 = (_DWORD *)(v18.m128_u64[0] + 4LL * v30);
              if ( v34 <= v32 )
                goto LABEL_18;
            }
            *v38 = v36;
            v29 = 2 * v39;
            *(_DWORD *)(v20 + 4 * v35) = v30;
            if ( v27 <= (int)(2 * v39) )
              break;
            v30 = v39;
          }
          v28 = v67;
          v38 = v37;
          v30 = v39;
          v26 = v65;
          LODWORD(v23) = v69;
        }
LABEL_19:
        *v38 = v28;
        *(_DWORD *)(v20 + 4 * v26) = v30;
      }
      v22 = *(_QWORD *)(v10 + 8848);
      result = (unsigned int)(2 * v23);
      *a2 = v23;
      if ( !*(_BYTE *)(v22 + result) )
        break;
    }
    v41 = a2;
    if ( (_DWORD)v23 != 0x7FFFFFFF )
      return result;
LABEL_24:
    v42 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 56));
    v43 = v41;
    *(__m128 *)(a1 + 56) = v18;
    v44 = _mm_movehl_ps(a8, v42).m128_u64[0];
    v45 = v42.m128_u64[0];
    *(__m128 *)(a1 + 32) = v42;
    for ( result = *(unsigned int *)(v42.m128_u64[0] - 4); (_DWORD)result != 1; result = *(unsigned int *)(v45 - 4) )
    {
      v47 = *(unsigned int *)(v45 + 4);
      v48 = (_DWORD *)(v44 + 4 * v47);
      if ( (_DWORD)result == 2 )
      {
        *v48 = 0;
        --*(_DWORD *)(v45 - 4);
      }
      else
      {
        v49 = *(unsigned int *)(v45 + 4LL * (unsigned int)(result - 1));
        *(_DWORD *)(v45 + 4) = v49;
        *(_DWORD *)(v44 + 4 * v49) = 1;
        *v48 = 0;
        v50 = *(unsigned int *)(v45 + 4);
        v51 = *(_DWORD *)(v45 - 4) - 1;
        *(_DWORD *)(v45 - 4) = v51;
        v52 = v50;
        if ( v51 <= 2 )
        {
          v62 = (_DWORD *)(v45 + 4);
          v54 = 1;
        }
        else
        {
          v53 = 2;
          v54 = 1;
          v68 = v50;
          v55 = **(_QWORD **)(a1 + 24);
          v66 = v50;
          v70 = v47;
          v56 = *(double *)(v55 + 8 * v50);
          while ( 1 )
          {
            v63 = v53 + 1;
            v61 = (unsigned int *)(v45 + 4LL * v53);
            v59 = *v61;
            v64 = *(double *)(v55 + 8 * v59);
            v60 = *v61;
            if ( v51 <= (int)(v53 + 1)
              || (v57 = (unsigned int *)(v45 + 4LL * v63), v58 = *(double *)(v55 + 8LL * *v57), v58 <= v64) )
            {
              v63 = v53;
              v62 = (_DWORD *)(v45 + 4LL * v54);
              if ( v64 <= v56 )
              {
LABEL_38:
                v52 = v68;
                v50 = v66;
                LODWORD(v47) = v70;
                goto LABEL_39;
              }
            }
            else
            {
              v59 = *v57;
              v60 = *v57;
              v61 = (unsigned int *)(v45 + 4LL * v63);
              v62 = (_DWORD *)(v45 + 4LL * v54);
              if ( v58 <= v56 )
                goto LABEL_38;
            }
            *v62 = v60;
            v53 = 2 * v63;
            *(_DWORD *)(v44 + 4 * v59) = v54;
            if ( v51 <= (int)(2 * v63) )
              break;
            v54 = v63;
          }
          v52 = v68;
          v62 = v61;
          v54 = v63;
          v50 = v66;
          LODWORD(v47) = v70;
        }
LABEL_39:
        *v62 = v52;
        *(_DWORD *)(v44 + 4 * v50) = v54;
      }
      v46 = *(_QWORD *)(v10 + 8848);
      result = (unsigned int)(2 * v47);
      *v43 = v47;
      if ( !*(_BYTE *)(v46 + result) )
        return result;
    }
    *v43 = 0x7FFFFFFF;
  }
  return result;
}

