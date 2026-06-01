__int64 __fastcall sub_4E1680(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 v6; // dl
  int v7; // ebp
  int v8; // edx

  if ( (a3 & 0x200) == 0 )
    return a4;
  v6 = (a3 & 0x4F) - 1;
  if ( v6 > 9u )
    return a4;
  v7 = dword_23AE0E0[v6];
  if ( v7 <= 0 )
    return a4;
  v8 = sub_3BDA80(a1, a2) * v7;
  result = (__int16)a4;
  if ( v8 != 16 )
  {
    result = (int)a4;
    if ( v8 != 32 )
    {
      result = (char)a4;
      if ( v8 != 8 )
        return a4;
    }
  }
  return result;
}
