/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8094E40
// Address: 0x08094E40

//----- (08094E40) --------------------------------------------------------
unsigned int __cdecl sub_8094E40(int a1)
{
  int v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  void *v4; // eax
  int v5; // eax
  unsigned int result; // eax
  int v7; // ecx
  char v8; // [esp+13h] [ebp-21h] BYREF
  unsigned int v9; // [esp+14h] [ebp-20h]

  v9 = __readgsdword(0x14u);
  v1 = a1;
  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = (_DWORD *)*v2;
      v4 = (void *)v3[2];
      if ( v4 )
      {
        v3[3] = 0;
        sub_80CF780(v4);
      }
      v5 = v3[1];
      if ( (unsigned int *)(v5 - 12) != std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 4), 0xFFFFFFFF);
        }
        else
        {
          v7 = *(_DWORD *)(v5 - 4);
          *(_DWORD *)(v5 - 4) = v7 - 1;
        }
        if ( v7 <= 0 )
          std::string::_Rep::_M_destroy(v5 - 12, &v8);
      }
      operator delete(v3, 0x1Cu);
    }
    while ( v2 );
    v1 = a1;
  }
  memset(*(void **)v1, 0, 4 * *(_DWORD *)(v1 + 4));
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  result = v9 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
