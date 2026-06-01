/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_system
// Address: 0x00000000000C6AD8

//----- (00000000000C6AD8) ----------------------------------------------------
__int64 __fastcall call_system(__int64 a1)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  unsigned int v7; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v8; // [xsp+8h] [xbp-68h] BYREF
  int v9; // [xsp+10h] [xbp-60h]
  __int64 v10; // [xsp+18h] [xbp-58h]
  __int64 v11; // [xsp+20h] [xbp-50h]
  __int64 v12; // [xsp+28h] [xbp-48h]
  __int64 v13; // [xsp+30h] [xbp-40h]
  __int64 v14; // [xsp+38h] [xbp-38h]
  __int64 v15; // [xsp+40h] [xbp-30h]
  __int64 v16; // [xsp+48h] [xbp-28h]
  __int64 v17; // [xsp+50h] [xbp-20h]
  __int64 v18; // [xsp+58h] [xbp-18h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = 80;
  v13 = -1;
  v14 = -1;
  v12 = -1;
  v9 = 136;
  v10 = 0;
  v11 = a1;
  v16 = 0;
  v17 = 0;
  v15 = 0;
  v7 = -1;
  if ( is_main_thread() )
    callui(5, v1, v2);
  v3 = launch_process((__int64)&v8, 0);
  if ( v3 )
    check_process_exit(v3, (int *)&v7);
  if ( is_main_thread() )
    callui(6, v4, v5);
  return v7;
}
// C6B34: variable 'v1' is possibly undefined
// C6B34: variable 'v2' is possibly undefined
// C6B6C: variable 'v4' is possibly undefined
// C6B6C: variable 'v5' is possibly undefined
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
