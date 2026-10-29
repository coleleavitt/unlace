/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A11A
// Address: 0x0008A11A

//----- (0008A11A) --------------------------------------------------------
void __fastcall sub_8A11A(
        int a1,
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
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        _DWORD *a33,
        int a34,
        int a35,
        int a36,
        int a37,
        _DWORD *a38)
{
  __int16 v38; // r6
  int v39; // r0
  unsigned int v40; // r2
  unsigned int v41; // r3
  unsigned int v42; // r0

  if ( (v38 & 0xF) == 8 )
  {
    v39 = (unsigned __int8)v38 >> 4;
    v40 = v39 + 8;
    v41 = a38[10];
    if ( !v41 )
    {
      a38[10] = v40;
      v41 = v39 + 8;
    }
    if ( v40 > 0xF || v40 > v41 )
    {
      *(_DWORD *)(a31 + 24) = "invalid window size";
      *a33 = 16209;
LABEL_11:
      JUMPOUT(0x89FDC);
    }
    a38[5] = 0;
    a38[6] = 256 << v39;
    v42 = sub_8EC00(0, nullptr, 0);
    a38[7] = v42;
    *(_DWORD *)(a31 + 48) = v42;
    if ( (v38 & 0x2000) != 0 )
      a20 = 16189;
    a38[1] = a20;
    ((void (*)(void))loc_88E40)();
  }
  sub_89674("unknown compression method");
  *(_DWORD *)(a31 + 24) = "invalid bit length repeat";
  *a33 = 16209;
  goto LABEL_11;
}
// 8A1A2: control flows out of bounds to 89FDC
// 8A11E: variable 'v38' is possibly undefined
// 89674: using guessed type int __fastcall sub_89674(_DWORD);
