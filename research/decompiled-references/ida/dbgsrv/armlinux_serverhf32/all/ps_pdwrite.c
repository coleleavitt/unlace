/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdwrite
// Address: 0x0001CD44

//----- (0001CD44) --------------------------------------------------------
int __fastcall ps_pdwrite(int *a1, int a2, char *a3, int a4)
{
  int (__fastcall **v8)(_DWORD, int); // r1
  int (__fastcall **v10[2])(_DWORD, int); // [sp+8h] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-8h]

  v11 = 0;
  v8 = (int (__fastcall **)(_DWORD, int))*a1;
  v10[0] = (int (__fastcall **)(_DWORD, int))&off_CF52C;
  v10[1] = v8;
  sub_570F0(v10);
  if ( !v11 )
    return 2;
  if ( *(_BYTE *)(v11 + 1077) || *(_DWORD *)(v11 + 1068) == -1 )
    return 1;
  return sub_1CBAC(v11, *a1, a2, a3, a4, *(_BYTE *)(v11 + 1077)) <= 0;
}
// CF52C: using guessed type _UNKNOWN *off_CF52C;
