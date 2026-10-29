/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_typeid::~bad_typeid
// Address: 0x00000000004AEF30

//----- (00000000004AEF30) ----------------------------------------------------
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  *(_QWORD *)this = &off_51E7B8;
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E7B8: using guessed type void (__fastcall *)(std::bad_typeid *__hidden this);
