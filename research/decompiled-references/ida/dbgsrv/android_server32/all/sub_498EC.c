/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498EC
// Address: 0x000498EC

//----- (000498EC) --------------------------------------------------------
void __fastcall sub_498EC(
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
  _DWORD *v12; // r4
  int v13; // r7
  int v14; // r4
  int v15; // r0
  int v16; // r2
  int v17; // r3
  int *v18; // r4
  _BOOL4 v19; // r1
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3

  v14 = *v12 + v13 * (v12[1] - 1);
  v15 = sub_4AAC8((unsigned __int8 *)v14, (unsigned __int8 *)&a11);
  if ( v15 == 2 )
  {
    v19 = ((unsigned int)a12 | *(_DWORD *)(v14 + 8)) != 0;
    *(_DWORD *)(v14 + 8) = v19;
  }
  else if ( v15 == 9 )
  {
    v16 = *(_DWORD *)(v14 + 12) | *(_DWORD *)(v14 + 8);
    v18 = (int *)(v14 + 8);
    v19 = 0;
    v20 = 1;
    if ( !v16 )
    {
      v20 = 1;
      if ( !a12 )
        v20 = a12 | HIDWORD(a12);
      v19 = 0;
    }
    *v18 = v20;
    v18[1] = 0;
  }
  else
  {
    set_qerrno(61);
  }
  v21 = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    v21 = sub_448A0(a12, (unsigned __int8 *)&a11);
LABEL_12:
    sub_4A038(v21, v19, v16, v17, a5, a6, a7, a8, a9);
    return;
  }
  if ( (unsigned __int8)a11 != 7 )
    goto LABEL_12;
  v21 = a12;
  if ( !(_DWORD)a12 )
    goto LABEL_12;
  HIDWORD(a12) = 0;
  qfree((void *)a12);
  sub_4A032(v22, v23, v24, v25, a5, a6, a7, a8, a9, a10, a11);
}
// 498EC: variable 'v12' is possibly undefined
// 498F0: variable 'v13' is possibly undefined
// 49954: variable 'v19' is possibly undefined
// 49954: variable 'v16' is possibly undefined
// 49954: variable 'v17' is possibly undefined
// 49966: variable 'v22' is possibly undefined
// 49966: variable 'v23' is possibly undefined
// 49966: variable 'v24' is possibly undefined
// 49966: variable 'v25' is possibly undefined
