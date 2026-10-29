/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000441A4
// Address: 0x00000001000441A4

//----- (00000001000441A4) ----------------------------------------------------
unsigned __int8 *__fastcall sub_1000441A4(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v3; // w26
  _BOOL4 v5; // w9
  unsigned __int8 *v6; // x20
  unsigned __int8 *v7; // x25
  _BOOL4 v8; // w8
  int v9; // t1
  int v10; // w11
  int v11; // w11
  int v12; // w9
  int v13; // w10
  unsigned __int8 *v14; // x8
  int v15; // w9
  int v16; // t1

  v3 = *a2;
  if ( !*a2 )
  {
LABEL_42:
    v6 = a2;
    goto LABEL_43;
  }
  v5 = 0;
  v6 = a2;
  v7 = a2;
  v8 = 1;
  while ( *(_BYTE *)(a1 + 128) == 1 )
  {
    if ( v3 == 42 )
    {
      v10 = v7[1];
      if ( v10 == 47 )
      {
        v11 = 1;
LABEL_19:
        if ( (*(_DWORD *)(a1 + 612) & v11) != 0 )
        {
          *(_BYTE *)(a1 + 128) = 0;
          ++v7;
        }
        goto LABEL_5;
      }
      if ( v10 == 41 )
      {
        v11 = 2;
        goto LABEL_19;
      }
    }
LABEL_5:
    v9 = *++v7;
    v3 = v9;
    if ( !v9 )
      goto LABEL_36;
  }
  if ( v3 == 34 )
  {
    v5 = !v5;
    v8 = 1;
LABEL_4:
    *v6++ = v3;
    goto LABEL_5;
  }
  if ( v5 )
  {
    v5 = 1;
    goto LABEL_4;
  }
  if ( v3 == 59 )
  {
    if ( (*(_BYTE *)(a1 + 612) & 8) != 0 )
      goto LABEL_36;
    goto LABEL_27;
  }
  if ( v3 != 47 )
  {
    if ( v3 != 40 )
      goto LABEL_27;
    v12 = *(_DWORD *)(a1 + 612);
    v13 = 2;
    goto LABEL_23;
  }
  v12 = *(_DWORD *)(a1 + 612);
  v13 = 1;
  if ( v7[1] != 47 || (v12 & 4) == 0 )
  {
LABEL_23:
    if ( (v12 & v13) != 0 && v7[1] == 42 )
    {
      v5 = 0;
      *(_BYTE *)(a1 + 128) = 1;
      ++v7;
      goto LABEL_5;
    }
LABEL_27:
    if ( v8 )
    {
      v5 = 0;
      v8 = 1;
      if ( (unsigned int)v3 - 9 < 5 || v3 == 32 )
        goto LABEL_5;
    }
    else if ( (unsigned __int8)(v3 - 9) < 0x18u && ((0x80001Fu >> (v3 - 9)) & 1) != 0 )
    {
      v8 = 1;
LABEL_35:
      v5 = 0;
      goto LABEL_4;
    }
    v8 = memchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v3, 0x1Du) != nullptr;
    goto LABEL_35;
  }
LABEL_36:
  if ( v6 > a2 )
  {
    v14 = v6;
    while ( 1 )
    {
      v16 = *--v14;
      v15 = v16;
      if ( (unsigned int)(v16 - 9) >= 5 && v15 != 32 )
        break;
      v6 = v14;
      if ( v14 <= a2 )
        goto LABEL_42;
    }
  }
LABEL_43:
  *v6 = 0;
  return v6;
}
