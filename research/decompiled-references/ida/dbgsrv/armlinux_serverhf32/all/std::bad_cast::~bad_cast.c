/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_cast::~bad_cast
// Address: 0x00083F48

//----- (00083F48) --------------------------------------------------------
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_DWORD *)this = &off_D1DB4;
  nullsub_1(this);
}
// 7FC84: using guessed type int __fastcall nullsub_1(_DWORD);
// D1DB4: using guessed type _UNKNOWN *off_D1DB4;
