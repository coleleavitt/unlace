/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82FB8
// Address: 0x00082FB8

//----- (00082FB8) --------------------------------------------------------
int *__fastcall sub_82FB8(int *a1, char a2)
{
  __int64 v4; // kr00_8
  int v5; // r3
  int *result; // r0
  int *v7; // r3

  v4 = *(_QWORD *)(*a1 - 12);
  if ( (unsigned int)(v4 + 1) > HIDWORD(v4) || (v5 = *(_DWORD *)(*a1 - 4), __dmb(0xBu), v5 > 0) )
    sub_82B80(a1, v4 + 1);
  result = a1;
  *(_BYTE *)(*a1 + *(_DWORD *)(*a1 - 12)) = a2;
  v7 = (int *)(*a1 - 12);
  if ( v7 != std::string::_Rep::_S_empty_rep_storage )
  {
    *(_DWORD *)(HIDWORD(v4) - 12) = v4 + 1;
    *(_DWORD *)(HIDWORD(v4) - 4) = 0;
    *((_BYTE *)v7 + v4 + 13) = 0;
  }
  return result;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
