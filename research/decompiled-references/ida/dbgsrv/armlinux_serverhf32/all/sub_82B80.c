/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82B80
// Address: 0x00082B80

//----- (00082B80) --------------------------------------------------------
void __fastcall sub_82B80(int *a1, unsigned int a2)
{
  int v2; // r3
  int v4; // r0
  unsigned int v5; // r3
  int v6; // r2
  _DWORD *v7; // r7
  int v8; // r2
  int *v9; // r0
  int v10; // r3
  unsigned int *v11; // r2
  int v12; // r3
  _BYTE v13[8]; // [sp+4h] [bp-8h] BYREF

  v2 = *a1;
  if ( a2 == *(_DWORD *)(*a1 - 8) )
  {
    v10 = *(_DWORD *)(v2 - 4);
    __dmb(0xBu);
    if ( v10 <= 0 )
      return;
    v2 = *a1;
  }
  v4 = v2 - 12;
  v5 = *(_DWORD *)(v2 - 12);
  if ( a2 < v5 )
    v6 = 0;
  else
    v6 = a2 - v5;
  v7 = sub_82B28(v4, (int)v13, v6);
  v8 = *a1;
  v9 = (int *)(*a1 - 12);
  if ( v9 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v11 = (unsigned int *)(v8 - 4);
      __dmb(0xBu);
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      __dmb(0xBu);
    }
    else
    {
      v12 = *(_DWORD *)(v8 - 4);
      *(_DWORD *)(v8 - 4) = v12 - 1;
    }
    if ( v12 <= 0 )
      sub_82148(v9);
  }
  *a1 = (int)v7;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
