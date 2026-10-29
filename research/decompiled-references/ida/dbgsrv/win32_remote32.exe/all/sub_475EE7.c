/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475EE7
// Address: 0x00475EE7

//----- (00475EE7) --------------------------------------------------------
unsigned int __cdecl sub_475EE7(char *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // ecx
  int v6; // ebx
  unsigned int v7; // esi
  char *v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  DWORD v15; // [esp-4h] [ebp-1Ch]
  unsigned int v16; // [esp+10h] [ebp-8h]
  unsigned int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !a2 || !a3 )
    return 0;
  if ( !a4 || !a1 || a3 > 0xFFFFFFFF / a2 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a2, a4);
    return 0;
  }
  if ( (*(_DWORD *)(a4 + 12) & 0x4C0) != 0 )
    v5 = *(_DWORD *)(a4 + 24);
  else
    v5 = 4096;
  v6 = a3 * a2;
  v18 = v5;
  v7 = a3 * a2;
  if ( !(a3 * a2) )
    return a3;
  v8 = a1;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a4 + 12) & 0xC0) != 0 )
    {
      v9 = *(_DWORD *)(a4 + 8);
      if ( v9 )
      {
        if ( v9 < 0 )
          goto LABEL_40;
        if ( (*(_DWORD *)(a4 + 12) & 1) != 0 )
          return (v6 - v7) / a2;
        v10 = *(_DWORD *)(a4 + 8);
        v16 = v10;
        if ( v7 < v10 )
        {
          v10 = v7;
          v16 = v7;
        }
        sub_464310(*(_DWORD *)a4, (unsigned int)v8, v10);
        v11 = v16;
        *(_DWORD *)(a4 + 8) -= v16;
        v7 -= v16;
        *(_DWORD *)a4 += v16;
        goto LABEL_33;
      }
    }
    if ( v7 >= v5 )
      break;
    if ( sub_47CD8E(v6, a4, *v8, a4) == -1 )
      return (v6 - v7) / a2;
    v5 = *(_DWORD *)(a4 + 24);
    --v7;
    v18 = v5;
    if ( v5 <= 0 )
    {
      v5 = 1;
      v18 = 1;
    }
    v11 = 1;
LABEL_38:
    v8 = &a1[v11];
    a1 += v11;
    if ( !v7 )
      return a3;
  }
  if ( (*(_DWORD *)(a4 + 12) & 0xC0) != 0 )
  {
    if ( sub_46C0E1(v6, (_DWORD *)a4) )
      return (v6 - v7) / a2;
    v5 = v18;
  }
  v12 = v7;
  if ( v5 )
  {
    v12 = v7 - v7 % v5;
    v17 = v12;
  }
  else
  {
    v17 = v7;
  }
  if ( v12 >= 0xFFFFFFFE )
  {
    v12 = -2;
    v17 = -2;
  }
  v15 = v12;
  v13 = sub_47631B(v6, a4, a4);
  v14 = sub_474842(v6, a4, v13, a1, v15);
  if ( v14 != -1 )
  {
    v11 = v17;
    if ( v14 <= v17 )
      v11 = v14;
    v7 -= v11;
    if ( v14 >= v17 )
    {
LABEL_33:
      v5 = v18;
      goto LABEL_38;
    }
  }
LABEL_40:
  _InterlockedOr((volatile signed __int32 *)(a4 + 12), 0x10u);
  return (v6 - v7) / a2;
}
