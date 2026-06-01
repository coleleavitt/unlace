__int64 __fastcall sub_7C9140(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, unsigned __int8, char, __m128i); // rax
  int *v6; // rax
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdi

  v4 = a1 - 48;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8, char, __m128i))(*(_QWORD *)(a1 - 48) + 616LL);
  if ( v5 != sub_7C9090 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v5)(v4, a2, 0, 0);
  if ( *(_WORD *)(a2 + 4)
    || ((v6 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v7 = -1) : (v7 = *v6), *(_DWORD *)(a1 + 56) != v7) )
  {
    sub_1872CE0("");
    sub_1873130(114, 36);
  }
  result = sub_7C8EA0(v4, a2, 0, 0, a3);
  v9 = *(_QWORD *)(a1 + 120);
  if ( v9 )
  {
    if ( (_DWORD)result != -2 )
      return sub_79B540(v9, (unsigned int)result & 0xFFFFFFFE, (unsigned int *)a2, *(double *)a3.m128i_i64);
  }
  return result;
}

