/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E5CE
// Address: 0x0005E5CE

//----- (0005E5CE) --------------------------------------------------------
int __fastcall sub_5E5CE(
        FILE *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22)
{
  int v22; // r5
  int v23; // r1

  v23 = v22 + 4 * a3;
  *(_DWORD *)(v23 + 4) = a1;
  if ( a1 )
  {
    if ( a22 )
      qfsize(a1);
    JUMPOUT(0x5E5FA);
  }
  return sub_5E5F8(0, v23, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}
// 5E5E8: control flows out of bounds to 5E5FA
// 5E5D0: variable 'v22' is possibly undefined
// 5E5F8: using guessed type int __fastcall sub_5E5F8(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
