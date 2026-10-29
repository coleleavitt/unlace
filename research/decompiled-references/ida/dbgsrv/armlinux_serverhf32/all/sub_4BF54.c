/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BF54
// Address: 0x0004BF54

//----- (0004BF54) --------------------------------------------------------
int __fastcall sub_4BF54(int result, unsigned __int8 *a2)
{
  __int64 v2; // kr00_8
  char v3; // r3
  char v4; // r4
  char v5; // r8
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r12
  int v9; // r1
  unsigned int v10; // r3
  unsigned int v11; // r4

  v2 = *(_QWORD *)(result + 8);
  v3 = 8 * (8 - a2[4]);
  v4 = 32 - v3;
  v5 = v3 - 32;
  v6 = 0xFFFFFFFF >> v3;
  v7 = __ROR4__(-1, v3) | (0xFFFFFFFF >> (v3 - 32));
  v8 = HIDWORD(v2) & (0xFFFFFFFF >> v3);
  *(_DWORD *)(result + 12) = v8;
  *(_DWORD *)(result + 8) = v2 & v7;
  v9 = *a2;
  *(_BYTE *)result = v9;
  if ( !v9 )
  {
    v10 = 0x80000000 >> v3;
    v11 = (0x80000000 << v4) | (0x80000000 >> v5);
    if ( (unsigned int)v2 & v7 & v11 | v8 & v10 )
    {
      *(_DWORD *)(result + 8) = v11 | v2 | ~v7;
      *(_DWORD *)(result + 12) = v10 | HIDWORD(v2) | ~v6;
    }
  }
  return result;
}
