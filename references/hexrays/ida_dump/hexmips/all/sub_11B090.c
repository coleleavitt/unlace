__int64 __fastcall sub_11B090(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned __int8 v5; // dl

  result = 0;
  if ( *a2 != 8 )
  {
    v5 = *(_BYTE *)(a1 + 56);
    if ( (v5 & (unsigned __int8)(2 - a4)) != 0 )
    {
      *(_BYTE *)(a1 + 40) = 1;
      return (unsigned __int8)sub_11ADE0(a2, *(unsigned __int8 **)(a1 + 48), v5);
    }
  }
  return result;
}
