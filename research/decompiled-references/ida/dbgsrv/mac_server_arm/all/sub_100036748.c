/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036748
// Address: 0x0000000100036748

//----- (0000000100036748) ----------------------------------------------------
__int64 __fastcall sub_100036748(_QWORD *a1, unsigned __int8 *a2, char *a3, unsigned int a4)
{
  __int64 v8; // x26
  __int64 v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8

  v8 = a1[7];
  set_interr_throws();
  v9 = sub_100039C50((__int64)a1, a2, a3, a4);
  set_interr_throws();
  get_qerrno();
  while ( a1[7] > (unsigned __int64)(int)v8 )
  {
    if ( (sub_100037A3C((__int64)a1) & 1) == 0 )
    {
      if ( under_debugger != 1 )
        interr(508);
      __break(1u);
      break;
    }
  }
  v10 = a1[13];
  if ( v10 )
    v11 = v10 + 32;
  else
    v11 = 0;
  a1[16] = v11;
  set_qerrno();
  return v9;
}
// 100036A40: conditional instruction was optimized away because %var_B8.8==0
// 10002C044: using guessed type __int64 __fastcall sub_10002C044(_QWORD, _QWORD);
// 10009D90D: using guessed type char under_debugger;
