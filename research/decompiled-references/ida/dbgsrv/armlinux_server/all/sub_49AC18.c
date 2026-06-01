/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AC18
// Address: 0x000000000049AC18

//----- (000000000049AC18) ----------------------------------------------------
unsigned __int64 *__fastcall sub_49AC18(unsigned __int64 *result, int a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 *v4; // x19
  int v6; // w22
  unsigned __int64 v8; // x1

  if ( !result )
    return result;
  v4 = result;
  v6 = a4;
  if ( a4 )
  {
    result = sub_49AB88(result, result, a2);
    if ( a2 != 4 )
    {
      if ( a2 <= 4 )
      {
        if ( a2 != 1 )
        {
          if ( a2 != 2 )
            return sub_49AB88(v4, v4, a2);
          goto LABEL_7;
        }
        goto LABEL_13;
      }
      if ( a2 != 8 )
      {
        if ( a2 != 16 )
          return sub_49AB88(v4, v4, a2);
LABEL_17:
        v8 = *v4;
        result = (unsigned __int64 *)(a3 + *v4);
        *v4 = (unsigned __int64)result;
        if ( a3 > 0 && v8 > (unsigned __int64)result )
        {
          result = (unsigned __int64 *)(v4[1] + 1);
          v4[1] = (unsigned __int64)result;
        }
        else if ( a3 < 0 && v8 < (unsigned __int64)result )
        {
          result = (unsigned __int64 *)(v4[1] - 1);
          v4[1] = (unsigned __int64)result;
        }
LABEL_8:
        if ( !v6 )
          return result;
        return sub_49AB88(v4, v4, a2);
      }
LABEL_24:
      *v4 += a3;
      goto LABEL_8;
    }
LABEL_25:
    *(_DWORD *)v4 += a3;
    goto LABEL_8;
  }
  if ( a2 == 4 )
    goto LABEL_25;
  if ( a2 > 4 )
  {
    if ( a2 != 8 )
    {
      if ( a2 != 16 )
        return result;
      goto LABEL_17;
    }
    goto LABEL_24;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
      return result;
LABEL_7:
    *(_WORD *)v4 += a3;
    goto LABEL_8;
  }
LABEL_13:
  *(_BYTE *)v4 += a3;
  if ( v6 )
    return sub_49AB88(v4, v4, a2);
  return result;
}
