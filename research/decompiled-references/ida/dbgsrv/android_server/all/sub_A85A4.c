/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A85A4
// Address: 0x00000000000A85A4

//----- (00000000000A85A4) ----------------------------------------------------
__int64 __fastcall sub_A85A4(int a1, char *a2, _OWORD *a3)
{
  __int128 v3; // q0
  __int128 v5; // q0
  FILE *v6; // x0
  _BYTE *v7; // x1
  _OWORD v8[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v9; // [xsp+20h] [xbp-80h]
  __int128 v10; // [xsp+30h] [xbp-70h]
  __int128 v11; // [xsp+40h] [xbp-60h]
  __int128 v12; // [xsp+50h] [xbp-50h]
  __int128 v13; // [xsp+60h] [xbp-40h] BYREF
  __int128 v14; // [xsp+70h] [xbp-30h]
  __int64 v15; // [xsp+88h] [xbp-18h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    v3 = a3[1];
    if ( a1 < 1 )
    {
      v8[0] = *a3;
      v8[1] = v3;
      v6 = verror(a2, v8);
      return lcred_process_switch((__int64)v6, v7);
    }
    else
    {
      v9 = *a3;
      v10 = v3;
      v13 = v9;
      v14 = v3;
      callui(24, 2, a2);
      return 0;
    }
  }
  else
  {
    v5 = a3[1];
    v11 = *a3;
    v12 = v5;
    v13 = v11;
    v14 = v5;
    return (int)callui(23, a2, &v13);
  }
}
// A8661: variable 'v7' is possibly undefined
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
