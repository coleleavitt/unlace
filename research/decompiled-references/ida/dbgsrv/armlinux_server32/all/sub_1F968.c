/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F968
// Address: 0x0001F968

//----- (0001F968) --------------------------------------------------------
int __fastcall sub_1F968(int a1, const char *a2, int a3, int *a4, _BYTE *a5, char a6, unsigned __int8 *a7, int a8)
{
  int v9; // r4
  int v11; // [sp+18h] [bp-8h] BYREF

  v9 = sub_53734(a1, a2, a3, a4, a5, a6, a7, a8, &v11);
  if ( v9 > 0 && v11 && !sub_1F188(a1, v11, 0) )
  {
    v9 = -2;
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, 0);
  }
  return v9;
}
