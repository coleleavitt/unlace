/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2ceil
// Address: 0x0009D670

//----- (0009D670) --------------------------------------------------------
int __cdecl log2ceil(unsigned __int64 a1)
{
  unsigned __int64 v1; // kr00_8
  unsigned int v2; // eax
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edi
  bool v7; // cf
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // edi
  int v14; // ebx
  int v16; // [esp+4h] [ebp-14h]

  v1 = a1;
  if ( HIDWORD(a1) )
    v1 = HIDWORD(a1);
  v2 = v1 >> 16;
  v3 = HIWORD(HIDWORD(v1));
  if ( v1 <= 0xFFFF )
  {
    v3 = HIDWORD(v1);
    v2 = v1;
  }
  v4 = 32 * (HIDWORD(a1) != 0) + 16;
  if ( v1 <= 0xFFFF )
    v4 = 32 * (HIDWORD(a1) != 0);
  v5 = __PAIR64__(v3, v2) >> 8;
  v6 = v3 >> 8;
  v7 = __PAIR64__(v3, v2) > 0xFF;
  if ( __PAIR64__(v3, v2) <= 0xFF )
  {
    v6 = v3;
    v5 = v2;
  }
  v8 = v4 + 8;
  if ( !v7 )
    v8 = v4;
  v9 = __PAIR64__(v6, v5) >> 4;
  v10 = v6 >> 4;
  if ( __PAIR64__(v6, v5) <= 0xF )
  {
    v10 = v6;
    v9 = v5;
  }
  v11 = v8 + 4;
  if ( __PAIR64__(v6, v5) <= 0xF )
    v11 = v8;
  v16 = v11;
  v12 = __PAIR64__(v10, v9) >> 2;
  v13 = v10 >> 2;
  v14 = v11 | 2;
  if ( __PAIR64__(v10, v9) <= 3 )
  {
    v13 = v10;
    v12 = v9;
    v14 = v16;
  }
  return (v14 | (__PAIR64__(v13, v12) > 1)) + ((a1 & (a1 - 1)) != 0);
}
