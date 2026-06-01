/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54E80
// Address: 0x00054E80

//----- (00054E80) --------------------------------------------------------
int __fastcall sub_54E80(int a1)
{
  unsigned int v2; // r9
  _DWORD *v3; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r7
  _DWORD *v6; // r10
  _DWORD *v7; // r11
  _DWORD *v8; // t1
  _DWORD *v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  void *v13; // r0
  void **v14; // r4
  unsigned int v15; // r5
  void *v16; // t1
  _DWORD *v18; // r0
  _DWORD *v19; // [sp+0h] [bp-Ch]
  int v20; // [sp+4h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 36);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 4);
  v20 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD **)(a1 + 8);
  v5 = *(_DWORD **)(a1 + 28);
  v6 = *(_DWORD **)(a1 + 24);
  v19 = *(_DWORD **)(a1 + 16);
  while ( v2 > (unsigned int)v3 )
  {
    v8 = (_DWORD *)*v3++;
    v7 = v8;
    v9 = v8 + 121;
    do
    {
      v10 = v7;
      v7 += 11;
      sub_6E318(v10);
    }
    while ( v9 != v7 );
  }
  if ( v2 == v20 )
  {
    while ( v6 != v4 )
    {
      v18 = v4;
      v4 += 11;
      sub_6E318(v18);
    }
  }
  else
  {
    if ( v4 == v19 )
      goto LABEL_10;
    do
    {
      v11 = v4;
      v4 += 11;
      sub_6E318(v11);
    }
    while ( v19 != v4 );
    while ( v6 != v5 )
    {
      v12 = v5;
      v5 += 11;
      sub_6E318(v12);
LABEL_10:
      ;
    }
  }
  v13 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    v14 = *(void ***)(a1 + 20);
    v15 = *(_DWORD *)(a1 + 36) + 4;
    if ( (unsigned int)v14 < v15 )
    {
      do
      {
        v16 = *v14++;
        sub_80648(v16);
      }
      while ( v15 > (unsigned int)v14 );
      v13 = *(void **)a1;
    }
    sub_80648(v13);
  }
  return a1;
}
