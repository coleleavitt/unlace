/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BE080
// Address: 0x080BE080

//----- (080BE080) --------------------------------------------------------
int __cdecl sub_80BE080(volatile signed __int32 *a1)
{
  int result; // eax

  if ( &_pthread_key_create )
  {
    result = _InterlockedExchangeAdd(a1 + 1, 0xFFFFFFFF);
    if ( result != 1 )
      return result;
  }
  else
  {
    result = *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 1) = result - 1;
    if ( result != 1 )
      return result;
  }
  (*(void (__cdecl **)(volatile signed __int32 *))(*a1 + 8))(a1);
  if ( &_pthread_key_create )
  {
    result = _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
  }
  else
  {
    result = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = result - 1;
  }
  if ( result == 1 )
    return (*(int (__cdecl **)(volatile signed __int32 *))(*a1 + 12))(a1);
  return result;
}
