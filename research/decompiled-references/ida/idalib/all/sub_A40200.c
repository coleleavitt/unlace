void __fastcall sub_A40200(__int64 a1, __int64 a2)
{
  _UNKNOWN *__ptr32 *v3; // rbp
  unsigned int v4; // esi
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  char *v22; // r14
  char *v23; // rbp
  __int64 v24; // rdi
  char *v25; // r14
  char *v26; // rbp
  __int64 v27; // rdi
  void *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rbp
  __int32 v34; // r14d
  __int64 v35; // rax
  void *v36; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v37; // [rsp+8h] [rbp-F0h]
  __int64 v38; // [rsp+18h] [rbp-E0h] BYREF
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-D0h]
  _QWORD v41[3]; // [rsp+38h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+50h] [rbp-A8h]
  __int128 v43; // [rsp+60h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-88h]
  char v45; // [rsp+80h] [rbp-78h]
  void *v46; // [rsp+88h] [rbp-70h]
  char *v47; // [rsp+90h] [rbp-68h]
  __int64 v48; // [rsp+98h] [rbp-60h]
  void *v49; // [rsp+A0h] [rbp-58h]
  char *v50; // [rsp+A8h] [rbp-50h]
  __int64 v51; // [rsp+B0h] [rbp-48h]

  v3 = (_UNKNOWN *__ptr32 *)&unk_23DCA4C;
  v41[1] = 0;
  v41[0] = &v36;
  v36 = &v38;
  ptr = v41;
  v41[2] = 0;
  v44 = 0;
  v45 = 0;
  v46 = nullptr;
  v47 = nullptr;
  v48 = 0;
  v49 = nullptr;
  v50 = nullptr;
  v51 = 0;
  v37 = 0;
  v40 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DA0);
  v43 = 0;
  do
  {
    v4 = *(unsigned __int8 *)v3;
    v3 = (_UNKNOWN *__ptr32 *)((char *)v3 + 1);
    sub_A1FEC0((__int64)&ptr, v4, 8);
  }
  while ( v3 != jpt_A4FDA4 );
  sub_A25970((__int64)&ptr, 0, 2u);
  v5 = j__strlen("CONTROL_BLOCK");
  sub_A20320((__int64)&ptr, 8u, (unsigned __int8 *)"CONTROL_BLOCK", v5);
  v6 = j__strlen("METADATA");
  sub_A203E0((__int64)&ptr, 1, "METADATA", v6);
  v7 = j__strlen("MODULE_NAME");
  sub_A203E0((__int64)&ptr, 2, "MODULE_NAME", v7);
  v8 = j__strlen("IDENTIFIER_BLOCK");
  sub_A20320((__int64)&ptr, 9u, "IDENTIFIER_BLOCK", v8);
  v9 = j__strlen("IDENTIFIER_DATA");
  sub_A203E0((__int64)&ptr, 1, "IDENTIFIER_DATA", v9);
  v10 = j__strlen("OBJC_CONTEXT_BLOCK");
  sub_A20320((__int64)&ptr, 0xAu, "OBJC_CONTEXT_BLOCK", v10);
  v11 = j__strlen("CONTEXT_ID_DATA");
  sub_A203E0((__int64)&ptr, 1, "CONTEXT_ID_DATA", v11);
  v12 = j__strlen("OBJC_PROPERTY_BLOCK");
  sub_A20320((__int64)&ptr, 0xBu, "OBJC_PROPERTY_BLOCK", v12);
  v13 = j__strlen("OBJC_PROPERTY_DATA");
  sub_A203E0((__int64)&ptr, 1, "OBJC_PROPERTY_DATA", v13);
  v14 = j__strlen("OBJC_METHOD_BLOCK");
  sub_A20320((__int64)&ptr, 0xCu, "OBJC_METHOD_BLOCK", v14);
  v15 = j__strlen("OBJC_METHOD_DATA");
  sub_A203E0((__int64)&ptr, 1, "OBJC_METHOD_DATA", v15);
  v16 = j__strlen("OBJC_SELECTOR_BLOCK");
  sub_A20320((__int64)&ptr, 0xEu, "OBJC_SELECTOR_BLOCK", v16);
  v17 = j__strlen("OBJC_SELECTOR_DATA");
  sub_A203E0((__int64)&ptr, 1, "OBJC_SELECTOR_DATA", v17);
  v18 = j__strlen("GLOBAL_VARIABLE_BLOCK");
  sub_A20320((__int64)&ptr, 0x10u, "GLOBAL_VARIABLE_BLOCK", v18);
  v19 = j__strlen("GLOBAL_VARIABLE_DATA");
  sub_A203E0((__int64)&ptr, 1, "GLOBAL_VARIABLE_DATA", v19);
  v20 = j__strlen("GLOBAL_FUNCTION_BLOCK");
  sub_A20320((__int64)&ptr, 0x11u, "GLOBAL_FUNCTION_BLOCK", v20);
  v21 = j__strlen("GLOBAL_FUNCTION_DATA");
  sub_A203E0((__int64)&ptr, 1, "GLOBAL_FUNCTION_DATA", v21);
  sub_A25550((__int64)&ptr);
  sub_A26BD0(a1, (__int64)&ptr);
  sub_A280D0(a1, (__int64)&ptr);
  sub_A33B00(a1, (__int64)&ptr);
  sub_A34D80(a1, (__int64)&ptr);
  sub_A365B0(a1, (__int64)&ptr);
  sub_A378E0(a1, (__int64)&ptr);
  sub_A39040(a1, (__int64)&ptr);
  sub_A27950(a1, (__int64)&ptr);
  sub_A3A7A0(a1, (__int64)&ptr);
  sub_A3BAA0(a1, (__int64)&ptr);
  sub_A3D040(a1, (__int64)&ptr);
  sub_A3E460(a1, (__int64)&ptr);
  sub_A401B0(a1, (__int64)&ptr);
  if ( si128.m128i_i32[0] )
  {
    v33 = (_QWORD *)v41[0];
    v34 = si128.m128i_i32[1];
    v35 = *(_QWORD *)(v41[0] + 8LL);
    if ( (unsigned __int64)(v35 + 4) > *(_QWORD *)(v41[0] + 16LL) )
    {
      sub_2236E10(v41[0], v41[0] + 24LL, v35 + 4, 1);
      v35 = v33[1];
    }
    *(_DWORD *)(*v33 + v35) = v34;
    v33[1] += 4LL;
    si128.m128i_i64[0] = 0;
  }
  sub_A1F7A0((__int64)&ptr, 1);
  v22 = v50;
  v23 = (char *)v49;
  if ( v50 != v49 )
  {
    do
    {
      v24 = (__int64)(v23 + 8);
      v23 += 32;
      sub_A0AD20(v24);
    }
    while ( v22 != v23 );
    v23 = (char *)v49;
  }
  if ( v23 )
    operator delete(v23);
  v25 = v47;
  v26 = (char *)v46;
  if ( v47 != v46 )
  {
    do
    {
      v27 = (__int64)(v26 + 16);
      v26 += 40;
      sub_A0AD20(v27);
    }
    while ( v25 != v26 );
    v26 = (char *)v46;
  }
  if ( v26 )
    operator delete(v26);
  sub_A0AD20((__int64)&v43);
  if ( ptr != v41 )
    free(ptr);
  v28 = v36;
  sub_227BF10(a2, v36, v37);
  if ( *(_QWORD *)(a2 + 32) != *(_QWORD *)(a2 + 16) )
    sub_227B9F0(a2, v28, v29, v30, v31, v32, v36, v37, *((_QWORD *)&v37 + 1));
  if ( v36 != &v38 )
    free(v36);
}
