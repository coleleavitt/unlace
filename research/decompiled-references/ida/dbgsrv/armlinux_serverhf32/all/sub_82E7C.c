/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82E7C
// Address: 0x00082E7C

//----- (00082E7C) --------------------------------------------------------
int *__fastcall sub_82E7C(int *a1, size_t a2, int a3)
{
  int v5; // r2
  int v7; // r6
  unsigned int v8; // r6
  int v9; // r2
  int v10; // r2
  int v12; // r3

  if ( a2 )
  {
    v5 = *a1;
    v7 = *(_DWORD *)(*a1 - 12);
    if ( 1073741820 - v7 < a2 )
      sub_83AE4("basic_string::append");
    v8 = v7 + a2;
    if ( v8 > *(_DWORD *)(v5 - 8) || (v12 = *(_DWORD *)(v5 - 4), __dmb(0xBu), v12 > 0) )
      sub_82B80(a1, v8);
    v9 = *(_DWORD *)(*a1 - 12);
    if ( a2 == 1 )
      *(_BYTE *)(*a1 + v9) = a3;
    else
      memset((void *)(*a1 + v9), a3, a2);
    v10 = *a1;
    if ( (int *)(*a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v10 - 12) = v8;
      *(_DWORD *)(v10 - 4) = 0;
      *(_BYTE *)(v10 + v8) = 0;
    }
  }
  return a1;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
