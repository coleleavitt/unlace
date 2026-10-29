/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4085D0
// Address: 0x004085D0

//----- (004085D0) --------------------------------------------------------
const char *__thiscall sub_4085D0(_DWORD *this)
{
  int v1; // ecx
  const char *result; // eax

  v1 = *(this + 1);
  result = "Unknown exception";
  if ( v1 )
    return (const char *)v1;
  return result;
}
