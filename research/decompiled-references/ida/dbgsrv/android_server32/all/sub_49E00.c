/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E00
// Address: 0x00049E00

//----- (00049E00) --------------------------------------------------------
void __fastcall sub_49E00(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        unsigned __int8 a11,
        int a12,
        void *a13,
        int a14,
        int a15)
{
  _DWORD *v15; // r4
  int v16; // r6
  int v17; // r7
  int v18; // r4
  int v19; // r7

  v18 = *v15 + v17 * (v15[1] - 1);
  v19 = 1;
  if ( sub_4ABEC(v18, (int)&a11) >= 1 )
    v19 = v16;
  free_idcv((unsigned __int8 *)v18);
  if ( a11 == 5 )
  {
    sub_448A0((int)a13, &a11);
  }
  else if ( a11 == 7 && a13 )
  {
    a14 = 0;
    qfree(a13);
    a15 = 0;
    a13 = nullptr;
  }
  a11 = a9;
  a13 = nullptr;
  *(_DWORD *)(v18 + 8) = v19;
  if ( a11 == 5 )
  {
    sub_448A0((int)a13, &a11);
  }
  else if ( a11 == 7 && a13 )
  {
    a14 = 0;
    qfree(a13);
    JUMPOUT(0x49FC4);
  }
  JUMPOUT(0x49FD8);
}
// 49E60: control flows out of bounds to 49FD8
// 49E70: control flows out of bounds to 49FC4
// 49E00: variable 'v15' is possibly undefined
// 49E04: variable 'v17' is possibly undefined
// 49E16: variable 'v16' is possibly undefined
