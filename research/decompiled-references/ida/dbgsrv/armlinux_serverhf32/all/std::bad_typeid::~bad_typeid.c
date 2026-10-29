/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_typeid::~bad_typeid
// Address: 0x00083E4C

//----- (00083E4C) --------------------------------------------------------
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  *(_DWORD *)this = &off_D1D54;
  nullsub_1(this);
}
// 7FC84: using guessed type int __fastcall nullsub_1(_DWORD);
// D1D54: using guessed type _UNKNOWN *off_D1D54;
