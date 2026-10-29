/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A380
// Address: 0x0001A380

//----- (0001A380) --------------------------------------------------------
int __fastcall sub_1A380(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // r4
  unsigned int v8; // [sp+Ch] [bp-18h] BYREF
  _BYTE v9[8]; // [sp+14h] [bp-10h] BYREF

  v8 = a3;
  v5 = a5;
  if ( a5 == 130 )
    v5 = 4;
  if ( !a4 || v5 != (*(int (__fastcall **)(_DWORD *, unsigned int, int, int, _DWORD))(*a1 + 148))(a1, a3, a4, v5, 0) )
    return 0;
  sub_1A2D8((int)v9, a1 + 270, &v8);
  return 1;
}
