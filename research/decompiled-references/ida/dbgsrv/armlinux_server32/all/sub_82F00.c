/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82F00
// Address: 0x00082F00

//----- (00082F00) --------------------------------------------------------
int *__fastcall sub_82F00(int *a1, unsigned int a2, size_t a3)
{
  unsigned int v4; // r3
  int v6; // r7
  unsigned int v7; // r7
  _BYTE *v8; // r6
  int v9; // r2
  int v10; // r2
  int v12; // r3
  bool v13; // cc
  unsigned int v14; // r6

  if ( a3 )
  {
    v4 = *a1;
    v6 = *(_DWORD *)(*a1 - 12);
    if ( 1073741820 - v6 < a3 )
      sub_83DCC("basic_string::append");
    v7 = v6 + a3;
    v8 = (_BYTE *)a2;
    if ( v7 > *(_DWORD *)(v4 - 8) || (v12 = *(_DWORD *)(v4 - 4), __dmb(0xBu), v13 = v12 <= 0, v4 = *a1, !v13) )
    {
      if ( a2 >= v4 && a2 <= *(_DWORD *)(v4 - 12) + v4 )
      {
        v14 = a2 - v4;
        sub_82D18(a1, v7);
        v4 = *a1;
        v8 = (_BYTE *)(v14 + *a1);
      }
      else
      {
        sub_82D18(a1, v7);
        v4 = *a1;
      }
    }
    v9 = *(_DWORD *)(v4 - 12);
    if ( a3 == 1 )
      *(_BYTE *)(v4 + v9) = *v8;
    else
      memcpy((void *)(v4 + v9), v8, a3);
    v10 = *a1;
    if ( (int *)(*a1 - 12) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v10 - 12) = v7;
      *(_DWORD *)(v10 - 4) = 0;
      *(_BYTE *)(v10 + v7) = 0;
    }
  }
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
