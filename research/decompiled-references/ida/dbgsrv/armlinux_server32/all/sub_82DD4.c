/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82DD4
// Address: 0x00082DD4

//----- (00082DD4) --------------------------------------------------------
int *__fastcall sub_82DD4(int *a1, _DWORD *a2)
{
  size_t v3; // r5
  unsigned int v5; // r6
  _BYTE *v6; // r1
  int v7; // r2
  int v8; // r2
  int v10; // r3

  v3 = *(_DWORD *)(*a2 - 12);
  if ( v3 )
  {
    v5 = *(_DWORD *)(*a1 - 12) + v3;
    if ( v5 > *(_DWORD *)(*a1 - 8) || (v10 = *(_DWORD *)(*a1 - 4), __dmb(0xBu), v10 > 0) )
      sub_82D18(a1, v5);
    v6 = (_BYTE *)*a2;
    v7 = *(_DWORD *)(*a1 - 12);
    if ( v3 == 1 )
      *(_BYTE *)(*a1 + v7) = *v6;
    else
      memcpy((void *)(*a1 + v7), v6, v3);
    v8 = *a1;
    if ( (int *)(*a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v8 - 12) = v5;
      *(_DWORD *)(v8 - 4) = 0;
      *(_BYTE *)(v8 + v5) = 0;
    }
  }
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
