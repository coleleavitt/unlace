__int64 __fastcall sub_385C80(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r13
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r15
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v38; // [rsp+0h] [rbp-60h]
  __int128 v39; // [rsp+8h] [rbp-58h] BYREF
  __m128i v40; // [rsp+18h] [rbp-48h]

  v39 = 0;
  v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4DD08), (__m128i)(unsigned __int64)sub_3884F0);
  v38 = sub_EE4D00(a1, a2, (unsigned int)&v39, a4, a5, a6);
  if ( v40.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
  v39 = 0;
  v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4DD10), (__m128i)(unsigned __int64)sub_387470);
  v12 = sub_EE4D00(a1, a2, (unsigned int)&v39, v6, v7, v8);
  if ( v40.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
  v39 = 0;
  v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4DD18), (__m128i)(unsigned __int64)&sub_387C90);
  v16 = sub_EE4D00(a1, a2, (unsigned int)&v39, v9, v10, v11);
  if ( v40.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
  v39 = 0;
  v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4DD20), (__m128i)(unsigned __int64)&sub_386C10);
  v20 = sub_EE4D00(a1, a2, (unsigned int)&v39, v13, v14, v15);
  if ( v40.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
  v39 = 0;
  v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4DD28), (__m128i)(unsigned __int64)&sub_386490);
  v21 = sub_EE4D00(a1, a2, (unsigned int)&v39, v17, v18, v19);
  if ( v40.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
  v22 = sub_EF3CC0(600.0);
  v23 = sub_EF3C00();
  v24 = sub_EF3F30(v23, v22);
  v25 = sub_EE8F50(v24, v20, v21);
  v26 = sub_EF3CC0(300.0);
  v27 = sub_EF3C00();
  v28 = sub_EF3F30(v27, v26);
  v29 = sub_EE8F50(v28, v16, v25);
  v30 = sub_EF3CC0(80.0);
  v31 = sub_EF3C00();
  v32 = sub_EF3F30(v31, v30);
  v33 = sub_EE8F50(v32, v12, v29);
  v34 = sub_EF3CC0(30.0);
  v35 = sub_EF3C00();
  v36 = sub_EF3F30(v35, v34);
  return sub_EE8F50(v36, v38, v33);
}

