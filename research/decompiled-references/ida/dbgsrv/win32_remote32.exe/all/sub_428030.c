/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428030
// Address: 0x00428030

//----- (00428030) --------------------------------------------------------
_DWORD *sub_428030()
{
  _DWORD *result; // eax

  if ( (dword_4B6BD0 & 1) != 0 )
    return (_DWORD *)dword_4B6BCC;
  dword_4B6BD0 |= 1u;
  result = sub_4627C2(0x50u);
  if ( result )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0;
    result[15] = 0;
    result[16] = 0;
    result[17] = 0;
    result[18] = 0;
    *((_BYTE *)result + 76) = 0;
    dword_4B6BCC = (int)result;
  }
  else
  {
    dword_4B6BCC = 0;
    return nullptr;
  }
  return result;
}
// 4B6BCC: using guessed type int dword_4B6BCC;
// 4B6BD0: using guessed type int dword_4B6BD0;
