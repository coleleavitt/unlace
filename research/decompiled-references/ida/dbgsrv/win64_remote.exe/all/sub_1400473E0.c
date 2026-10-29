/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400473E0
// Address: 0x00000001400473E0

//----- (00000001400473E0) ----------------------------------------------------
__int64 __fastcall sub_1400473E0(__int64 a1, __int64 a2)
{
  size_t v4; // rsi
  void *v5; // rax
  size_t v6; // rsi
  void *v7; // rax
  _OWORD *v8; // rdx
  _OWORD *v9; // rax
  __int64 v10; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = sub_14005AAA0(*(_QWORD *)(a2 + 16));
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 24) = v4;
    memcpy(v5, *(const void **)(a2 + 8), v4);
    *(_QWORD *)(a1 + 16) = v4;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v7 = sub_14005AAA0(*(_QWORD *)(a2 + 48));
    *(_QWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 56) = v6;
    memcpy(v7, *(const void **)(a2 + 40), v6);
    *(_QWORD *)(a1 + 48) = v6;
  }
  v8 = (_OWORD *)(a1 + 64);
  v9 = (_OWORD *)(a2 + 64);
  v10 = 2;
  do
  {
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    v8[3] = v9[3];
    v8[4] = v9[4];
    v8[5] = v9[5];
    v8[6] = v9[6];
    v8 += 8;
    *(v8 - 1) = v9[7];
    v9 += 8;
    --v10;
  }
  while ( v10 );
  *v8 = *v9;
  v8[1] = v9[1];
  v8[2] = v9[2];
  v8[3] = v9[3];
  v8[4] = v9[4];
  v8[5] = v9[5];
  *((_QWORD *)v8 + 12) = *((_QWORD *)v9 + 12);
  *(_BYTE *)(a1 + 424) = *(_BYTE *)(a2 + 424);
  *(_DWORD *)(a1 + 428) = *(_DWORD *)(a2 + 428);
  return a1;
}
