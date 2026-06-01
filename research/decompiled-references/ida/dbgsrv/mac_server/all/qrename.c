/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrename
// Address: 0x000000010007C790

//----- (000000010007C790) ----------------------------------------------------
void __fastcall qrename(
        const std::__fs::filesystem::path *a1,
        const std::__fs::filesystem::path *a2,
        std::error_code *a3)
{
  int v3; // eax

  rename(a1, a2, a3);
  if ( v3 )
    set_qerrno();
}
// 10007C79D: variable 'v3' is possibly undefined
