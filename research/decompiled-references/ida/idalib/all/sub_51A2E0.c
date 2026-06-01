__int64 __fastcall sub_51A2E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 *v4; // r14
  signed int v5; // ebx
  unsigned __int64 v7; // rsi
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 936) & 1) != 0 )
  {
    v4 = *(__int64 **)(a1 + 1768);
    v5 = *(_DWORD *)(a1 + 996);
    if ( v5 <= *(_DWORD *)(a1 + 1000) )
    {
      if ( a4 )
      {
        do
        {
          v7 = (unsigned int)v5++;
          result = sub_519690(v4, v7, a3);
        }
        while ( v5 <= *(_DWORD *)(a1 + 1000) );
      }
      else
      {
        do
          result = sub_519D40((__int64)v4, v5++, a2, a3);
        while ( v5 <= *(_DWORD *)(a1 + 1000) );
      }
    }
  }
  return result;
}
