/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A0F8
// Address: 0x0001A0F8

//----- (0001A0F8) --------------------------------------------------------
int __fastcall sub_1A0F8(_DWORD *a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // [sp+10h] [bp-8h] BYREF

  result = ps_pglobal_lookup(0, nullptr, off_DD000, &v6);
  if ( !result )
  {
    v5 = sub_1A15C(a1, (int (__fastcall *)(_DWORD *, int))sub_1A220, v6);
    result = 10;
    if ( v5 == 66 )
    {
      *a2 = 0;
      a2[1] = &dword_DE2D0;
      return 0;
    }
  }
  return result;
}
// DD000: using guessed type char *off_DD000;
// DE2D0: using guessed type int dword_DE2D0;
