/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80921C0
// Address: 0x080921C0

//----- (080921C0) --------------------------------------------------------
unsigned int __usercall sub_80921C0@<eax>(_DWORD *a1@<eax>)
{
  char *v2; // edx
  int v3; // ebp
  int i; // esi
  char *v5; // eax
  void *v6; // ecx
  int v7; // eax
  unsigned int result; // eax
  int v9; // ecx
  char v10; // [esp+1h] [ebp-21h] BYREF
  unsigned int v11; // [esp+2h] [ebp-20h]

  v11 = __readgsdword(0x14u);
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[16 * i];
        v6 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_80CF780(v6);
          v2 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    sub_80CF780(v2);
  }
  v7 = a1[1];
  if ( (unsigned int *)(v7 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 4), 0xFFFFFFFF);
    }
    else
    {
      v9 = *(_DWORD *)(v7 - 4);
      *(_DWORD *)(v7 - 4) = v9 - 1;
    }
    if ( v9 <= 0 )
      std::string::_Rep::_M_destroy(v7 - 12, &v10);
  }
  operator delete(a1, 0x18u);
  result = v11 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
