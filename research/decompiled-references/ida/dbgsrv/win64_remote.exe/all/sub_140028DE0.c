/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028DE0
// Address: 0x0000000140028DE0

//----- (0000000140028DE0) ----------------------------------------------------
__int64 __fastcall sub_140028DE0(char *a1, char *a2, char *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _BYTE v11[160]; // [rsp+40h] [rbp-A8h] BYREF

  sub_1400210A0((__int64)v11, a6, 0);
  LOBYTE(a1) = sub_1400288C0((__int64)v11, a2, 0, a4, a3, a1, a5);
  sub_140021420((__int64)v11);
  return (unsigned __int8)a1;
}
