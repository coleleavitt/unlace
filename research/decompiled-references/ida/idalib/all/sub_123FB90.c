void __fastcall sub_123FB90(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbp
  _QWORD *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbp
  __int64 v27; // r14
  void **v28; // rbp
  void **v29; // r15
  const char *v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  _BYTE *v38; // rdi
  void **v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  _BYTE *v43; // rdi
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __m128i v46; // xmm0
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 v50; // rbp
  __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // [rsp+0h] [rbp-288h] BYREF
  __m128i v56; // [rsp+10h] [rbp-278h] BYREF
  const char *v57; // [rsp+28h] [rbp-260h]
  void *v58; // [rsp+30h] [rbp-258h] BYREF
  __int64 v59; // [rsp+38h] [rbp-250h]
  _BYTE v60[16]; // [rsp+40h] [rbp-248h] BYREF
  __m128 v62; // [rsp+60h] [rbp-228h] BYREF
  __int64 v63; // [rsp+70h] [rbp-218h]
  __int64 v64; // [rsp+78h] [rbp-210h]
  __int16 v65; // [rsp+80h] [rbp-208h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 5032) + 568LL))(*(_QWORD *)(a1 + 5032));
  v6 = *((unsigned int *)a3 + 2);
  if ( v6 + 2 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_2237220(a3, a3 + 2, v6 + 2, 8);
    v6 = *((unsigned int *)a3 + 2);
  }
  v7 = *a3;
  v55.m128i_i64[0] = (__int64)"-fno-threadsafe-statics";
  *(__m128 *)(v7 + 8 * v6) = _mm_loadh_ps((const double *)v55.m128i_i64);
  *((_DWORD *)a3 + 2) += 2;
  if ( (unsigned __int8)sub_21B7850(a2, 825, 1164, 0) )
  {
    v55.m128i_i64[0] = (__int64)&v62;
  }
  else
  {
    v44 = *((unsigned int *)a3 + 3);
    v55.m128i_i64[0] = (__int64)"-amdgpu-internalize-symbols";
    v45 = *((unsigned int *)a3 + 2);
    v46 = (__m128i)_mm_loadh_ps((const double *)v55.m128i_i64);
    if ( v45 + 2 > v44 )
    {
      v55 = v46;
      sub_2237220(a3, a3 + 2, v45 + 2, 8);
      v45 = *((unsigned int *)a3 + 2);
      v46 = _mm_load_si128(&v55);
    }
    *(__m128i *)(*a3 + 8 * v45) = v46;
    *((_DWORD *)a3 + 2) += 2;
    v62.m128_i32[0] = 2120;
    v55.m128i_i64[0] = (__int64)&v62;
    v47 = sub_21B6DA0(a2, &v62, 1);
    v48 = a2[1];
    v49 = v48 + 8LL * (unsigned int)v47;
    v50 = v48 + 8 * HIDWORD(v47);
    if ( v50 != v49 )
    {
      while ( 1 )
      {
        v51 = *(_QWORD *)(v50 - 8);
        if ( v51 )
        {
          if ( (unsigned __int8)sub_21B9810(v51, 2120) )
            break;
        }
        v50 -= 8;
        if ( v49 == v50 )
          goto LABEL_5;
      }
      if ( v49 != v50 && *(_QWORD *)(v50 - 8) )
      {
        v52 = *((unsigned int *)a3 + 3);
        v56.m128i_i64[0] = (__int64)"-amdgpu-enable-hipstdpar";
        v53 = *((unsigned int *)a3 + 2);
        v54 = (__m128i)_mm_loadh_ps((const double *)v56.m128i_i64);
        if ( v53 + 2 > v52 )
        {
          v56 = v54;
          sub_2237220(a3, a3 + 2, v53 + 2, 8);
          v53 = *((unsigned int *)a3 + 2);
          v54 = _mm_load_si128(&v56);
        }
        *(__m128i *)(*a3 + 8 * v53) = v54;
        *((_DWORD *)a3 + 2) += 2;
      }
    }
  }
LABEL_5:
  v8 = sub_21B7BC0(a2, 2055, &byte_22F0C30, 0);
  if ( v9 )
  {
    v63 = v8;
    v62.m128_u64[0] = (unsigned __int64)"--gpu-max-threads-per-block=";
    v64 = v9;
    v65 = 1283;
    sub_2253560(&v58, v55.m128i_i64[0]);
    v41 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a2 + 16LL))(a2, v58, v59);
    v42 = *((unsigned int *)a3 + 2);
    if ( v42 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      v56.m128i_i64[0] = v41;
      sub_2237220(a3, a3 + 2, v42 + 1, 8);
      v42 = *((unsigned int *)a3 + 2);
      v41 = v56.m128i_i64[0];
    }
    *(_QWORD *)(*a3 + 8 * v42) = v41;
    v43 = v58;
    v10 = (unsigned int)(*((_DWORD *)a3 + 2) + 1);
    *((_DWORD *)a3 + 2) = v10;
    if ( v43 == v60 )
      goto LABEL_7;
    operator delete(v43);
  }
  v10 = *((unsigned int *)a3 + 2);
