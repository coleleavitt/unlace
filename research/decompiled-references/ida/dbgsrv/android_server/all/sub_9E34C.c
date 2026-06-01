/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E34C
// Address: 0x000000000009E34C

//----- (000000000009E34C) ----------------------------------------------------
__int64 __fastcall sub_9E34C(__int64 a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x20
  char *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x8
  int v9; // w21
  int v10; // w9
  unsigned int v11; // w0
  unsigned int v12; // w20
  _QWORD *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  char v22; // [xsp+0h] [xbp-60h]
  char *v23[3]; // [xsp+8h] [xbp-58h] BYREF
  unsigned int v24; // [xsp+24h] [xbp-3Ch] BYREF
  __int64 v25; // [xsp+28h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = sub_9DBD8();
  v5 = v4;
  if ( *(_QWORD *)(a1 + 16) )
    v6 = *(char **)(a1 + 8);
  else
    v6 = &byte_F154B;
  v7 = (*(__int64 (__fastcall **)(__int64, char *, unsigned int *))(*(_QWORD *)v4 + 488LL))(v4, v6, &v24);
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_14;
  v8 = *(_QWORD *)(v5 + 552);
  v9 = v7;
  v10 = v8;
  if ( !v8 )
    v10 = *(_DWORD *)(v5 + 648);
  if ( (int)v7 >= v10 )
  {
LABEL_14:
    if ( !under_debugger )
      interr(30056);
    __break(1u);
    v14 = (_QWORD *)v7;
    sub_931CC(v23);
    Unwind_Resume(v14, v15, v16, v17, v18, v19, v20, v21, v22);
  }
  memset(v23, 0, sizeof(v23));
  if ( !v8 )
    LODWORD(v8) = *(_DWORD *)(v5 + 648);
  sub_93104((__int64)v23, (int)v8);
  v11 = sub_9DBE4();
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)v5 + 224LL))(v5, v11, v24, v23[0], 0) <= 0 )
  {
    v12 = throw_idc_exception(a2, "failed to read register value");
  }
  else
  {
    v12 = 0;
    a2[1] = *(_QWORD *)&v23[0][32 * v9 + 8];
  }
  sub_931CC(v23);
  return v12;
}
// 9E49C: variable 'v15' is possibly undefined
// 9E49C: variable 'v16' is possibly undefined
// 9E49C: variable 'v17' is possibly undefined
// 9E49C: variable 'v18' is possibly undefined
// 9E49C: variable 'v19' is possibly undefined
// 9E49C: variable 'v20' is possibly undefined
// 9E49C: variable 'v21' is possibly undefined
// 9E49C: variable 'v22' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
