/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C64
// Address: 0x00049C64

//----- (00049C64) --------------------------------------------------------
void __fastcall sub_49C64(
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
        unsigned __int8 a11,
        int a12,
        void *a13,
        int a14,
        int a15)
{
  _DWORD *v15; // r4
  unsigned __int8 v16; // r6
  int v17; // r7
  int v18; // r4
  _BOOL4 v19; // r7

  v18 = *v15 + v17 * (v15[1] - 1);
  v19 = sub_4ABEC(v18, (int)&a11) != 0;
  free_idcv((unsigned __int8 *)v18);
  if ( a11 == 5 )
  {
    sub_448A0((int)a13, &a11);
  }
  else if ( a11 == 7 && a13 )
  {
    qfree(a13);
    a15 = 0;
    a13 = nullptr;
  }
  a11 = v16;
  *(_DWORD *)(v18 + 8) = v19;
  if ( a11 == 5 )
  {
    sub_448A0((int)a13, &a11);
  }
  else if ( a11 == 7 && a13 )
  {
    qfree(a13);
    JUMPOUT(0x49FC4);
  }
  JUMPOUT(0x49FD8);
}
// 49CBE: control flows out of bounds to 49FD8
// 49CCE: control flows out of bounds to 49FC4
// 49C64: variable 'v15' is possibly undefined
// 49C68: variable 'v17' is possibly undefined
// 49CAC: variable 'v16' is possibly undefined
