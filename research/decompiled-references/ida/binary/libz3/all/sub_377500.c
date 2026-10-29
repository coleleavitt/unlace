__int64 __fastcall sub_377500(__int64 a1, const __m128i **a2, __int64 a3)
{
  const __m128i *v4; // rax
  const __m128i *v5; // rbx
  char i; // al
  __int64 v7; // rax
  __int64 v8; // r14
  const __m128i *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  const __m128i **v15; // rax
  unsigned int v16; // esi
  size_t v17; // rdi
  unsigned int *v18; // rsi
  __int64 v19; // rax
  const __m128i *v20; // r11
  const __m128i *v21; // r10
  __m128i *v22; // rdx
  const __m128i *v23; // rdi
  const __m128i *v24; // rax
  __int32 v25; // ecx
  __m128i v26; // xmm0
  __int64 v27; // rax
  unsigned int *v28; // r15
  const __m128i *v29; // rdx
  const __m128i *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  unsigned int *v34; // r13
  const __m128i *v35; // rbx
  const __m128i *v36; // r14
  unsigned int *k; // r14
  const __m128i *v38; // r13
  unsigned int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // r12
  __int64 v42; // rax
  const __m128i *v43; // r15
  const __m128i *v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned int v48; // edx
  unsigned int v49; // ecx
  __int64 v50; // r12
  __int64 v51; // rax
  const __m128i *v52; // r15
  const __m128i *v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rdi
  _QWORD *v56; // rax
  const __m128i *v57; // rbx
  unsigned int v58; // eax
  unsigned int v59; // r12d
  _QWORD *v60; // r14
  __int64 v61; // rax
  __int64 v62; // r13
  void (__fastcall ***v63)(void *); // r15
  int v64; // r13d
  _QWORD *v65; // rdi
  __int64 v66; // rax
  int v67; // r14d
  _QWORD *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // r12
  __int64 v71; // rbx
  unsigned int v72; // ecx
  _QWORD *v73; // rdi
  const __m128i *v74; // rsi
  __int64 v75; // rax
  unsigned int *v76; // rax
  const __m128i *v77; // rsi
  __int64 n; // rax
  __int64 m; // rax
  const __m128i *v80; // r9
  __int64 j; // rax
  char **exception; // r13
  __int64 v83; // rdx
  const __m128i *v84; // [rsp+10h] [rbp-B0h]
  const __m128i *v85; // [rsp+18h] [rbp-A8h]
  const __m128i *v86; // [rsp+18h] [rbp-A8h]
  const __m128i *v87; // [rsp+20h] [rbp-A0h]
  unsigned int v89; // [rsp+3Ch] [rbp-84h]
  __int64 v90; // [rsp+40h] [rbp-80h]
  __int64 v92; // [rsp+50h] [rbp-70h] BYREF
  const __m128i *v93; // [rsp+58h] [rbp-68h]
  char v94[8]; // [rsp+60h] [rbp-60h] BYREF
  unsigned int *v95; // [rsp+68h] [rbp-58h] BYREF
  const __m128i *v96[10]; // [rsp+70h] [rbp-50h] BYREF

  sub_EE4940(v94, "subsumption", *a2);
  v4 = *a2;
  v95 = nullptr;
  v5 = (const __m128i *)v4[4].m128i_i64[1];
  v93 = v4;
  if ( !v5 )
    goto LABEL_40;
  for ( i = (unsigned __int8)v5->m128i_i8[3] >> 6; !i; i = (unsigned __int8)v5->m128i_i8[3] >> 6 )
    v5 = (const __m128i *)v5[1].m128i_i64[0];
  if ( i != 1 )
  {
    if ( i == 2 )
      v7 = (unsigned int)(v5->m128i_i32[1] - 1);
    else
      v7 = v5->m128i_u32[1];
    if ( (_DWORD)v7 != 1 )
      goto LABEL_7;
LABEL_76:
    v57 = v93;
    ++v93[2].m128i_i32[0];
    v58 = *(_DWORD *)(a3 + 8);
    v59 = *(_DWORD *)(a3 + 12);
    if ( v58 >= v59 )
    {
      v70 = 2 * v59;
      v71 = sub_186B270(8 * v70);
      v72 = *(_DWORD *)(a3 + 8);
      v73 = *(_QWORD **)a3;
      if ( v72 )
      {
        if ( v72 - 1 <= 2 || (_QWORD *)v71 == v73 + 1 )
        {
          v80 = v93;
          for ( j = 0; j != v72; ++j )
            *(_QWORD *)(v71 + j * 8) = v73[j];
          v93 = v80;
        }
        else
        {
          v74 = v93;
          v75 = 0;
          do
          {
            *(__m128i *)(v71 + v75 * 8) = _mm_loadu_si128((const __m128i *)&v73[v75]);
            v75 += 2;
          }
          while ( 2LL * (v72 >> 1) != v75 );
          v93 = v74;
          if ( (v72 & 1) != 0 )
            *(_QWORD *)(v71 + 8LL * (v72 & 0xFFFFFFFE)) = v73[v72 & 0xFFFFFFFE];
        }
      }
      if ( v73 != (_QWORD *)(a3 + 16) && v73 )
      {
        sub_186B220(v73);
        v72 = *(_DWORD *)(a3 + 8);
      }
      v76 = v95;
      v77 = v93;
      *(_QWORD *)a3 = v71;
      *(_DWORD *)(a3 + 12) = v70;
      *(_QWORD *)(v71 + 8LL * v72) = v77;
      *(_DWORD *)(a3 + 8) = v72 + 1;
      if ( v76 )
        sub_186B220(v76 - 2);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * v58) = v57;
      *(_DWORD *)(a3 + 8) = v58 + 1;
    }
    return sub_EE4A00(v94);
  }
  v7 = (unsigned int)(v5->m128i_i32[1] + 1);
  if ( !v5->m128i_i32[1] )
    goto LABEL_76;
