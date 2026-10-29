/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C3D0
// Address: 0x0044C3D0

//----- (0044C3D0) --------------------------------------------------------
void *__thiscall sub_44C3D0(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
