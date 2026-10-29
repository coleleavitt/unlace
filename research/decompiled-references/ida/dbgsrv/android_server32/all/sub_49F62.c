/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F62
// Address: 0x00049F62

//----- (00049F62) --------------------------------------------------------
int __fastcall sub_49F62(
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
        char *a14,
        int a15)
{
  _DWORD *v15; // r4
  char *v16; // r5
  char v17; // r6
  int v18; // r7
  int v19; // r4
  char *v20; // r7
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0

  v19 = *v15 + v18 * (v15[1] - 1);
  v20 = &v16[(unsigned int)v16 >= sub_4ABEC(v19, (int)&a11)];
  free_idcv((unsigned __int8 *)v19);
  if ( (unsigned __int8)a11 == 5 )
  {
    sub_448A0((int)a13, (unsigned __int8 *)&a11);
  }
  else if ( (unsigned __int8)a11 == 7 && a13 )
  {
    a14 = v16;
    qfree(a13);
    a15 = 0;
    a13 = nullptr;
  }
  LOBYTE(a11) = v17;
  a13 = v16;
  *(_DWORD *)(v19 + 8) = v20;
  v24 = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    v24 = sub_448A0((int)a13, (unsigned __int8 *)&a11);
  }
  else if ( (unsigned __int8)a11 == 7 )
  {
    v24 = (int)a13;
    if ( a13 )
    {
      a14 = v16;
      qfree(a13);
      v24 = 0;
      a15 = 0;
      a13 = nullptr;
    }
  }
  return sub_4A040(v24, v21, v22, v23, a5, a6, a7, a8, a9, a10, a11);
}
// 49F62: variable 'v15' is possibly undefined
// 49F66: variable 'v18' is possibly undefined
// 49F72: variable 'v16' is possibly undefined
// 49FA6: variable 'v17' is possibly undefined
// 49FDA: variable 'v21' is possibly undefined
// 49FDA: variable 'v22' is possibly undefined
// 49FDA: variable 'v23' is possibly undefined
// 4A040: using guessed type int __fastcall sub_4A040(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
