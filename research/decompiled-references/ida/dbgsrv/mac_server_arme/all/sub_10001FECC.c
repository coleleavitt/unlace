/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FECC
// Address: 0x000000010001FECC

//----- (000000010001FECC) ----------------------------------------------------
__int64 __fastcall sub_10001FECC(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x19
  __int64 v6; // x8
  __int64 v7; // x20
  unsigned __int64 v8; // x8
  __int64 v9; // x21
  unsigned __int64 v10; // x22
  __int64 v11; // x23

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v4 = a4;
  v6 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v6 + 80) = a3;
  *(_DWORD *)(v6 + 84) = a2;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536)) )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a1 + 536);
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 12;
    do
    {
      if ( (*(_DWORD *)(v7 + 80) & *(unsigned __int8 *)(**(_QWORD **)(v7 + 8) + v11)) != 0 )
      {
        sub_100020858((int *)(*(_QWORD *)(v7 + 16) + v9), v4, v7);
        v8 = *(_QWORD *)(v7 + 24);
      }
      ++v10;
      v9 += 40;
      v4 += 32;
      v11 += 32;
    }
    while ( v8 > v10 );
  }
  return 1;
}
