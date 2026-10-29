void __fastcall sub_ABA5B0(__int64 a1, char *a2, size_t a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  __int8 v7; // al
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm2
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, __int64, __int64); // rax
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-108h] BYREF
  void *v28[2]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v29[16]; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v30; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall *v31)(__int64 *, __int64 *, int); // [rsp+40h] [rbp-C8h]
  __int64 (__fastcall *v32)(); // [rsp+48h] [rbp-C0h]
  __m128i v33; // [rsp+50h] [rbp-B8h] BYREF
  void *v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __m128i v36[2]; // [rsp+70h] [rbp-98h] BYREF
  __int8 v37[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h]
  void *p_si128; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __m128i si128; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v42[4]; // [rsp+C0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 1) == 0;
  v27.m128i_i64[0] = a4;
  v27.m128i_i64[1] = a5;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v18 = a1 + 1048;
    sub_2205CB0(a1 + 1048);
    sub_ABA410((__int64)&v27);
    v19 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v19 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v30.m128i_i8[0] = 1;
      v21 = v20 + 32 * v19 - 32;
      if ( !*(_QWORD *)(v21 + 16) )
        goto LABEL_30;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v21 + 24))(v21, &v30);
        v23 = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
        *(_DWORD *)(a1 + 16) = v23;
        v24 = *(_QWORD *)(a1 + 8) + 32 * v23;
        v25 = *(void (__fastcall **)(__int64, __int64, __int64))(v24 + 16);
        if ( v25 )
          v25(v24, v24, 3);
        v26 = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)v26 )
          break;
        v22 = *(_QWORD *)(a1 + 8);
        v30.m128i_i8[0] = 1;
        v21 = v22 + 32 * v26 - 32;
        if ( !*(_QWORD *)(v21 + 16) )
          goto LABEL_30;
      }
    }
    sub_2205E20(v18);
    *(_BYTE *)(a1 + 1) = 1;
    return;
  }
  if ( !a3 )
  {
    a2 = "inner";
    a3 = j__strlen("inner");
  }
  v28[0] = v29;
  sub_AA6CE0(v28, a2, (__int64)&a2[a3]);
  v7 = *(_BYTE *)a1;
  v33.m128i_i64[1] = a1;
  v34 = v36;
  v33.m128i_i8[0] = v7;
  sub_AA6DA0(&v34, (_BYTE *)v28[0], (__int64)v28[0] + (unsigned __int64)v28[1]);
  v8 = _mm_load_si128(&v27);
  v6 = *(_BYTE *)a1 == 0;
  v36[1] = v8;
  if ( !v6 )
  {
    v37[0] = v33.m128i_i8[0];
    v38 = v33.m128i_i64[1];
    p_si128 = &si128;
    if ( v34 == v36 )
    {
      v9 = v8;
      si128 = _mm_load_si128(v36);
    }
    else
    {
      p_si128 = v34;
      v9 = v8;
      si128.m128i_i64[0] = v36[0].m128i_i64[0];
    }
    v10 = v35;
    v35 = 0;
    v36[0].m128i_i8[0] = 0;
    v40 = v10;
    v34 = v36;
    v42[0] = v9;
    v31 = nullptr;
    v11 = operator new(0x40u);
    *(_BYTE *)v11 = v37[0];
    *(_QWORD *)(v11 + 8) = v38;
    *(_QWORD *)(v11 + 16) = v11 + 32;
    if ( p_si128 == &si128 )
    {
      *(__m128i *)(v11 + 32) = _mm_load_si128(&si128);
    }
    else
    {
      *(_QWORD *)(v11 + 16) = p_si128;
      *(_QWORD *)(v11 + 32) = si128.m128i_i64[0];
    }
    v12 = v40;
    v30.m128i_i64[0] = v11;
    v13 = _mm_load_si128(v42);
    v40 = 0;
    *(_QWORD *)(v11 + 24) = v12;
    *(__m128i *)(v11 + 48) = v13;
    p_si128 = &si128;
    v32 = sub_ABA960;
    si128.m128i_i8[0] = 0;
    v31 = sub_AA82A0;
    sub_AA95F0(a1 + 8, &v30);
    if ( v31 )
      v31(v30.m128i_i64, v30.m128i_i64, 3);
    if ( p_si128 != &si128 )
      operator delete(p_si128);
    goto LABEL_15;
  }
  v14 = *(unsigned int *)(a1 + 16);
  v15 = *(_QWORD *)(a1 + 8);
  v37[0] = 0;
  v16 = v15 + 32 * v14 - 32;
  if ( !*(_QWORD *)(v16 + 16) )
LABEL_30:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int8 *))(v16 + 24))(v16, v37);
  sub_AA9000((__m128i *)(*(_QWORD *)(a1 + 8) + 32LL * *(unsigned int *)(a1 + 16) - 32), &v33);
LABEL_15:
  v17 = (__m128i *)v34;
  *(_BYTE *)a1 = 0;
  if ( v17 != v36 )
    operator delete(v17);
  if ( v28[0] != v29 )
    operator delete(v28[0]);
}

