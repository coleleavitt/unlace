/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B4C
// Address: 0x00049B4C

//----- (00049B4C) --------------------------------------------------------
void __fastcall sub_49B4C(
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
  int *v14; // r4
  int v15; // r5
  int v16; // r7
  int v17; // r5
  int v18; // r4
  int v19; // r0
  int v20; // r2
  int v21; // r3
  __int64 v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3

  v16 = *v14;
  v17 = v15 * (v14[1] - 1);
  v18 = *v14 + v17;
  v19 = sub_4AAC8((unsigned __int8 *)v18, (unsigned __int8 *)&a11);
  if ( v19 == 2 )
  {
    HIDWORD(v22) = a13;
    *(_DWORD *)(v18 + 8) <<= (char)a13;
  }
  else if ( v19 == 9 )
  {
    v20 = (int)a13;
    v22 = *(_QWORD *)(v16 + v17 + 8) << (char)a13;
    *(_QWORD *)(v16 + v17 + 8) = v22;
  }
  else
  {
    set_qerrno(61);
  }
  LODWORD(v22) = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    LODWORD(v22) = sub_448A0((int)a13, (unsigned __int8 *)&a11);
LABEL_8:
    sub_4A038(v22, SHIDWORD(v22), v20, v21, a5, a6, a7, a8, a9);
    return;
  }
  if ( (unsigned __int8)a11 != 7 )
    goto LABEL_8;
  LODWORD(v22) = a13;
  if ( !a13 )
    goto LABEL_8;
  a14 = 0;
  qfree(a13);
  sub_4A032(v23, v24, v25, v26, a5, a6, a7, a8, a9, a10, a11);
}
// 49B4C: variable 'v14' is possibly undefined
// 49B52: variable 'v15' is possibly undefined
// 49B98: variable 'v22' is possibly undefined
// 49B98: variable 'v20' is possibly undefined
// 49B98: variable 'v21' is possibly undefined
// 49BAA: variable 'v23' is possibly undefined
// 49BAA: variable 'v24' is possibly undefined
// 49BAA: variable 'v25' is possibly undefined
// 49BAA: variable 'v26' is possibly undefined
