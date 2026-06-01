/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52B58
// Address: 0x00052B58

//----- (00052B58) --------------------------------------------------------
_BYTE *__fastcall sub_52B58(int a1, _BYTE *a2)
{
  int v2; // r7
  _BYTE *v3; // r5
  _BOOL4 v4; // r0
  _BYTE *v5; // r6
  _BYTE *v6; // r4
  unsigned int v7; // r0
  int v8; // r2
  _BYTE *v9; // r2
  _BYTE *result; // r0
  int v11; // [sp+Ch] [bp-10h]
  _BYTE *v13; // [sp+14h] [bp-8h]
  _BOOL4 v14; // [sp+18h] [bp-4h]

  v13 = (_BYTE *)(a1 + 492);
  LOBYTE(v2) = *a2;
  if ( !*a2 )
  {
    result = a2;
    goto LABEL_43;
  }
  v3 = (_BYTE *)(a1 + 68);
  v14 = 1;
  v4 = 0;
  v5 = a2;
  v6 = a2;
  while ( *v3 )
  {
    if ( (unsigned __int8)v2 == 42 )
    {
      v8 = (unsigned __int8)v6[1];
      if ( v8 != 41 )
      {
        if ( v8 != 47 || !((unsigned __int8)*v13 << 31) )
          goto LABEL_36;
LABEL_21:
        *v3 = 0;
        ++v6;
        goto LABEL_36;
      }
      if ( (*v13 & 2) != 0 )
        goto LABEL_21;
    }
LABEL_36:
    v2 = (unsigned __int8)*++v6;
    if ( !v2 )
      goto LABEL_37;
  }
  if ( (unsigned __int8)v2 == 34 )
  {
    v4 = !v4;
    v14 = 1;
    goto LABEL_19;
  }
  if ( v4 )
    goto LABEL_19;
  if ( (unsigned __int8)v2 == 40 )
  {
    if ( (*v13 & 2) == 0 )
      goto LABEL_34;
    v11 = (unsigned __int8)v6[1];
    v9 = v6 + 1;
LABEL_31:
    if ( v11 == 42 )
    {
      *v3 = 1;
      v4 = 0;
      v6 = v9;
      goto LABEL_36;
    }
LABEL_34:
    if ( v14 )
    {
      v4 = 0;
      if ( (unsigned int)(unsigned __int8)v2 - 9 < 5 || (unsigned __int8)v2 == 32 )
        goto LABEL_36;
    }
    else
    {
      v7 = (unsigned __int8)(v2 - 9);
      if ( v7 < 0x18 )
      {
        v14 = 1;
        if ( 0x80001Fu >> v7 << 31 )
          goto LABEL_9;
      }
    }
    v14 = memchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", (unsigned __int8)v2, 0x1Du) != nullptr;
LABEL_9:
    v4 = 0;
LABEL_19:
    *v5++ = v2;
    goto LABEL_36;
  }
  if ( (unsigned __int8)v2 == 59 )
  {
    if ( (*v13 & 8) != 0 )
      goto LABEL_37;
    goto LABEL_34;
  }
  if ( (unsigned __int8)v2 != 47 )
    goto LABEL_34;
  v11 = (unsigned __int8)v6[1];
  if ( v11 != 47 || (*(_DWORD *)v13 & 4) == 0 )
  {
    v9 = v6 + 1;
    if ( !(*(_DWORD *)v13 << 31) )
      goto LABEL_34;
    goto LABEL_31;
  }
LABEL_37:
  if ( v5 > a2 )
  {
    while ( 1 )
    {
      result = v5 - 1;
      if ( (unsigned int)(unsigned __int8)*(v5 - 1) - 9 >= 5 && *(v5 - 1) != 32 )
        break;
      --v5;
      if ( result <= a2 )
        goto LABEL_43;
    }
  }
  result = v5;
LABEL_43:
  *result = 0;
  return result;
}
