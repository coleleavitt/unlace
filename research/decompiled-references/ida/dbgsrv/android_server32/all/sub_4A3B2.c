/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3B2
// Address: 0x0004A3B2

//----- (0004A3B2) --------------------------------------------------------
int __fastcall sub_4A3B2(
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
        unsigned __int8 a17,
        int a18,
        void *a19,
        int a20,
        int a21)
{
  int v21; // r0

  v21 = a17;
  if ( a17 == 5 )
  {
    v21 = sub_448A0((int)a19, &a17);
  }
  else if ( a17 == 7 )
  {
    v21 = (int)a19;
    if ( a19 )
    {
      a20 = 0;
      qfree(a19);
      v21 = 0;
      a21 = 0;
      a19 = nullptr;
    }
  }
  return sub_4A040(v21, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
// 4A3C0: variable 'a2' is possibly undefined
// 4A3C0: variable 'a3' is possibly undefined
// 4A3C0: variable 'a4' is possibly undefined
// 4A040: using guessed type int __fastcall sub_4A040(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
