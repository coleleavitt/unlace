/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AE6
// Address: 0x00049AE6

//----- (00049AE6) --------------------------------------------------------
void __fastcall sub_49AE6(
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
        __int64 a12)
{
  int *v12; // r4
  int v13; // r5
  int v14; // r7
  int v15; // r5
  int v16; // r4
  int v17; // r0
  __int64 v18; // r2
  __int64 v19; // r0
  __int64 v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3

  v14 = *v12;
  v15 = v13 * (v12[1] - 1);
  v16 = *v12 + v15;
  v17 = sub_4AAC8((unsigned __int8 *)v16, (unsigned __int8 *)&a11);
  if ( v17 == 2 )
  {
    if ( !(_DWORD)a12 )
      goto LABEL_4;
    HIDWORD(v20) = *(_DWORD *)(v16 + 8) % (int)a12;
    *(_DWORD *)(v16 + 8) = HIDWORD(v20);
  }
  else if ( v17 == 9 )
  {
    if ( !a12 )
    {
LABEL_4:
      set_qerrno(86);
      goto LABEL_9;
    }
    v19 = *(_QWORD *)(v14 + v15 + 8);
    v18 = v19 % a12;
    v20 = v19 / a12;
    *(_QWORD *)(v14 + v15 + 8) = v18;
  }
  else
  {
    set_qerrno(61);
  }
LABEL_9:
  LODWORD(v20) = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    LODWORD(v20) = sub_448A0(a12, (unsigned __int8 *)&a11);
LABEL_11:
    sub_4A038(v20, SHIDWORD(v20), v18, SHIDWORD(v18), a5, a6, a7, a8, a9);
    return;
  }
  if ( (unsigned __int8)a11 != 7 )
    goto LABEL_11;
  LODWORD(v20) = a12;
  if ( !(_DWORD)a12 )
    goto LABEL_11;
  HIDWORD(a12) = 0;
  qfree((void *)a12);
  sub_4A032(v21, v22, v23, v24, a5, a6, a7, a8, a9, a10, a11);
}
// 49AE6: variable 'v12' is possibly undefined
// 49AEC: variable 'v13' is possibly undefined
// 4A022: variable 'v20' is possibly undefined
// 4A022: variable 'v18' is possibly undefined
// 4A02F: variable 'v21' is possibly undefined
// 4A02F: variable 'v22' is possibly undefined
// 4A02F: variable 'v23' is possibly undefined
// 4A02F: variable 'v24' is possibly undefined
