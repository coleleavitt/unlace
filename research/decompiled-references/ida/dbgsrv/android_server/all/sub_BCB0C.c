/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BCB0C
// Address: 0x00000000000BCB0C

//----- (00000000000BCB0C) ----------------------------------------------------
bool __fastcall sub_BCB0C(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // w21
  unsigned __int8 *v4; // x20
  int v5; // w8
  int v6; // w9
  unsigned __int8 *v7; // x10
  int v8; // w8
  unsigned __int8 v9; // w11
  unsigned __int8 *v10; // x12
  int v11; // w13
  int v12; // w14
  _BOOL8 result; // x0
  _BOOL4 v14; // w9
  int v15; // w8
  int v16; // t1

  v2 = *a1;
  if ( !*a1 )
    goto LABEL_33;
  v4 = a1;
  do
  {
    if ( v2 == 47 )
    {
      v2 = 47;
      goto LABEL_33;
    }
    ++v4;
    ++a2;
    while ( 1 )
    {
      v5 = *(a2 - 1);
      if ( !*(a2 - 1) || v5 == 47 )
      {
        --a2;
        goto LABEL_33;
      }
      if ( v5 == 91 )
      {
        v7 = a2 + 1;
        v6 = *a2;
        v8 = 0;
        if ( v6 != 33 )
          v7 = a2;
        a2 = v7 + 1;
        v9 = *v7;
        v10 = v7;
        while ( 1 )
        {
          if ( !v9 )
            return 0;
          v11 = *a2;
          if ( v11 == 45 )
          {
            v12 = v10[2];
            if ( v12 != 93 )
            {
              if ( !v10[2] )
                return 0;
              v10 += 3;
              v11 = *v10;
              goto LABEL_24;
            }
            v11 = 45;
          }
          LOBYTE(v12) = v9;
          v10 = a2;
LABEL_24:
          v8 |= v9 <= (unsigned int)v2 && (unsigned __int8)v12 >= (unsigned int)v2;
          a2 = v10 + 1;
          v9 = v11;
          if ( v11 == 93 )
          {
            v9 = 93;
            if ( v10 != v7 )
            {
              result = 0;
              v14 = v6 == 33;
              if ( v10 == (unsigned __int8 *)-1LL || ((v14 ^ v8) & 1) == 0 )
                return result;
              goto LABEL_28;
            }
          }
        }
      }
      if ( v2 == v5 || v5 == 63 )
        break;
      if ( v5 != 42 )
        return 0;
      if ( (sub_BCB0C(v4, a2 - 1) & 1) != 0 )
        return 1;
      ++a2;
      if ( v2 == 47 )
      {
        --a2;
        v2 = 47;
        goto LABEL_33;
      }
    }
LABEL_28:
    v2 = *v4;
  }
  while ( *v4 );
  do
  {
LABEL_33:
    v16 = *a2++;
    v15 = v16;
  }
  while ( v16 == 42 );
  return v2 == v15;
}
