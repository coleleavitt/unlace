/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1210
// Address: 0x00000000000D1210

//----- (00000000000D1210) ----------------------------------------------------
bool __fastcall sub_D1210(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  unsigned int v9; // w10
  unsigned __int8 v10; // w8
  __int64 v11; // x10
  _WORD *v12; // x8

  v3 = *(unsigned int *)(a1 + 5900);
  v4 = *(_QWORD *)(a1 + 5888);
  *(_DWORD *)(a1 + 5900) = v3 + 1;
  *(_BYTE *)(v4 + v3) = a2;
  v5 = *(unsigned int *)(a1 + 5900);
  v6 = *(_QWORD *)(a1 + 5888);
  *(_DWORD *)(a1 + 5900) = v5 + 1;
  *(_BYTE *)(v6 + v5) = BYTE1(a2);
  v7 = *(unsigned int *)(a1 + 5900);
  v8 = *(_QWORD *)(a1 + 5888);
  *(_DWORD *)(a1 + 5900) = v7 + 1;
  *(_BYTE *)(v8 + v7) = a3;
  if ( a2 )
  {
    v9 = a2 - 1;
    v10 = *((_BYTE *)qword_11F760 + a3);
    if ( (unsigned int)(a2 - 1) >= 0x100 )
      v9 = ((unsigned int)(a2 - 1) >> 7) + 256;
    v11 = (unsigned __int8)byte_11F560[v9];
    ++*(_DWORD *)(a1 + 5928);
    ++*(_WORD *)(a1 + ((4LL * v10) | 0x400) + 216);
    v12 = (_WORD *)(a1 + 4 * v11 + 2504);
  }
  else
  {
    v12 = (_WORD *)(a1 + 4LL * a3 + 212);
  }
  ++*v12;
  return *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904);
}
// 11F760: using guessed type __int64 qword_11F760[32];
