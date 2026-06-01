void __fastcall sub_ABAAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  size_t v7; // rax
  __int8 v8; // al
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, __int64, __int64); // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-108h] BYREF
  void *v29[2]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v30[16]; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v31; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall *v32)(__int64 *, __int64 *, int); // [rsp+40h] [rbp-C8h]
  __int64 (__fastcall *v33)(__int64, char *); // [rsp+48h] [rbp-C0h]
  __m128i v34; // [rsp+50h] [rbp-B8h] BYREF
  void *v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h]
  __m128i v37[2]; // [rsp+70h] [rbp-98h] BYREF
  __int8 v38[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h]
  void *p_si128; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-60h]
  __m128i si128; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v43[4]; // [rsp+C0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 1) == 0;
  v28.m128i_i64[0] = a4;
  v28.m128i_i64[1] = a5;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v19 = a1 + 1048;
    sub_2205CB0(a1 + 1048);
    sub_ABA410((__int64)&v28);
    v20 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v20 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v38[0] = 1;
      v22 = v21 + 32 * v20 - 32;
      if ( !*(_QWORD *)(v22 + 16) )
        goto LABEL_28;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int8 *))(v22 + 24))(v22, v38);
        v24 = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
        *(_DWORD *)(a1 + 16) = v24;
        v25 = *(_QWORD *)(a1 + 8) + 32 * v24;
        v26 = *(void (__fastcall **)(__int64, __int64, __int64))(v25 + 16);
        if ( v26 )
          v26(v25, v25, 3);
        v27 = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)v27 )
          break;
        v23 = *(_QWORD *)(a1 + 8);
        v38[0] = 1;
        v22 = v23 + 32 * v27 - 32;
        if ( !*(_QWORD *)(v22 + 16) )
          goto LABEL_28;
      }
    }
    sub_2205E20(v19);
    *(_BYTE *)(a1 + 1) = 1;
    return;
  }
  v7 = j__strlen("inner");
  v29[0] = v30;
  sub_AA6CE0(v29, "inner", (__int64)&aInner[v7]);
  v8 = *(_BYTE *)a1;
  v34.m128i_i64[1] = a1;
  v35 = v37;
  v34.m128i_i8[0] = v8;
  sub_AA6DA0(&v35, (_BYTE *)v29[0], (__int64)v29[0] + (unsigned __int64)v29[1]);
  v9 = _mm_load_si128(&v28);
  v6 = *(_BYTE *)a1 == 0;
  v37[1] = v9;
  if ( !v6 )
  {
    v38[0] = v34.m128i_i8[0];
    v39 = v34.m128i_i64[1];
    p_si128 = &si128;
    if ( v35 == v37 )
    {
      v10 = v9;
      si128 = _mm_load_si128(v37);
    }
    else
    {
      p_si128 = v35;
      v10 = v9;
      si128.m128i_i64[0] = v37[0].m128i_i64[0];
    }
    v11 = v36;
    v36 = 0;
    v37[0].m128i_i8[0] = 0;
    v41 = v11;
    v35 = v37;
    v43[0] = v10;
    v32 = nullptr;
    v12 = operator new(0x40u);
    *(_BYTE *)v12 = v38[0];
    *(_QWORD *)(v12 + 8) = v39;
    *(_QWORD *)(v12 + 16) = v12 + 32;
    if ( p_si128 == &si128 )
    {
      *(__m128i *)(v12 + 32) = _mm_load_si128(&si128);
    }
    else
    {
      *(_QWORD *)(v12 + 16) = p_si128;
      *(_QWORD *)(v12 + 32) = si128.m128i_i64[0];
    }
    v13 = v41;
    v31.m128i_i64[0] = v12;
    v14 = _mm_load_si128(v43);
    v41 = 0;
    *(_QWORD *)(v12 + 24) = v13;
    *(__m128i *)(v12 + 48) = v14;
    p_si128 = &si128;
    v33 = sub_ABA960;
    si128.m128i_i8[0] = 0;
    v32 = sub_AA82A0;
    sub_AA95F0(a1 + 8, &v31);
    if ( v32 )
      v32(v31.m128i_i64, v31.m128i_i64, 3);
    if ( p_si128 != &si128 )
      operator delete(p_si128);
    goto LABEL_13;
  }
  v15 = *(unsigned int *)(a1 + 16);
  v16 = *(_QWORD *)(a1 + 8);
  v31.m128i_i8[0] = 0;
  v17 = v16 + 32 * v15 - 32;
  if ( !*(_QWORD *)(v17 + 16) )
LABEL_28:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v17 + 24))(v17, &v31);
  sub_AA9000((__m128i *)(*(_QWORD *)(a1 + 8) + 32LL * *(unsigned int *)(a1 + 16) - 32), &v34);
LABEL_13:
  v18 = (__m128i *)v35;
  *(_BYTE *)a1 = 0;
  if ( v18 != v37 )
    operator delete(v18);
  if ( v29[0] != v30 )
    operator delete(v29[0]);
}

