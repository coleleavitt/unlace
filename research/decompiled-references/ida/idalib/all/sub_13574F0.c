__int64 __fastcall sub_13574F0(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7)
{
  __int64 result; // rax
  unsigned int v8; // r8d

  if ( (_BYTE)a7 )
  {
    result = a1[114];
    if ( !(_BYTE)result )
      a1[115] = 1;
  }
  else if ( !a6 || (result = a1[116], (_BYTE)result) )
  {
    if ( a3 == 10 && *(_QWORD *)a2 == 0x692D746C6975623CLL && *(_WORD *)(a2 + 8) == 15982 )
    {
      return a7;
    }
    else
    {
      result = a1[112];
      v8 = a5 ^ 1;
      if ( !(_BYTE)result )
        return v8;
    }
  }
  return result;
}
