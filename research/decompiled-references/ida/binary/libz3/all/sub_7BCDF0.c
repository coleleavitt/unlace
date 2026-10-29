size_t __fastcall sub_7BCDF0(__int64 a1, __m128i a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v5; // rax
  __m128i *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r13
  const __m128i *v9; // r12
  unsigned __int64 v10; // rdx
  const __m128i *v11; // rsi
  const __m128i *v12; // rdi
  __m128i v13; // xmm0
  __m128i *v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int32 v17; // ecx
  unsigned int v18; // edx
  unsigned int *v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int *v22; // rsi
  unsigned int *v23; // r8
  unsigned __int64 v24; // rdi
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  unsigned int v28; // r12d
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i *v32; // rax
  __m128i *v33; // rcx
  unsigned int v34; // r15d
  unsigned int v35; // esi
  __int64 (__fastcall *v36)(); // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // r13
  __int64 (__fastcall *v39)(_QWORD); // rax
  __int64 v40; // rax
  int v41; // eax
  char v42; // al
  __int64 *v43; // rbx
  __int64 *v44; // r14
  __int64 v45; // r13
  _QWORD *v46; // rax
  _DWORD *v47; // rax
  __int64 v48; // rdx
  int v49; // edi
  __int64 v50; // rax
  unsigned int v51; // ecx
  __m128i *v52; // rax
  unsigned int v53; // edi
  __int64 v54; // rdx
  __int32 v55; // ecx
  unsigned int v56; // ecx
  const __m128i *j; // rdx
  __int32 v58; // eax
  unsigned int v59; // ecx
  const __m128i *i; // rdx
  __int32 v61; // eax
  unsigned int v62; // r15d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rax
  size_t v66; // rax
  size_t v67; // r12
  __int64 v68; // rdx
  __int64 *v69; // rbx
  __int64 *v70; // r15
  unsigned int v71; // ecx
  __int64 (__fastcall *v72)(_QWORD); // rax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 *v78; // rsi
  __m128i *v79; // [rsp+8h] [rbp-70h]
  __m128i *v80; // [rsp+8h] [rbp-70h]
  _DWORD *v81; // [rsp+18h] [rbp-60h] BYREF
  __int64 v82[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 984);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  sub_7BC8D0(a1, (_QWORD *)(a1 + 984));
  if ( *(_BYTE *)(a1 + 996) )
    return 0;
  v6 = *(__m128i **)(a1 + 984);
  if ( !v6 )
    return 0;
  v7 = v6[-1].m128i_u32[3];
  v8 = 8 * v7;
  v9 = (__m128i *)((char *)v6 + 8 * v7);
  if ( v6 == v9 )
    goto LABEL_95;
  _BitScanReverse64(&v10, v8 >> 3);
  sub_7ACBB0(*(unsigned __int32 **)(a1 + 984), (__m128i *)((char *)v6 + 8 * v7), 2LL * (int)v10);
  v11 = (const __m128i *)&v6->m128i_u64[1];
  if ( (unsigned __int64)v8 <= 0x80 )
  {
    if ( v8 != 8 )
    {
      do
      {
        a2 = _mm_loadl_epi64(v11);
        v52 = (__m128i *)v11;
        v11 = (const __m128i *)((char *)v11 + 8);
        v53 = _mm_cvtsi128_si32(a2);
        if ( v6->m128i_i32[0] >= v53 )
        {
          v59 = v11[-1].m128i_u32[0];
          for ( i = v11 - 1; v59 < v53; i = (const __m128i *)((char *)i - 8) )
          {
            v61 = i->m128i_i32[1];
            i->m128i_i32[2] = v59;
            i->m128i_i32[3] = v61;
            v52 = (__m128i *)i;
            v59 = i[-1].m128i_u32[2];
          }
          v52->m128i_i64[0] = a2.m128i_i64[0];
        }
        else
        {
          v54 = ((char *)v52 - (char *)v6) >> 3;
          if ( (char *)v52 - (char *)v6 > 0 )
          {
            do
            {
              v55 = v52[-1].m128i_i32[2];
              v52 = (__m128i *)((char *)v52 - 8);
              v52->m128i_i32[2] = v55;
              v52->m128i_i32[3] = v52->m128i_i32[1];
              --v54;
            }
            while ( v54 );
          }
          v6->m128i_i64[0] = a2.m128i_i64[0];
        }
      }
      while ( v9 != v11 );
    }
  }
  else
  {
    v12 = v6 + 8;
    do
    {
      v13 = _mm_loadl_epi64(v11);
      v14 = (__m128i *)v11;
      v11 = (const __m128i *)((char *)v11 + 8);
      v15 = _mm_cvtsi128_si32(v13);
      if ( v6->m128i_i32[0] >= v15 )
      {
        v56 = v11[-1].m128i_u32[0];
        for ( j = v11 - 1; v56 < v15; j = (const __m128i *)((char *)j - 8) )
        {
          v58 = j->m128i_i32[1];
          j->m128i_i32[2] = v56;
          j->m128i_i32[3] = v58;
          v14 = (__m128i *)j;
          v56 = j[-1].m128i_u32[2];
        }
        v14->m128i_i64[0] = v13.m128i_i64[0];
      }
      else
      {
        v16 = ((char *)v14 - (char *)v6) >> 3;
        if ( (char *)v14 - (char *)v6 > 0 )
        {
          do
          {
            v17 = v14[-1].m128i_i32[2];
            v14 = (__m128i *)((char *)v14 - 8);
            v14->m128i_i32[2] = v17;
            v14->m128i_i32[3] = v14->m128i_i32[1];
            --v16;
          }
          while ( v16 );
        }
        v6->m128i_i64[0] = v13.m128i_i64[0];
      }
    }
    while ( v12 != v11 );
    do
    {
      while ( 1 )
      {
        a2 = _mm_loadl_epi64(v12);
        v18 = v12[-1].m128i_u32[2];
        v19 = &v12[-1].m128i_u32[2];
        v20 = _mm_cvtsi128_si32(a2);
        if ( v18 < v20 )
          break;
        v78 = (__int64 *)v12;
        v12 = (const __m128i *)((char *)v12 + 8);
        *v78 = a2.m128i_i64[0];
        if ( v12 == v9 )
          goto LABEL_16;
      }
      do
      {
        v19[2] = v18;
        v21 = v19[1];
        v22 = v19;
        v19 -= 2;
        v19[5] = v21;
        v18 = *v19;
      }
      while ( *v19 < v20 );
      v12 = (const __m128i *)((char *)v12 + 8);
      *(_QWORD *)v22 = a2.m128i_i64[0];
    }
    while ( v12 != v9 );
  }
LABEL_16:
  v23 = (unsigned int *)v6 + 2 * v6[-1].m128i_u32[3];
  v7 = v6[-1].m128i_u32[3];
  if ( v23 == (unsigned int *)v6 )
  {
LABEL_95:
    if ( !(_DWORD)v7 )
      return 0;
    v24 = *(unsigned int *)(a1 + 808);
    v28 = 0;
    v26 = 0;
    goto LABEL_23;
  }
  v24 = *(unsigned int *)(a1 + 808);
  v25 = (unsigned int *)v6;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    v30 = *v25;
    if ( v27 >= v24 )
      break;
    v25 += 2;
    v29 = v27 + v30;
    ++v28;
    v26 = v27;
    if ( v23 == v25 )
      break;
    v27 = v29;
  }
  if ( v28 == 1 )
    return 0;
  if ( (_DWORD)v7 )
  {
LABEL_23:
    v31 = (unsigned int)(v7 - 1);
    v32 = (__m128i *)((char *)v6 + 8 * v31);
    while ( 1 )
    {
      v33 = v32;
      v26 += v32->m128i_u32[0];
      if ( v26 >= v24 )
        break;
      v6[-1].m128i_i32[3] = v31;
      v32 = (__m128i *)((char *)v32 - 8);
      if ( !(_DWORD)v31 )
        goto LABEL_26;
      v7 = (unsigned int)v31;
      v24 = *(unsigned int *)(a1 + 808);
      LODWORD(v31) = v31 - 1;
    }
    v33 = (__m128i *)((char *)v6 + 8 * v7);
LABEL_26:
    if ( v6 != v33 )
    {
      v34 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v37 = *(_QWORD *)a1;
          v38 = v6->m128i_i64[0];
          v39 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
          if ( v39 == sub_7C55E0 )
            break;
          v80 = v33;
          v41 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __m128i *, __int64 (__fastcall *)()))v39)(
                  a1,
                  HIDWORD(v38),
                  v37,
                  v33,
                  sub_7C5680);
          v37 = *(_QWORD *)a1;
          v33 = v80;
