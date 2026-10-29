/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82E54
// Address: 0x00082E54

//----- (00082E54) --------------------------------------------------------
int *__fastcall sub_82E54(int *a1, int *a2, unsigned int a3, size_t a4)
{
  int v5; // r1
  unsigned int v6; // r4
  size_t v7; // r4
  unsigned int v10; // r7
  int v11; // r2
  int v12; // r2
  int v14; // r3

  v5 = *a2;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a3 > v6 )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::append",
      a3,
      *(_DWORD *)(v5 - 12));
  v7 = v6 - a3;
  if ( v7 >= a4 )
    v7 = a4;
  if ( v7 )
  {
    v10 = *(_DWORD *)(*a1 - 12) + v7;
    if ( *(_DWORD *)(*a1 - 8) < v10 || (v14 = *(_DWORD *)(*a1 - 4), __dmb(0xBu), v14 > 0) )
      sub_82D18(a1, v10);
    v11 = *(_DWORD *)(*a1 - 12);
    if ( v7 == 1 )
      *(_BYTE *)(*a1 + v11) = *(_BYTE *)(*a2 + a3);
    else
      memcpy((void *)(*a1 + v11), (const void *)(*a2 + a3), v7);
    v12 = *a1;
    if ( (int *)(*a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v12 - 12) = v10;
      *(_DWORD *)(v12 - 4) = 0;
      *(_BYTE *)(v12 + v10) = 0;
    }
  }
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
