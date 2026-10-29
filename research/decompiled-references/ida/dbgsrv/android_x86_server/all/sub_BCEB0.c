/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BCEB0
// Address: 0x000BCEB0

//----- (000BCEB0) --------------------------------------------------------
int __cdecl std::runtime_error::operator=(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 - 4));
  if ( _InterlockedDecrement((volatile signed __int32 *)(v2 - 4)) < 0 )
    operator delete((void *)(v2 - 12));
  return a1;
}
