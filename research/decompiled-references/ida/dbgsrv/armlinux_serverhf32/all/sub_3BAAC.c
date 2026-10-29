/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BAAC
// Address: 0x0003BAAC

//----- (0003BAAC) --------------------------------------------------------
int __fastcall sub_3BAAC(int a1, int a2, int a3)
{
  __int64 v3; // kr00_8
  _DWORD *v4; // r4
  int v5; // r5

  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_DWORD **)(v3 + 4 * (HIDWORD(v3) + 0x3FFFFFFF));
  if ( HIDWORD(v3) )
    *(_DWORD *)(a1 + 196) = HIDWORD(v3) - 1;
  if ( !a3 || (*v4 & 0xFFFFFFFB) == 1 )
    v5 = ((int (*)(void))dword_3B85C[0])();
  else
    v5 = 58;
  if ( v4 )
  {
    sub_3AFA4(v4);
    sub_8121C(v4);
  }
  return sub_70A2C(v5);
}
// 3B85C: using guessed type int dword_3B85C[8];
