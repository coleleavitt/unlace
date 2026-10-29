/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480792
// Address: 0x00480792

//----- (00480792) --------------------------------------------------------
int __cdecl sub_480792(_DWORD *a1)
{
  int v1; // edi
  volatile signed __int32 *v2; // eax
  int result; // eax

  ++dword_4B78D0;
  v1 = 4096;
  a1[1] = sub_4791B9(0x1000u, 1u);
  sub_479216(nullptr);
  v2 = a1 + 3;
  if ( a1[1] )
  {
    _InterlockedOr(v2, 0x40u);
  }
  else
  {
    _InterlockedOr(v2, 0x400u);
    a1[1] = a1 + 5;
    v1 = 2;
  }
  a1[6] = v1;
  result = a1[1];
  a1[2] = 0;
  *a1 = result;
  return result;
}
// 4B78D0: using guessed type int dword_4B78D0;
