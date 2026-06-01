__int64 __fastcall sub_16E6460(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __m128 a6, double a7)
{
  int v8; // r12d
  __int64 result; // rax

  v8 = a3;
  result = sub_16E3480(a1, a2, a3, a4, a5, a6, a7);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a2 + 64) != 24 )
      return sub_16BC9D0(a1, a2, v8, a4);
  }
  else
  {
    *(_BYTE *)(a1 + 128) = 1;
  }
  return result;
}
