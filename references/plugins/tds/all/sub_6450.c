__int64 __fastcall sub_6450(__int64 a1, __int64 a2, double a3, __m128i a4)
{
  int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // edx
  __int64 result; // rax

  v4 = *(_DWORD *)(a2 + 8) - 32;
  if ( v4 <= 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 120) + *(unsigned int *)(a2 + 4);
  v6 = *(_DWORD *)(v5 + 4);
  if ( v4 < v6 )
    return 0;
  if ( !v6 )
    return 1;
  result = 0;
  if ( (unsigned int)(*(_DWORD *)(v5 + 24) - (*(_DWORD *)(v5 + 16) + *(_DWORD *)(v5 + 20))) <= 1 )
    return sub_43F0(a1, (unsigned __int16 *)(v5 + 32), v6, a3, a4);
  return result;
}
