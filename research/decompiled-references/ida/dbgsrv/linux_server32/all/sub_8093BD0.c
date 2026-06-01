/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8093BD0
// Address: 0x08093BD0

//----- (08093BD0) --------------------------------------------------------
unsigned int __cdecl sub_8093BD0(int a1)
{
  int v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  int v4; // eax
  unsigned int result; // eax
  int v6; // ecx
  char v7; // [esp+13h] [ebp-21h] BYREF
  unsigned int v8; // [esp+14h] [ebp-20h]

  v8 = __readgsdword(0x14u);
  v1 = a1;
  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = (_DWORD *)*v2;
      v4 = v3[1];
      if ( (unsigned int *)(v4 - 12) != std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 4), 0xFFFFFFFF);
        }
        else
        {
          v6 = *(_DWORD *)(v4 - 4);
          *(_DWORD *)(v4 - 4) = v6 - 1;
        }
        if ( v6 <= 0 )
          std::string::_Rep::_M_destroy(v4 - 12, &v7);
      }
      operator delete(v3, 0x10u);
    }
    while ( v2 );
    v1 = a1;
  }
  memset(*(void **)v1, 0, 4 * *(_DWORD *)(v1 + 4));
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  result = v8 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
