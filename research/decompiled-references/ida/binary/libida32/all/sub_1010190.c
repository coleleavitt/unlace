__int64 __fastcall sub_1010190(__int64 a1, char **a2, _DWORD *a3)
{
  char v3; // cl
  __int64 result; // rax

  v3 = **a2;
  if ( v3 < 73 )
    return 0;
  result = 1;
  if ( v3 > 79 )
  {
    result = 0;
    if ( (unsigned __int8)(v3 - 101) <= 1u )
    {
      *a3 |= 2u;
      return 1;
    }
  }
  return result;
}

