/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48ED08
// Address: 0x000000000048ED08

//----- (000000000048ED08) ----------------------------------------------------
__int64 __fastcall sub_48ED08(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // x21
  unsigned int v4; // w20
  unsigned __int8 *i; // x6
  int v6; // w1
  __int64 result; // x0
  unsigned int v8; // t1
  int v9; // t1
  unsigned int v10; // w0
  unsigned __int8 *v11; // x3
  int v12; // w8
  unsigned __int8 v13; // w2
  unsigned __int8 *v14; // x7
  unsigned int v15; // w4
  unsigned int v16; // w5
  bool v17; // w1
  int v18; // w1
  unsigned int v19; // t1

  v3 = a1;
  v4 = *a1;
LABEL_2:
  for ( i = v3; ; ++i )
  {
LABEL_3:
    v3 = i;
    v6 = *a2;
    if ( !v4 )
      goto LABEL_14;
    if ( !*a2 )
      return v4 == v6;
    if ( v4 == 47 )
    {
LABEL_14:
      while ( v6 == 42 )
      {
        v9 = *++a2;
        v6 = v9;
      }
      return v4 == v6;
    }
    if ( v6 == 47 )
      return v4 == v6;
    if ( v6 == 91 )
      break;
    result = v4 == v6 || v6 == 63;
    if ( !(_DWORD)result )
    {
      if ( v6 != 42 )
        return result;
      result = (unsigned __int8)sub_48ED08(i + 1, a2);
      if ( (_DWORD)result )
        return result;
      ++a2;
      goto LABEL_2;
    }
    ++a2;
    v8 = i[1];
    v4 = v8;
  }
  v10 = a2[1];
  if ( v10 == 33 )
  {
    v10 = a2[2];
    v11 = a2 + 2;
    v12 = 1;
  }
  else
  {
    v11 = a2 + 1;
    v12 = 0;
  }
  v13 = 0;
  v14 = v11 + 1;
  while ( 1 )
  {
    a2 = v11 + 1;
    if ( v10 == 93 )
      break;
    if ( !v10 )
      return 0;
LABEL_21:
    v15 = v11[1];
    v16 = v10;
    if ( v15 == 45 )
    {
      v16 = v11[2];
      if ( v16 == 93 )
      {
        v16 = v10;
      }
      else
      {
        a2 = v11 + 3;
        if ( !v11[2] )
          return 0;
        v15 = v11[3];
      }
    }
    v11 = a2;
    v17 = v10 <= v4;
    v10 = v15;
    v18 = v17 && v4 <= v16;
    if ( v18 )
      v13 = v18;
  }
  if ( a2 == v14 )
    goto LABEL_21;
  if ( v12 )
    v13 ^= 1u;
  result = v13 & (a2 != nullptr);
  if ( (v13 & (a2 != nullptr)) != 0 )
  {
    v19 = *++i;
    v4 = v19;
    goto LABEL_3;
  }
  return result;
}
