/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_alloc::~bad_alloc
// Address: 0x00083FE4

//----- (00083FE4) --------------------------------------------------------
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_DWORD *)this = &off_D2D74;
  nullsub_1(this);
}
// 80D6C: using guessed type int __fastcall nullsub_1(_DWORD);
// D2D74: using guessed type _UNKNOWN *off_D2D74;
