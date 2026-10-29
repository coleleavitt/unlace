/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3EE
// Address: 0x0004A3EE

//----- (0004A3EE) --------------------------------------------------------
int __fastcall sub_4A3EE(
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
        void *a13,
        int a14,
        int a15)
{
  int v15; // r0

  v15 = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    v15 = sub_448A0((int)a13, (unsigned __int8 *)&a11);
  }
  else if ( (unsigned __int8)a11 == 7 )
  {
    v15 = (int)a13;
    if ( a13 )
    {
      a14 = 0;
      qfree(a13);
      v15 = 0;
      a15 = 0;
      a13 = nullptr;
    }
  }
  return sub_4A040(v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
// 4A3FC: variable 'a2' is possibly undefined
// 4A3FC: variable 'a3' is possibly undefined
// 4A3FC: variable 'a4' is possibly undefined
// 4A040: using guessed type int __fastcall sub_4A040(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
