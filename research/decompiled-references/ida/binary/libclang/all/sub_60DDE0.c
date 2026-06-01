__int64 __fastcall sub_60DDE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 CursorDisplayName; // rax
  __int16 *v9; // rdx
  __int16 *v10; // rsi
  __int16 *v11; // rbp
  __int64 v12; // r12
  const char *CString; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  _BYTE *v18; // r14
  __int16 *v19; // r13
  size_t v20; // rax
  size_t v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  _BYTE *v27; // r15
  __int64 v28; // [rsp+28h] [rbp-60h]
  __m128i v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h]

  CursorDisplayName = clang_getCursorDisplayName(
                        a1,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        (__int128)_mm_loadu_si128((const __m128i *)&a7),
                        (__int128)_mm_loadu_si128((const __m128i *)&a8));
  v10 = v9;
  v11 = v9;
  v12 = CursorDisplayName;
  CString = (const char *)clang_getCString(CursorDisplayName, v9);
  v17 = *(_QWORD *)(a1 + 160);
  v18 = *(_BYTE **)(a1 + 168);
  if ( CString )
  {
    v28 = *(_QWORD *)(a1 + 160);
    v19 = (__int16 *)CString;
    v20 = strlen(CString);
    v17 = v28;
    v21 = v20;
    if ( v28 - (__int64)v18 < v20 )
    {
      v10 = v19;
      sub_26240F0(a1 + 136, v19, v20);
      v17 = *(_QWORD *)(a1 + 160);
      v18 = *(_BYTE **)(a1 + 168);
    }
    else if ( v20 )
    {
      v10 = v19;
      memcpy(v18, v19, v20);
      v27 = (_BYTE *)(*(_QWORD *)(a1 + 168) + v21);
      v17 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 168) = v27;
      v18 = v27;
    }
  }
  if ( (_BYTE *)v17 == v18 )
  {
    v10 = &word_3B7789E;
    sub_26240F0(a1 + 136, &word_3B7789E, 1);
  }
  else
  {
    *v18 = 64;
    ++*(_QWORD *)(a1 + 168);
  }
  clang_getCursorLocation(
    &v29,
    (__int64)v10,
    v17,
    v14,
    v15,
    v16,
    (__int128)_mm_loadu_si128((const __m128i *)&a7),
    (__int128)_mm_loadu_si128((const __m128i *)&a8));
  sub_60BEB0(a1, (__int64)v10, v22, v23, v24, v25, (__int128)_mm_load_si128(&v29), v30);
  clang_disposeString(v12, v11);
  return a1;
}

