/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D370
// Address: 0x0044D370

//----- (0044D370) --------------------------------------------------------
DWORD __userpurge sub_44D370@<eax>(__m128i a1@<xmm0>, LPVOID lpThreadParameter)
{
  void *v3; // [esp-4h] [ebp-18h]

  sub_456370(*((HANDLE *)lpThreadParameter + 2), 0xFFFFFFFF);
  sub_44D060(a1, *(_DWORD *)lpThreadParameter, *((int **)lpThreadParameter + 1));
  v3 = *((void **)lpThreadParameter + 2);
  *(_DWORD *)lpThreadParameter = 0;
  *((_DWORD *)lpThreadParameter + 1) = 0;
  sub_456330(v3);
  *((_DWORD *)lpThreadParameter + 2) = 0;
  sub_4627F2(lpThreadParameter);
  return 0;
}
