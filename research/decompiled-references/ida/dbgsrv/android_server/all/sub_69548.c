/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69548
// Address: 0x0000000000069548

//----- (0000000000069548) ----------------------------------------------------
void __fastcall sub_69548(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x23
  int v6; // w22
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x9
  __int128 v12; // [xsp+0h] [xbp-40h]

  if ( *a1 > a2 || *a1 + 32 * a1[2] <= a2 )
  {
    v7 = a1 + 1;
    sub_6C998((__int64)a1, a1[1] + 1);
    v9 = *a1 + 32LL * *v7;
    *(_DWORD *)v9 = *(_DWORD *)a2;
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(v9 + 16) = v10;
    v11 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(v9 + 24) = v11;
    *(_QWORD *)(a2 + 24) = 0;
  }
  else
  {
    v4 = *(_OWORD *)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = 0;
    v12 = v4;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    v6 = *(_DWORD *)a2;
    v7 = a1 + 1;
    sub_6C998((__int64)a1, a1[1] + 1);
    v8 = *a1 + 32 * a1[1];
    *(_DWORD *)v8 = v6;
    *(_OWORD *)(v8 + 8) = v12;
    *(_QWORD *)(v8 + 24) = v5;
  }
  ++*v7;
}
