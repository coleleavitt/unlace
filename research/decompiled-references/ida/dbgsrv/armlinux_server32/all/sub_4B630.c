/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B630
// Address: 0x0004B630

//----- (0004B630) --------------------------------------------------------
void __fastcall sub_4B630(_DWORD *ptr)
{
  _DWORD *v2; // r3
  int v3; // r8
  int i; // r4
  void *v5; // r0
  char *v6; // r3
  int v7; // r2
  void *v8; // r0
  unsigned int *v9; // r2
  int v10; // r3

  v2 = (_DWORD *)ptr[2];
  if ( v2 )
  {
    v3 = ptr[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void *)v2[4 * i];
        v6 = (char *)&v2[4 * i];
        if ( v5 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77F70(v5);
        }
        v2 = (_DWORD *)ptr[2];
      }
    }
    ptr[3] = 0;
    sub_77F70(v2);
  }
  v7 = ptr[1];
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v9 = (unsigned int *)(v7 - 4);
      __dmb(0xBu);
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      __dmb(0xBu);
    }
    else
    {
      v10 = *(_DWORD *)(v7 - 4);
      *(_DWORD *)(v7 - 4) = v10 - 1;
    }
    if ( v10 <= 0 )
      sub_809EC(v8);
  }
  sub_809EC(ptr);
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
