/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D360
// Address: 0x000000010002D360

//----- (000000010002D360) ----------------------------------------------------
void __fastcall sub_10002D360(unsigned __int64 *a1, unsigned __int64 a2)
{
  int v4; // w21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x8
  __int64 v9; // x8

  if ( *a1 > a2 || *a1 + 32 * a1[2] <= a2 )
  {
    sub_10002FAA8(a1, a1[1] + 1);
    v9 = *a1 + 32 * a1[1];
    *(_DWORD *)v9 = *(_DWORD *)a2;
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(v9 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
  }
  else
  {
    v4 = *(_DWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    sub_10002FAA8(a1, a1[1] + 1);
    v8 = *a1 + 32 * a1[1];
    *(_DWORD *)v8 = v4;
    *(_QWORD *)(v8 + 8) = v5;
    *(_QWORD *)(v8 + 16) = v6;
    *(_QWORD *)(v8 + 24) = v7;
  }
  ++a1[1];
}
