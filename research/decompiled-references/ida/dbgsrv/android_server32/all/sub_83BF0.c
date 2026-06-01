/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83BF0
// Address: 0x00083BF0

//----- (00083BF0) --------------------------------------------------------
int __fastcall sub_83BF0(int *a1, void **a2)
{
  unsigned int v4; // r6
  _BYTE *v5; // r1
  void *v6; // r0
  unsigned int v7; // r6
  _BYTE *v8; // r0
  int v9; // r7
  int v10; // r2
  int v11; // r5
  int v12; // r1
  _BYTE *v13; // r0
  void *v14; // r1
  _BYTE *v15; // r2
  unsigned int v16; // r5
  char v18[4]; // [sp+Ch] [bp-Ch] BYREF
  char v19[4]; // [sp+10h] [bp-8h] BYREF
  int v20; // [sp+14h] [bp-4h]

  v4 = 11 * a1[1] + 5;
  v5 = a2[1];
  if ( (unsigned int)v5 >= v4 )
  {
    if ( v5 != (_BYTE *)v4 )
    {
      v18[0] = 0;
      sub_370F6(a2, v4, v18);
    }
  }
  else
  {
    if ( (unsigned int)a2[2] >= v4 )
    {
      v6 = *a2;
    }
    else
    {
      v6 = qvector_reserve((int)a2, *a2, v4, 1u);
      *a2 = v6;
      v5 = a2[1];
    }
    memset(&v5[(_DWORD)v6], 0, v4 - (_DWORD)v5);
    a2[1] = (void *)v4;
  }
  v7 = (unsigned int)*a2 + v4;
  v8 = pack_dd(*a2, v7, a1[1]);
  v9 = *a1;
  v10 = 12 * a1[1];
  v11 = *a1 + v10;
  if ( v10 )
  {
    v12 = 0;
    do
    {
      if ( (unsigned int)v8 < v7 )
        *v8++ = *(_BYTE *)(v9 + 8);
      v13 = pack_dd(v8, v7, *(_DWORD *)v9 - v12);
      v8 = pack_dd(v13, v7, *(_DWORD *)(v9 + 4) - *(_DWORD *)v9);
      v12 = *(_DWORD *)(v9 + 4);
      v9 += 12;
    }
    while ( v9 != v11 );
  }
  v14 = *a2;
  v15 = a2[1];
  v16 = v8 - (_BYTE *)*a2;
  if ( (unsigned int)v15 >= v16 )
  {
    if ( v15 != (_BYTE *)(v8 - (_BYTE *)*a2) )
    {
      v19[0] = 0;
      sub_370F6(a2, v16, v19);
    }
  }
  else
  {
    if ( (unsigned int)a2[2] < v16 )
    {
      v14 = qvector_reserve((int)a2, v14, v16, 1u);
      *a2 = v14;
      v15 = a2[1];
    }
    memset(&v15[(_DWORD)v14], 0, v16 - (_DWORD)v15);
    a2[1] = (void *)v16;
  }
  return _stack_chk_guard - v20;
}
