/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: txnal_cow_string_D1_commit
// Address: 0x0008B0F8

//----- (0008B0F8) --------------------------------------------------------
void __fastcall _txnal_cow_string_D1_commit(int *a1)
{
  unsigned int *v1; // r2
  int v2; // r3

  if ( a1 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = (unsigned int *)(a1 + 2);
      __dmb(0xBu);
      do
        v2 = __ldrex(v1);
      while ( __strex(v2 - 1, v1) );
      __dmb(0xBu);
    }
    else
    {
      v2 = a1[2];
      a1[2] = v2 - 1;
    }
    if ( v2 <= 0 )
      sub_822E4(a1);
  }
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
