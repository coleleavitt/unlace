/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BC90
// Address: 0x0004BC90

//----- (0004BC90) --------------------------------------------------------
unsigned __int8 *__fastcall sub_4BC90(int a1)
{
  unsigned __int8 *i; // r3
  int v3; // r4
  unsigned __int8 *v4; // r5
  bool v5; // zf
  unsigned int v6; // r8
  unsigned __int8 *v7; // r7
  bool v8; // zf
  bool v9; // zf
  unsigned __int8 *v10; // r3
  int v11; // r0
  int v12; // t1
  bool v13; // zf

  for ( i = *(unsigned __int8 **)(a1 + 4); ; *(_DWORD *)(a1 + 4) = i )
  {
    v3 = *i;
    v4 = i++;
    v5 = v3 == 32;
    if ( v3 != 32 )
      v5 = v3 == 9;
    if ( !v5 && !sub_4B030(v3) )
      break;
  }
  v6 = v3 & 0x80;
  v7 = v4;
  if ( (v3 & 0xFFFFFF80) == 0 && isalpha(v3) )
    goto LABEL_17;
  v8 = v3 == 36;
  if ( v3 != 36 )
    v8 = v3 == 95;
  if ( v8 )
  {
LABEL_17:
    while ( 1 )
    {
      if ( v6 || !isalnum(v3) )
      {
        v9 = v3 == 36;
        if ( v3 != 36 )
          v9 = v3 == 95;
        if ( !v9 )
          break;
      }
      *(_DWORD *)(a1 + 4) = ++v7;
      v3 = *v7;
      v6 = v3 & 0xFFFFFF80;
    }
  }
  *(_BYTE *)(a1 + 608) = v3;
  if ( *v7 )
  {
    *v7 = 0;
    v10 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 1);
    for ( *(_DWORD *)(a1 + 4) = v10; ; *(_DWORD *)(a1 + 4) = v10 )
    {
      v12 = *v10++;
      v11 = v12;
      v13 = v12 == 9;
      if ( v12 != 9 )
        v13 = v11 == 32;
      if ( !v13 && !sub_4B030(v11) )
        break;
    }
  }
  return v4;
}
// 4BCB4: mask 0xFFFFFF80 is shortened because r4.4 <= 0xFF
// 4BC9A: variable 'i' is possibly undefined
// 4BCF8: variable 'v10' is possibly undefined
