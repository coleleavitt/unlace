/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_827A0
// Address: 0x00000000000827A0

//----- (00000000000827A0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_827A0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // w26
  _BOOL4 v5; // w9
  unsigned __int8 *v6; // x22
  unsigned __int8 *v7; // x25
  _BOOL4 v8; // w8
  _BYTE *v9; // x10
  int v10; // w11
  int v11; // t1
  int v12; // w9
  _BYTE *v13; // x10
  int v14; // w11
  int v15; // t1
  unsigned __int8 *result; // x0
  int v17; // w8
  int v18; // t1

  v2 = *a2;
  if ( !*a2 )
  {
    result = a2;
    goto LABEL_47;
  }
  v5 = 0;
  v6 = a2;
  v7 = a2;
  v8 = 1;
  do
  {
    while ( 1 )
    {
      while ( *(_BYTE *)(a1 + 128) )
      {
        if ( v2 != 42 )
          goto LABEL_38;
        v9 = v7 + 1;
        v10 = v7[1];
        if ( v10 == 41 )
        {
          if ( (*(_BYTE *)(a1 + 676) & 2) != 0 )
            goto LABEL_21;
LABEL_38:
          v15 = *++v7;
          v2 = v15;
          if ( !v15 )
            goto LABEL_39;
        }
        else
        {
          if ( v10 != 47 || (*(_BYTE *)(a1 + 676) & 1) == 0 )
            goto LABEL_38;
LABEL_21:
          *(_BYTE *)(a1 + 128) = 0;
          v7 += 2;
          v2 = v9[1];
          if ( !v2 )
            goto LABEL_39;
        }
      }
      if ( v2 == 34 )
      {
        v5 = !v5;
        v8 = 1;
        goto LABEL_18;
      }
      if ( v5 )
        goto LABEL_18;
      if ( v2 != 40 )
        break;
      if ( (*(_BYTE *)(a1 + 676) & 2) != 0 )
      {
        v13 = v7 + 1;
        if ( v7[1] == 42 )
          goto LABEL_33;
      }
LABEL_36:
      if ( v8 )
      {
        v5 = 0;
        if ( (unsigned int)v2 - 9 < 5 || v2 == 32 )
          goto LABEL_38;
LABEL_7:
        v8 = __strchr_chk("!%&*+-/<=>^|:?(),.[\\]`{};~@#") != 0;
        goto LABEL_8;
      }
      if ( (unsigned __int8)(v2 - 9) >= 0x18u || ((0x80001Fu >> (v2 - 9)) & 1) == 0 )
        goto LABEL_7;
      v8 = 1;
LABEL_8:
      v5 = 0;
LABEL_18:
      *v6++ = v2;
      v11 = *++v7;
      v2 = v11;
      if ( !v11 )
        goto LABEL_39;
    }
    if ( v2 == 59 )
    {
      if ( (*(_BYTE *)(a1 + 676) & 8) != 0 )
        break;
      goto LABEL_36;
    }
    if ( v2 != 47 )
      goto LABEL_36;
    v13 = v7 + 1;
    v12 = v7[1];
    v14 = *(_DWORD *)(a1 + 676);
    if ( v12 == 47 && (v14 & 4) != 0 )
      break;
    if ( (v14 & 1) == 0 || v12 != 42 )
      goto LABEL_36;
LABEL_33:
    v5 = 0;
    *(_BYTE *)(a1 + 128) = 1;
    v7 = v13 + 1;
    v2 = v13[1];
  }
  while ( v2 );
LABEL_39:
  if ( v6 > a2 )
  {
    result = v6;
    while ( 1 )
    {
      v18 = *--result;
      v17 = v18;
      if ( (unsigned int)(v18 - 9) >= 5 && v17 != 32 )
        break;
      v6 = result;
      if ( result <= a2 )
        goto LABEL_47;
    }
  }
  result = v6;
LABEL_47:
  *result = 0;
  return result;
}
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
