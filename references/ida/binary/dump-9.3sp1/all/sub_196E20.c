__int64 __fastcall sub_196E20(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v11; // rbp
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // edx
  int v18; // eax
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // r10
  _QWORD *v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  char v27; // r11
  _DWORD *v28; // r10
  __int64 v29; // rsi
  _DWORD *v30; // rax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r13
  __m128i v42; // xmm1
  __m128i v43; // xmm2
  __int64 v44; // r10
  __int64 v45; // rsi
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rdx
  int v50; // ebx
  _DWORD *v51; // r9
  __int64 v52; // rdi
  _DWORD *v53; // rdx
  int v54; // edi
  __int64 v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  char v58; // r13
  char v59; // al
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 v65; // xmm1_8
  __int64 v66; // rcx
  __int32 v67; // r8d
  __int64 v68; // xmm2_8
  __int64 v69; // r10
  __int32 v70; // r13d
  __int64 v71; // rbp
  __int64 v72; // r12
  __int64 v73; // rbx
  __int64 v74; // r15
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  __int64 v78; // rdi
  size_t v80; // r13
  void *v81; // [rsp+8h] [rbp-80h]
  __m128i v82; // [rsp+10h] [rbp-78h] BYREF
  __int64 v83; // [rsp+20h] [rbp-68h]
  __m128i v84; // [rsp+28h] [rbp-60h] BYREF
  __int64 v85; // [rsp+38h] [rbp-50h]
  __int64 v86; // [rsp+40h] [rbp-48h]
  int v87; // [rsp+4Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 64LL) + 144LL) <= a4 )
    return 0;
  v8 = *(_QWORD **)(v7 + 24);
  v11 = a1;
  v12 = (_DWORD *)*v8;
  v13 = *v8 + 4LL * v8[1];
  if ( *v8 == v13 )
    goto LABEL_74;
  v14 = (_DWORD *)*v8;
  while ( a3 != *v14 )
  {
    if ( (_DWORD *)v13 == ++v14 )
      goto LABEL_74;
  }
  if ( (_DWORD *)v13 == v14 )
  {
LABEL_74:
    *(_DWORD *)(a1 + 96) = -1;
    return 0;
  }
  v15 = v14 - v12;
  *(_DWORD *)(a1 + 96) = v15;
  v16 = (unsigned int)v15;
  if ( (_DWORD)v15 == -1 )
    return 0;
  v17 = *(_DWORD *)(a2 + 36);
  v18 = *(_DWORD *)(v7 + 40);
  if ( v17 != v18 && v17 != 2 * v18 )
    return 0;
  *(_QWORD *)(a1 + 88) = a4;
  v20 = *(_DWORD *)(v7 + 40);
  if ( (*(_BYTE *)(a2 + 4) & 0x10) == 0 || (v21 = a4, v20 > 7) )
  {
    v21 = a4;
    if ( *(_DWORD *)(a2 + 36) == 2 * v20 )
    {
      v58 = sub_11CC50((unsigned __int8 *)(a2 + 32), *(_QWORD *)(a1 + 8));
      v59 = sub_11CC50((unsigned __int8 *)(a2 + 64), *(_QWORD *)(a1 + 8));
      v21 = *(_QWORD *)(a1 + 88);
      v16 = *(unsigned int *)(a1 + 96);
      if ( v58 != v59 )
      {
        v21 += *(int *)(*(_QWORD *)(a1 + 56) + 40LL);
        *(_QWORD *)(a1 + 88) = v21;
      }
    }
  }
  v22 = *(_QWORD **)(a1 + 64);
  v23 = &v22[7 * *(_QWORD *)(a1 + 72)];
  if ( v23 != v22 )
  {
    a6 = (unsigned int)a4;
    do
    {
      while ( 1 )
      {
        v24 = *((unsigned int *)v22 + 10);
        if ( v21 != *((_DWORD *)v22 + 11) + (_DWORD)v24 * (_DWORD)v16 )
          break;
        if ( (unsigned __int64)(unsigned int)v16 >= v22[1] )
          goto LABEL_75;
        v25 = (_QWORD *)(*v22 + 8LL * (int)v16);
        if ( !*v25 )
        {
          *v25 = a2;
          LODWORD(v24) = *((_DWORD *)v22 + 10);
        }
        if ( *(_DWORD *)(a2 + 36) != 2 * (_DWORD)v24 )
          return 1;
        v57 = (_QWORD *)v22[3];
        a5 = (unsigned int)(v24 + a3);
        v28 = (_DWORD *)*v57;
        v29 = *v57 + 4LL * v57[1];
        if ( v29 == *v57 )
          return 1;
        v27 = 1;
LABEL_27:
        v30 = v28;
        while ( *v30 != (_DWORD)a5 )
        {
          if ( ++v30 == (_DWORD *)v29 )
            goto LABEL_35;
        }
        if ( (_DWORD *)v29 != v30 )
        {
          v31 = a4;
          v32 = v30 - v28;
          if ( a4 == *(_QWORD *)(v11 + 88) )
            v31 = v24 + a4;
          if ( (_DWORD)v32 != -1 && *((_DWORD *)v22 + 11) + (_DWORD)v32 * (_DWORD)v24 == v31 )
          {
            v56 = (_QWORD *)(*v22 + 8LL * (int)v32);
            if ( !*v56 )
LABEL_55:
              *v56 = a2;
            return 1;
          }
        }
LABEL_35:
        if ( v27 )
          return 1;
LABEL_36:
        v22 += 7;
        v21 = *(_QWORD *)(v11 + 88);
        v16 = *(unsigned int *)(v11 + 96);
        if ( v23 == v22 )
          goto LABEL_37;
      }
      if ( *(_DWORD *)(a2 + 36) == 2 * (_DWORD)v24 )
      {
        v26 = (_QWORD *)v22[3];
        a5 = (unsigned int)(a3 + v24);
        v27 = 0;
        v28 = (_DWORD *)*v26;
        v29 = *v26 + 4LL * v26[1];
        if ( v29 == *v26 )
          goto LABEL_36;
        goto LABEL_27;
      }
      v22 += 7;
    }
    while ( v23 != v22 );
  }
LABEL_37:
  v33 = *(_QWORD *)(v11 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 32) + 64LL) + 144LL) <= v21 )
    return 0;
  v34 = *(_DWORD *)(v33 + 40);
  v35 = *(_QWORD *)(v33 + 24);
  v81 = nullptr;
  v36 = (unsigned int)(v34 * v16);
  *(_DWORD *)(v33 + 44) = v21 - v36;
  v37 = (unsigned int)(*(_DWORD *)(v35 + 8) * v34);
  *(_DWORD *)(v33 + 48) = v37;
  v38 = *(_QWORD *)(v11 + 56);
  v39 = *(_QWORD *)(v38 + 8);
  v82.m128i_i64[0] = v39;
  if ( v39 )
  {
    v80 = 8 * v39;
    v81 = (void *)qalloc_or_throw(8 * v39, v36, v37, v35);
    memcpy(v81, *(const void **)v38, v80);
  }
  v40 = *(_QWORD *)(v11 + 72);
  v41 = *(_QWORD *)(v11 + 80);
  v42 = _mm_loadl_epi64((const __m128i *)(v38 + 24));
  v43 = _mm_loadl_epi64((const __m128i *)(v38 + 32));
  v44 = *(_QWORD *)(v38 + 40);
  a5 = *(unsigned int *)(v38 + 48);
  if ( v41 < v40 + 1 )
  {
    v85 = *(_QWORD *)(v38 + 40);
    v84.m128i_i32[2] = a5;
    v84.m128i_i64[0] = v43.m128i_i64[0];
    v83 = v42.m128i_i64[0];
    v61 = qvector_reserve(v11 + 64, 0, v40 + 1, 56);
    v62 = *(_QWORD *)(v11 + 72);
    v45 = v61;
    v63 = *(_QWORD *)(v11 + 80);
    *(_QWORD *)(v11 + 80) = v41;
    v64 = *(_QWORD *)(v11 + 64);
    v65 = v83;
    v66 = v62 - 1;
    v82.m128i_i64[1] = v63;
    v67 = v84.m128i_i32[2];
    v68 = v84.m128i_i64[0];
    v69 = v85;
    if ( v66 >= 0 )
    {
      v83 = v45;
      v70 = v84.m128i_i32[2];
      v85 = v11;
      v71 = v45;
      v86 = a2;
      v72 = v66;
      v87 = a3;
      v73 = v64;
      v74 = v69;
      v84.m128i_i64[0] = v65;
      v84.m128i_i64[1] = v68;
      do
      {
        v75 = *(_QWORD *)v73;
        v76 = _mm_loadu_si128((const __m128i *)(v73 + 8));
        *(_QWORD *)v73 = 0;
        *(_QWORD *)(v73 + 16) = 0;
        *(_QWORD *)v71 = v75;
        *(__m128i *)(v71 + 8) = v76;
        v77 = _mm_loadu_si128((const __m128i *)(v73 + 24));
        *(_QWORD *)(v71 + 40) = *(_QWORD *)(v73 + 40);
        LODWORD(v75) = *(_DWORD *)(v73 + 48);
        *(__m128i *)(v71 + 24) = v77;
        *(_DWORD *)(v71 + 48) = v75;
        v78 = *(_QWORD *)v73;
        if ( *(_QWORD *)v73 )
        {
          *(_QWORD *)(v73 + 8) = 0;
          qfree(v78);
        }
        v73 += 56;
        v71 += 56;
      }
      while ( v72-- != 0 );
      v11 = v85;
      v69 = v74;
      v45 = v83;
      v67 = v70;
      v68 = v84.m128i_i64[1];
      v65 = v84.m128i_i64[0];
      a2 = v86;
      a3 = v87;
      v64 = *(_QWORD *)(v85 + 64);
    }
    v86 = v69;
    LODWORD(v85) = v67;
    v83 = v45;
    v84.m128i_i64[1] = v68;
    v84.m128i_i64[0] = v65;
    qfree(v64);
    v44 = v86;
    a5 = (unsigned int)v85;
    *(_QWORD *)(v11 + 80) = v82.m128i_i64[1];
    v43 = _mm_loadl_epi64((const __m128i *)&v84.m128i_u64[1]);
    v40 = *(_QWORD *)(v11 + 72);
    v42 = _mm_loadl_epi64(&v84);
    *(_QWORD *)(v11 + 64) = v45;
  }
  else
  {
    v45 = *(_QWORD *)(v11 + 64);
  }
  v46 = _mm_loadl_epi64(&v82);
  v23 = v81;
  v47 = v45 + 56 * v40;
  *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v46, v46);
  *(_QWORD *)v47 = v81;
  *(_QWORD *)(v47 + 40) = v44;
  *(_DWORD *)(v47 + 48) = a5;
  *(__m128i *)(v47 + 24) = _mm_unpacklo_epi64(v42, v43);
  v48 = *(_QWORD *)(v11 + 72) + 1LL;
  *(_QWORD *)(v11 + 72) = v48;
  v24 = *(_QWORD *)(v11 + 64) + 56 * v48 - 56;
  v22 = (_QWORD *)*(unsigned int *)(v11 + 96);
  v16 = *(unsigned int *)(v24 + 40);
  if ( *(_QWORD *)(v11 + 88) == *(_DWORD *)(v24 + 44) + (_DWORD)v16 * *(_DWORD *)(v11 + 96) )
  {
    if ( (unsigned __int64)(unsigned int)v22 >= *(_QWORD *)(v24 + 8) )
LABEL_75:
      sub_1954A0(v23, v16, v22, v24, a5, a6);
    v60 = (_QWORD *)(*(_QWORD *)v24 + 8LL * (int)v22);
    if ( !*v60 )
    {
      *v60 = a2;
      LODWORD(v16) = *(_DWORD *)(v24 + 40);
    }
    if ( *(_DWORD *)(a2 + 36) != 2 * (_DWORD)v16 )
      return 1;
    result = 1;
  }
  else
  {
    if ( 2 * (_DWORD)v16 != *(_DWORD *)(a2 + 36) )
      return 0;
    result = 0;
  }
  v49 = *(_QWORD **)(v24 + 24);
  v50 = v16 + a3;
  v51 = (_DWORD *)*v49;
  v52 = *v49 + 4LL * v49[1];
  if ( *v49 != v52 )
  {
    v53 = (_DWORD *)*v49;
    while ( v50 != *v53 )
    {
      if ( (_DWORD *)v52 == ++v53 )
        return result;
    }
    if ( (_DWORD *)v52 != v53 )
    {
      v54 = a4;
      v55 = v53 - v51;
      if ( a4 == *(_QWORD *)(v11 + 88) )
        v54 = v16 + a4;
      if ( (_DWORD)v55 != -1 && *(_DWORD *)(v24 + 44) + (_DWORD)v55 * (_DWORD)v16 == v54 )
      {
        v56 = (_QWORD *)(*(_QWORD *)v24 + 8LL * (int)v55);
        if ( !*v56 )
          goto LABEL_55;
        return 1;
      }
    }
  }
  return result;
}
