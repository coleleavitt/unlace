/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67CAC
// Address: 0x00067CAC

//----- (00067CAC) --------------------------------------------------------
int __fastcall sub_67CAC(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  _BYTE v6[4]; // [sp+8h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = sub_6762C();
  if ( (*(int (__fastcall **)(int, int, _BYTE *, int, _DWORD))(*(_DWORD *)v4 + 144))(v4, v3, v6, 1, 0) != 1 )
    return throw_idc_exception(a2, "read error");
  *(_DWORD *)(a2 + 8) = v6[0];
  return 0;
}
