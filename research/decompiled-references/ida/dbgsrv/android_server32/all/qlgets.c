/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgets
// Address: 0x0007B84C

//----- (0007B84C) --------------------------------------------------------
char *__fastcall qlgets(char *a1, int a2, int a3)
{
  char *result; // r0
  unsigned int v6; // r6
  char *i; // r7
  size_t v8; // r0
  int v9; // r0
  char *v10; // r0
  unsigned __int8 ptr[4]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  result = nullptr;
  if ( a1 && a3 )
  {
    if ( *(int *)a3 < 2 )
    {
      return qfgets(a1, a2, *(FILE **)(a3 + 8));
    }
    else if ( a2 >= 1 )
    {
      v6 = (unsigned int)&a1[a2 - 1];
      for ( i = a1; (unsigned int)i < v6; ++i )
      {
        if ( *(int *)a3 < 2 )
          v8 = qfread(*(FILE **)(a3 + 8), ptr, 1);
        else
          v8 = sub_7B4E0(a3, ptr, 1);
        if ( v8 != 1 || ptr[0] == -1 )
        {
          v9 = 1;
          if ( i != a1 )
            v9 = 7;
          if ( v9 != 7 )
            return nullptr;
          break;
        }
        if ( ptr[0] == 10 )
        {
          if ( i <= a1 )
          {
            v10 = i;
          }
          else
          {
            v10 = i - 1;
            if ( *(i - 1) != 13 )
              v10 = i;
          }
          *v10 = 10;
          i = v10 + 1;
          break;
        }
        *i = ptr[0];
      }
      *i = 0;
      return a1;
    }
  }
  return result;
}
// 7B8AE: conditional instruction was optimized away because %var_C.4==FFFFFFFF
// 7B8D2: conditional instruction was optimized away because r0.4 is in (==1|==7)
// E0550: using guessed type char under_debugger;
