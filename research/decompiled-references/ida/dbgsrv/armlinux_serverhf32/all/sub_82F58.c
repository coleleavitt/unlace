/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82F58
// Address: 0x00082F58

//----- (00082F58) --------------------------------------------------------
int *__fastcall sub_82F58(int *result, char a2)
{
  int *v2; // r4
  __int64 v4; // kr00_8
  int v5; // r3
  int *v6; // r3

  v2 = result;
  v4 = *(_QWORD *)(*result - 12);
  if ( (unsigned int)(v4 + 1) > HIDWORD(v4) || (v5 = *(_DWORD *)(*result - 4), __dmb(0xBu), v5 > 0) )
    sub_82B80(result, v4 + 1);
  *(_BYTE *)(*v2 + *(_DWORD *)(*v2 - 12)) = a2;
  v6 = (int *)(*v2 - 12);
  if ( v6 != std::string::_Rep::_S_empty_rep_storage )
  {
    *(_DWORD *)(HIDWORD(v4) - 12) = v4 + 1;
    *(_DWORD *)(HIDWORD(v4) - 4) = 0;
    *((_BYTE *)v6 + v4 + 13) = 0;
  }
  return result;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
