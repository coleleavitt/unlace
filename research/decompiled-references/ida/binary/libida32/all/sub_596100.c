unsigned __int64 __fastcall sub_596100(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r14
  __int64 v6; // rbp
  void (__fastcall *v7)(__int128 *, const __m128i *, __int64); // rax
  const __m128i *v8; // rbx
  __m128i v9; // xmm0
  void (__fastcall *v10)(__m128i *, __int128 *, __int64); // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // edx
  __int32 v16; // eax
  __m128i v17; // xmm3
  void *v18; // r15
  __int64 v19; // rax
  __m128i v20; // xmm0
  void *v21; // rax
  void *v22; // rdi
  void *v23; // rdi
  __int32 v24; // eax
  __m128i v25; // xmm4
  __int64 v26; // rax
  const __m128i *v27; // r15
  void (__fastcall *v28)(__m128i *, const __m128i *, __int64); // rax
  const __m128i *v29; // rbx
  __m128i v30; // xmm0
  void (__fastcall *v31)(__m128i *, __int128 *, __int64); // rax
  void *v32; // rbx
  int v33; // ebp
  __m128i v34; // xmm5
  __int64 v35; // r15
  __int64 v36; // rax
  __m128i v37; // xmm1
  void *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __m128i v41; // xmm6
  __m128i v43; // [rsp+0h] [rbp-118h] BYREF
  __int64 v44; // [rsp+18h] [rbp-100h]
  __m128i v45; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v46; // [rsp+30h] [rbp-E8h] BYREF
  void *v47; // [rsp+40h] [rbp-D8h]
  __int128 *v48; // [rsp+48h] [rbp-D0h]
  const __m128i *v49; // [rsp+50h] [rbp-C8h]
  __int64 v50; // [rsp+58h] [rbp-C0h]
  void *ptr; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v52; // [rsp+68h] [rbp-B0h]
  int v53; // [rsp+78h] [rbp-A0h]
  __int64 v54; // [rsp+80h] [rbp-98h]
  __int128 v55; // [rsp+90h] [rbp-88h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v57; // [rsp+B0h] [rbp-68h] BYREF
  __m128i i; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v59; // [rsp+D8h] [rbp-40h]

  v4 = a2;
  v50 = a3;
  v49 = a4;
  v59 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 > 640 )
  {
    while ( 1 )
    {
      v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v49[1].m128i_i64[0];
      if ( !v50 )
        break;
      v56 = 0u;
      v55 = 0;
      if ( v7 )
      {
        v8 = v49;
        v48 = &v55;
        v7(&v55, v49, 2);
        v9 = _mm_loadu_si128(v8 + 1);
        v10 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v8[1].m128i_i64[0];
        i = 0u;
        v56 = v9;
        v57 = 0;
        v11 = a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v6 >> 3)) >> 1);
        if ( v10 )
        {
          v10(&v57, v48, 2);
          i = _mm_load_si128(&v56);
        }
      }
      else
      {
        i = 0u;
        v57 = 0;
        v11 = a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v6 >> 3)) >> 1);
      }
      v12 = a1 + 40;
      sub_594E00(a1, a1 + 40, v11, v4 - 40, (__int64)&v57);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v57, &v57, 3);
      i = 0u;
      v57 = 0;
      if ( !v56.m128i_i64[0] )
      {
LABEL_54:
        v48 = &v55;
        std::__throw_bad_function_call();
      }
      v48 = &v55;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v56.m128i_i64[0])(&v57, &v55, 2);
      v13 = v56.m128i_i64[0];
      v14 = v4;
      for ( i = _mm_load_si128(&v56); ; v13 = i.m128i_i64[0] )
      {
        while ( 1 )
        {
          if ( !v13 )
            goto LABEL_54;
          v15 = ((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64))i.m128i_i64[1])(&v57, v12, a1);
          v13 = i.m128i_i64[0];
          if ( v15 >= 0 )
            break;
          v12 += 40LL;
        }
        v14 -= 40LL;
        if ( !i.m128i_i64[0] )
