/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetz
// Address: 0x000000010006C8A8

//----- (000000010006C8A8) ----------------------------------------------------
unsigned __int8 *__fastcall qlgetz(__int64 a1, off_t a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v5; // x23
  off_t v8; // x22
  unsigned __int8 *v9; // x24
  int v10; // w8
  unsigned __int8 __dst; // [xsp+7h] [xbp-39h] BYREF

  v5 = a4 - 1;
  if ( a4 >= 1 )
  {
    if ( a2 == -1 )
    {
      v8 = 0;
    }
    else if ( a1 )
    {
      if ( *(int *)a1 < 2 )
      {
        if ( (unsigned int)qfseek(*(FILE **)(a1 + 8), 0, 1) )
          v8 = -1;
        else
          v8 = qftell(*(FILE **)(a1 + 8));
        if ( *(int *)a1 < 2 )
        {
          if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), a2, 0) )
            qftell(*(FILE **)(a1 + 8));
        }
        else
        {
          *(_QWORD *)(a1 + 24) = a2;
        }
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = a2;
      }
    }
    else
    {
      v8 = -1;
    }
    v9 = a3;
    while ( v5 )
    {
      if ( !a1 )
      {
        v9 = a3;
        break;
      }
      if ( *(int *)a1 < 2 )
      {
        if ( qfread(*(FILE **)(a1 + 8), &__dst, 1u) != 1 )
          break;
      }
      else if ( sub_10006C498(a1, &__dst, 1u) != 1 )
      {
        break;
      }
      v10 = __dst;
      *v9++ = __dst;
      --v5;
      if ( !v10 )
        goto LABEL_26;
    }
    *v9 = 0;
    if ( !a1 )
      return a3;
LABEL_26:
    if ( a2 != -1 )
    {
      if ( *(int *)a1 < 2 )
      {
        if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), v8, 0) )
          qftell(*(FILE **)(a1 + 8));
      }
      else
      {
        *(_QWORD *)(a1 + 24) = v8;
      }
    }
  }
  return a3;
}
// 10006C9CC: conditional instruction was optimized away because x20.8!=0
