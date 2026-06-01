void __fastcall sub_1272220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  void *v29[2]; // [rsp+20h] [rbp-538h] BYREF
  _BYTE v30[16]; // [rsp+30h] [rbp-528h] BYREF
  __m128i v31[2]; // [rsp+40h] [rbp-518h] BYREF
  __int16 v32; // [rsp+60h] [rbp-4F8h]
  __m128i v33[2]; // [rsp+70h] [rbp-4E8h] BYREF
  __int16 v34; // [rsp+90h] [rbp-4C8h]
  __m128i v35[2]; // [rsp+A0h] [rbp-4B8h] BYREF
  __int16 v36; // [rsp+C0h] [rbp-498h]
  __m128i v37; // [rsp+D0h] [rbp-488h] BYREF
  _BYTE v38[16]; // [rsp+E0h] [rbp-478h] BYREF
  __int16 v39; // [rsp+F0h] [rbp-468h]
  _BYTE ptr[24]; // [rsp+100h] [rbp-458h] BYREF
  char v41; // [rsp+118h] [rbp-440h] BYREF
  __int16 v42; // [rsp+120h] [rbp-438h]
  int v43; // [rsp+12Ch] [rbp-42Ch]

  if ( !sub_10DCD30(a2, 0xBD9u) )
  {
    v26 = *(_QWORD *)(a1 + 8);
    v27 = *(_BYTE **)(v26 + 248);
    v28 = *(_QWORD *)(v26 + 256);
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
    *(_QWORD *)ptr = &v41;
    sub_A1FE50(ptr, v27, &v27[v28]);
    v34 = 257;
    v31[0].m128i_i64[0] = (__int64)"include";
    v32 = 259;
    v39 = 257;
    v36 = 257;
    sub_228A3B0(ptr, v31, v33, v35, &v37);
    v39 = 261;
    v37 = *(__m128i *)ptr;
    sub_112FA80(a2, a3, (__int64)&v37);
    if ( *(char **)ptr != &v41 )
      free(*(void **)ptr);
  }
  if ( !sub_10DCD30(a2, 0xBEFu) )
  {
    v39 = 259;
    v37.m128i_i64[0] = (__int64)"include";
    v5 = sub_228ACC0(0);
    v6 = *(_BYTE **)(a1 + 3800);
    v33[0].m128i_i64[1] = v7;
    v8 = *(_QWORD *)(a1 + 3808);
    v34 = 261;
    v29[0] = v30;
    v33[0].m128i_i64[0] = v5;
    sub_1270B70(v29, v6, (__int64)&v6[v8]);
    sub_9EE560(v29, *(_BYTE **)(a1 + 4040), *(_QWORD *)(a1 + 4048));
    v32 = 260;
    v31[0].m128i_i64[0] = (__int64)v29;
    sub_A41580(v35, v31, v33, (__int64)v31, v9, 260);
    sub_A41580((__m128i *)ptr, v35, &v37, v10, v11, v12);
    sub_112FA80(a2, a3, (__int64)ptr);
    if ( v29[0] != v30 )
      operator delete(v29[0]);
    v37.m128i_i64[0] = (__int64)"usr/include";
    v39 = 259;
    v13 = sub_228ACC0(0);
    v14 = *(_BYTE **)(a1 + 3800);
    v33[0].m128i_i64[1] = v15;
    v16 = *(_QWORD *)(a1 + 3808);
    v34 = 261;
    v29[0] = v30;
    v33[0].m128i_i64[0] = v13;
    sub_1270B70(v29, v14, (__int64)&v14[v16]);
    sub_9EE560(v29, *(_BYTE **)(a1 + 4040), *(_QWORD *)(a1 + 4048));
    v31[0].m128i_i64[0] = (__int64)v29;
    v32 = 260;
    sub_A41580(v35, v31, v33, v17, v18, v19);
    sub_A41580((__m128i *)ptr, v35, &v37, v20, v21, v22);
    sub_112FA80(a2, a3, (__int64)ptr);
    if ( v29[0] != v30 )
      operator delete(v29[0]);
    sub_22BC1E0(&v37, "x86_64-unknown-linux-gnu", 24, 0);
    sub_22B9ED0(ptr, &v37);
    if ( (_BYTE *)v37.m128i_i64[0] != v38 )
      operator delete((void *)v37.m128i_i64[0]);
    if ( v43 == 15 )
    {
      if ( *(_BYTE **)ptr != &ptr[16] )
        operator delete(*(void **)ptr);
    }
    else
    {
      if ( *(_BYTE **)ptr != &ptr[16] )
        operator delete(*(void **)ptr);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 496LL) )
        return;
    }
    v23 = *(_BYTE **)(a1 + 3800);
    v24 = *(_QWORD *)(a1 + 3808);
    v37.m128i_i64[0] = (__int64)v38;
    sub_1270B70(&v37, v23, (__int64)&v23[v24]);
    v25 = j__strlen("include");
    if ( v25 > 0x7FFFFFFFFFFFFFFFLL - v37.m128i_i64[1] )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v37, "include", v25);
    v42 = 260;
    *(_QWORD *)ptr = &v37;
    sub_112FA80(a2, a3, (__int64)ptr);
    if ( (_BYTE *)v37.m128i_i64[0] != v38 )
      operator delete((void *)v37.m128i_i64[0]);
  }
}
