__int64 __fastcall sub_7A00B0(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __m128i *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 i; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  __m128i *v15; // rbx
  unsigned __int64 v16; // rsi
  __int8 v17; // r9
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // rsi
  __int64 m128i_i64; // r8
  __int64 v28; // rcx
  bool v29; // r9
  __m128i *v30; // r11
  __int64 j; // rdx
  __int64 v32; // rax
  __m128i *v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r12
  unsigned __int64 v36; // r12
  __m128i *v37; // rdx
  __int64 v38; // rbx
  __m128i v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // r14
  __int8 v42; // r11
  __m128i *v43; // rax
  __m128i *v44; // rdx
  unsigned __int64 v45; // r11
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int8 v48; // al
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int8 v54; // si
  __int64 v55; // r8
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 k; // rdx
  __int64 v59; // rcx
  __m128i *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // r9
  unsigned __int64 v63; // r9
  __m128i *v64; // rdx
  __int64 v65; // rsi
  __int8 v66; // r11
  unsigned __int64 v67; // r10
  __m128i v68; // xmm0
  __int64 v69; // rsi
  __int64 v70; // rcx
  __m128i *v71; // rdx
  unsigned __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // [rsp+18h] [rbp-50h]
  __int8 v81; // [rsp+20h] [rbp-48h]
  __int8 v82; // [rsp+20h] [rbp-48h]
  unsigned __int64 v83; // [rsp+28h] [rbp-40h]
  unsigned __int64 v84; // [rsp+28h] [rbp-40h]
  __m128i v85; // [rsp+30h] [rbp-38h] BYREF

  result = (char *)a2 - (char *)a1;
  v6 = a2;
  if ( result <= 512 )
    return result;
  v7 = result;
  v8 = result >> 6;
  for ( i = v7 >> 5; a3; i = ((char *)v15 - (char *)a1) >> 5 )
  {
    v10 = a1[2].m128i_u64[1];
    v11 = v6[-2].m128i_u64[1];
    --a3;
    v12 = &a1[2 * v8];
    v13 = a1[1].m128i_i64[1];
    v14 = a1->m128i_u64[1];
    v15 = a1 + 2;
    v16 = v12->m128i_u64[1];
    v17 = a1->m128i_i8[0];
    if ( v10 >= v16 )
    {
      if ( v10 < v11 )
        goto LABEL_34;
      if ( v16 < v11 )
      {
LABEL_6:
        v18 = a1->m128i_u64[1];
        a1[1].m128i_i64[1] = v6[-1].m128i_i64[1];
        v19 = v6[-1].m128i_i64[0];
        v6[-1].m128i_i64[1] = v13;
        v20 = a1[1].m128i_i64[0];
        a1[1].m128i_i64[0] = v19;
        v6[-1].m128i_i64[0] = v20;
        LOBYTE(v20) = v6[-2].m128i_i8[0];
        a1->m128i_i64[1] = v11;
        v6[-2].m128i_i64[1] = v14;
        v10 = a1->m128i_u64[1];
        a1->m128i_i8[0] = v20;
        v14 = a1[2].m128i_u64[1];
        v6[-2].m128i_i8[0] = v17;
        goto LABEL_7;
      }
    }
    else if ( v16 >= v11 )
    {
      if ( v10 < v11 )
        goto LABEL_6;
LABEL_34:
      v46 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 1), (__m128i)(unsigned __int64)v13);
      v47 = _mm_loadu_si128(a1 + 3);
      v48 = a1[2].m128i_i8[0];
      a1->m128i_i64[1] = v10;
      a1[2].m128i_i64[1] = v14;
      v18 = v6[-2].m128i_u64[1];
      a1->m128i_i8[0] = v48;
      a1[2].m128i_i8[0] = v17;
      a1[1] = v47;
      a1[3] = v46;
      goto LABEL_7;
    }
    a1[1].m128i_i64[1] = v12[1].m128i_i64[1];
    v49 = v12[1].m128i_i64[0];
    v12[1].m128i_i64[1] = v13;
    v50 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = v49;
    v12[1].m128i_i64[0] = v50;
    LOBYTE(v50) = v12->m128i_i8[0];
    a1->m128i_i64[1] = v16;
    v12->m128i_i64[1] = v14;
    v14 = a1[2].m128i_u64[1];
    a1->m128i_i8[0] = v50;
    v18 = v6[-2].m128i_u64[1];
    v12->m128i_i8[0] = v17;
    v10 = a1->m128i_u64[1];
