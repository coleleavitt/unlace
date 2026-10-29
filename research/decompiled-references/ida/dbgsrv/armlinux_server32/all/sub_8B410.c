/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B410
// Address: 0x0008B410

//----- (0008B410) --------------------------------------------------------
_DWORD *__fastcall sub_8B410(_DWORD *a1, int a2)
{
  _BYTE *v3; // r0
  unsigned int *v5; // r2
  int v6; // r3
  _BYTE *v7; // [sp+4h] [bp-8h] BYREF

  (*(void (__fastcall **)(_BYTE **))(*(_DWORD *)a2 + 12))(&v7);
  sub_8BC9C(a1, v7, *((_DWORD *)v7 - 3));
  v3 = v7 - 12;
  if ( v7 - 12 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v5 = (unsigned int *)(v7 - 4);
      __dmb(0xBu);
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      __dmb(0xBu);
    }
    else
    {
      v6 = *((_DWORD *)v7 - 1);
      *((_DWORD *)v7 - 1) = v6 - 1;
    }
    if ( v6 <= 0 )
      sub_822E4(v3);
  }
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
