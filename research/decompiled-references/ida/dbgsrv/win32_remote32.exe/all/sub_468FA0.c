/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468FA0
// Address: 0x00468FA0

//----- (00468FA0) --------------------------------------------------------
_BYTE *__userpurge sub_468FA0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, char a4)
{
  _BYTE *result; // eax

  result = (_BYTE *)(*a1 - 1);
  *a1 = result;
  if ( a4 )
  {
    if ( *result != a4 )
    {
      *sub_46B984() = 22;
      return (_BYTE *)sub_467EF4(a2, a3);
    }
  }
  return result;
}
