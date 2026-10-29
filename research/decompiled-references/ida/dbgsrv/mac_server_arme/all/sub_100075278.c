/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075278
// Address: 0x0000000100075278

//----- (0000000100075278) ----------------------------------------------------
void __fastcall sub_100075278(std::exception *a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  std::exception::~exception(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 100075290: variable '_8' is possibly undefined
// 10007529C: variable 'v1' is possibly undefined
