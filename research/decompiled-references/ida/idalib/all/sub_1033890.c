__int64 __fastcall sub_1033890(__int64 a1, char **a2, _DWORD *a3)
{
  char v3; // cl
  __int64 result; // rax

  v3 = **a2;
  if ( v3 == 113 )
    goto LABEL_5;
  if ( v3 <= 113 )
  {
    if ( v3 == 97 )
    {
      *a3 |= 2u;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = 1;
    if ( v3 != 115 )
    {
      result = 0;
      if ( v3 == 118 )
      {
LABEL_5:
        result = *(unsigned __int8 *)(a1 + 576);
        if ( (_BYTE)result )
          *a3 |= 2u;
      }
    }
  }
  return result;
}
