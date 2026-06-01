/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgets
// Address: 0x00000000000B9C7C

//----- (00000000000B9C7C) ----------------------------------------------------
pthread_mutex_t *__fastcall qlgets(pthread_mutex_t *a1, __int64 a2, __int64 a3)
{
  pthread_mutex_t *result; // x0
  char *v6; // x23
  char *i; // x22
  size_t v8; // x0
  int v9; // w9
  int v10; // w8
  _BYTE dest[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v12; // [xsp+8h] [xbp-48h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __break(1u);
    return (pthread_mutex_t *)qlgetc((__int64)a1);
  }
  else
  {
    result = nullptr;
    if ( a1 && a3 )
    {
      if ( *(int *)a3 < 2 )
      {
        return (pthread_mutex_t *)qfgets(a1, a2, *(FILE **)(a3 + 8));
      }
      else
      {
        if ( a2 >= 1 )
        {
          v6 = (char *)a1 + a2 - 1;
          for ( i = (char *)a1; ; ++i )
          {
            if ( i >= v6 )
              goto LABEL_27;
            v8 = *(int *)a3 < 2 ? qfread(*(FILE **)(a3 + 8), dest, 1u) : sub_B9818((pthread_mutex_t *)a3, dest, 1u);
            v9 = v8 == 1 ? dest[0] : -1;
            if ( v9 == -1 )
              break;
            if ( v9 == 10 )
            {
              if ( i > (char *)a1 && *(i - 1) == 13 )
                --i;
              *i++ = 10;
              goto LABEL_27;
            }
            *i = v9;
          }
          v10 = i == (char *)a1 ? 1 : 7;
          if ( v10 == 7 )
          {
LABEL_27:
            *i = 0;
            return a1;
          }
        }
        return nullptr;
      }
    }
  }
  return result;
}
// B9D44: conditional instruction was optimized away because w8.4 is in (==1|==7)
// 168DF0: using guessed type char under_debugger;
