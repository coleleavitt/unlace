void __fastcall sub_1193ED0(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        __int64 *a4,
        _BYTE *a5,
        __int64 a6,
        __int64 a7,
        const char **a8,
        __int64 a9)
{
  size_t v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  size_t v16; // rsi
  const char *v17; // rcx
  size_t v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  size_t v26; // rax
  void *v27; // rdi
  const char *v28; // [rsp+8h] [rbp-3B0h]
  __int64 v29; // [rsp+8h] [rbp-3B0h]
  unsigned int v30; // [rsp+8h] [rbp-3B0h]
  __int64 *v32; // [rsp+18h] [rbp-3A0h]
  unsigned int v33; // [rsp+20h] [rbp-398h]
  __int64 v34; // [rsp+28h] [rbp-390h]
  __int64 v35; // [rsp+28h] [rbp-390h]
  __m128i v36; // [rsp+30h] [rbp-388h] BYREF
  __int16 v37; // [rsp+50h] [rbp-368h]
  __m128i v38[2]; // [rsp+60h] [rbp-358h] BYREF
  __int16 v39; // [rsp+80h] [rbp-338h]
  __m128i v40[3]; // [rsp+90h] [rbp-328h] BYREF
  void *v41[2]; // [rsp+C0h] [rbp-2F8h] BYREF
  _WORD v42[16]; // [rsp+D0h] [rbp-2E8h] BYREF
  void *v43; // [rsp+F0h] [rbp-2C8h] BYREF
  signed __int64 v44; // [rsp+F8h] [rbp-2C0h]
  __int64 v45; // [rsp+100h] [rbp-2B8h] BYREF
  __int16 v46; // [rsp+110h] [rbp-2A8h]
  void *v47; // [rsp+140h] [rbp-278h] BYREF
  __m128i si128; // [rsp+148h] [rbp-270h]
  _BYTE v49[264]; // [rsp+158h] [rbp-260h] BYREF
  void *ptr; // [rsp+260h] [rbp-158h] BYREF
  __m128i v51; // [rsp+268h] [rbp-150h]
  __int64 v52; // [rsp+278h] [rbp-140h] BYREF
  __int16 v53; // [rsp+280h] [rbp-138h]

  if ( !sub_10DCD30(a4[10], 0x48u) )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      v13 = j__strlen(&byte_22F0C30);
      sub_1193440(a1, (__int64)a4, (__int64)&byte_22F0C30, v13, a5, a6, a7, (__int64)a8, a9);
    }
    v47 = v49;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(&v47, a2, &a2[a3]);
    v32 = (__int64 *)*a4;
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(*a4 + 8) + 112LL))(*(_QWORD *)(*a4 + 8), &v47);
    v53 = 261;
    ptr = v47;
    v51.m128i_i64[0] = si128.m128i_i64[0];
    v14 = sub_228BC10(&ptr, 1, 504);
    if ( v14 )
    {
      v33 = v14;
      v35 = v15;
      sub_FC70B0((__int64)&ptr, *v32, 0, 340);
      sub_AEC220((unsigned __int8 **)&ptr, a2, a3);
      (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v35 + 32LL))(&v43, v35, v33);
      sub_AEC220((unsigned __int8 **)&ptr, v43, v44);
      if ( v43 != &v45 )
        operator delete(v43);
      sub_AEA040((__int64)&ptr);
      goto LABEL_13;
    }
    v16 = 0;
    v38[0].m128i_i64[0] = (__int64)".%%%%.json";
    v53 = 257;
    v46 = 257;
    v17 = *a8;
    v42[8] = 257;
    v39 = 259;
    if ( v17 )
    {
      v28 = v17;
      v18 = j__strlen(v17);
      v17 = v28;
      v16 = v18;
    }
    v36.m128i_i64[0] = sub_228AA60(v17, v16, 0);
    v36.m128i_i64[1] = v19;
    v37 = 261;
    sub_A41580(v40, &v36, v38, 261, v20, v21);
    sub_228A3B0(&v47, v40, v41, &v43, &ptr);
    ptr = &v52;
    v46 = 261;
    v51 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v43 = v47;
    v44 = si128.m128i_i64[0];
    v22 = sub_228FBC0(&v43, v40, &ptr, 1, 438);
    if ( v22 )
    {
      v30 = v22;
      v34 = v23;
      sub_FC70B0((__int64)&v43, *v32, 0, 340);
      sub_AEC220((unsigned __int8 **)&v43, v47, si128.m128i_i64[0]);
      (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v34 + 32LL))(v41, v34, v30);
      sub_AEC220((unsigned __int8 **)&v43, (_BYTE *)v41[0], (signed __int64)v41[1]);
      if ( v41[0] != v42 )
        operator delete(v41[0]);
      sub_AEA040((__int64)&v43);
      v27 = ptr;
      if ( ptr == &v52 )
        goto LABEL_13;
    }
    else
    {
      v24 = v40[0].m128i_u32[0];
      v29 = operator new(0x60u);
      sub_227D340(v29, v24, 1, 0, 0);
      v25 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v29;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      v26 = j__strlen(&byte_22F0C30);
      sub_1193440(a1, (__int64)a4, (__int64)&byte_22F0C30, v26, a5, a6, a7, (__int64)a8, a9);
      v27 = ptr;
      if ( ptr == &v52 )
        goto LABEL_13;
    }
    free(v27);
LABEL_13:
    if ( v47 != v49 )
      free(v47);
  }
}
