/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BC44
// Address: 0x0003BC44

//----- (0003BC44) --------------------------------------------------------
int __fastcall sub_3BC44(int a1, int a2, int a3)
{
  __int64 v3; // kr00_8
  _DWORD *v4; // r4
  int v5; // r5

  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_DWORD **)(v3 + 4 * (HIDWORD(v3) + 0x3FFFFFFF));
  if ( HIDWORD(v3) )
    *(_DWORD *)(a1 + 196) = HIDWORD(v3) - 1;
  if ( !a3 || (*v4 & 0xFFFFFFFB) == 1 )
    v5 = ((int (*)(void))dword_3B9F4[0])();
  else
    v5 = 58;
  if ( v4 )
  {
    sub_3B13C(v4);
    sub_808A0(v4);
  }
  return sub_70B98(v5);
}
// 3B9F4: using guessed type int dword_3B9F4[8];
