/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BBE8
// Address: 0x0001BBE8

//----- (0001BBE8) --------------------------------------------------------
int __fastcall sub_1BBE8(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r4
  int v6; // r6

  v4 = 0;
  v5 = 4;
  if ( (a3 & 1) != 0 )
    v5 = 2;
  v6 = a3 - (a3 & 1);
  if ( sub_1EE24(a1, -1, v6, (unsigned int *)(a2 + 4), v5, 0) == v5 )
  {
    v4 = 0;
    if ( (*(int (__fastcall **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v6, v5) )
    {
      *(_BYTE *)(a2 + 8) = v5;
      *(_DWORD *)a2 = v6;
      return 1;
    }
  }
  return v4;
}
