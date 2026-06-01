__int64 __fastcall sub_3EC660(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi

  result = sub_3EC5A0(a1, (__int64)"read", a2, 0, a3);
  if ( *(_WORD *)(a1 + 48) == 126 )
  {
    v5 = *(unsigned __int8 *)(a1 + 69);
    v6 = *(unsigned __int8 *)(a1 + 109);
    if ( (_BYTE)v5 != (_BYTE)v6 )
      return sub_1D3CC0(a1, v6, v5, a3, a3, 0);
  }
  return result;
}
