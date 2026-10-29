/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lread
// Address: 0x00000000000AF660

//----- (00000000000AF660) ----------------------------------------------------
size_t __fastcall lread(_DWORD *a1, void *a2, signed __int64 a3)
{
  size_t result; // rax

  if ( !a1 || (unsigned int)(*a1 - 3) >= 2 && *a1 != 1 )
    sub_3A5C0("no support for remote linput in standalone utilities");
  result = qlread((__int64)a1, a2, a3);
  if ( result != a3 )
    sub_3A5C0("read error");
  return result;
}
