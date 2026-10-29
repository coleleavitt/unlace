/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46ECEA
// Address: 0x0046ECEA

//----- (0046ECEA) --------------------------------------------------------
_DWORD *__usercall sub_46ECEA@<eax>(int a1@<ebx>, int a2@<edi>, unsigned __int8 a3, _BYTE *a4)
{
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  if ( a4[4] )
  {
    v4 = (_DWORD *)sub_46E777(a4, a1, a2);
    result = (_DWORD *)(a3 << 31);
    *v4 = 0;
    v4[1] = result;
  }
  else
  {
    result = (_DWORD *)sub_46E79C(a4, a1, a2);
    *result = a3 << 31;
  }
  return result;
}
