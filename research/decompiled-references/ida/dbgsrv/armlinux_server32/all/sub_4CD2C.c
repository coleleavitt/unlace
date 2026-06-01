/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CD2C
// Address: 0x0004CD2C

//----- (0004CD2C) --------------------------------------------------------
void *__fastcall sub_4CD2C(int a1)
{
  _DWORD *v2; // r4
  void *v3; // r0
  _DWORD *v4; // r9
  int v5; // r3
  void *v6; // r0
  void *v7; // r0
  void *result; // r0
  unsigned int *v9; // r3
  int v10; // r2

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (void *)v2[2];
      v4 = (_DWORD *)*v2;
      if ( v3 )
      {
        v2[3] = 0;
        sub_77F70(v3);
      }
      v5 = v2[1];
      v6 = (void *)(v5 - 12);
      if ( (int *)(v5 - 12) != std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v9 = (unsigned int *)(v5 - 4);
          __dmb(0xBu);
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          __dmb(0xBu);
        }
        else
        {
          v10 = *(_DWORD *)(v5 - 4);
          *(_DWORD *)(v5 - 4) = v10 - 1;
        }
        if ( v10 <= 0 )
          sub_809EC(v6);
      }
      v7 = v2;
      v2 = v4;
      sub_809EC(v7);
    }
    while ( v4 );
  }
  result = memset(*(void **)a1, 0, 4 * *(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
