__int64 __fastcall sub_7C92B0(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 (__fastcall *v3)(__int64, __int64, unsigned __int8, char, __m128i); // rax
  int *v4; // rax
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdi

  v3 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8, char, __m128i))(*(_QWORD *)a1 + 616LL);
  if ( v3 != sub_7C9090 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v3)(a1, a2, 0, 0);
  if ( *(_WORD *)(a2 + 4)
    || ((v4 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v5 = -1) : (v5 = *v4), *(_DWORD *)(a1 + 104) != v5) )
  {
    sub_1872CE0("");
    sub_1873130(114, 36);
  }
  result = sub_7C8EA0(a1, a2, 0, 0, a3);
  v7 = *(_QWORD *)(a1 + 168);
  if ( v7 )
  {
    if ( (_DWORD)result != -2 )
      return sub_79B540(v7, (unsigned int)result & 0xFFFFFFFE, (unsigned int *)a2, *(double *)a3.m128i_i64);
  }
  return result;
}

