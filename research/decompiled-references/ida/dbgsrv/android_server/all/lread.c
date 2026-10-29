/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lread
// Address: 0x00000000000AB2D8

//----- (00000000000AB2D8) ----------------------------------------------------
size_t __fastcall lread(_DWORD *a1, void *a2, size_t a3)
{
  size_t result; // x0

  if ( !a1 || (unsigned int)(*a1 - 3) >= 2 && *a1 != 1 )
  {
    sub_3B1DC("no support for remote linput in standalone utilities");
    goto LABEL_7;
  }
  result = qlread((__int64)a1, a2, a3);
  if ( result != a3 )
  {
LABEL_7:
    sub_3B1DC("read error");
    return KLUDGE_get_bpt_kernel_interface();
  }
  return result;
}