LABEL_7:
  if ( v10 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_2237220(a3, a3 + 2, v10 + 1, 8);
    v10 = *((unsigned int *)a3 + 2);
  }
  v11 = v55.m128i_i64[0];
  *(_QWORD *)(*a3 + 8 * v10) = "-fcuda-allow-variadic-functions";
  ++*((_DWORD *)a3 + 2);
  v62.m128_u64[0] = 0x79500000797LL;
  v12 = sub_21B6DA0(a2, v11, 2);
  v13 = a2[1];
  v63 = 0x79500000797LL;
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = v13 + 8 * HIDWORD(v12);
  v56.m128i_i64[0] = v15;
  v62 = _mm_loadh_ps((const double *)v56.m128i_i64);
  if ( v14 == (_QWORD *)v15 )
    goto LABEL_14;
  while ( 1 )
  {
    v16 = *v14;
    if ( *v14 )
    {
      if ( (unsigned __int8)sub_21B9810(*v14, 1943) || (unsigned __int8)sub_21B9810(v16, 1941) )
        break;
    }
    v62.m128_u64[0] = (unsigned __int64)++v14;
    if ( (_QWORD *)v15 == v14 )
      goto LABEL_14;
  }
  v56.m128i_i64[0] = v15;
  v63 = 0x79500000797LL;
  v62 = _mm_loadh_ps((const double *)v56.m128i_i64);
  if ( v14 == (_QWORD *)v15 )
  {
LABEL_14:
    v17 = *((unsigned int *)a3 + 2);
    if ( v17 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      sub_2237220(a3, a3 + 2, v17 + 1, 8);
      v17 = *((unsigned int *)a3 + 2);
    }
    *(_QWORD *)(*a3 + 8 * v17) = "-fvisibility=hidden";
    v18 = *((unsigned int *)a3 + 3);
    v19 = (unsigned int)(*((_DWORD *)a3 + 2) + 1);
    *((_DWORD *)a3 + 2) = v19;
    if ( v19 + 1 > v18 )
    {
      sub_2237220(a3, a3 + 2, v19 + 1, 8);
      v19 = *((unsigned int *)a3 + 2);
    }
    *(_QWORD *)(*a3 + 8 * v19) = "-fapply-global-visibility-to-externs";
    ++*((_DWORD *)a3 + 2);
  }
  else
  {
    while ( 2 )
    {
      v25 = *v14;
      if ( *(_QWORD *)(*v14 + 16LL) )
        v25 = *(_QWORD *)(*v14 + 16LL);
      v26 = v14 + 1;
      *(_BYTE *)(v25 + 44) |= 1u;
      v62.m128_u64[0] = (unsigned __int64)v26;
      if ( v26 != (_QWORD *)v15 )
      {
        while ( 1 )
        {
          v27 = *v26;
          if ( *v26 )
          {
            if ( (unsigned __int8)sub_21B9810(*v26, 1943) || (unsigned __int8)sub_21B9810(v27, 1941) )
              break;
          }
          v62.m128_u64[0] = (unsigned __int64)++v26;
          if ( (_QWORD *)v15 == v26 )
          {
            if ( (unsigned int)(*(_DWORD *)(a1 + 1792) - 49) <= 2 )
              goto LABEL_20;
            goto LABEL_37;
          }
        }
        v14 = (_QWORD *)v62.m128_u64[0];
        if ( v62.m128_u64[0] != v15 )
          continue;
      }
      break;
    }
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 1792) - 49) > 2 )
  {
LABEL_37:
    sub_123E070(v55.m128i_i64[0], a1, (__int64)a2);
    v28 = (void **)(v62.m128_u64[0] + 40LL * v62.m128_u32[2]);
    if ( (void **)v62.m128_u64[0] != v28 )
    {
      v29 = (void **)v62.m128_u64[0];
      v56.m128i_i64[0] = (__int64)(a3 + 2);
      do
      {
        while ( 1 )
        {
          v58 = v60;
          sub_123B090(&v58, *v29, (__int64)v29[1] + (_QWORD)*v29);
          v30 = "-mlink-bitcode-file";
          v31 = *((unsigned int *)a3 + 3);
          if ( *((_BYTE *)v29 + 32) )
            v30 = "-mlink-builtin-bitcode";
          v32 = *((unsigned int *)a3 + 2);
          if ( v32 + 1 > v31 )
          {
            v57 = v30;
            sub_2237220(a3, v56.m128i_i64[0], v32 + 1, 8);
            v32 = *((unsigned int *)a3 + 2);
            v30 = v57;
          }
          *(_QWORD *)(*a3 + 8 * v32) = v30;
          v33 = *a2;
          v34 = v58;
          v35 = v59;
          ++*((_DWORD *)a3 + 2);
          v36 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(v33 + 16))(a2, v34, v35);
          v37 = *((unsigned int *)a3 + 2);
          if ( v37 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
          {
            v57 = (const char *)v36;
            sub_2237220(a3, v56.m128i_i64[0], v37 + 1, 8);
            v37 = *((unsigned int *)a3 + 2);
            v36 = (__int64)v57;
          }
          *(_QWORD *)(*a3 + 8 * v37) = v36;
          v38 = v58;
          ++*((_DWORD *)a3 + 2);
          if ( v38 == v60 )
            break;
          operator delete(v38);
          v29 += 5;
          if ( v28 == v29 )
            goto LABEL_47;
        }
        v29 += 5;
      }
      while ( v28 != v29 );
LABEL_47:
      v39 = (void **)v62.m128_u64[0];
      v28 = (void **)(v62.m128_u64[0] + 40LL * v62.m128_u32[2]);
      if ( (void **)v62.m128_u64[0] != v28 )
      {
        do
        {
          while ( 1 )
          {
            v28 -= 5;
            if ( *v28 == v28 + 2 )
              break;
            operator delete(*v28);
            if ( v39 == v28 )
              goto LABEL_50;
          }
        }
        while ( v39 != v28 );
LABEL_50:
        v28 = (void **)v62.m128_u64[0];
      }
    }
    if ( v28 != (void **)(v55.m128i_i64[0] + 16) )
      free(v28);
  }
  else
  {
LABEL_20:
    v62.m128_i32[0] = 649;
    v20 = sub_21B6DA0(a2, v55.m128i_i64[0], 1);
    v21 = a2[1];
    v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
    v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
    if ( v22 == v23 )
      goto LABEL_24;
    while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 649) )
    {
      if ( v23 == ++v22 )
        goto LABEL_24;
    }
    if ( v22 == v23 )
    {
LABEL_24:
      v24 = *((unsigned int *)a3 + 2);
      if ( v24 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
      {
        sub_2237220(a3, a3 + 2, v24 + 1, 8);
        v24 = *((unsigned int *)a3 + 2);
      }
      *(_QWORD *)(*a3 + 8 * v24) = "-fembed-bitcode=marker";
      ++*((_DWORD *)a3 + 2);
    }
    else
    {
      do
      {
        v40 = *v22;
        if ( *(_QWORD *)(*v22 + 16LL) )
          v40 = *(_QWORD *)(*v22 + 16LL);
        ++v22;
        *(_BYTE *)(v40 + 44) |= 1u;
        if ( v22 == v23 )
          break;
        while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 649) )
        {
          if ( v23 == ++v22 )
            return;
        }
      }
      while ( v22 != v23 );
    }
  }
}