LABEL_7:
    v21 = (unsigned __int64)v6;
    while ( 1 )
    {
      while ( v14 < v10 )
      {
        v14 = v15[2].m128i_u64[1];
        v15 += 2;
      }
      for ( v21 -= 32LL; v10 < v18; v21 -= 32LL )
        v18 = *(_QWORD *)(v21 - 24);
      if ( (unsigned __int64)v15 >= v21 )
        break;
      v22 = v15[1].m128i_i64[1];
      v15 += 2;
      v15[-1].m128i_i64[1] = *(_QWORD *)(v21 + 24);
      v23 = *(_QWORD *)(v21 + 16);
      *(_QWORD *)(v21 + 24) = v22;
      v24 = v15[-1].m128i_i64[0];
      v15[-1].m128i_i64[0] = v23;
      *(_QWORD *)(v21 + 16) = v24;
      LOBYTE(v24) = v15[-2].m128i_i8[0];
      v15[-2].m128i_i64[1] = v18;
      v18 = *(_QWORD *)(v21 - 24);
      *(_QWORD *)(v21 + 8) = v14;
      v15[-2].m128i_i8[0] = *(_BYTE *)v21;
      v14 = v15->m128i_u64[1];
      *(_BYTE *)v21 = v24;
      v10 = a1->m128i_u64[1];
    }
    sub_7A00B0(v15, v6, a3);
    result = (char *)v15 - (char *)a1;
    if ( (char *)v15 - (char *)a1 <= 512 )
      return result;
    v6 = v15;
    v8 = result >> 6;
  }
  v25 = v8 - 1;
  v26 = (i - 1) >> 1;
  m128i_i64 = (__int64)a1[2 * v8 - 2].m128i_i64;
  v28 = v8 - 1;
  v29 = (i & 1) == 0;
  while ( 1 )
  {
    v30 = (__m128i *)m128i_i64;
    v80 = *(_QWORD *)(m128i_i64 + 24);
    v81 = *(_BYTE *)m128i_i64;
    v83 = *(_QWORD *)(m128i_i64 + 8);
    v85.m128i_i64[0] = *(_QWORD *)(m128i_i64 + 16);
    v85.m128i_i64[1] = v80;
    if ( v28 < v26 )
    {
      for ( j = v28; ; j = v32 )
      {
        v32 = 2 * (j + 1);
        v30 = &a1[4 * j + 4];
        v36 = v30->m128i_u64[1];
        if ( v36 < v30[-2].m128i_i64[1] )
        {
          --v32;
          v33 = &a1[2 * j];
          v30 = &a1[2 * v32];
          v34 = v30->m128i_i64[1];
          v33[1].m128i_i64[1] = v30[1].m128i_i64[1];
          v35 = v30[1].m128i_i64[0];
          v33->m128i_i64[1] = v34;
          LOBYTE(v34) = v30->m128i_i8[0];
          v33[1].m128i_i64[0] = v35;
          v33->m128i_i8[0] = v34;
          if ( v32 >= v26 )
            goto LABEL_23;
        }
        else
        {
          v37 = &a1[2 * j];
          v37[1].m128i_i64[1] = v30[1].m128i_i64[1];
          v38 = v30[1].m128i_i64[0];
          v37->m128i_i64[1] = v36;
          v37[1].m128i_i64[0] = v38;
          v37->m128i_i8[0] = v30->m128i_i8[0];
          if ( v32 >= v26 )
            goto LABEL_23;
        }
      }
    }
    v32 = v28;
LABEL_23:
    if ( v25 == v32 && v29 )
    {
      v77 = v32 + 1;
      v32 = 2 * (v32 + 1) - 1;
      v78 = (__int64)a1[4 * v77 - 2].m128i_i64;
      v30[1].m128i_i64[1] = *(_QWORD *)(v78 + 24);
      v30[1].m128i_i64[0] = *(_QWORD *)(v78 + 16);
      v79 = *(_QWORD *)(v78 + 8);
      LOBYTE(v78) = *(_BYTE *)v78;
      v30->m128i_i64[1] = v79;
      v30->m128i_i8[0] = v78;
      v30 = &a1[2 * v32];
    }
    v39 = _mm_load_si128(&v85);
    v40 = (v32 - 1) >> 1;
    if ( v28 >= v32 )
    {
      v30->m128i_i64[1] = v83;
      v30->m128i_i8[0] = v81;
      v30[1] = v39;
      goto LABEL_32;
    }
    while ( 1 )
    {
      v43 = &a1[2 * v32];
      v44 = &a1[2 * v40];
      v45 = v44->m128i_u64[1];
      if ( v45 >= v83 )
        break;
      v43[1].m128i_i64[1] = v44[1].m128i_i64[1];
      v41 = v44[1].m128i_i64[0];
      v43->m128i_i64[1] = v45;
      v42 = v44->m128i_i8[0];
      v43[1].m128i_i64[0] = v41;
      v43->m128i_i8[0] = v42;
      v32 = v40;
      if ( v28 >= v40 )
      {
        v43 = &a1[2 * v40];
        break;
      }
      v40 = (v40 - 1) / 2;
    }
    v43->m128i_i64[1] = v83;
    v43->m128i_i8[0] = v81;
    v43[1] = v39;
    if ( !v28 )
      break;
LABEL_32:
    --v28;
    m128i_i64 -= 32;
  }
  for ( result = (char *)v6 - (char *)a1; (char *)v6 - (char *)a1 > 32; *(__m128i *)(result + 16) = v68 )
  {
    v51 = v6[-1].m128i_i64[1];
    v6 -= 2;
    v52 = v6[1].m128i_i64[0];
    v53 = v6->m128i_i64[1];
    v6[1].m128i_i64[1] = a1[1].m128i_i64[1];
    v54 = v6->m128i_i8[0];
    v6[1].m128i_i64[0] = a1[1].m128i_i64[0];
    v55 = a1->m128i_i64[1];
    v85.m128i_i64[1] = v51;
    v6->m128i_i64[1] = v55;
    v6->m128i_i8[0] = a1->m128i_i8[0];
    v56 = ((char *)v6 - (char *)a1) >> 5;
    v82 = v54;
    v84 = v53;
    v85.m128i_i64[0] = v52;
    v57 = (v56 - 1) / 2;
    if ( (char *)v6 - (char *)a1 > 64 )
    {
      for ( k = 0; ; k = v59 )
      {
        v59 = 2 * (k + 1);
        result = (__int64)a1[4 * k + 4].m128i_i64;
        v63 = *(_QWORD *)(result + 8);
        if ( v63 < *(_QWORD *)(result - 24) )
        {
          --v59;
          v60 = &a1[2 * k];
          result = (__int64)a1[2 * v59].m128i_i64;
          v61 = *(_QWORD *)(result + 8);
          v60[1].m128i_i64[1] = *(_QWORD *)(result + 24);
          v62 = *(_QWORD *)(result + 16);
          v60->m128i_i64[1] = v61;
          LOBYTE(v61) = *(_BYTE *)result;
          v60[1].m128i_i64[0] = v62;
          v60->m128i_i8[0] = v61;
          if ( v59 >= v57 )
            goto LABEL_44;
        }
        else
        {
          v64 = &a1[2 * k];
          v64[1].m128i_i64[1] = *(_QWORD *)(result + 24);
          v65 = *(_QWORD *)(result + 16);
          v64->m128i_i64[1] = v63;
          v64[1].m128i_i64[0] = v65;
          v64->m128i_i8[0] = *(_BYTE *)result;
          if ( v59 >= v57 )
            goto LABEL_44;
        }
      }
    }
    result = (__int64)a1;
    v59 = 0;
LABEL_44:
    if ( (v56 & 1) == 0 && (v56 - 2) / 2 == v59 )
    {
      v73 = v59 + 1;
      v74 = 2 * v73;
      v75 = (__int64)a1[4 * v73 - 2].m128i_i64;
      *(_QWORD *)(result + 24) = *(_QWORD *)(v75 + 24);
      *(_QWORD *)(result + 16) = *(_QWORD *)(v75 + 16);
      v76 = *(_QWORD *)(v75 + 8);
      LOBYTE(v75) = *(_BYTE *)v75;
      *(_QWORD *)(result + 8) = v76;
      v59 = v74 - 1;
      v67 = v84;
      *(_BYTE *)result = v75;
      v69 = (v74 >> 1) - 1;
      v66 = v82;
      v68 = _mm_load_si128(&v85);
LABEL_50:
      while ( 1 )
      {
        v71 = &a1[2 * v69];
        result = (__int64)a1[2 * v59].m128i_i64;
        v72 = v71->m128i_u64[1];
        if ( v72 >= v67 )
          break;
        *(_QWORD *)(result + 24) = v71[1].m128i_i64[1];
        v70 = v71[1].m128i_i64[0];
        *(_QWORD *)(result + 8) = v72;
        *(_QWORD *)(result + 16) = v70;
        *(_BYTE *)result = v71->m128i_i8[0];
        v59 = v69;
        if ( !v69 )
        {
          result = (__int64)a1;
          break;
        }
        v69 = (v69 - 1) / 2;
      }
    }
    else
    {
      v66 = v82;
      v67 = v84;
      v68 = _mm_load_si128(&v85);
      v69 = (v59 - 1) / 2;
      if ( v59 )
        goto LABEL_50;
    }
    *(_QWORD *)(result + 8) = v67;
    *(_BYTE *)result = v66;
  }
  return result;
}

