__int64 __fastcall sub_DF81A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r13
  __int64 (*v8)(void); // rax
  _QWORD **v9; // rdi
  __int64 (*v10)(void); // rdx
  char v11; // al
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int8 **v14; // r14
  __int64 (__fastcall *v15)(__int64); // rax
  _QWORD **v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rdx
  __m128i v18; // xmm0
  unsigned __int64 *v19; // rsi
  _QWORD *v20; // rdi
  __int64 (__fastcall *v21)(__int64); // rax
  _QWORD **v22; // rdi
  __int64 (__fastcall *v23)(__int64); // rdx
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  __m128i si128; // [rsp+0h] [rbp-108h] BYREF
  _BYTE *v32; // [rsp+18h] [rbp-F0h]
  void *v33[2]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v34[16]; // [rsp+30h] [rbp-D8h] BYREF
  void *v35; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v36; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v37[40]; // [rsp+58h] [rbp-B0h] BYREF
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __m128i v39; // [rsp+88h] [rbp-80h]
  _BYTE v40[112]; // [rsp+98h] [rbp-70h] BYREF

  v5 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v6 = *(_QWORD **)(a1 + 24);
  v7 = v5;
  v8 = *(__int64 (**)(void))(*v6 + 16LL);
  if ( (char *)v8 == (char *)sub_CAE470 )
  {
    v9 = (_QWORD **)v6[3];
    v10 = (__int64 (*)(void))(*v9)[2];
    if ( v10 == v8 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 16LL))(v9[3]);
    else
      v11 = v10();
  }
  else
  {
    v11 = v8();
  }
  if ( v11 )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v26 = sub_A62AC0(v25);
    v30 = sub_C00A40(v7, a2, v27, v28, v29);
    sub_FC70B0(&ptr, v26, v30, 2560);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v35 = v37;
    v32 = v37;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    v36 = si128;
    sub_21F17D0(a3, &v35);
    v33[0] = v34;
    sub_DF80E0(v33, v35, (__int64)v35 + v36.m128i_i64[0]);
    if ( v35 != v37 )
      free(v35);
    sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v33[0], (signed __int64)v33[1]);
    sub_AE9DF0((unsigned __int8 **)&ptr, *(_QWORD *)(v7 + 8), 8u);
    if ( v33[0] != v34 )
      operator delete(v33[0]);
    sub_AEA040((__int64)&ptr);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  }
  v12 = sub_E33C90(a1, v7, 2464, 0);
  v13 = *(_QWORD **)(a1 + 24);
  v14 = (unsigned __int8 **)v12;
  v15 = *(__int64 (__fastcall **)(__int64))(*v13 + 104LL);
  if ( v15 == sub_D8A670 )
  {
    v16 = (_QWORD **)v13[3];
    v17 = (__int64 (__fastcall *)(__int64))(*v16)[13];
    if ( v17 == v15 )
      (*(void (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3]);
    else
      ((void (__fastcall *)(_QWORD **, unsigned __int64))v17)(v16, v7);
  }
  else
  {
    ((void (__fastcall *)(_QWORD *, unsigned __int64))v15)(v13, v7);
  }
  v18 = _mm_load_si128(&si128);
  ptr = v40;
  v32 = v40;
  v39 = v18;
  sub_21F17D0(a3, &ptr);
  v35 = &v36.m128i_u64[1];
  sub_DF80E0(&v35, ptr, (__int64)ptr + v39.m128i_i64[0]);
  if ( ptr != v32 )
    free(ptr);
  v19 = (unsigned __int64 *)v35;
  if ( v14 )
  {
    sub_AEC220(v14, v35, v36.m128i_i64[0]);
    sub_AE9DF0(v14, *(_QWORD *)(v7 + 8), 8u);
    v19 = (unsigned __int64 *)v35;
  }
  if ( v19 != &v36.m128i_u64[1] )
    operator delete(v19);
  v20 = *(_QWORD **)(a1 + 24);
  v21 = *(__int64 (__fastcall **)(__int64))(*v20 + 32LL);
  if ( v21 != sub_CF0260 )
    return ((__int64 (__fastcall *)(_QWORD *, unsigned __int64 *))v21)(v20, v19);
  v22 = (_QWORD **)v20[3];
  v23 = (__int64 (__fastcall *)(__int64))(*v22)[4];
  if ( v23 == v21 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v22[3] + 32LL))(v22[3]);
  else
    return ((__int64 (__fastcall *)(_QWORD **, unsigned __int64 *))v23)(v22, v19);
}
