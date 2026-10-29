/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404B70
// Address: 0x00404B70

//----- (00404B70) --------------------------------------------------------
_DWORD *__thiscall sub_404B70(void *this, int a2, char a3)
{
  _DWORD *result; // eax

  result = sub_4627C2(0x10u);
  if ( !result )
    return nullptr;
  result[2] = a2;
  result[1] = this;
  *result = &off_489904;
  *((_BYTE *)result + 12) = a3;
  return result;
}
// 489904: using guessed type _UNKNOWN *off_489904;
