void __fastcall sub_AADEE0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm3
  __m128i *v12; // rdx
  __int64 v13; // rdx
  __m128i *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, __int64, __int64); // rax
  __int64 v27; // rax
  _BYTE *v28; // rax
  __m128i v29; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v30; // [rsp+10h] [rbp-C8h] BYREF
  __m128 v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v33; // [rsp+38h] [rbp-A0h] BYREF
  void *v34; // [rsp+48h] [rbp-90h] BYREF
  __int64 v35; // [rsp+50h] [rbp-88h]
  __m128i v36; // [rsp+58h] [rbp-80h] BYREF
  __int64 v37; // [rsp+70h] [rbp-68h] BYREF
  __m128i v38; // [rsp+78h] [rbp-60h] BYREF
  void *v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+90h] [rbp-48h]
  __m128i v41[4]; // [rsp+98h] [rbp-40h] BYREF

  v6 = *(_BYTE *)(a1 + 1056) == 0;
  v29.m128i_i64[0] = a4;
  v29.m128i_i64[1] = a5;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_AADD40((__int64)&v29);
    v21 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v21 )
    {
      v22 = *(_QWORD *)(a1 + 16);
      v30.m128i_i8[0] = 1;
      v23 = v22 + 32 * v21 - 32;
      if ( !*(_QWORD *)(v23 + 16) )
        goto LABEL_28;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64))(v23 + 24))(
          v23,
          &v30,
          v22,
          v18,
          v19,
          v20,
          v29.m128i_i64[0],
          v29.m128i_i64[1]);
        v24 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v24;
        v25 = *(_QWORD *)(a1 + 16) + 32 * v24;
        v26 = *(void (__fastcall **)(__int64, __int64, __int64))(v25 + 16);
        if ( v26 )
          v26(v25, v25, 3);
        v27 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v27 )
          break;
        v22 = *(_QWORD *)(a1 + 16);
        v30.m128i_i8[0] = 1;
        v23 = v22 + 32 * v27 - 32;
        if ( !*(_QWORD *)(v23 + 16) )
          goto LABEL_28;
      }
    }
    v28 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v28 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v7 = _mm_load_si128(&v29);
  v32 = a1;
  v33 = v7;
  v34 = &v36;
  if ( a2 )
  {
    sub_AA6CE0(&v34, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
    {
LABEL_4:
      v8 = _mm_loadu_si128(&v33);
      v37 = v32;
      v39 = v41;
      v38 = v8;
      if ( v34 == &v36 )
      {
        v41[0] = _mm_loadu_si128(&v36);
      }
      else
      {
        v39 = v34;
        v41[0].m128i_i64[0] = v36.m128i_i64[0];
      }
      v9 = v35;
      v35 = 0;
      v36.m128i_i8[0] = 0;
      v40 = v9;
      v34 = &v36;
      v31.m128_u64[0] = 0;
      v10 = operator new(0x38u);
      v11 = _mm_loadu_si128(&v38);
      *(_QWORD *)v10 = v37;
      *(_QWORD *)(v10 + 24) = v10 + 40;
      v12 = (__m128i *)v39;
      *(__m128i *)(v10 + 8) = v11;
      if ( v12 == v41 )
      {
        *(__m128i *)(v10 + 40) = _mm_loadu_si128(v41);
      }
      else
      {
        *(_QWORD *)(v10 + 24) = v12;
        *(_QWORD *)(v10 + 40) = v41[0].m128i_i64[0];
      }
      v13 = v40;
      v30.m128i_i64[0] = v10;
      v40 = 0;
      *(_QWORD *)(v10 + 32) = v13;
      v39 = v41;
      v41[0].m128i_i8[0] = 0;
      v31 = _mm_loadh_ps((const double *)off_2C4DE00);
      sub_AA95F0(a1 + 16, &v30);
      if ( v31.m128_u64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v31.m128_u64[0])(&v30, &v30, 3);
      if ( v39 != v41 )
        operator delete(v39);
      goto LABEL_12;
    }
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 1057) == 0;
    v36.m128i_i8[0] = 0;
    v35 = 0;
    if ( !v6 )
      goto LABEL_4;
  }
  v15 = *(unsigned int *)(a1 + 24);
  v16 = *(_QWORD *)(a1 + 16);
  LOBYTE(v37) = 0;
  v17 = v16 + 32 * v15 - 32;
  if ( !*(_QWORD *)(v17 + 16) )
LABEL_28:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *))(v17 + 24))(v17, &v37);
  sub_AA8B20((__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32), &v32);
LABEL_12:
  v14 = (__m128i *)v34;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v14 != &v36 )
    operator delete(v14);
}

