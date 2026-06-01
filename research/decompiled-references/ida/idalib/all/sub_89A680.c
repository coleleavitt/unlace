__int64 __fastcall sub_89A680(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int a5)
{
  unsigned __int8 v6; // di
  __int64 result; // rax

  v6 = *a1;
  if ( a2 == 2 )
  {
    if ( v6 == 10 )
    {
LABEL_5:
      *a4 = 1;
      return 1;
    }
    if ( v6 != 13 )
      return 0;
    if ( (unsigned __int64)a1 >= a3 - 1 )
      goto LABEL_14;
  }
  else
  {
    if ( v6 != 13 )
    {
      if ( v6 <= 0xDu )
      {
        result = 0;
        if ( (unsigned __int8)(v6 - 10) > 2u )
          return result;
        goto LABEL_5;
      }
      if ( v6 == 0x85 )
      {
        *a4 = 1 - ((a5 == 0) - 1);
        return 1;
      }
      return 0;
    }
    a2 = 1;
    if ( (unsigned __int64)a1 >= a3 - 1 )
      goto LABEL_15;
    a2 = 2;
  }
  if ( a1[1] != 10 )
LABEL_14:
    a2 = 1;
LABEL_15:
  *a4 = a2;
  return 1;
}
