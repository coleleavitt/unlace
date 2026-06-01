/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499FA
// Address: 0x000499FA

//----- (000499FA) --------------------------------------------------------
void __fastcall sub_499FA(
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
        int a14)
{
  _DWORD *v14; // r4
  int v15; // r7
  int v16; // r4
  int v17; // r0
  int v18; // r2
  int v19; // r3
  unsigned int v20; // r0
  unsigned int v21; // r1
  int v22; // r1
  int v23; // r0
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3

  v16 = *v14 + v15 * (v14[1] - 1);
  v17 = sub_4AAC8((unsigned __int8 *)v16, (unsigned __int8 *)&a11);
  if ( v17 == 2 )
  {
    v20 = *(_DWORD *)(v16 + 8);
    v21 = (unsigned int)a13;
    goto LABEL_5;
  }
  if ( v17 == 9 )
  {
    v20 = (unsigned int)a13;
    *(_DWORD *)(v16 + 12) ^= a14;
    v21 = *(_DWORD *)(v16 + 8);
LABEL_5:
    v22 = v21 ^ v20;
    *(_DWORD *)(v16 + 8) = v22;
    goto LABEL_7;
  }
  set_qerrno(61);
LABEL_7:
  v23 = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    v23 = sub_448A0((int)a13, (unsigned __int8 *)&a11);
LABEL_9:
    sub_4A038(v23, v22, v18, v19, a5, a6, a7, a8, a9);
    return;
  }
  if ( (unsigned __int8)a11 != 7 )
    goto LABEL_9;
  v23 = (int)a13;
  if ( !a13 )
    goto LABEL_9;
  a14 = 0;
  qfree(a13);
  sub_4A032(v24, v25, v26, v27, a5, a6, a7, a8, a9, a10, a11);
}
// 499FA: variable 'v14' is possibly undefined
// 499FE: variable 'v15' is possibly undefined
// 49A40: variable 'v22' is possibly undefined
// 49A40: variable 'v18' is possibly undefined
// 49A40: variable 'v19' is possibly undefined
// 49A52: variable 'v24' is possibly undefined
// 49A52: variable 'v25' is possibly undefined
// 49A52: variable 'v26' is possibly undefined
// 49A52: variable 'v27' is possibly undefined
