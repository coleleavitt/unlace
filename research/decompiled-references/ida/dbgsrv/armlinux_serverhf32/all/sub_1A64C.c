/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A64C
// Address: 0x0001A64C

//----- (0001A64C) --------------------------------------------------------
void __fastcall sub_1A64C(int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r2
  unsigned int v6; // r3
  _DWORD *v7; // r6
  _DWORD *v8; // r4
  _DWORD *v9; // t1
  _DWORD *v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  _DWORD *v13; // r5
  _DWORD *v14; // r0
  _DWORD *v15; // r4
  _DWORD *v16; // r5
  _DWORD *v17; // r0
  _DWORD *v18; // r5
  _DWORD *v19; // r0

  v4 = a2[3];
  v6 = a3[3];
  v7 = (_DWORD *)(v4 + 4);
  if ( v4 + 4 < v6 )
  {
    do
    {
      v9 = (_DWORD *)*v7++;
      v8 = v9;
      v10 = v9 + 121;
      do
      {
        v11 = v8;
        v8 += 11;
        sub_6E318(v11);
      }
      while ( v10 != v8 );
      v6 = a3[3];
    }
    while ( v6 > (unsigned int)v7 );
    v4 = a2[3];
  }
  v12 = (_DWORD *)*a2;
  if ( v4 == v6 )
  {
    v18 = (_DWORD *)*a3;
    while ( v18 != v12 )
    {
      v19 = v12;
      v12 += 11;
      sub_6E318(v19);
    }
  }
  else
  {
    v13 = (_DWORD *)a2[2];
    while ( v13 != v12 )
    {
      v14 = v12;
      v12 += 11;
      sub_6E318(v14);
    }
    v15 = (_DWORD *)a3[1];
    v16 = (_DWORD *)*a3;
    while ( v16 != v15 )
    {
      v17 = v15;
      v15 += 11;
      sub_6E318(v17);
    }
  }
}
