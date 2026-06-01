/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468FC9
// Address: 0x00468FC9

//----- (00468FC9) --------------------------------------------------------
_WORD *__userpurge sub_468FC9@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, __int16 a4)
{
  _WORD *result; // eax

  result = (_WORD *)(*a1 - 2);
  *a1 = result;
  if ( a4 )
  {
    if ( *result != a4 )
    {
      *sub_46B984() = 22;
      return (_WORD *)sub_467EF4(a2, a3);
    }
  }
  return result;
}
