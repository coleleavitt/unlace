__int64 __fastcall sub_21B80F0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  __m128i v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  int *v24; // rsi
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r12
  int v32; // r13d
  int *v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r12
  int v40; // r11d
  int *v41; // rdi
  _DWORD *v42; // rsi
  _DWORD *v43; // rdx
  int *v44; // rdx
  int v45; // esi
  unsigned int v46; // r10d
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rsi
  int v50; // esi
  int v51; // edx
  int v52; // eax
  __int64 v53; // rdi
  int v54; // r8d
  int v55; // r10d
  int *v56; // r9
  int v57; // r9d
  int *v58; // r10
  __int64 v59; // r9
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  int *v63; // rax
  int *v64; // rcx
  int v65; // r8d
  int *v66; // r11
  int *v67; // r12
  __int64 v68; // r10
  int *i; // rdx
  int *v70; // rax
  int v71; // edx
  unsigned int v72; // r9d
  int *v73; // rsi
  int v74; // edi
  __int64 v75; // rdx
  int v76; // esi
  int v77; // eax
  __int64 v78; // r8
  int v79; // edi
  int v80; // r10d
  __int64 v81; // rdx
  int *v82; // rdx
  __int64 v83; // rax
  int *v84; // rax
  __m128i v85; // [rsp+0h] [rbp-88h] BYREF
  int *v86; // [rsp+18h] [rbp-70h]
  __int64 v87; // [rsp+20h] [rbp-68h]
  int *v88; // [rsp+28h] [rbp-60h]
  int *v89; // [rsp+30h] [rbp-58h]
  int *v90; // [rsp+38h] [rbp-50h]
  __m128 v91[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    sub_2237220(a1 + 8, a1 + 24, v3 + 1, 8);
    v3 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3) = a2;
  v4 = *a2;
  ++*(_DWORD *)(a1 + 16);
  result = sub_21BB380(a2[1], *(unsigned __int16 *)(v4 + 58));
  v9 = result;
  if ( !result )
  {
    v9 = *a2;
    v10 = a2[1];
    goto LABEL_43;
  }
  v10 = v6;
  v11 = sub_21BB380(v6, *(unsigned __int16 *)(result + 58));
  v13 = v11;
  if ( !v11 )
  {
LABEL_11:
    v85.m128i_i64[0] = a1 + 152;
    while ( 1 )
    {
      v31 = *(unsigned int *)(a1 + 168);
      v32 = *(_DWORD *)(v9 + 40);
      v33 = *(int **)(a1 + 152);
      if ( !(_DWORD)v31 )
        goto LABEL_18;
      v7 = (unsigned int)(37 * v32);
      v22 = (unsigned int)(v31 - 1);
      LODWORD(v23) = v22 & (37 * v32);
      v24 = &v33[3 * (unsigned int)v23];
      v25 = *v24;
      if ( *v24 != v32 )
        break;
LABEL_13:
      v26 = 3 * v31;
LABEL_14:
      sub_21B8090(v91, v24, &v33[v26], v85.m128i_i64[0], 1);
      v27 = v91[0].m128_u64[0];
      v28 = *(unsigned __int16 *)(v9 + 56);
      v29 = *(_DWORD *)(a1 + 16) - 1;
      if ( v29 > *(_DWORD *)(v91[0].m128_u64[0] + 4) )
        v29 = *(_DWORD *)(v91[0].m128_u64[0] + 4);
      *(_DWORD *)(v91[0].m128_u64[0] + 4) = v29;
      *(_DWORD *)(v27 + 8) = *(_DWORD *)(a1 + 16);
      result = sub_21BB380(v10, v28);
      v9 = result;
      v10 = v30;
      if ( !result )
        return result;
    }
    v57 = 1;
    v58 = nullptr;
    if ( v25 != -1 )
    {
      while ( 1 )
      {
        if ( !v58 && v25 == -2 )
          v58 = v24;
        v23 = (unsigned int)v22 & ((_DWORD)v23 + v57);
        v24 = &v33[3 * v23];
        v25 = *v24;
        if ( v32 == *v24 )
          goto LABEL_13;
        if ( v25 == -1 )
          break;
        ++v57;
      }
      if ( v58 )
        v24 = v58;
    }
    v51 = *(_DWORD *)(a1 + 160) + 1;
    v8 = (unsigned int)(4 * v51);
    if ( (unsigned int)v8 >= 3 * (int)v31 )
    {
LABEL_18:
      v86 = *(int **)(a1 + 152);
      v34 = (((((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v31 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v31 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v31 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v31 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1);
      v35 = ((v34 >> 16) | v34) + 1;
      if ( (unsigned int)v35 < 0x40 )
        LODWORD(v35) = 64;
      *(_DWORD *)(a1 + 168) = v35;
      v36 = sub_22300B0(12LL * (unsigned int)v35, 4, 64, v33, v7, v8);
      v37 = v86;
      *(_QWORD *)(a1 + 152) = v36;
      if ( v37 )
      {
        v38 = *(unsigned int *)(a1 + 168);
        *(_QWORD *)(a1 + 160) = 0;
        v39 = 3 * v31;
        v40 = v38;
        v41 = &v37[v39];
        v42 = (_DWORD *)(v36 + 12 * v38);
        v43 = (_DWORD *)v36;
        if ( (_DWORD *)v36 != v42 )
        {
          do
          {
            *v43 = -1;
            v43 += 3;
          }
          while ( v42 != v43 );
        }
        v44 = v37;
        for ( LODWORD(v86) = v40 - 1; v41 != v44; *(_QWORD *)(v47 + 4) = v49 )
        {
          while ( 1 )
          {
            v45 = *v44;
            if ( (unsigned int)(*v44 + 2) > 1 )
              break;
            v44 += 3;
            if ( v41 == v44 )
              goto LABEL_30;
          }
          if ( !v40 )
          {
            dword_0 = 0;
            BUG();
          }
          v46 = (37 * v45) & (unsigned int)v86;
          v47 = v36 + 12LL * v46;
          v48 = *(_DWORD *)v47;
          if ( v45 != *(_DWORD *)v47 && v48 != -1 )
          {
            LODWORD(v88) = 1;
            v87 = 0;
            v89 = v44;
            do
            {
              if ( v48 == -2 )
              {
                if ( v87 )
                  v47 = v87;
                v87 = v47;
              }
              v46 = (unsigned int)v86 & ((_DWORD)v88 + v46);
              LODWORD(v88) = (_DWORD)v88 + 1;
              v47 = v36 + 12LL * v46;
              v48 = *(_DWORD *)v47;
              if ( v45 == *(_DWORD *)v47 )
              {
                v44 = v89;
                goto LABEL_29;
              }
            }
            while ( v48 != -1 );
            v44 = v89;
            if ( v87 )
              v47 = v87;
          }
LABEL_29:
          *(_DWORD *)v47 = v45;
          v49 = *(_QWORD *)(v44 + 1);
          v44 += 3;
          ++*(_DWORD *)(a1 + 160);
        }
LABEL_30:
        operator delete(v37, v39 * 4, 4);
        v33 = *(int **)(a1 + 152);
        v50 = *(_DWORD *)(a1 + 168);
        v51 = *(_DWORD *)(a1 + 160) + 1;
      }
      else
      {
        v81 = *(unsigned int *)(a1 + 168);
        *(_QWORD *)(a1 + 160) = 0;
        v50 = v81;
        v33 = (int *)(v36 + 12 * v81);
        if ( (int *)v36 != v33 )
        {
          v82 = (int *)v36;
          do
          {
            *v82 = -1;
            v82 += 3;
          }
          while ( v33 != v82 );
          v33 = (int *)v36;
        }
        v51 = 1;
      }
      if ( !v50 )
        goto LABEL_117;
      v52 = v50 - 1;
      LODWORD(v53) = (v50 - 1) & (37 * v32);
      v24 = &v33[3 * (unsigned int)v53];
      v54 = *v24;
      if ( v32 != *v24 )
      {
        v55 = 1;
        v56 = nullptr;
        if ( v54 != -1 )
        {
          while ( 1 )
          {
            if ( v54 == -2 && !v56 )
              v56 = v24;
            v53 = v52 & (unsigned int)(v53 + v55);
            v24 = &v33[3 * v53];
            v54 = *v24;
            if ( v32 == *v24 )
              break;
            if ( v54 == -1 )
              goto LABEL_39;
            ++v55;
          }
        }
      }
    }
    else
    {
      v59 = (unsigned int)v31 >> 3;
      if ( (int)v31 - *(_DWORD *)(a1 + 164) - v51 <= (unsigned int)v59 )
      {
        LODWORD(v87) = 37 * v32;
        v86 = v33;
        v60 = (((v22 >> 1) | v22) >> 2) | (v22 >> 1) | v22;
        v61 = (((v60 >> 4) | v60) >> 8) | (v60 >> 4) | v60;
        v62 = ((v61 >> 16) | v61) + 1;
        if ( (unsigned int)v62 < 0x40 )
          LODWORD(v62) = 64;
        *(_DWORD *)(a1 + 168) = v62;
        v63 = (int *)sub_22300B0(12LL * (unsigned int)v62, 4, 64, v33, v7, v59);
        v64 = v86;
        v65 = v87;
        v66 = v63;
        *(_QWORD *)(a1 + 152) = v63;
        if ( v64 )
        {
          *(_QWORD *)(a1 + 160) = 0;
          v87 = 12 * v31;
          v67 = &v64[3 * v31];
          v68 = *(unsigned int *)(a1 + 168);
          for ( i = &v63[3 * v68]; i != v63; v63 += 3 )
            *v63 = -1;
          v70 = v64;
          LODWORD(v86) = v68 - 1;
          do
          {
            while ( 1 )
            {
              v71 = *v70;
              if ( (unsigned int)(*v70 + 2) > 1 )
                break;
              v70 += 3;
              if ( v67 == v70 )
                goto LABEL_62;
            }
            if ( !(_DWORD)v68 )
            {
              dword_0 = 0;
              BUG();
            }
            v72 = (unsigned int)v86 & (37 * v71);
            v73 = &v66[3 * v72];
            v74 = *v73;
            if ( v71 != *v73 && v74 != -1 )
            {
              LODWORD(v89) = 1;
              v88 = nullptr;
              v90 = v70;
              do
              {
                if ( !v88 )
                {
                  if ( v74 != -2 )
                    v73 = v88;
                  v88 = v73;
                }
                v72 = (unsigned int)v86 & ((_DWORD)v89 + v72);
                LODWORD(v89) = (_DWORD)v89 + 1;
                v73 = &v66[3 * v72];
                v74 = *v73;
                if ( v71 == *v73 )
                {
                  v70 = v90;
                  goto LABEL_61;
                }
              }
              while ( v74 != -1 );
              v70 = v90;
              if ( v88 )
                v73 = v88;
            }
LABEL_61:
            *v73 = v71;
            v75 = *(_QWORD *)(v70 + 1);
            v70 += 3;
            ++*(_DWORD *)(a1 + 160);
            *(_QWORD *)(v73 + 1) = v75;
          }
          while ( v67 != v70 );
LABEL_62:
          LODWORD(v86) = v65;
          operator delete(v64, v87, 4);
          v76 = *(_DWORD *)(a1 + 168);
          v33 = *(int **)(a1 + 152);
          v65 = (int)v86;
          v51 = *(_DWORD *)(a1 + 160) + 1;
        }
        else
        {
          v83 = *(unsigned int *)(a1 + 168);
          *(_QWORD *)(a1 + 160) = 0;
          v76 = v83;
          v33 = &v66[3 * v83];
          if ( v66 != v33 )
          {
            v84 = v66;
            do
            {
              *v84 = -1;
              v84 += 3;
            }
            while ( v33 != v84 );
            v33 = v66;
          }
          v51 = 1;
        }
        if ( !v76 )
        {
LABEL_117:
          ++*(_DWORD *)(a1 + 160);
          BUG();
        }
        v77 = v76 - 1;
        LODWORD(v78) = (v76 - 1) & v65;
        v24 = &v33[3 * (unsigned int)v78];
        v79 = *v24;
        if ( v32 != *v24 )
        {
          v80 = 1;
          v56 = nullptr;
          if ( v79 != -1 )
          {
            while ( 1 )
            {
              if ( !v56 && v79 == -2 )
                v56 = v24;
              v78 = v77 & (unsigned int)(v78 + v80);
              v24 = &v33[3 * v78];
              v79 = *v24;
              if ( v32 == *v24 )
                break;
              if ( v79 == -1 )
              {
LABEL_39:
                if ( v56 )
                  v24 = v56;
                break;
              }
              ++v80;
            }
          }
        }
      }
    }
    *(_DWORD *)(a1 + 160) = v51;
    if ( *v24 != -1 )
      --*(_DWORD *)(a1 + 164);
    *v24 = v32;
    *(_QWORD *)(v24 + 1) = 0xFFFFFFFFLL;
    v26 = 3LL * *(unsigned int *)(a1 + 168);
    goto LABEL_14;
  }
  v10 = v12;
  v14 = sub_21BB380(v12, *(unsigned __int16 *)(v11 + 58));
  v9 = v14;
  if ( !v14 )
  {
    v9 = v13;
    goto LABEL_11;
  }
  v10 = v15;
  result = sub_21BB380(v15, *(unsigned __int16 *)(v14 + 58));
  v17 = result;
  if ( result )
  {
    v10 = v16;
    result = sub_21BB380(v16, *(unsigned __int16 *)(result + 58));
    v9 = result;
    if ( result )
    {
      v10 = v18;
      v19.m128i_i64[0] = sub_21BB380(v18, *(unsigned __int16 *)(result + 58));
      v85 = v19;
      v20 = _mm_load_si128(&v85);
      result = v20.m128i_i64[0];
      v91[0] = (__m128)v20;
      if ( v20.m128i_i64[0] )
      {
        result = sub_11BAC70(v91);
        v9 = result;
        v10 = v21;
      }
    }
    else
    {
      v9 = v17;
    }
  }
LABEL_43:
  if ( v9 )
    goto LABEL_11;
  return result;
}
