__int64 __fastcall sub_129DC0(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v9; // r14d
  __int64 result; // rax
  char v13; // dl
  __int64 v15; // [rsp+8h] [rbp-40h]

  if ( (unsigned int)(*a4 - 56) <= 1 )
    return 0;
  v15 = (__int64)(a4 + 8);
  v9 = a8 & 1;
  if ( !(unsigned __int8)sub_1283C0(a1, a2, a3, (__int64)(a4 + 8), a5, a6, v9) )
  {
    if ( (a8 & 2) == 0 )
      return 0;
LABEL_8:
    if ( (unsigned __int8)sub_1283C0(a1, a2, a3, v15, a5, a7, v9) )
      return (unsigned int)-(unsigned __int8)sub_1283C0(a1, a2, a3, (__int64)(a4 + 12), a5, a6, v9);
    return 0;
  }
  v13 = sub_1283C0(a1, a2, a3, (__int64)(a4 + 12), a5, a7, v9);
  result = 1;
  if ( !v13 )
  {
    if ( (a8 & 2) == 0 )
      return 0;
    goto LABEL_8;
  }
  return result;
}
