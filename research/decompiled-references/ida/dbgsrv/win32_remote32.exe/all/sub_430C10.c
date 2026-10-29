/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430C10
// Address: 0x00430C10

//----- (00430C10) --------------------------------------------------------
void *__thiscall sub_430C10(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
