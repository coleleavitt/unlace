/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B764
// Address: 0x0009B764

//----- (0009B764) --------------------------------------------------------
int __fastcall sub_9B764(int a1, unsigned __int16 a2, int a3)
{
  _DWORD *v3; // r7
  char v4; // r4
  int v5; // r5
  int v6; // r6
  int result; // r0
  int v9; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v4 = 8 * (a1 & 3);
  v5 = 0xFFFF << v4;
  v6 = a2;
  v9 = (a3 << v4) & (0xFFFF << v4);
  do
  {
    if ( ((unsigned int)v5 & *v3) >> v4 != v6 )
    {
      LOWORD(result) = ((unsigned int)v5 & *v3) >> v4;
      return (__int16)result;
    }
  }
  while ( MEMORY[0xFFFF0FC0](*v3, *v3 & ~v5 | v9, v3) );
  LOWORD(result) = a2;
  return (__int16)result;
}
