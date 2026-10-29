/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2floor
// Address: 0x00000000000B18A0

//----- (00000000000B18A0) ----------------------------------------------------
__int64 __fastcall log2floor(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  bool v3; // cc
  int v4; // ecx
  unsigned __int64 v5; // rax
  int v6; // esi
  unsigned __int64 v7; // rcx
  bool v8; // cc
  int v9; // eax
  unsigned __int64 v10; // rdx
  int v11; // esi

  v1 = HIDWORD(a1);
  if ( !HIDWORD(a1) )
    v1 = a1;
  v2 = v1 >> 16;
  v3 = v1 <= 0xFFFF;
  if ( v1 <= 0xFFFF )
    v2 = v1;
  v4 = 32 * (HIDWORD(a1) != 0) + 16;
  if ( v3 )
    v4 = 32 * (HIDWORD(a1) != 0);
  v5 = v2 >> 8;
  v6 = v4 + 8;
  if ( v2 <= 0xFF )
  {
    v5 = v2;
    v6 = v4;
  }
  v7 = v5 >> 4;
  v8 = v5 <= 0xF;
  if ( v5 <= 0xF )
    v7 = v5;
  v9 = v6 + 4;
  if ( v8 )
    v9 = v6;
  v10 = v7 >> 2;
  v11 = v9 | 2;
  if ( v7 <= 3 )
  {
    v10 = v7;
    v11 = v9;
  }
  return v11 | (unsigned int)(v10 > 1);
}
