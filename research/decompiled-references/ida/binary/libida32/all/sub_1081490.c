__int64 __fastcall sub_1081490(__int64 a1, _WORD *a2, __int64 a3, int a4, bool *a5)
{
  if ( a3 == 2 )
  {
    if ( *a2 == 24946 || *a2 == 28787 || *a2 == 28775 || *a2 == 28788 )
      goto LABEL_12;
  }
  else if ( !a3 )
  {
    return 0;
  }
  if ( *(_BYTE *)a2 != 120 && *(_BYTE *)a2 != 97 && *(_BYTE *)a2 != 115 && *(_BYTE *)a2 != 116 )
    return 0;
LABEL_12:
  *a5 = ((unsigned __int8)sub_2294160(a1 + 216) == 0 ? 32 : 64) != a4;
  return 1;
}