LABEL_53:
          std::__throw_bad_function_call();
        while ( ((int (__fastcall *)(__m128i *, __int64, unsigned __int64))i.m128i_i64[1])(&v57, a1, v14) < 0 )
        {
          v14 -= 40LL;
          if ( !i.m128i_i64[0] )
            goto LABEL_53;
        }
        if ( v12 >= v14 )
          break;
        v16 = *(_DWORD *)(v12 + 24);
        v17 = _mm_loadu_si128((const __m128i *)(v12 + 8));
        v18 = *(void **)v12;
        *(_OWORD *)(v12 + 8) = 0;
        v43.m128i_i32[0] = v16;
        v19 = *(_QWORD *)(v12 + 32);
        *(_QWORD *)v12 = 0;
        v20 = _mm_loadu_si128((const __m128i *)(v14 + 8));
        v44 = v19;
        v21 = *(void **)v14;
        *(_OWORD *)(v14 + 8) = 0;
        *(_QWORD *)v14 = 0;
        v22 = *(void **)v12;
        v45 = v17;
        if ( v22 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          v47 = v21;
          v46 = v20;
          qfree(v22);
          v20 = _mm_load_si128(&v46);
          v21 = v47;
        }
        *(_QWORD *)v12 = v21;
        *(__m128i *)(v12 + 8) = v20;
        *(_DWORD *)(v12 + 24) = *(_DWORD *)(v14 + 24);
        *(_QWORD *)(v12 + 32) = *(_QWORD *)(v14 + 32);
        v23 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *(_QWORD *)(v14 + 8) = 0;
          qfree(v23);
        }
        v24 = v43.m128i_i32[0];
        v25 = _mm_load_si128(&v45);
        *(_QWORD *)v14 = v18;
        v12 += 40LL;
        *(_DWORD *)(v14 + 24) = v24;
        v26 = v44;
        *(__m128i *)(v14 + 8) = v25;
        *(_QWORD *)(v14 + 32) = v26;
      }
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v57, &v57, 3);
      if ( v56.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v56.m128i_i64[0])(v48, v48, 3);
      v27 = v49;
      i = 0u;
      v28 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))v49[1].m128i_i64[0];
      v57 = 0;
      if ( v28 )
      {
        v28(&v57, v49, 2);
        i = _mm_loadu_si128(v27 + 1);
      }
      sub_596100(v12, v4, --v50, &v57);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v57, &v57, 3);
      v6 = v12 - a1;
      if ( (__int64)(v12 - a1) <= 640 )
        return v59 - __readfsqword(0x28u);
      v4 = v12;
    }
    v56 = 0u;
    v55 = 0;
    if ( v7 )
    {
      v29 = v49;
      v48 = &v55;
      v7(&v55, v49, 2);
      v30 = _mm_loadu_si128(v29 + 1);
      v31 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v29[1].m128i_i64[0];
      i = 0u;
      v56 = v30;
      v57 = 0;
      if ( v31 )
      {
        v31(&v57, v48, 2);
        i = _mm_load_si128(&v56);
      }
    }
    else
    {
      v57 = 0;
      i = 0u;
    }
    sub_595F30(a1, v4, &v57);
    if ( i.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v57, &v57, 3);
    while ( v4 - a1 > 40 )
    {
      v32 = *(void **)(v4 - 40);
      v33 = *(_DWORD *)(v4 - 16);
      v4 -= 40;
      *(_QWORD *)v4 = 0;
      v34 = _mm_loadu_si128((const __m128i *)(v4 + 8));
      v35 = *(_QWORD *)(v4 + 32);
      *(_OWORD *)(v4 + 8) = 0;
      v36 = *(_QWORD *)a1;
      v37 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v38 = *(void **)v4;
      v43 = v34;
      if ( v38 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        v44 = v36;
        v45 = v37;
        qfree(v38);
        v37 = _mm_load_si128(&v45);
        v36 = v44;
      }
      *(_QWORD *)v4 = v36;
      *(__m128i *)(v4 + 8) = v37;
      v39 = *(_DWORD *)(a1 + 24);
      i.m128i_i64[0] = 0;
      *(_DWORD *)(v4 + 24) = v39;
      v40 = *(_QWORD *)(a1 + 32);
      i.m128i_i64[1] = 0;
      *(_QWORD *)(v4 + 32) = v40;
      v57 = 0;
      if ( v56.m128i_i64[0] )
      {
        v48 = &v55;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v56.m128i_i64[0])(&v57, &v55, 2);
        i = _mm_load_si128(&v56);
      }
      v53 = v33;
      v41 = _mm_load_si128(&v43);
      v54 = v35;
      ptr = v32;
      v52 = v41;
      sub_595A60(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((v4 - a1) >> 3), (__int64)&ptr, (__int64)&v57);
      if ( ptr )
        qfree(ptr);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v57, &v57, 3);
    }
    if ( v56.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v56.m128i_i64[0])(&v55, &v55, 3);
  }
  return v59 - __readfsqword(0x28u);
}

