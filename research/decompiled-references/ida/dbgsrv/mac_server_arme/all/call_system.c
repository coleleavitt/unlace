/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_system
// Address: 0x0000000100079550

//----- (0000000100079550) ----------------------------------------------------
__int64 __fastcall call_system(__int64 a1)
{
  __int64 v1; // x0
  unsigned int v3; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v4; // [xsp+8h] [xbp-68h] BYREF
  int v5; // [xsp+10h] [xbp-60h]
  __int64 v6; // [xsp+18h] [xbp-58h]
  __int64 v7; // [xsp+20h] [xbp-50h]
  __int64 v8; // [xsp+28h] [xbp-48h]
  __int64 v9; // [xsp+30h] [xbp-40h]
  __int64 v10; // [xsp+38h] [xbp-38h]
  __int64 v11; // [xsp+40h] [xbp-30h]
  __int64 v12; // [xsp+48h] [xbp-28h]
  __int64 v13; // [xsp+50h] [xbp-20h]

  v4 = 80;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v5 = 136;
  v6 = 0;
  v7 = a1;
  v3 = -1;
  if ( is_main_thread() )
    callui(5);
  v1 = launch_process((__int64)&v4, 0);
  if ( v1 )
    check_process_exit(v1, (int *)&v3, -1);
  if ( is_main_thread() )
    callui(6);
  return v3;
}
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
