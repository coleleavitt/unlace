/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059EC8
// Address: 0x0000000100059EC8

//----- (0000000100059EC8) ----------------------------------------------------
__int64 __fastcall sub_100059EC8(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x20
  char *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  __int64 v15; // x22
  __int64 result; // x0
  __int64 v17; // x23
  __int64 v18; // x0
  _Unwind_Exception *v19; // x0
  int v20; // w1
  int v21; // [xsp+8h] [xbp-58h] BYREF
  void *v22; // [xsp+10h] [xbp-50h]
  __int64 v23; // [xsp+18h] [xbp-48h]
  __int64 v24; // [xsp+20h] [xbp-40h]
  int8x16x2_t v25; // 0:q0.32

  v4 = sub_10005991C();
  v5 = v4;
  if ( *(_QWORD *)(a1 + 48) )
    v6 = *(char **)(a1 + 40);
  else
    v6 = &byte_100075A30;
  v7 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v4 + 488LL))(v4, v6, 0);
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(30055);
    if ( v20 )
      sub_1000013F4(v19);
    _Unwind_Resume(v19);
  }
  v15 = v7;
  result = idcv_int64((unsigned __int8 *)a1, v25, v8, v9, v10, v11, v12, v13, v14);
  if ( !(_DWORD)result )
  {
    v17 = result;
    v21 = -2;
    v23 = 0;
    v24 = 0;
    v22 = *(void **)(a1 + 8);
    v18 = sub_100059928();
    *(_QWORD *)(a2 + 8) = (*(int (__fastcall **)(__int64, __int64, __int64, int *, _QWORD))(*(_QWORD *)v5 + 232LL))(
                            v5,
                            v18,
                            v15,
                            &v21,
                            0);
    result = v17;
    if ( v21 >= -1 )
    {
      if ( v22 )
      {
        v23 = 0;
        qfree(v22);
        return v17;
      }
    }
  }
  return result;
}
// 100059F38: variable 'v25' is possibly undefined
// 100059F38: variable 'v8' is possibly undefined
// 100059F38: variable 'v9' is possibly undefined
// 100059F38: variable 'v10' is possibly undefined
// 100059F38: variable 'v11' is possibly undefined
// 100059F38: variable 'v12' is possibly undefined
// 100059F38: variable 'v13' is possibly undefined
// 100059F38: variable 'v14' is possibly undefined
// 10005A004: variable 'v20' is possibly undefined
// 10005A00C: variable 'v19' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
