void __fastcall sub_11EC7A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  unsigned __int8 (__fastcall *v8)(__int64, void **); // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v19[2]; // [rsp+20h] [rbp-258h] BYREF
  __int16 v20; // [rsp+40h] [rbp-238h]
  __m128i v21; // [rsp+50h] [rbp-228h] BYREF
  __int16 v22; // [rsp+70h] [rbp-208h]
  __m128i v23[3]; // [rsp+80h] [rbp-1F8h] BYREF
  __m128i v24[2]; // [rsp+B0h] [rbp-1C8h] BYREF
  __int16 v25; // [rsp+D0h] [rbp-1A8h]
  __m128i v26[2]; // [rsp+E0h] [rbp-198h] BYREF
  __int16 v27; // [rsp+100h] [rbp-178h]
  _QWORD v28[4]; // [rsp+110h] [rbp-168h] BYREF
  __int16 v29; // [rsp+130h] [rbp-148h]
  _BYTE v30[32]; // [rsp+140h] [rbp-138h] BYREF
  __int16 v31; // [rsp+160h] [rbp-118h]
  void *v32; // [rsp+170h] [rbp-108h] BYREF
  __int64 v33; // [rsp+178h] [rbp-100h]
  __int16 v34; // [rsp+190h] [rbp-E8h]
  void *ptr; // [rsp+1A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-D0h]
  _BYTE v37[192]; // [rsp+1B8h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE **)(v3 + 248);
  v5 = *(_QWORD *)(v3 + 256);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v37;
  sub_A1FE50(&ptr, v4, &v4[v5]);
  v34 = 257;
  v31 = 257;
  v28[0] = "darwin";
  v29 = 259;
  v27 = 259;
  v26[0].m128i_i64[0] = (__int64)"lib";
  sub_228A3B0(&ptr, v26, v28, v30, &v32);
  v6 = *(_DWORD *)(a1 + 3932);
  if ( v6 == 3 )
  {
    if ( !*(_DWORD *)(a1 + 3936) )
    {
      v34 = 257;
      v31 = 257;
      v29 = 257;
      v26[0].m128i_i64[0] = (__int64)"libclang_rt.cc_kext_watchos.a";
      v27 = 259;
      goto LABEL_12;
    }
  }
  else if ( v6 == 2 )
  {
    if ( !*(_DWORD *)(a1 + 3936) )
    {
      v34 = 257;
      v31 = 257;
      v29 = 257;
      v26[0].m128i_i64[0] = (__int64)"libclang_rt.cc_kext_tvos.a";
      v27 = 259;
      goto LABEL_12;
    }
  }
  else if ( (unsigned int)(v6 - 1) <= 1 )
  {
    if ( !*(_DWORD *)(a1 + 3936) )
    {
      v34 = 257;
      v31 = 257;
      v29 = 257;
      v26[0].m128i_i64[0] = (__int64)"libclang_rt.cc_kext_ios.a";
      v27 = 259;
      goto LABEL_12;
    }
  }
  else
  {
    if ( v6 == 4 )
      goto LABEL_5;
    if ( v6 == 5 && !*(_DWORD *)(a1 + 3936) )
    {
      v31 = 257;
      v34 = 257;
      v29 = 257;
      v25 = 259;
      v24[0].m128i_i64[0] = (__int64)".a";
      v21.m128i_i64[0] = sub_22B6740(31);
      v19[0].m128i_i64[0] = (__int64)"libclang_rt.cc_kext_";
      v21.m128i_i64[1] = v10;
      v22 = 261;
      v20 = 259;
      sub_A41580(v23, v19, &v21, v11, v12, v13);
      sub_A41580(v26, v23, v24, v14, v15, v16);
      goto LABEL_12;
    }
  }
  v34 = 257;
  v31 = 257;
  v29 = 257;
  v26[0].m128i_i64[0] = (__int64)"libclang_rt.cc_kext.a";
  v27 = 259;
LABEL_12:
  sub_228A3B0(&ptr, v26, v28, v30, &v32);
LABEL_5:
  v7 = sub_112C5D0(a1);
  v8 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 96LL);
  v34 = 261;
  v32 = ptr;
  v33 = si128.m128i_i64[0];
  if ( v8(v7, &v32) )
  {
    v34 = 261;
    v32 = ptr;
    v33 = si128.m128i_i64[0];
    v9 = sub_10DA6C0(a2, (__int64)&v32);
    sub_10DC5D0(a3, v9);
  }
  if ( ptr != v37 )
    free(ptr);
}
