/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AB88
// Address: 0x000000000049AB88

//----- (000000000049AB88) ----------------------------------------------------
unsigned __int64 *__fastcall sub_49AB88(unsigned __int64 *result, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // x3
  _QWORD *v4; // x19

  if ( a3 == 4 )
  {
    *(_DWORD *)result = bswap32(*(_DWORD *)a2);
  }
  else if ( a3 > 4 )
  {
    if ( a3 == 8 )
    {
      v4 = result;
      result = (unsigned __int64 *)sub_48CD50(*a2);
      *v4 = result;
    }
    else if ( a3 == 16 )
    {
      if ( result != a2 )
      {
        v3 = a2[1];
        *result = *a2;
        result[1] = v3;
      }
      return (unsigned __int64 *)sub_49CEA8(result);
    }
  }
  else if ( a3 == 1 )
  {
    *(_BYTE *)result = *(_BYTE *)a2;
  }
  else if ( a3 == 2 )
  {
    *(_WORD *)result = __rev16(*(unsigned __int16 *)a2);
  }
  return result;
}
