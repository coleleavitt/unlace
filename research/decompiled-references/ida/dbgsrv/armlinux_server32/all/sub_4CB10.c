/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CB10
// Address: 0x0004CB10

//----- (0004CB10) --------------------------------------------------------
int __fastcall sub_4CB10(int a1)
{
  _DWORD *v2; // r4
  __int64 v3; // kr00_8
  int *v4; // r0
  void *v5; // r0
  unsigned int *v7; // r1
  int v8; // r2

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = *(_QWORD *)v2;
      v4 = (int *)(v2[1] - 12);
      if ( v4 != std::string::_Rep::_S_empty_rep_storage )
      {
        v7 = (unsigned int *)(HIDWORD(v3) - 4);
        if ( &_pthread_key_create )
        {
          __dmb(0xBu);
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          __dmb(0xBu);
        }
        else
        {
          v8 = *(_DWORD *)(HIDWORD(v3) - 4);
          *(_DWORD *)(HIDWORD(v3) - 4) = v8 - 1;
        }
        if ( v8 <= 0 )
          sub_809EC(v4);
      }
      v5 = v2;
      v2 = (_DWORD *)v3;
      sub_809EC(v5);
    }
    while ( (_DWORD)v3 );
  }
  memset(*(void **)a1, 0, 4 * *(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  if ( *(_DWORD *)a1 != a1 + 24 )
    sub_809EC(*(void **)a1);
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
