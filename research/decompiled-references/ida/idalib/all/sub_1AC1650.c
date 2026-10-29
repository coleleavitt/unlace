_QWORD *__fastcall sub_1AC1650(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  result = *(_QWORD **)a1;
  v2 = 8LL * *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1 + v2;
  v4 = v2 >> 5;
  v5 = v2 >> 3;
  if ( v4 <= 0 )
  {
LABEL_15:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return (_QWORD *)v3;
LABEL_25:
        if ( (unsigned __int8)(*(_BYTE *)(*result + 8LL) - 25) >= 2u )
          return (_QWORD *)v3;
        return result;
      }
      if ( (unsigned __int8)(*(_BYTE *)(*result + 8LL) - 25) <= 1u )
        return result;
      ++result;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*result + 8LL) - 25) <= 1u )
      return result;
    ++result;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*result + 8LL) - 25) > 1u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(result[1] + 8LL) - 25) > 1u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(result[2] + 8LL) - 25) > 1u )
      {
        v6 = &result[4 * v4];
        while ( 1 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(result[3] + 8LL) - 25) <= 1u )
          {
            result += 3;
            return result;
          }
          if ( v6 == result + 4 )
          {
            result = v6;
            v5 = (v3 - (__int64)v6) >> 3;
            goto LABEL_15;
          }
          if ( (unsigned __int8)(*(_BYTE *)(result[4] + 8LL) - 25) <= 1u )
          {
            result += 4;
            return result;
          }
          if ( (unsigned __int8)(*(_BYTE *)(result[5] + 8LL) - 25) <= 1u )
          {
            result += 5;
            return result;
          }
          if ( (unsigned __int8)(*(_BYTE *)(result[6] + 8LL) - 25) <= 1u )
            break;
          result += 4;
        }
        result += 6;
      }
      else
      {
        result += 2;
      }
    }
    else
    {
      ++result;
    }
  }
  return result;
}
