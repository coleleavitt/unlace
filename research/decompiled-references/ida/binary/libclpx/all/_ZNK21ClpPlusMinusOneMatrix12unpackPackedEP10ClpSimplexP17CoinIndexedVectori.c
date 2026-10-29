void __fastcall ClpPlusMinusOneMatrix::unpackPacked(
        ClpPlusMinusOneMatrix *this,
        ClpSimplex *a2,
        CoinIndexedVector *a3,
        int a4)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r11
  int v9; // r10d
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  _DWORD *v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // esi
  int v21; // esi

  v4 = 4LL * a4;
  v5 = *((_QWORD *)this + 13);
  v6 = *(_QWORD *)a3;
  v7 = *((_QWORD *)a3 + 1);
  v8 = (_DWORD *)(v4 + *((_QWORD *)this + 14));
  v9 = *(_DWORD *)(v5 + v4);
  if ( v9 >= *v8 )
  {
    v14 = *(_DWORD *)(v5 + 4LL * a4);
    v13 = 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 15) + 4LL * v9;
    v11 = 1;
    do
    {
      v12 = *(_DWORD *)(v10 + 4 * v11 - 4);
      v13 = v11;
      *(_QWORD *)(v7 + 8 * v11 - 8) = 0x3FF0000000000000LL;
      *(_DWORD *)(v6 + 4 * v11 - 4) = v12;
      v14 = v9 + v11++;
    }
    while ( v14 < *v8 );
  }
  v15 = (_DWORD *)(v5 + v4 + 4);
  if ( *v15 > v14 )
  {
    v16 = v14 + 1;
    v17 = *((_QWORD *)this + 15) + -4 * v16 + 4LL * v14;
    v18 = -8 * v16 + 8LL * v13 + v7;
    v19 = -4 * v16 + 4LL * v13 + v6;
    do
    {
      v20 = *(_DWORD *)(v17 + 4 * v16);
      ++v13;
      *(_QWORD *)(v18 + 8 * v16) = 0xBFF0000000000000LL;
      *(_DWORD *)(v19 + 4 * v16) = v20;
      v21 = v16++;
    }
    while ( *v15 > v21 );
  }
  *((_DWORD *)a3 + 4) = v13;
  *((_BYTE *)a3 + 28) = 1;
}

