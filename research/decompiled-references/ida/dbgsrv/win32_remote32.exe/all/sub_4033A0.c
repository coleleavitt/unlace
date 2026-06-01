/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4033A0
// Address: 0x004033A0

//----- (004033A0) --------------------------------------------------------
__int16 *__thiscall sub_4033A0(_DWORD *this, int a2)
{
  if ( *(this + 1) || a2 )
    return (__int16 *)(a2 + *this);
  else
    return &word_4B69CE;
}
// 4B69CE: using guessed type __int16 word_4B69CE;
