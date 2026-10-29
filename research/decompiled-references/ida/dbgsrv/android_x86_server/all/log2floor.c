/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2floor
// Address: 0x0009D770

//----- (0009D770) --------------------------------------------------------
int __cdecl log2floor(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // esi
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // edx
  int v12; // ebx
  int v14; // [esp+4h] [ebp-14h]

  v2 = a2;
  v3 = 0;
  if ( !a2 )
    v2 = a1;
  LOBYTE(v3) = a2 != 0;
  v4 = 32 * v3;
  v5 = (unsigned __int64)v2 >> 16;
  if ( v2 <= 0xFFFFuLL )
    v5 = v2;
  v6 = v4 + 16;
  if ( v2 <= 0xFFFFuLL )
    v6 = v4;
  v7 = (unsigned __int64)v5 >> 8;
  if ( v5 <= 0xFFuLL )
    v7 = v5;
  v8 = v6 + 8;
  if ( v5 <= 0xFFuLL )
    v8 = v6;
  v9 = (unsigned __int64)v7 >> 4;
  if ( v7 <= 0xFuLL )
    v9 = v7;
  v10 = v8 + 4;
  if ( v7 <= 0xFuLL )
    v10 = v8;
  v14 = v10;
  v11 = (unsigned __int64)v9 >> 2;
  v12 = v10 | 2;
  if ( v9 <= 3uLL )
  {
    v11 = v9;
    v12 = v14;
  }
  return v12 | (v11 > 1uLL);
}
