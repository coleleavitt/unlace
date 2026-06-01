/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418F20
// Address: 0x00418F20

//----- (00418F20) --------------------------------------------------------
_BYTE *sub_418F20()
{
  _BYTE *result; // eax
  _BYTE *v1; // eax

  result = (_BYTE *)dword_4B6A1C;
  if ( !dword_4B6A1C )
  {
    v1 = sub_4627C2(0x20u);
    if ( v1 )
    {
      result = sub_417F30(v1);
      dword_4B6A1C = (int)result;
    }
    else
    {
      dword_4B6A1C = 0;
      return nullptr;
    }
  }
  return result;
}
// 4B6A1C: using guessed type int dword_4B6A1C;
