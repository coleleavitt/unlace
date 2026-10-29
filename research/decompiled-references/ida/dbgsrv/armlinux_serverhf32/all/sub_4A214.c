/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A214
// Address: 0x0004A214

//----- (0004A214) --------------------------------------------------------
int __fastcall sub_4A214(_DWORD *a1, int a2, const char **a3, unsigned __int8 **a4)
{
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r4

  v8 = (unsigned __int8 *)sub_42C84(a2, a3);
  if ( v8 == (unsigned __int8 *)(a2 + 4) )
    return (int)sub_492B4(a1, a2, a3, a4);
  v9 = v8 + 32;
  sub_459A0(*a4, v8 + 32);
  *a4 = v9;
  return 1;
}
