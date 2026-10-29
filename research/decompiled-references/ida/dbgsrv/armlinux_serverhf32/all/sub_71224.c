/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71224
// Address: 0x00071224

//----- (00071224) --------------------------------------------------------
int __fastcall sub_71224(_WORD *a1, __int16 *a2)
{
  __int16 v3; // r0
  __int16 v5; // r1
  int v6; // r4
  __int16 v7; // r6
  int v9; // r10
  int v10; // r7
  __int16 *v11; // r0
  unsigned int v12; // r3
  __int16 *v13; // r1
  int v14; // t1
  unsigned int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  __int16 *v19; // r5
  _WORD *v20; // r2
  __int16 v21; // r3
  int v22; // [sp+4h] [bp-20h] BYREF
  int v23; // [sp+8h] [bp-1Ch]
  int v24; // [sp+Ch] [bp-18h]
  int v25; // [sp+10h] [bp-14h]
  int v26; // [sp+14h] [bp-10h]
  __int16 v27; // [sp+18h] [bp-Ch] BYREF

  v3 = *a2;
  v5 = a2[1];
  v6 = 112;
  LOWORD(v22) = v3;
  HIWORD(v22) = v5;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    v7 = a1[9];
    if ( v7 )
      break;
    memmove(a1 + 3, a1 + 2, 0x10u);
    v6 -= 16;
    a1[2] = 0;
    if ( !v6 )
    {
      *(_DWORD *)a2 = 0;
      *((_DWORD *)a2 + 1) = 0;
      *((_DWORD *)a2 + 2) = 0;
      *((_DWORD *)a2 + 3) = 0;
      *((_DWORD *)a2 + 4) = 0;
      a2[10] = 0;
      return v6;
    }
  }
  v7 = (unsigned __int8)v7;
  if ( !(_BYTE)v7 )
  {
    v20 = a1 + 2;
    do
    {
      v21 = *v20 << 8;
      *v20 = v7 | HIBYTE(*v20);
      ++v20;
      v7 = v21;
    }
    while ( a1 + 11 != v20 );
    v6 -= 8;
  }
  v9 = 0;
  v10 = 0;
  do
  {
    if ( (a1[9] & 1) != 0 )
    {
      v11 = a2 + 11;
      v12 = 0;
      v13 = &v27;
      do
      {
        v14 = (unsigned __int16)*--v11;
        v15 = v12 + v14 + (unsigned __int16)*v13;
        *v13-- = v15;
        v12 = HIWORD(v15);
      }
      while ( a2 + 2 != v11 );
    }
    ++v9;
    if ( (v27 & 1) != 0 )
      v10 = 1;
    sub_70FFC((int)a1);
    sub_70FFC((int)&v22);
  }
  while ( v9 != v6 );
  v16 = v23;
  v17 = v24;
  v18 = v25;
  v6 = v10;
  *(_DWORD *)a2 = v22;
  *((_DWORD *)a2 + 1) = v16;
  *((_DWORD *)a2 + 2) = v17;
  *((_DWORD *)a2 + 3) = v18;
  v19 = a2 + 8;
  LOWORD(v16) = v27;
  *(_DWORD *)v19 = v26;
  v19[2] = v16;
  return v6;
}
