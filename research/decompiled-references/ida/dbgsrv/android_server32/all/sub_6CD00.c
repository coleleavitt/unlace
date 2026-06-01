/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CD00
// Address: 0x0006CD00

//----- (0006CD00) --------------------------------------------------------
_DWORD *__fastcall sub_6CD00(_DWORD *a1, int a2, int a3, int a4)
{
  *a1 = a2;
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 64))(a2, a3, a4);
  return a1;
}
