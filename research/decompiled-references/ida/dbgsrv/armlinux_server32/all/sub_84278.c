/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84278
// Address: 0x00084278

//----- (00084278) --------------------------------------------------------
int __fastcall sub_84278(int a1, int a2)
{
  unsigned __int8 *v2; // r3
  int v3; // r2
  int v4; // r4
  bool v5; // zf
  int v6; // r5
  unsigned __int8 *v7; // r3

  v2 = *(unsigned __int8 **)(a1 + 12);
  v3 = a2;
  v4 = *v2;
  v5 = v4 == 79;
  if ( v4 != 79 )
    v5 = v4 == 82;
  if ( !v5 )
    return a2;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = v2 + 1;
  if ( v4 == 82 )
    a2 = 31;
  *(_DWORD *)(a1 + 12) = v7;
  if ( v4 == 82 )
    v6 += 2;
  else
    a2 = 32;
  if ( v4 != 82 )
    v6 += 3;
  *(_DWORD *)(a1 + 48) = v6;
  return sub_841E0(a1, a2, (unsigned int)v3);
}
