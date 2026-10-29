/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472F0
// Address: 0x000472F0

//----- (000472F0) --------------------------------------------------------
void __fastcall sub_472F0(int result, unsigned int a2)
{
  unsigned int v2; // r8
  unsigned int v3; // r6
  int v5; // r10
  int v6; // r9
  unsigned __int8 *v7; // r0
  char v8[8]; // [sp+0h] [bp-3Ch] BYREF
  int v9; // [sp+8h] [bp-34h]
  int v10; // [sp+Ch] [bp-30h]
  int v11; // [sp+10h] [bp-2Ch]
  int v12; // [sp+14h] [bp-28h]

  v2 = *(_DWORD *)(result + 16);
  if ( a2 > v2 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(285);
  }
  v3 = v2 - a2;
  if ( v2 - a2 != v2 )
  {
    v8[0] = 2;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    if ( v3 < v2 )
    {
      v5 = v2 - a2;
      v6 = 24 * v3;
      do
      {
        ++v5;
        v7 = (unsigned __int8 *)(*(_DWORD *)(result + 12) + v6);
        v6 += 24;
        sub_455C8(v7);
      }
      while ( v2 != v5 );
      *(_DWORD *)(result + 16) = v3;
    }
    sub_455C8((unsigned __int8 *)v8);
  }
}
// 4737C: conditional instruction was optimized away because r1.4==0
// D5C00: using guessed type char under_debugger;
