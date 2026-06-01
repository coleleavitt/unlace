/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_alloc::~bad_alloc
// Address: 0x00083F08

//----- (00083F08) --------------------------------------------------------
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_DWORD *)this = &off_D1D94;
  nullsub_1(this);
}
// 7FC84: using guessed type int __fastcall nullsub_1(_DWORD);
// D1D94: using guessed type _UNKNOWN *off_D1D94;
