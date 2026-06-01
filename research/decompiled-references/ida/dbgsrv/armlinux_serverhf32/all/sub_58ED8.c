/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58ED8
// Address: 0x00058ED8

//----- (00058ED8) --------------------------------------------------------
int __fastcall sub_58ED8(int a1, void *ptr)
{
  int v2; // r4
  int v3; // r3
  void *v6; // r0
  void *v8; // r0
  int v9; // r3
  int v10; // lr
  int v11; // r12
  int v12; // r9
  __int64 v13; // kr08_8
  __int64 v14; // kr10_8
  int v15; // r3
  int v16; // r5
  __int64 v17; // r6
  int v18; // r3

  v2 = *(_DWORD *)(a1 + 140);
  v3 = v2 + 40 * *(_DWORD *)(a1 + 144);
  if ( v2 == v3 )
    return 0;
  while ( *(void **)(v2 + 28) != ptr )
  {
    v2 += 40;
    if ( v2 == v3 )
      return 0;
  }
  v6 = *(void **)(v2 + 12);
  if ( v6 )
  {
    *(_DWORD *)(v2 + 16) = 0;
    sub_77E08(v6);
  }
  v8 = *(void **)v2;
  if ( *(_DWORD *)v2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    sub_77E08(v8);
  }
  v9 = *(_DWORD *)(a1 + 144);
  v10 = v2 + 40;
  v11 = v2 + 40;
  v12 = *(_DWORD *)(a1 + 140) + 40 * v9;
  if ( -858993459 * ((v12 - v2) >> 3) - 2 >= 0 )
  {
    while ( 1 )
    {
      v11 += 40;
      v13 = *(_QWORD *)(v2 + 48);
      v14 = *(_QWORD *)(v2 + 56);
      *(_DWORD *)v2 = *(_DWORD *)(v2 + 40);
      v15 = *(_DWORD *)(v2 + 64);
      v16 = *(_DWORD *)(v2 + 44);
      *(_QWORD *)(v2 + 8) = v13;
      *(_DWORD *)(v2 + 24) = v15;
      v17 = *(_QWORD *)(v2 + 72);
      v18 = *(_DWORD *)(v2 + 68);
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 4) = v16;
      *(_DWORD *)(v2 + 44) = 0;
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 16) = v14;
      *(_DWORD *)(v2 + 56) = 0;
      *(_DWORD *)(v2 + 20) = HIDWORD(v14);
      *(_DWORD *)(v2 + 60) = 0;
      *(_DWORD *)(v2 + 28) = v18;
      *(_QWORD *)(v2 + 32) = v17;
      v2 = v10;
      if ( v12 == v11 )
        break;
      v10 += 40;
    }
    v9 = *(_DWORD *)(a1 + 144);
  }
  *(_DWORD *)(a1 + 144) = v9 - 1;
  sub_77E08(ptr);
  return 1;
}
