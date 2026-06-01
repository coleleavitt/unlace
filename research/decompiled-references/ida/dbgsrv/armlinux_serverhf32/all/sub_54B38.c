/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54B38
// Address: 0x00054B38

//----- (00054B38) --------------------------------------------------------
bool __fastcall sub_54B38(int a1, int a2, char a3)
{
  unsigned int v4; // r5
  unsigned int *v8; // r9
  __int64 v9; // kr00_8
  int v10; // r1
  int *v11; // r3
  int v12; // r2

  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 5 )
    return 0;
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == -1 )
  {
    v4 = *(_DWORD *)(a2 + 20);
    if ( v4 == -1 )
      v4 = *(_DWORD *)(a2 + 8);
  }
  v8 = sub_5456C(a1, *(_DWORD *)(a2 + 4), v4);
  if ( !v8 )
    return 0;
  sub_53D50(a1, "%a: bptcnd yielded false\n", v4);
  *(_BYTE *)(a2 + 12) = 1;
  v9 = *(_QWORD *)(a1 + 224);
  v10 = v9 + 4 * HIDWORD(v9);
  if ( (_DWORD)v9 != v10 )
  {
    if ( v4 == *(_DWORD *)v9 )
    {
LABEL_13:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(617);
    }
    v11 = (int *)(v9 + 4);
    while ( v10 != (_DWORD)v9 )
    {
      v12 = *v11++;
      if ( v4 == v12 )
        goto LABEL_13;
    }
  }
  return sub_54848((_DWORD *)a1, v8, (_DWORD *)a2, a3);
}
// D5C00: using guessed type char under_debugger;
