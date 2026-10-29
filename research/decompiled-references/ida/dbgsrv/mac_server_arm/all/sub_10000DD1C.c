/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000DD1C
// Address: 0x000000010000DD1C

//----- (000000010000DD1C) ----------------------------------------------------
__int64 __fastcall sub_10000DD1C(int a1, __int64 a2, char *a3)
{
  __int64 result; // x0
  unsigned int v5; // w9
  unsigned int v6; // w10
  bool v7; // w11
  bool v8; // zf
  int v9; // w12
  char v10; // w8

  result = 0xFFFFFFFFLL;
  if ( a1 > 14 )
  {
    if ( a1 <= 16777227 )
    {
      v5 = 2;
      v7 = a1 == 16777223;
      if ( a1 == 16777223 )
        v9 = 0;
      else
        v9 = -1;
      if ( a1 == 18 )
      {
        v7 = 0;
        v6 = 15;
      }
      else
      {
        v6 = v9;
      }
      v8 = a1 == 15;
      goto LABEL_17;
    }
    if ( a1 == 16777228 )
    {
      result = 13;
      v10 = 1;
      if ( !a3 )
        return result;
      goto LABEL_42;
    }
    if ( a1 == 16777234 )
    {
      v10 = 0;
      result = 15;
      if ( !a3 )
        return result;
      goto LABEL_42;
    }
    if ( a1 != 33554444 )
    {
      v10 = 0;
      if ( !a3 )
        return result;
      goto LABEL_42;
    }
LABEL_35:
    v10 = 0;
    result = 13;
    if ( !a3 )
      return result;
    goto LABEL_42;
  }
  if ( a1 <= 10 )
  {
    v5 = 7;
    if ( a1 == 8 )
      v6 = 12;
    else
      v6 = -1;
    v7 = 0;
    if ( a1 == 7 )
      v6 = 0;
    v8 = a1 == 6;
LABEL_17:
    v10 = !v8 && v7;
    if ( v8 )
      result = v5;
    else
      result = v6;
    if ( !a3 )
      return result;
LABEL_42:
    *a3 = v10;
    return result;
  }
  if ( a1 == 11 )
  {
    v10 = 0;
    result = 25;
    if ( !a3 )
      return result;
    goto LABEL_42;
  }
  if ( a1 == 12 )
    goto LABEL_35;
  v8 = a1 == 14;
  v10 = 0;
  if ( v8 )
    result = 23;
  else
    result = 0xFFFFFFFFLL;
  if ( a3 )
    goto LABEL_42;
  return result;
}
