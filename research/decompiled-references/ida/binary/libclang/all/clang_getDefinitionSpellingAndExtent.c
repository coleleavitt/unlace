__int64 __fastcall clang_getDefinitionSpellingAndExtent(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        __int128 a7)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 result; // rax
  __m128i v14; // [rsp+0h] [rbp-78h]
  _BYTE v17[64]; // [rsp+38h] [rbp-40h] BYREF

  v14 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A250(
         (_DWORD)a1,
         (_DWORD)a2,
         (_DWORD)a3,
         (_DWORD)a4,
         (_DWORD)a5,
         (_DWORD)a6,
         v14.m128i_i32[0],
         v14.m128i_i64[1]);
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL);
  if ( v10 == sub_5F7E00 )
    v11 = sub_78BC30(v9, v17);
  else
    v11 = v10(v9);
  v12 = *(_QWORD *)(sub_798D40(v9) + 2152);
  *a1 = sub_CAC8E0(v12, *(unsigned int *)(v11 + 8), 0);
  *a2 = sub_CAC8E0(v12, *(unsigned int *)(v11 + 12), 0);
  *a3 = sub_CABD10(v12, *(unsigned int *)(v11 + 8), 0);
  *a4 = sub_CAC570(v12, *(unsigned int *)(v11 + 8), 0);
  *a5 = sub_CABD10(v12, *(unsigned int *)(v11 + 12), 0);
  result = sub_CAC570(v12, *(unsigned int *)(v11 + 12), 0);
  *a6 = result;
  return result;
}

