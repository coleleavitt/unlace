/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4564E0
// Address: 0x004564E0

//----- (004564E0) --------------------------------------------------------
int __stdcall sub_4564E0(HANDLE *a1)
{
  if ( *a1 != (HANDLE)-1 )
    CloseHandle(*a1);
  return sub_4627F2(a1);
}
