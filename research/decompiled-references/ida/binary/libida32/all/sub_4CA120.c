__int64 __fastcall sub_4CA120(__int64 a1, __int64 a2, __int16 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int8 v6; // dl
  int v7; // ebp
  int v8; // ebp

  if ( (a3 & 0x200) == 0 )
    return a4;
  v6 = (a3 & 0x4F) - 1;
  if ( v6 > 9u )
    return a4;
  v7 = dword_2389F80[v6];
  if ( v7 <= 0 )
    return a4;
  v8 = sub_3B8DF0(a1, a2) * v7;
  result = (unsigned int)(char)a4;
  if ( v8 != 8 )
  {
    result = (unsigned int)(__int16)a4;
    if ( v8 != 16 )
      return a4;
  }
  return result;
}

