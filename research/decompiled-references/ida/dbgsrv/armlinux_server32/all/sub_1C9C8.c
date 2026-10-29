/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C9C8
// Address: 0x0001C9C8

//----- (0001C9C8) --------------------------------------------------------
int __fastcall sub_1C9C8(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r7

  v3 = a3;
  if ( (a3 & 1) != 0 )
  {
    v3 = a3 - 1;
    v6 = 2;
  }
  else
  {
    v6 = 4;
  }
  if ( *(_BYTE *)(a1 + 1077)
    || *(_DWORD *)(a1 + 1068) == -1
    || v6 != sub_1C68C(a1, -1, v3, (unsigned int *)(a2 + 4), v6, *(_BYTE *)(a1 + 1077))
    || !(*(int (__fastcall **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v3, v6) )
  {
    return 0;
  }
  *(_DWORD *)a2 = v3;
  *(_BYTE *)(a2 + 8) = v6;
  return 1;
}
