/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414540
// Address: 0x00414540

//----- (00414540) --------------------------------------------------------
bool __thiscall sub_414540(__m128i *this)
{
  return (*(unsigned __int8 (__thiscall **)(__m128i *))(this->m128i_i32[0] + 4))(this)
      && sub_412A80(
           *((_DWORD *)this + 15),
           (unsigned int)(this + 4),
           this + 5,
           this + 9,
           *((_DWORD *)this + 14),
           *((_DWORD *)this + 13));
}