LABEL_7:
  if ( !(_DWORD)v7 )
  {
    v5 = nullptr;
    goto LABEL_40;
  }
  v90 = v7;
  v8 = 0;
  v5 = nullptr;
  while ( 2 )
  {
    v92 = *(_QWORD *)(a1 + 16);
    v12 = v93->m128i_i64[0];
    if ( (v93[7].m128i_i8[11] & 0x20) != 0 )
    {
      v9 = *(const __m128i **)(v12 + 864);
      v93 = v9;
      goto LABEL_10;
    }
    v13 = v93[4].m128i_i64[1];
    v14 = 17;
    while ( 1 )
    {
      if ( *(char *)(v13 + 3) < 0 )
      {
        if ( *(_BYTE *)(v13 + 3) >> 6 != 2 )
        {
          v15 = (const __m128i **)(*(_QWORD *)(v13 + 16) + 8 * v8);
          goto LABEL_22;
        }
        goto LABEL_24;
      }
      if ( (_DWORD)v8 == *(_DWORD *)(v13 + 4) )
        break;
LABEL_24:
      v13 = *(_QWORD *)(v13 + 16);
      if ( !--v14 )
      {
        sub_233F80((__int64 *)(v12 + 616), &v93[4].m128i_i32[2]);
        v15 = (const __m128i **)(*(_QWORD *)(v93[4].m128i_i64[1] + 16) + 8 * v8);
        goto LABEL_22;
      }
    }
    v15 = (const __m128i **)(v13 + 8);
LABEL_22:
    v9 = *v15;
    v93 = v9;
LABEL_10:
    if ( v9 )
      ++v9->m128i_i32[2];
    if ( v5 )
    {
      v10 = v5[-1].m128i_u32[3];
      if ( (_DWORD)v10 == v5[-1].m128i_i32[2] )
      {
        v16 = (unsigned int)(3 * v10 + 1) >> 1;
        v89 = v16;
        v17 = 8 * (v16 + ((3 * (_DWORD)v10 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * (int)v10 + 8 >= (unsigned int)v17 || (unsigned int)v10 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C29C8((__int64 *)v96, "Overflow encountered when expanding vector", v83);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B270(v17);
        v19 = v5[-1].m128i_u32[3];
        v20 = v93;
        v21 = (const __m128i *)(v18 + 2);
        v18[1] = v19;
        v22 = (__m128i *)(v18 + 2);
        v23 = (const __m128i *)((char *)v5 + 24 * v19);
        v24 = v5;
        if ( v23 != v5 )
        {
          do
          {
            v25 = v24->m128i_i32[0];
            v24 = (const __m128i *)((char *)v24 + 24);
            v22 = (__m128i *)((char *)v22 + 24);
            v22[-2].m128i_i32[2] = v25;
            v26 = _mm_loadu_si128(v24 - 1);
            v24[-1].m128i_i64[0] = 0;
            v22[-1] = v26;
          }
          while ( v23 != v24 );
          v93 = v20;
        }
        v27 = v5[-1].m128i_u32[3];
        if ( (_DWORD)v27 )
        {
          v85 = (const __m128i *)(v18 + 2);
          v28 = v18;
          v29 = (const __m128i *)((char *)v5 + 24 * v27);
          v30 = v93;
          v84 = v5;
          v93 = v29;
          v87 = v30;
          do
          {
            while ( 1 )
            {
              v31 = v5->m128i_i64[1];
              if ( v31 )
              {
                v32 = v5[1].m128i_i64[0];
                v33 = (*(_DWORD *)(v31 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              v5 = (const __m128i *)((char *)v5 + 24);
              if ( v5 == v93 )
                goto LABEL_37;
            }
            sub_15D7BC0(v32, v31);
            v5 = (const __m128i *)((char *)v5 + 24);
          }
          while ( v5 != v93 );
LABEL_37:
          v21 = v85;
          v18 = v28;
          v5 = v84;
          v93 = v87;
        }
        v86 = v21;
        sub_186B220(&v5[-1].m128i_u64[1]);
        *v18 = v89;
        v5 = v86;
        v11 = &v86->m128i_i64[3 * v18[1]];
      }
      else
      {
        v11 = &v5->m128i_i64[3 * v10];
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x38u);
      v5 = (const __m128i *)(v56 + 1);
      *v56 = 2;
      v11 = v56 + 1;
    }
    *(_DWORD *)v11 = v8++;
    *(__m128 *)(v11 + 1) = _mm_loadh_ps((const double *)&v92);
    ++v5[-1].m128i_i32[3];
    if ( v8 != v90 )
    {
      v93 = *a2;
      continue;
    }
    break;
  }
LABEL_40:
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v60 = sub_3743C0((__int64 *)&qword_18D6CD0);
    v61 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, __int64, const int *))(*v60 + 16LL))(
            v60,
            *(_QWORD *)(a1 + 16),
            a1 + 24,
            0,
            0,
            1,
            &qword_18D6CD0);
    v62 = v61;
    if ( v61 )
      ++*(_DWORD *)(v61 + 48);
    v63 = *(void (__fastcall ****)(void *))(a1 + 32);
    if ( v63 )
    {
      v33 = (*((_DWORD *)v63 + 12))-- == 1;
      if ( v33 )
      {
        (**v63)(v63);
        sub_186B220(v63);
      }
    }
    *(_QWORD *)(a1 + 32) = v62;
    (*(void (__fastcall **)(_QWORD *))*v60)(v60);
    sub_186B220(v60);
  }
  v96[0] = v5;
  sub_3764C0(a1, v96, &v95);
  v34 = v95;
  v35 = v96[0];
  v36 = *a2;
  if ( v95 && *(v95 - 1) )
  {
    v36[7].m128i_i32[2] = (v36[7].m128i_i32[2] + 1) & 0x3FFFFFF | v36[7].m128i_i32[2] & 0xFC000000;
    for ( k = &v34[*(v34 - 1)]; k != v34; ++v34 )
      sub_EDBFA0((int)*a2);
    sub_ED9A60(*a2);
    v38 = *a2;
    if ( *a2 )
      ++v38[2].m128i_i32[0];
    v39 = *(_DWORD *)(a3 + 8);
    v40 = *(_DWORD *)(a3 + 12);
    if ( v39 >= v40 )
    {
      v67 = 2 * v40;
      v41 = sub_186B270(16LL * v40);
      v39 = *(_DWORD *)(a3 + 8);
      v68 = *(_QWORD **)a3;
      if ( v39 )
      {
        if ( v39 - 1 <= 2 || (_QWORD *)v41 == v68 + 1 )
        {
          for ( m = 0; m != v39; ++m )
            *(_QWORD *)(v41 + m * 8) = v68[m];
        }
        else
        {
          v69 = 0;
          do
          {
            *(__m128i *)(v41 + v69 * 8) = _mm_loadu_si128((const __m128i *)&v68[v69]);
            v69 += 2;
          }
          while ( v69 != 2LL * (v39 >> 1) );
          if ( (v39 & 1) != 0 )
            *(_QWORD *)(v41 + 8LL * (v39 & 0xFFFFFFFE)) = v68[v39 & 0xFFFFFFFE];
        }
      }
      if ( v68 != (_QWORD *)(a3 + 16) && v68 )
      {
        sub_186B220(v68);
        v39 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v41;
      *(_DWORD *)(a3 + 12) = v67;
    }
    else
    {
      v41 = *(_QWORD *)a3;
    }
    *(_QWORD *)(v41 + 8LL * v39) = v38;
    *(_DWORD *)(a3 + 8) = v39 + 1;
    if ( v95 )
      sub_186B220(v95 - 2);
    if ( v35 )
    {
      v42 = v35[-1].m128i_u32[3];
      if ( (_DWORD)v42 )
      {
        v43 = v35;
        v44 = (const __m128i *)((char *)v35 + 24 * v42);
        do
        {
          while ( 1 )
          {
            v45 = v43->m128i_i64[1];
            if ( v45 )
            {
              v46 = v43[1].m128i_i64[0];
              v33 = (*(_DWORD *)(v45 + 8))-- == 1;
              if ( v33 )
                break;
            }
            v43 = (const __m128i *)((char *)v43 + 24);
            if ( v44 == v43 )
              goto LABEL_58;
          }
          sub_15D7BC0(v46, v45);
          v43 = (const __m128i *)((char *)v43 + 24);
        }
        while ( v44 != v43 );
      }
      goto LABEL_58;
    }
  }
  else
  {
    if ( v36 )
      ++v36[2].m128i_i32[0];
    v48 = *(_DWORD *)(a3 + 8);
    v49 = *(_DWORD *)(a3 + 12);
    if ( v48 >= v49 )
    {
      v64 = 2 * v49;
      v50 = sub_186B270(16LL * v49);
      v48 = *(_DWORD *)(a3 + 8);
      v65 = *(_QWORD **)a3;
      if ( v48 )
      {
        if ( v48 - 1 <= 2 || (_QWORD *)v50 == v65 + 1 )
        {
          for ( n = 0; n != v48; ++n )
            *(_QWORD *)(v50 + n * 8) = v65[n];
        }
        else
        {
          v66 = 0;
          do
          {
            *(__m128i *)(v50 + v66 * 8) = _mm_loadu_si128((const __m128i *)&v65[v66]);
            v66 += 2;
          }
          while ( v66 != 2LL * (v48 >> 1) );
          if ( (v48 & 1) != 0 )
            *(_QWORD *)(v50 + 8LL * (v48 & 0xFFFFFFFE)) = v65[v48 & 0xFFFFFFFE];
        }
      }
      if ( v65 != (_QWORD *)(a3 + 16) && v65 )
      {
        sub_186B220(v65);
        v48 = *(_DWORD *)(a3 + 8);
      }
      *(_DWORD *)(a3 + 12) = v64;
      v34 = v95;
      *(_QWORD *)a3 = v50;
    }
    else
    {
      v50 = *(_QWORD *)a3;
    }
    *(_QWORD *)(v50 + 8LL * v48) = v36;
    *(_DWORD *)(a3 + 8) = v48 + 1;
    if ( v34 )
      sub_186B220(v34 - 2);
    if ( v35 )
    {
      v51 = v35[-1].m128i_u32[3];
      if ( (_DWORD)v51 )
      {
        v52 = v35;
        v53 = (const __m128i *)((char *)v35 + 24 * v51);
        do
        {
          while ( 1 )
          {
            v54 = v52->m128i_i64[1];
            if ( v54 )
            {
              v55 = v52[1].m128i_i64[0];
              v33 = (*(_DWORD *)(v54 + 8))-- == 1;
              if ( v33 )
                break;
            }
            v52 = (const __m128i *)((char *)v52 + 24);
            if ( v53 == v52 )
              goto LABEL_58;
          }
          sub_15D7BC0(v55, v54);
          v52 = (const __m128i *)((char *)v52 + 24);
        }
        while ( v53 != v52 );
      }
LABEL_58:
      sub_186B220(&v35[-1].m128i_u64[1]);
    }
  }
  return sub_EE4A00(v94);
}

