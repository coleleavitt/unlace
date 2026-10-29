/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76888
// Address: 0x00076888

//----- (00076888) --------------------------------------------------------
unsigned int __fastcall sub_76888(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r6
  unsigned int v3; // r4
  unsigned __int8 *i; // r7
  bool v6; // zf
  unsigned int result; // r0
  unsigned int v8; // t1
  int v9; // r3
  char v10; // r6
  unsigned __int8 *v11; // r3
  int v12; // lr
  unsigned __int8 *v13; // r12
  unsigned int v14; // r1
  bool v15; // cc
  char v16; // r0
  unsigned int v17; // r2
  int v18; // t1

  v2 = a1;
  v3 = *a1;
LABEL_2:
  for ( i = v2; ; ++i )
  {
    v2 = i;
    v9 = *a2;
    if ( !v3 )
      goto LABEL_41;
    if ( !*a2 )
      return v3 == v9;
    if ( v3 == 47 )
    {
LABEL_41:
      while ( v9 == 42 )
      {
        v18 = *++a2;
        v9 = v18;
      }
      return v3 == v9;
    }
    if ( v9 == 47 )
      return v3 == v9;
    if ( v9 == 91 )
      break;
    v6 = v3 == v9;
    if ( v3 != v9 )
      v6 = v9 == 63;
    if ( !v6 )
    {
      result = 0;
      if ( v9 != 42 )
        return result;
      result = sub_76888(i + 1, a2);
      if ( result )
        return result;
      ++a2;
      goto LABEL_2;
    }
    ++a2;
LABEL_8:
    v8 = i[1];
    v3 = v8;
  }
  result = a2[1];
  v10 = 0;
  if ( result == 33 )
    v11 = a2 + 2;
  else
    v11 = a2 + 1;
  if ( result == 33 )
  {
    result = a2[2];
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = v11 + 1;
  while ( 1 )
  {
    a2 = v11 + 1;
    v17 = result;
    if ( result == 93 )
      break;
    if ( !result )
      return result;
LABEL_22:
    v14 = v11[1];
    if ( v14 == 45 )
    {
      v17 = v11[2];
      if ( v17 == 93 )
      {
        v17 = result;
      }
      else
      {
        a2 = v11 + 3;
        if ( !v11[2] )
          return 0;
        v14 = v11[3];
      }
    }
    v15 = result > v3;
    if ( result <= v3 )
      v15 = v3 > v17;
    v11 = a2;
    v16 = !v15;
    if ( !v15 )
      v10 = v16;
    result = v14;
  }
  if ( a2 == v13 )
    goto LABEL_22;
  if ( v12 )
    v10 ^= 1u;
  if ( v11 == (unsigned __int8 *)-1 )
    result = 0;
  else
    result = v10 & 1;
  if ( result )
    goto LABEL_8;
  return result;
}
