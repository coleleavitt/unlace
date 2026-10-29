/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49984
// Address: 0x00049984

//----- (00049984) --------------------------------------------------------
void __fastcall sub_49984(
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
  int v18; // r1
  _BOOL4 *v19; // r4
  _BOOL4 v20; // r0
  _BOOL4 v21; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3

  v14 = *v12 + v13 * (v12[1] - 1);
  v15 = sub_4AAC8((unsigned __int8 *)v14, (unsigned __int8 *)&a11);
  if ( v15 == 2 )
  {
    v16 = *(_DWORD *)(v14 + 8);
    v21 = v16 != 0 && (_DWORD)a12 != 0;
    *(_DWORD *)(v14 + 8) = v21;
  }
  else if ( v15 == 9 )
  {
    v18 = *(_DWORD *)(v14 + 12) | *(_DWORD *)(v14 + 8);
    v19 = (_BOOL4 *)(v14 + 8);
    v20 = 0;
    if ( v18 )
      v20 = a12 != 0;
    v21 = 0;
    *v19 = v20;
    v19[1] = 0;
  }
  else
  {
    set_qerrno(61);
  }
  v22 = (unsigned __int8)a11;
  if ( (unsigned __int8)a11 == 5 )
  {
    v22 = sub_448A0(a12, (unsigned __int8 *)&a11);
LABEL_10:
    sub_4A038(v22, v21, v16, v17, a5, a6, a7, a8, a9);
    return;
  }
  if ( (unsigned __int8)a11 != 7 )
    goto LABEL_10;
  v22 = a12;
  if ( !(_DWORD)a12 )
    goto LABEL_10;
  HIDWORD(a12) = 0;
  qfree((void *)a12);
  sub_4A032(v23, v24, v25, v26, a5, a6, a7, a8, a9, a10, a11);
}
// 49984: variable 'v12' is possibly undefined
// 49988: variable 'v13' is possibly undefined
// 49FEC: variable 'v21' is possibly undefined
// 49FEC: variable 'v16' is possibly undefined
// 49FEC: variable 'v17' is possibly undefined
// 49FFC: variable 'v23' is possibly undefined
// 49FFC: variable 'v24' is possibly undefined
// 49FFC: variable 'v25' is possibly undefined
// 49FFC: variable 'v26' is possibly undefined
