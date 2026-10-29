/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96508
// Address: 0x00096508

//----- (00096508) --------------------------------------------------------
int __fastcall sub_96508(int a1, int a2)
{
  _BYTE *v4; // r1
  int v5; // r0
  _BYTE *v6; // r2
  int v7; // r1
  __int64 v8; // kr08_8
  int result; // r0

  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >= 4 )
  {
    sub_93B8C(a2, "(", "");
    sub_93B8C(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
    sub_93B8C(a2, ")", "");
  }
  v4 = *(_BYTE **)(a1 + 16);
  if ( *v4 == 110 )
  {
    sub_93B8C(a2, "-", "");
    v6 = *(_BYTE **)(a1 + 20);
    v5 = *(_DWORD *)(a1 + 16);
    v7 = (int)&v6[-v5 - 1];
    if ( (unsigned int)&v6[-v5] > 1 )
      v7 = 1;
    v4 = (_BYTE *)(v7 + v5);
  }
  else
  {
    v6 = *(_BYTE **)(a1 + 20);
  }
  sub_93B8C(a2, v4, v6);
  v8 = *(_QWORD *)(a1 + 8);
  result = HIDWORD(v8) - v8;
  if ( (unsigned int)(HIDWORD(v8) - v8) <= 3 )
    return sub_93B8C(a2, (_BYTE *)v8, (_BYTE *)HIDWORD(v8));
  return result;
}
