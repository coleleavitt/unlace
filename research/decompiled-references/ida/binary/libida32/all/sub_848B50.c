__int64 __fastcall sub_848B50(unsigned int *a1, int a2, int a3, __int64 a4)
{
  int v4; // r8d
  __int64 v5; // r9
  __int64 result; // rax

  v4 = a3;
  v5 = a4;
  result = *a1;
  if ( (dword_2CAD0AC & 0x40) != 0 && (*((_BYTE *)a1 + 6) & 1) != 0 )
  {
    if ( !(_DWORD)result )
    {
      a1[36] = 1;
      if ( a3 != 127 )
        return sub_844D00(a1, 533614, a2, 0, v4, v5);
      result = sub_844B90(a1, 15, 0, 127, a4);
      if ( !(_DWORD)result )
      {
        v5 = 0;
        v4 = 15;
        return sub_844D00(a1, 533614, a2, 0, v4, v5);
      }
    }
  }
  else if ( !(_DWORD)result )
  {
    a1[36] = 1;
    if ( a3 != 127 || (result = sub_844B90(a1, 15, 0, 127, a4), v5 = 0, v4 = 15, !(_DWORD)result) )
    {
      result = (__int64)sub_844340((__int64)a1, 0x2402u, a2, 0, v4, v5);
      if ( result )
        *(_WORD *)result = 28175;
    }
  }
  return result;
}

