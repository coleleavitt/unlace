void __fastcall sub_AD7F60(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm2
  __m128i *v11; // rdx
  __int64 v12; // rdx
  __m128i *v13; // rdi
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm4
  __m128i *v22; // rdx
  __m128i v23; // xmm0
  void (__fastcall *v24)(__m128i *, __m128i *, __int64); // rax
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  _BYTE *v37; // rax
  __m128i v38; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v39; // [rsp+10h] [rbp-B8h]
  __int64 v40; // [rsp+20h] [rbp-A8h]
  __m128i v41; // [rsp+28h] [rbp-A0h] BYREF
  void *v42; // [rsp+38h] [rbp-90h] BYREF
  __int64 v43; // [rsp+40h] [rbp-88h]
  __m128i v44; // [rsp+48h] [rbp-80h] BYREF
  __int64 v45; // [rsp+60h] [rbp-68h] BYREF
  __m128i v46; // [rsp+68h] [rbp-60h] BYREF
  void *v47; // [rsp+78h] [rbp-50h]
  __int64 v48; // [rsp+80h] [rbp-48h]
  __m128i v49[4]; // [rsp+88h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    v25 = a4 + 8;
    v26 = a4 + 8;
    sub_F2A530(a4 + 8, a5);
    v27 = sub_ACAA10(v26);
    sub_AD7230(v25, &byte_22F0C30, v27, a4, v28);
    v29 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v29 )
    {
      v30 = *(_QWORD *)(a1 + 16);
      v38.m128i_i8[0] = 1;
      v31 = v30 + 32 * v29 - 32;
      if ( !*(_QWORD *)(v31 + 16) )
        goto LABEL_35;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v31 + 24))(v31, &v38);
        v33 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v33;
        v34 = *(_QWORD *)(a1 + 16) + 32 * v33;
        v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
        if ( v35 )
          v35(v34, v34, 3);
        v36 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v36 )
          break;
        v32 = *(_QWORD *)(a1 + 16);
        v38.m128i_i8[0] = 1;
        v31 = v32 + 32 * v36 - 32;
        if ( !*(_QWORD *)(v31 + 16) )
          goto LABEL_35;
      }
    }
    v37 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v37 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v40 = a1;
  v41.m128i_i64[0] = a4;
  v41.m128i_i64[1] = a5;
  v42 = &v44;
  if ( a2 )
  {
    sub_ACAA20(&v42, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v14 = *(_BYTE *)(a1 + 1057) == 0;
  v44.m128i_i8[0] = 0;
  v43 = 0;
  if ( v14 )
  {
LABEL_16:
    v15 = *(unsigned int *)(a1 + 24);
    v16 = *(_QWORD *)(a1 + 16);
    LOBYTE(v45) = 0;
    v17 = v16 + 32 * v15 - 32;
    if ( *(_QWORD *)(v17 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v17 + 24))(v17, &v45);
      v18 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v46 = _mm_loadu_si128(&v41);
      v45 = v40;
      v47 = v49;
      if ( v42 == &v44 )
      {
        v49[0] = _mm_loadu_si128(&v44);
      }
      else
      {
        v47 = v42;
        v49[0].m128i_i64[0] = v44.m128i_i64[0];
      }
      v19 = v43;
      v43 = 0;
      v44.m128i_i8[0] = 0;
      v48 = v19;
      v42 = &v44;
      v39.m128_u64[0] = 0;
      v20 = operator new(0x38u);
      v21 = _mm_loadu_si128(&v46);
      *(_QWORD *)v20 = v45;
      *(_QWORD *)(v20 + 24) = v20 + 40;
      v22 = (__m128i *)v47;
      *(__m128i *)(v20 + 8) = v21;
      if ( v22 == v49 )
      {
        *(__m128i *)(v20 + 40) = _mm_loadu_si128(v49);
      }
      else
      {
        *(_QWORD *)(v20 + 24) = v22;
        *(_QWORD *)(v20 + 40) = v49[0].m128i_i64[0];
      }
      v38.m128i_i64[0] = v20;
      v49[0].m128i_i8[0] = 0;
      v23 = _mm_load_si128(&v38);
      *(_QWORD *)(v20 + 32) = v48;
      v47 = v49;
      v48 = 0;
      v38 = _mm_loadu_si128(v18);
      v24 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v18[1].m128i_i64[0];
      *v18 = v23;
      v39.m128_u64[0] = (unsigned __int64)v24;
      v18[1].m128i_i64[0] = (__int64)sub_ACBAB0;
      v39.m128_u64[1] = v18[1].m128i_u64[1];
      v18[1].m128i_i64[1] = (__int64)sub_AD8490;
      if ( v24 )
        v24(&v38, &v38, 3);
      goto LABEL_10;
    }
LABEL_35:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v7 = _mm_loadu_si128(&v41);
  v45 = v40;
  v47 = v49;
  v46 = v7;
  if ( v42 == &v44 )
  {
    v49[0] = _mm_loadu_si128(&v44);
  }
  else
  {
    v47 = v42;
    v49[0].m128i_i64[0] = v44.m128i_i64[0];
  }
  v8 = v43;
  v43 = 0;
  v44.m128i_i8[0] = 0;
  v48 = v8;
  v42 = &v44;
  v39.m128_u64[0] = 0;
  v9 = operator new(0x38u);
  v10 = _mm_loadu_si128(&v46);
  *(_QWORD *)v9 = v45;
  *(_QWORD *)(v9 + 24) = v9 + 40;
  v11 = (__m128i *)v47;
  *(__m128i *)(v9 + 8) = v10;
  if ( v11 == v49 )
  {
    *(__m128i *)(v9 + 40) = _mm_loadu_si128(v49);
  }
  else
  {
    *(_QWORD *)(v9 + 24) = v11;
    *(_QWORD *)(v9 + 40) = v49[0].m128i_i64[0];
  }
  v12 = v48;
  v38.m128i_i64[0] = v9;
  v48 = 0;
  *(_QWORD *)(v9 + 32) = v12;
  v47 = v49;
  v49[0].m128i_i8[0] = 0;
  v39 = _mm_loadh_ps((const double *)off_2C78998);
  sub_ACD330(a1 + 16, &v38);
  if ( v39.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v39.m128_u64[0])(&v38, &v38, 3);
LABEL_10:
  if ( v47 != v49 )
    operator delete(v47);
  v13 = (__m128i *)v42;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v13 != &v44 )
    operator delete(v13);
}
