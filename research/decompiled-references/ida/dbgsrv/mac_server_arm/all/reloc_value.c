/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: reloc_value
// Address: 0x0000000100073898

//----- (0000000100073898) ----------------------------------------------------
unsigned int *__fastcall reloc_value(unsigned int *result, int a2, __int64 a3, int a4)
{
  unsigned int *v4; // x19
  int v5; // w22
  __int64 v6; // x20
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  _BOOL4 v9; // w10
  __int64 v10; // x8
  unsigned int v11; // w8
  unsigned int v12; // w8
  unsigned int *v13; // x19
  int v14; // w22
  __int64 v15; // x21
  unsigned __int64 v16; // x0
  unsigned __int64 v17; // x8
  int v18; // w8
  unsigned __int64 v19; // t2
  _QWORD *v20; // x19

  if ( !result )
    return result;
  if ( !a4 )
  {
    if ( a2 > 3 )
    {
      if ( a2 != 4 )
      {
        if ( a2 != 8 )
        {
          if ( a2 != 16 )
            return result;
LABEL_12:
          v7 = *(_QWORD *)result;
          v8 = *(_QWORD *)result + a3;
          v9 = __CFADD__(*(_QWORD *)result, a3);
          *(_QWORD *)result = v8;
          if ( a3 >= 1 && v9 )
          {
            v10 = *((_QWORD *)result + 1) + 1LL;
          }
          else
          {
            if ( (a3 & 0x8000000000000000LL) == 0 || v8 <= v7 )
            {
LABEL_36:
              if ( !a4 )
                return result;
              goto LABEL_37;
            }
            v10 = *((_QWORD *)result + 1) - 1LL;
          }
          *((_QWORD *)result + 1) = v10;
          goto LABEL_36;
        }
        v17 = *(_QWORD *)result;
LABEL_31:
        *(_QWORD *)result = v17 + a3;
        goto LABEL_36;
      }
      v12 = *result;
LABEL_28:
      *result = v12 + a3;
      goto LABEL_36;
    }
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
        return result;
      LOWORD(v11) = *(_WORD *)result;
      goto LABEL_24;
    }
LABEL_25:
    *(_BYTE *)result += a3;
    goto LABEL_36;
  }
  if ( a2 <= 3 )
  {
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
        goto LABEL_37;
      v11 = bswap32(*(unsigned __int16 *)result) >> 16;
LABEL_24:
      *(_WORD *)result = v11 + a3;
      goto LABEL_36;
    }
    goto LABEL_25;
  }
  switch ( a2 )
  {
    case 4:
      v12 = bswap32(*result);
      goto LABEL_28;
    case 8:
      v13 = result;
      v14 = a4;
      v15 = a3;
      v16 = swap64(*(_QWORD *)result);
      a3 = v15;
      a4 = v14;
      a2 = 8;
      v17 = v16;
      result = v13;
      goto LABEL_31;
    case 16:
      v4 = result;
      v5 = a4;
      v6 = a3;
      swap128((__int64 *)result);
      a3 = v6;
      a4 = v5;
      a2 = 16;
      result = v4;
      goto LABEL_12;
  }
LABEL_37:
  HIDWORD(v19) = a2 - 2;
  LODWORD(v19) = a2 - 2;
  v18 = v19 >> 1;
  if ( v18 > 2 )
  {
    if ( v18 == 3 )
    {
      v20 = result;
      result = (unsigned int *)swap64(*(_QWORD *)result);
      *v20 = result;
    }
    else if ( v18 == 7 )
    {
      return (unsigned int *)swap128((__int64 *)result);
    }
  }
  else if ( v18 )
  {
    if ( v18 == 1 )
      *result = bswap32(*result);
  }
  else
  {
    *(_WORD *)result = bswap32(*(unsigned __int16 *)result) >> 16;
  }
  return result;
}
