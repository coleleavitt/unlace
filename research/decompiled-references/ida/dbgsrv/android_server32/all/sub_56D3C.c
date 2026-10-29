/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56D3C
// Address: 0x00056D3C

//----- (00056D3C) --------------------------------------------------------
int __fastcall sub_56D3C(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // r4
  int v6; // r6
  unsigned int v7; // r0
  int v8; // r1
  int v9; // r2
  _DWORD *v10; // r0
  _DWORD *v11; // r3
  _DWORD *v12; // r7
  _DWORD *v13; // r2
  unsigned int v14; // r1
  unsigned int v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r0
  unsigned int v19; // [sp+Ch] [bp-14h]
  unsigned int v21; // [sp+18h] [bp-8h]
  _DWORD *v22; // [sp+1Ch] [bp-4h]

  v5 = a2[1];
  v6 = (v5 - 1) & v5;
  v7 = a3[1];
  v19 = v5 - 1;
  if ( v6 )
  {
    if ( v7 >= v5 )
      v7 %= v5;
  }
  else
  {
    v7 &= v5 - 1;
  }
  v21 = v7;
  v8 = 4 * v7;
  v22 = a2;
  v9 = *a2;
  v10 = *(_DWORD **)(v9 + 4 * v7);
  v11 = (_DWORD *)(v9 + v8);
  do
  {
    v12 = v10;
    v10 = (_DWORD *)*v10;
  }
  while ( v10 != a3 );
  v13 = v22;
  v14 = v21;
  if ( v12 == v22 + 2 )
    goto LABEL_14;
  v15 = v12[1];
  if ( !v6 )
  {
    if ( (v15 & v19) == v21 )
      goto LABEL_20;
LABEL_14:
    if ( *a3 )
    {
      v16 = *(_DWORD *)(*a3 + 4);
      if ( v6 )
      {
        if ( v16 >= v5 )
        {
          v13 = v22;
          v16 %= v5;
          v14 = v21;
        }
        if ( v16 == v14 )
          goto LABEL_20;
      }
      else if ( (v16 & v19) == v14 )
      {
        goto LABEL_20;
      }
    }
    *v11 = 0;
    goto LABEL_20;
  }
  if ( v15 >= v5 )
  {
    v13 = v22;
    v15 %= v5;
    v14 = v21;
  }
  if ( v15 != v14 )
    goto LABEL_14;
LABEL_20:
  if ( *a3 )
  {
    v17 = *(_DWORD *)(*a3 + 4);
    if ( !v6 )
    {
      v17 &= v19;
      if ( v17 == v14 )
        goto LABEL_26;
      goto LABEL_25;
    }
    if ( v17 >= v5 )
    {
      v13 = v22;
      v17 %= v5;
      v14 = v21;
    }
    if ( v17 != v14 )
LABEL_25:
      *(_DWORD *)(*v13 + 4 * v17) = v12;
  }
LABEL_26:
  *v12 = *a3;
  *a3 = 0;
  --v13[3];
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = v22 + 2;
  *(_BYTE *)(a1 + 8) = 1;
  return 1;
}
