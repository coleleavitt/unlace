__int64 __fastcall sub_5025E0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 *v4; // r14
  signed int v5; // ebx
  __int64 v7; // rsi
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 768) & 1) != 0 )
  {
    v4 = *(__int64 **)(a1 + 1576);
    v5 = *(_DWORD *)(a1 + 828);
    if ( v5 <= *(_DWORD *)(a1 + 832) )
    {
      if ( (_BYTE)a4 )
      {
        do
        {
          v7 = (unsigned int)v5++;
          result = sub_5019E0(v4, v7, a3, a4);
        }
        while ( v5 <= *(_DWORD *)(a1 + 832) );
      }
      else
      {
        do
          result = sub_502060((__int64)v4, v5++, a2, a3);
        while ( v5 <= *(_DWORD *)(a1 + 832) );
      }
    }
  }
  return result;
}

