/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E7C1
// Address: 0x0046E7C1

//----- (0046E7C1) --------------------------------------------------------
int *__usercall sub_46E7C1@<eax>(int a1@<ebx>, int a2@<edi>, unsigned __int8 a3, _BYTE *a4)
{
  _DWORD *v4; // ecx
  int *result; // eax

  if ( a4[4] )
  {
    v4 = (_DWORD *)sub_46E777(a4, a1, a2);
    result = (int *)((a3 << 31) | 0x7FF00000);
    *v4 = 0;
    v4[1] = result;
  }
  else
  {
    result = (int *)sub_46E79C(a4, a1, a2);
    *result = (a3 << 31) | 0x7F800000;
  }
  return result;
}
