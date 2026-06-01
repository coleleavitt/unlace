// write access to const memory has been detected, the output may be wrong!
__m128i *__fastcall sub_C2FF90(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128i *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm3
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i *v22; // r14
  _QWORD *v23; // rbx
  _QWORD *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // rax
  __m128i *v28; // rbx
  __m128i *v29; // r14
  __m128i *v30; // r8
  __int32 v31; // eax
  __m128i v32; // xmm0
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  _QWORD *v36; // rdx
  __int64 v37; // r12
  int v38; // ebx
  __m128i *v39; // r14
  __int64 v40; // rdx
  __m128i v41; // rax
  _QWORD *v42; // r15
  __int64 v43; // rdx
  bool v44; // al
  __int64 v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  _QWORD *i; // rdx
  __m128i *result; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i v55; // xmm5
  int v56; // eax
  __m128i v57; // rax
  __m128i *v58; // rbx
  __int64 v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rsi
  _QWORD *v62; // rdx
  __m128i *v63; // rax
  __m128i v64; // xmm2
  __int64 v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rdx
  _QWORD *v73; // rax
  _QWORD *v74; // rcx
  _QWORD *v75; // rdx
  bool v76; // al
  unsigned int v77; // [rsp+8h] [rbp-110h]
  __int64 v78; // [rsp+10h] [rbp-108h]
  int v79; // [rsp+1Ch] [rbp-FCh]
  unsigned int v80; // [rsp+1Ch] [rbp-FCh]
  int v81; // [rsp+1Ch] [rbp-FCh]
  __int64 v82; // [rsp+30h] [rbp-E8h]
  __m128i *v83; // [rsp+38h] [rbp-E0h]
  _QWORD *v84; // [rsp+40h] [rbp-D8h]
  int v85; // [rsp+48h] [rbp-D0h]
  int v86; // [rsp+4Ch] [rbp-CCh]
  __m128i *v87; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v88[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v89; // [rsp+70h] [rbp-A8h]
  __int64 v90; // [rsp+78h] [rbp-A0h]
  _QWORD v91[2]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD *v92; // [rsp+90h] [rbp-88h]
  __int64 v93; // [rsp+98h] [rbp-80h]
  __int64 v94; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-70h]
  _QWORD *v96; // [rsp+B0h] [rbp-68h]
  __int64 v97; // [rsp+B8h] [rbp-60h]
  __m128i v98; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v99; // [rsp+D0h] [rbp-48h] BYREF

  v8 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v8 )
  {
    v87 = nullptr;
LABEL_3:
    v9 = *(_QWORD *)a1;
    v10 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
    v11 = ((v10 >> 16) | v10) + 1;
    if ( (unsigned int)v11 < 0x40 )
      LODWORD(v11) = 64;
    *(_DWORD *)(a1 + 16) = v11;
    v12 = 40LL * (unsigned int)v11;
    *(_QWORD *)a1 = sub_22300B0(v12, 8, 64, a4, a5, a6);
    if ( !v9 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v50 = sub_A4F710();
      v98.m128i_i64[1] = v51;
      v52 = *(unsigned int *)(a1 + 16);
      v98.m128i_i64[0] = v50;
      v53 = *(_QWORD *)a1;
      v54 = *(_QWORD *)a1 + 40 * v52;
      if ( *(_QWORD *)a1 != v54 )
      {
        do
        {
          v55 = _mm_load_si128(&v98);
          v53 += 40;
          v99 = 0u;
          *(__m128i *)(v53 - 40) = v55;
          *(__m128i *)(v53 - 24) = _mm_load_si128(&v99);
        }
        while ( v54 != v53 );
      }
LABEL_44:
      sub_C2F580((__int64 *)a1, (unsigned __int64 *)a2, &v87);
      v56 = *(_DWORD *)(a1 + 8) + 1;
      goto LABEL_45;
    }
    *(_QWORD *)(a1 + 8) = 0;
    v78 = 40 * v8;
    v13 = (__m128i *)(v9 + 40 * v8);
    v14 = sub_A4F710();
    v98.m128i_i64[1] = v15;
    v16 = *(unsigned int *)(a1 + 16);
    v98.m128i_i64[0] = v14;
    v17 = *(_QWORD *)a1;
    v18 = *(_QWORD *)a1 + 40 * v16;
    if ( *(_QWORD *)a1 != v18 )
    {
      do
      {
        v19 = _mm_load_si128(&v98);
        v17 += 40;
        v99 = 0u;
        *(__m128i *)(v17 - 40) = v19;
        *(__m128i *)(v17 - 24) = _mm_load_si128(&v99);
      }
      while ( v18 != v17 );
    }
    v89 = nullptr;
    v88[0] = sub_A4F710();
    v88[1] = v20;
    v90 = 0;
    v92 = nullptr;
    v91[0] = sub_A4F720(v12, 8);
    v91[1] = v21;
    v93 = 0;
    if ( (__m128i *)v9 == v13 )
    {
LABEL_61:
      operator delete(v9, v78, 8);
      goto LABEL_44;
    }
    v22 = (__m128i *)v9;
    v23 = v88;
    while ( 1 )
    {
      if ( sub_A4F650(v22, v23) )
      {
        v33 = v22[1].m128i_i64[1];
        if ( v33 == v90 )
        {
          v34 = (_QWORD *)v22[1].m128i_i64[0];
          v35 = &v34[v33];
          if ( v34 == v35 )
            goto LABEL_18;
          v36 = v89;
          while ( *v34 == *v36 )
          {
            ++v34;
            ++v36;
            if ( v35 == v34 )
              goto LABEL_18;
          }
        }
      }
      v24 = v91;
      if ( !sub_A4F650(v22, v91) )
        goto LABEL_11;
      v65 = v22[1].m128i_i64[1];
      if ( v65 != v93 )
        goto LABEL_11;
      v66 = (_QWORD *)v22[1].m128i_i64[0];
      v24 = &v66[v65];
      if ( v66 != v24 )
      {
        v67 = v92;
        while ( *v66 == *v67 )
        {
          ++v66;
          ++v67;
          if ( v24 == v66 )
            goto LABEL_18;
        }
LABEL_11:
        v79 = *(_DWORD *)(a1 + 16);
        if ( !v79 )
        {
          *(__m128i *)&dword_0 = _mm_loadu_si128(v22);
          *(__m128i *)&word_10 = _mm_loadu_si128(v22 + 1);
          BUG();
        }
        v82 = *(_QWORD *)a1;
        v25 = sub_A4F710();
        v96 = nullptr;
        v94 = v25;
        v95 = v26;
        v97 = 0;
        v27.m128i_i64[0] = sub_A4F720(v22, v24);
        v99 = 0u;
        v98 = v27;
        v84 = v23;
        v28 = v22;
        v85 = 1;
        v83 = nullptr;
        v86 = v79 - 1;
        v80 = (v79 - 1) & sub_C2F3C0((unsigned __int64 *)v22, (__int64)v22[1].m128i_i64);
        while ( 1 )
        {
          v29 = (__m128i *)(v82 + 40LL * v80);
          if ( sub_A4F650(v28, v29) )
          {
            v72 = v28[1].m128i_i64[1];
            if ( v72 == v29[1].m128i_i64[1] )
            {
              v73 = (_QWORD *)v28[1].m128i_i64[0];
              v74 = &v73[v72];
              if ( v73 == v74 )
                goto LABEL_78;
              v75 = (_QWORD *)v29[1].m128i_i64[0];
              if ( *v75 == *v73 )
              {
                while ( 1 )
                {
                  ++v73;
                  ++v75;
                  if ( v74 == v73 )
                    break;
                  if ( *v73 != *v75 )
                    goto LABEL_14;
                }
LABEL_78:
                v30 = (__m128i *)(v82 + 40LL * v80);
                v22 = v28;
                v23 = v84;
                goto LABEL_17;
              }
            }
          }
LABEL_14:
          if ( sub_C0FAA0(v29, &v94) )
            break;
          v76 = sub_C0FAA0(v29, &v98);
          if ( v83 || !v76 )
            v29 = v83;
          v83 = v29;
          v80 = v86 & (v85 + v80);
          ++v85;
        }
        v30 = (__m128i *)(v82 + 40LL * v80);
        v22 = v28;
        v23 = v84;
        if ( v83 )
          v30 = v83;
LABEL_17:
        v31 = v22[2].m128i_i32[0];
        *v30 = _mm_loadu_si128(v22);
        v32 = _mm_loadu_si128(v22 + 1);
        v30[2].m128i_i32[0] = v31;
        v30[1] = v32;
        ++*(_DWORD *)(a1 + 8);
      }
LABEL_18:
      v22 = (__m128i *)((char *)v22 + 40);
      if ( v13 == v22 )
        goto LABEL_61;
    }
  }
  v37 = *(_QWORD *)a1;
  v38 = v8 - 1;
  v39 = nullptr;
  v96 = nullptr;
  v94 = sub_A4F710();
  v95 = v40;
  v97 = 0;
  v41.m128i_i64[0] = sub_A4F720(a1, a2);
  v99 = 0u;
  v98 = v41;
  v81 = 1;
  v77 = v38 & sub_C2F3C0((unsigned __int64 *)a2, (__int64)a2[1].m128i_i64);
  while ( 1 )
  {
    v42 = (_QWORD *)(v37 + 40LL * v77);
    if ( sub_A4F650(a2, v42) )
    {
      v45 = a2[1].m128i_i64[1];
      if ( v45 == v42[3] )
      {
        v46 = (_QWORD *)a2[1].m128i_i64[0];
        v47 = &v46[v45];
        if ( v46 == v47 )
          return (__m128i *)(v42 + 4);
        for ( i = (_QWORD *)v42[2]; *v46 == *i; ++i )
        {
          if ( v47 == ++v46 )
            return (__m128i *)(v42 + 4);
        }
      }
    }
    if ( sub_A4F650(v42, &v94) )
    {
      v43 = v42[3];
      if ( v43 == v97 )
      {
        v68 = (_QWORD *)v42[2];
        a4 = (__int64)&v68[v43];
        if ( v68 == (_QWORD *)a4 )
          goto LABEL_67;
        v69 = v96;
        if ( *v96 == *v68 )
          break;
      }
    }
LABEL_31:
    v44 = sub_C0FAA0(v42, &v98);
    if ( !v39 && v44 )
      v39 = (__m128i *)(v37 + 40LL * v77);
    v77 = v38 & (v81 + v77);
    ++v81;
  }
  while ( 1 )
  {
    ++v68;
    ++v69;
    if ( (_QWORD *)a4 == v68 )
      break;
    if ( *v68 != *v69 )
      goto LABEL_31;
  }
