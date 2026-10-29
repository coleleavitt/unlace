/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C1AF0
// Address: 0x080C1AF0

//----- (080C1AF0) --------------------------------------------------------
pthread_mutex_t *__cdecl sub_80C1AF0(int a1)
{
  pthread_mutex_t *result; // eax

  result = sub_80D1320();
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  return result;
}
