/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89FAA
// Address: 0x00089FAA

//----- (00089FAA) --------------------------------------------------------
void __fastcall sub_89FAA(
        int a1,
        int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int *a19,
        int a20,
        int a21,
        _DWORD *a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int *a27,
        int a28,
        int a29,
        _BYTE *a30,
        int a31,
        int a32,
        int *a33,
        unsigned int a34,
        unsigned int *a35,
        int a36,
        int a37,
        _DWORD *a38,
        unsigned int a39)
{
  int v39; // r6
  int v40; // r1

  if ( a39 >= a3 )
  {
    v40 = a32;
  }
  else
  {
    v40 = a32;
    do
    {
      if ( !v40 )
        JUMPOUT(0x8A1CE);
      v39 += *a4++ << a39;
      --v40;
      a39 += 8;
    }
    while ( a39 < a3 );
  }
  a38[18] += v39 & ~(a29 << a3);
  *a19 += a3;
  sub_8A022(
    a39 - a3,
    (int)a19,
    a3,
    (int)a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    v40,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39 - a3);
}
// 8A20A: control flows out of bounds to 8A1CE
// 89FC0: variable 'v39' is possibly undefined
