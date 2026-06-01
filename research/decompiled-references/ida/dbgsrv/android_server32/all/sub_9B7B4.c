/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B7B4
// Address: 0x0009B7B4

//----- (0009B7B4) --------------------------------------------------------
int __fastcall sub_9B7B4(int a1, unsigned __int8 a2, int a3)
{
  _DWORD *v3; // r7
  char v4; // r5
  int v5; // r6
  int result; // r0
  int v8; // [sp+0h] [bp-Ch]
  int v9; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v4 = 8 * (a1 & 3);
  v5 = 255 << v4;
  v8 = (a3 << v4) & (255 << v4);
  v9 = a2;
  do
  {
    if ( ((unsigned int)v5 & *v3) >> v4 != v9 )
    {
      LOBYTE(result) = ((unsigned int)v5 & *v3) >> v4;
      return (char)result;
    }
  }
  while ( MEMORY[0xFFFF0FC0](*v3, *v3 & ~v5 | v8, v3) );
  LOBYTE(result) = a2;
  return (char)result;
}
