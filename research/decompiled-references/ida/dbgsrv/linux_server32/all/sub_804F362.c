/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_804F362
// Address: 0x0804F362

//----- (0804F362) --------------------------------------------------------
unsigned int __usercall sub_804F362@<eax>(int a1@<eax>)
{
  int v1; // edx
  unsigned int result; // eax
  char v3; // [esp+1h] [ebp-11h] BYREF
  unsigned int v4; // [esp+2h] [ebp-10h]

  v4 = __readgsdword(0x14u);
  if ( (unsigned int *)(a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 - 4), 0xFFFFFFFF);
    }
    else
    {
      v1 = *(_DWORD *)(a1 - 4);
      *(_DWORD *)(a1 - 4) = v1 - 1;
    }
    if ( v1 <= 0 )
      std::string::_Rep::_M_destroy(a1 - 12, &v3);
  }
  result = v4 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
