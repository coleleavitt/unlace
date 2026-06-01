/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ECEC
// Address: 0x0004ECEC

//----- (0004ECEC) --------------------------------------------------------
int __fastcall sub_4ECEC(int a1)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *i; // r2
  int v4; // r1
  int v5; // t1
  bool v6; // zf
  int v7; // r1
  int result; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r0
  int v13; // [sp+0h] [bp-8h] BYREF

  v2 = *(unsigned __int8 **)(a1 + 4);
  if ( !*(_BYTE *)(a1 + 76) )
    goto LABEL_2;
  while ( 1 )
  {
LABEL_21:
    if ( *v2 != 42 )
    {
      if ( !*v2 )
        goto LABEL_12;
      *(_DWORD *)(a1 + 4) = v2 + 1;
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 4) = v2 + 1;
    v10 = v2[1];
    if ( v10 != 47 )
      break;
    if ( (*(_DWORD *)(a1 + 648) & 1) != 0 )
    {
      v2 += 2;
      *(_BYTE *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 4) = v2;
      goto LABEL_2;
    }
LABEL_20:
    v2 = *(unsigned __int8 **)(a1 + 4);
  }
  if ( v10 != 41 || (*(_DWORD *)(a1 + 648) & 2) == 0 )
    goto LABEL_20;
  v2 += 2;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 4) = v2;
  while ( 1 )
  {
LABEL_2:
    for ( i = v2; ; *(_DWORD *)(a1 + 4) = i )
    {
      v5 = *i++;
      v4 = v5;
      v6 = v5 == 32;
      if ( v5 != 32 )
        v6 = v4 == 9;
      if ( !v6 && !sub_4B030(v4) )
        break;
    }
    switch ( v7 )
    {
      case ';':
        result = *(_DWORD *)(a1 + 648) & 8;
        if ( !result )
          return result;
        goto LABEL_12;
      case '/':
        v11 = *(_DWORD *)(a1 + 648);
        result = v11 & 1;
        if ( (v11 & 1) == 0 )
          return result;
        break;
      case '(':
        v11 = *(_DWORD *)(a1 + 648);
        result = v11 & 2;
        if ( (v11 & 2) == 0 )
          return result;
        break;
      default:
        goto LABEL_11;
    }
    v12 = v2[1];
    if ( v12 == 42 )
    {
      *(_BYTE *)(a1 + 76) = 1;
      goto LABEL_21;
    }
    if ( v12 == 47 && (v11 & 4) != 0 )
      goto LABEL_12;
LABEL_11:
    if ( v7 )
      return 0;
LABEL_12:
    if ( *(_DWORD *)(a1 + 32) )
    {
      sub_4B714((_DWORD *)a1);
      v2 = *(unsigned __int8 **)(a1 + 4);
      if ( *(_BYTE *)(a1 + 76) )
        goto LABEL_21;
    }
    else
    {
      *(_BYTE *)(a1 + 172) = 0;
      v2 = (unsigned __int8 *)sub_4E5CC(a1, &v13);
      result = v13;
      if ( v13 == -1 )
        return 34;
      if ( v13 == 34 )
        return result;
      if ( v13 )
        return sub_70A2C(v13);
      v9 = *(unsigned __int8 *)(a1 + 76);
      *(_DWORD *)a1 = v2;
      *(_DWORD *)(a1 + 4) = v2;
      *(_DWORD *)(a1 + 8) = v2;
      *(_BYTE *)(a1 + 172) = 1;
      if ( v9 )
        goto LABEL_21;
    }
  }
}
// 4ED16: variable 'i' is possibly undefined
// 4ED34: variable 'v7' is possibly undefined
// 4ED8A: variable 'v2' is possibly undefined