LABEL_36:
          if ( v41 != -1 )
            goto LABEL_30;
          v36 = *(__int64 (__fastcall **)())(v37 + 552);
          if ( v36 != sub_7C5680 )
            goto LABEL_38;
LABEL_32:
          v6 = (__m128i *)((char *)v6 + 8);
          if ( v33 == v6 )
            goto LABEL_39;
        }
        v40 = *(_QWORD *)(a1 + 160);
        if ( !v40 )
        {
          v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * HIDWORD(v38));
          goto LABEL_36;
        }
        v35 = *(_DWORD *)(*(_QWORD *)(v40 + 880) + 4 * (v38 >> 33));
        if ( v35 < *(_DWORD *)(v40 + 888) || ((BYTE4(v38) ^ (unsigned __int8)v35) & 1) == 0 )
LABEL_30:
          ++v34;
        v36 = *(__int64 (__fastcall **)())(v37 + 552);
        if ( v36 == sub_7C5680 )
          goto LABEL_32;
LABEL_38:
        v79 = v33;
        v6 = (__m128i *)((char *)v6 + 8);
        ((void (__fastcall *)(__int64, _QWORD, __int64, __m128i *, __int64 (__fastcall *)()))v36)(
          a1,
          HIDWORD(v38),
          v37,
          v33,
          sub_7C5680);
        v33 = v79;
        if ( v79 == v6 )
        {
LABEL_39:
          v42 = *(_BYTE *)(a1 + 996) | (v34 >= v28);
          goto LABEL_40;
        }
      }
    }
  }
  v42 = v28 == 0;