LABEL_67:
  v8 = *(unsigned int *)(a1 + 16);
  if ( !v39 )
    v39 = (__m128i *)(v37 + 40LL * v77);
  v70 = *(_DWORD *)(a1 + 8);
  v87 = v39;
  v56 = v70 + 1;
  if ( 4 * v56 >= (unsigned int)(3 * v8) )
    goto LABEL_3;
  v71 = (unsigned int)v8 >> 3;
  if ( (int)v8 - (v56 + *(_DWORD *)(a1 + 12)) <= (unsigned int)v71 )
  {
    sub_C2F750(a1, v8, v71, a4, a5, a6);
    goto LABEL_44;
  }
LABEL_45:
  *(_DWORD *)(a1 + 8) = v56;
  v57.m128i_i64[0] = sub_A4F710();
  v58 = v87;
  v99 = 0u;
  v98 = v57;
  if ( sub_A4F650(v87, &v98) && (v59 = v58[1].m128i_i64[1], v59 == v99.m128i_i64[1]) )
  {
    v60 = (_QWORD *)v58[1].m128i_i64[0];
    v61 = &v60[v59];
    if ( v60 != v61 )
    {
      v62 = (_QWORD *)v99.m128i_i64[0];
      if ( *v60 != *(_QWORD *)v99.m128i_i64[0] )
        goto LABEL_53;
      while ( 1 )
      {
        ++v60;
        ++v62;
        if ( v61 == v60 )
          break;
        if ( *v60 != *v62 )
          goto LABEL_53;
      }
    }
  }
  else
  {
LABEL_53:
    --*(_DWORD *)(a1 + 12);
  }
  v63 = v87;
  *v87 = _mm_loadu_si128(a2);
  v64 = _mm_loadu_si128(a2 + 1);
  result = v63 + 2;
  result->m128i_i32[0] = 0;
  result[-1] = v64;
  return result;
}
