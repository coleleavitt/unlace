__int64 __fastcall sub_847E10(unsigned int *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (dword_2CAD0AC & 0x40) != 0 && (*((_BYTE *)a1 + 6) & 1) != 0 )
  {
    if ( !(_DWORD)result )
    {
      a1[36] = 1;
      return sub_844D00(a1, 287963, 1, 1, 2, 0);
    }
  }
  else if ( !(_DWORD)result )
  {
    a1[36] = 1;
    result = (__int64)sub_844340((__int64)a1, 0x6402u, 1, 0, 2, 0);
    if ( result )
      *(_WORD *)result = -9457;
  }
  return result;
}

