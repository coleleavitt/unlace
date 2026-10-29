/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_system
// Address: 0x00084494

//----- (00084494) --------------------------------------------------------
int __fastcall call_system(int a1)
{
  int v1; // r2
  void *v2; // r0
  int v3; // r2
  int v5; // [sp+0h] [bp-30h] BYREF
  _DWORD v6[10]; // [sp+4h] [bp-2Ch] BYREF

  v6[2] = 0;
  v6[0] = 40;
  memset(&v6[4], 255, 12);
  memset(&v6[7], 0, 12);
  v6[1] = 136;
  v6[3] = a1;
  v5 = -1;
  if ( is_main_thread() )
    callui(5, callui, v1);
  v2 = launch_process((int)v6, nullptr);
  if ( v2 )
    check_process_exit((int)v2, &v5, -1);
  if ( is_main_thread() )
    callui(6, callui, v3);
  return v5;
}
// 844D2: variable 'v1' is possibly undefined
// 844FA: variable 'v3' is possibly undefined
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
