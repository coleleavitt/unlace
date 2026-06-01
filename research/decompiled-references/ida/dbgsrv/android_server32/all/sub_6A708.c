/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A708
// Address: 0x0006A708

//----- (0006A708) --------------------------------------------------------
int __fastcall sub_6A708(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r5
  int v6; // r6
  int v7; // r4
  signed int v8; // r0
  signed int v9; // r6
  int v10; // r0
  int v11; // r2
  int v12; // r1
  _BYTE *v13; // r0
  signed int v14; // r0
  int v16; // [sp+4h] [bp-10h]
  int v17; // [sp+8h] [bp-Ch]
  unsigned int v18; // [sp+Ch] [bp-8h]
  int v19; // [sp+10h] [bp-4h]

  v4 = a3;
  v6 = 0;
  v7 = -1;
  if ( a4 != -1 )
  {
    v19 = a2;
    v18 = a3 >> 1;
    v8 = sub_6A658(a1, a4, a3 >> 1);
    if ( v8 < 1 )
      return v7;
    v9 = v8;
    if ( a1 )
    {
      v10 = *(_DWORD *)(a1 + 4);
      v11 = v10 - 1;
      if ( !v10 )
        v11 = 0;
      v12 = v11 + 2;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v11 + 2) )
      {
        v13 = *(_BYTE **)a1;
      }
      else
      {
        v17 = v11 + 2;
        v16 = v11;
        v13 = qvector_reserve(a1, *(void **)a1, v11 + 2, 1u);
        v12 = v17;
        v11 = v16;
        *(_DWORD *)a1 = v13;
      }
      *(_DWORD *)(a1 + 4) = v12;
      v13[v11] = 58;
      *(_BYTE *)(*(_DWORD *)a1 + v11 + 1) = 0;
    }
    v4 -= v18;
    v6 = v9 + 1;
    a2 = v19;
  }
  v14 = sub_6A658(a1, a2, v4);
  if ( v14 >= 1 )
    return v14 + v6;
  return v7;
}
