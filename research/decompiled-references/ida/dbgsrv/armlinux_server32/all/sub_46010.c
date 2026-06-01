/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46010
// Address: 0x00046010

//----- (00046010) --------------------------------------------------------
void __fastcall sub_46010(int a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r4
  unsigned __int8 *v8; // r0
  _BYTE *v9; // r1
  unsigned int v11; // r3
  unsigned int v12; // r6
  int v13; // r4
  int v14; // r0
  int v15; // r4
  char *v16; // r0
  _BYTE *v17; // r0
  unsigned __int8 v18[8]; // [sp+0h] [bp-24h] BYREF
  int v19; // [sp+8h] [bp-1Ch]
  int v20; // [sp+Ch] [bp-18h]
  int v21; // [sp+10h] [bp-14h]
  int v22; // [sp+14h] [bp-10h]

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 > a2 )
  {
    v6 = a2;
    v7 = 24 * a2;
    do
    {
      ++v6;
      v8 = (unsigned __int8 *)(*(_DWORD *)a1 + v7);
      v7 += 24;
      sub_45758(v8);
    }
    while ( v5 != v6 );
LABEL_4:
    *(_DWORD *)(a1 + 4) = a2;
    return;
  }
  if ( v5 < a2 )
  {
    v9 = *(_BYTE **)a1;
    v11 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)a3 < *(_DWORD *)a1 || a3 >= &v9[24 * v11] )
    {
      if ( a2 <= v11
        || (v17 = sub_78018(a1, v9, a2, 0x18u), v5 = *(_DWORD *)(a1 + 4), v9 = v17, *(_DWORD *)a1 = v17, a2 > v5) )
      {
        v15 = 24 * v5;
        while ( 1 )
        {
          v16 = &v9[v15];
          v9[v15] = 2;
          ++v5;
          *((_DWORD *)v16 + 2) = 0;
          *((_DWORD *)v16 + 3) = 0;
          *((_DWORD *)v16 + 4) = 0;
          v15 += 24;
          *((_DWORD *)v16 + 5) = 0;
          sub_45B30((unsigned __int8 *)v16, a3);
          if ( a2 <= v5 )
            break;
          v9 = *(_BYTE **)a1;
        }
      }
      goto LABEL_4;
    }
    v18[0] = 2;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    sub_45B30(v18, a3);
    if ( a2 > *(_DWORD *)(a1 + 8) )
      *(_DWORD *)a1 = sub_78018(a1, *(void **)a1, a2, 0x18u);
    v12 = *(_DWORD *)(a1 + 4);
    if ( a2 > v12 )
    {
      v13 = 24 * v12;
      do
      {
        v14 = *(_DWORD *)a1 + v13;
        *(_BYTE *)v14 = 2;
        *(_DWORD *)(v14 + 8) = 0;
        *(_DWORD *)(v14 + 12) = 0;
        *(_DWORD *)(v14 + 16) = 0;
        *(_DWORD *)(v14 + 20) = 0;
        sub_45B30((unsigned __int8 *)v14, v18);
        ++v12;
        v13 += 24;
      }
      while ( a2 != v12 );
    }
    *(_DWORD *)(a1 + 4) = a2;
    sub_45758(v18);
  }
}
