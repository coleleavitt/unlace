__int64 __fastcall sub_847B10(unsigned int *a1, char a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // r9
  char *v11; // rax
  char *v12; // rax
  int v14; // eax
  char *v15; // rax

  if ( a3 != a5 || (v10 = a4, a4 != a6) )
  {
    if ( a3 > 126 )
    {
      if ( !(unsigned int)sub_844B90(a1, 15, 0, a5, a6) )
      {
        v11 = sub_844340((__int64)a1, 1u, 0, 0, 15, 0);
        if ( v11 )
        {
          v11[1] |= a2;
          *v11 = -9;
          v12 = sub_844340((__int64)a1, 1u, 15, 0, a3, a4);
          if ( v12 )
          {
            *v12 = -119;
            return 0;
          }
        }
      }
      return *a1;
    }
    v14 = sub_844B90(a1, a3, 0, a5, a6);
    v10 = 0;
    if ( v14 )
      return *a1;
  }
  v15 = sub_844340((__int64)a1, 1u, 0, 0, a3, v10);
  if ( v15 )
  {
    v15[1] |= a2;
    *v15 = -9;
    return 0;
  }
  return *a1;
}

