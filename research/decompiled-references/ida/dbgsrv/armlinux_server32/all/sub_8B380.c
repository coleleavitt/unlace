/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B380
// Address: 0x0008B380

//----- (0008B380) --------------------------------------------------------
int *__fastcall sub_8B380(int *a1)
{
  int v1; // r1
  int *v3; // r0
  unsigned int *v5; // r1
  int v6; // r3

  v1 = *a1;
  v3 = (int *)(*a1 - 12);
  if ( v3 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v5 = (unsigned int *)(v1 - 4);
      __dmb(0xBu);
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      __dmb(0xBu);
    }
    else
    {
      v6 = *(_DWORD *)(v1 - 4);
      *(_DWORD *)(v1 - 4) = v6 - 1;
    }
    if ( v6 <= 0 )
      sub_822E4(v3);
  }
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