LABEL_40:
  if ( v42 )
    return 0;
  v81 = nullptr;
  v43 = *(__int64 **)(a1 + 984);
  if ( v43 )
  {
    v44 = &v43[*((unsigned int *)v43 - 1)];
    if ( v44 != v43 )
    {
      v45 = *v43;
      v46 = (_QWORD *)sub_186B270(0x10u);
      *v46 = 2;
      v47 = v46 + 1;
      v81 = v47;
      v48 = (__int64)v47;
      while ( 1 )
      {
        ++v43;
        *v47 = HIDWORD(v45);
        v49 = *(_DWORD *)(v48 - 4);
        v50 = (unsigned int)(v49 + 1);
        *(_DWORD *)(v48 - 4) = v50;
        if ( v44 == v43 )
          break;
        v51 = *(_DWORD *)(v48 - 8);
        v45 = *v43;
        if ( v51 == (_DWORD)v50 )
        {
          v62 = (3 * v51 + 1) >> 1;
          v63 = 4 * v62 + 8;
          if ( 4 * v49 + 12 >= (unsigned int)v63 || v51 >= v62 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v82, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v82);
            sub_233E40((__int64)v82);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (unsigned int *)sub_186B300((void *)(v48 - 8), v63);
          v48 = (__int64)(v64 + 2);
          *v64 = v62;
          v65 = v64[1];
          v81 = (_DWORD *)v48;
          v47 = (_DWORD *)(v48 + 4 * v65);
        }
        else
        {
          v47 = (_DWORD *)(v48 + 4 * v50);
        }
      }
    }
  }
  v66 = sub_7B8AC0(a1, 0xFFFFFFFE, (__int64 *)&v81, v28, 1, a2);
  ++*(_DWORD *)(a1 + 216);
  v67 = v66;
  if ( !v66 )
    goto LABEL_81;
  v68 = (__int64)v81;
  if ( v81 )
  {
    v69 = *(__int64 **)(a1 + 984);
    *(v81 - 1) = 0;
    if ( v69 )
    {
      v70 = &v69[*((unsigned int *)v69 - 1)];
      if ( v69 != v70 )
        goto LABEL_73;
    }
    v75 = *(_QWORD *)(a1 + 24);
LABEL_79:
    v76 = *(unsigned int *)(v68 - 4);
    goto LABEL_80;
  }
  v69 = *(__int64 **)(a1 + 984);
  if ( !v69 || (v70 = &v69[*((unsigned int *)v69 - 1)], v70 == v69) )
  {
    v75 = *(_QWORD *)(a1 + 24);
    v76 = 0;
    goto LABEL_80;
  }
  do
  {
    while ( 1 )
    {
LABEL_73:
      v82[0] = *v69;
      v72 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
      if ( v72 == sub_7C55E0 )
      {
        v73 = *(_QWORD *)(a1 + 160);
        if ( v73 )
        {
          v71 = *(_DWORD *)(*(_QWORD *)(v73 + 880) + 4LL * (HIDWORD(v82[0]) >> 1));
          if ( v71 < *(_DWORD *)(v73 + 888) || (((unsigned __int8)v71 ^ BYTE4(v82[0])) & 1) == 0 )
            goto LABEL_72;
          goto LABEL_71;
        }
        v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * HIDWORD(v82[0]));
      }
      else
      {
        v74 = ((__int64 (__fastcall *)(__int64, _QWORD))v72)(a1, HIDWORD(v82[0]));
      }
      if ( v74 != -1 )
        break;
LABEL_71:
      sub_7B4F60(&v81, (unsigned int *)v82 + 1);
LABEL_72:
      if ( v70 == ++v69 )
        goto LABEL_78;
    }
    ++v69;
  }
  while ( v70 != v69 );
LABEL_78:
  v68 = (__int64)v81;
  v75 = *(_QWORD *)(a1 + 24);
  if ( v81 )
    goto LABEL_79;
  v76 = 0;
LABEL_80:
  *(_DWORD *)(v67 + 24) = sub_11BE5F0(v75, v76);
LABEL_81:
  if ( v81 )
    sub_186B220(v81 - 2);
  return v67;
}

