/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401680
// Address: 0x00401680

//----- (00401680) --------------------------------------------------------
const CHAR *__thiscall sub_401680(_DWORD *this)
{
  const CHAR *result; // eax

  result = MultiByteStr;
  if ( *(this + 1) )
    return (const CHAR *)*this;
  return result;
}
