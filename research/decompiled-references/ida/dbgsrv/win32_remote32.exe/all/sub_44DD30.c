/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DD30
// Address: 0x0044DD30

//----- (0044DD30) --------------------------------------------------------
_DWORD *__cdecl sub_44DD30(_DWORD *a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)*a1;
  *(_DWORD *)*a1 = _byteswap_ulong(a1[1] - 5);
  return result;
}
