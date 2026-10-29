__int64 __fastcall sub_86C970(unsigned int *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (dword_2CD6FCC & 0x40) != 0 && (*((_BYTE *)a1 + 6) & 1) != 0 )
  {
    if ( !(_DWORD)result )
    {
      a1[36] = 1;
      result = sub_868680(a1, 17623, 1, 0, 1, 0);
      if ( !(_DWORD)result )
        a1[36] = 0;
    }
  }
  else if ( !(_DWORD)result )
  {
    a1[36] = 1;
    result = (__int64)sub_867CC0((__int64)a1, 0x4402u, 1, 0, 1, 0);
    if ( result )
    {
      *(_WORD *)result = -10481;
    }
    else if ( *a1 )
    {
      return result;
    }
    a1[36] = 0;
  }
  return result;
}
