/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_cast::~bad_cast
// Address: 0x00084064

//----- (00084064) --------------------------------------------------------
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_DWORD *)this = &off_D2DB4;
  nullsub_1(this);
}
// 80D6C: using guessed type int __fastcall nullsub_1(_DWORD);
// D2DB4: using guessed type _UNKNOWN *off_D2DB4;
