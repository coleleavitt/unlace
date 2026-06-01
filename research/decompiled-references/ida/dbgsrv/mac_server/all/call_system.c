/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_system
// Address: 0x0000000100081AB0

//----- (0000000100081AB0) ----------------------------------------------------
__int64 __fastcall call_system(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  unsigned int *v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  char v11; // [rsp+0h] [rbp-60h]
  unsigned int v12; // [rsp+4h] [rbp-5Ch] BYREF
  __int64 v13; // [rsp+8h] [rbp-58h] BYREF
  int v14; // [rsp+10h] [rbp-50h]
  __int64 v15; // [rsp+18h] [rbp-48h]
  __int64 v16; // [rsp+20h] [rbp-40h]
  __int128 v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  v13 = 80;
  v15 = 0;
  v17 = -1;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  v14 = 136;
  v16 = a1;
  v12 = -1;
  if ( is_main_thread() )
    ((void (__fastcall *)(int, int, int, unsigned int, int, int))callui)(5, a2, v2, (unsigned int)&callui, v3, v4);
  LODWORD(v5) = 0;
  v6 = launch_process((__int64)&v13, 0);
  if ( v6 )
  {
    v5 = &v12;
    check_process_exit(v6, (int *)&v12, 0xFFFFFFFF);
  }
  if ( is_main_thread() )
    callui(6, (_DWORD)v5, v7, (unsigned int)&callui, v8, v9, v11);
  return v12;
}
// 100081B21: variable 'v2' is possibly undefined
// 100081B21: variable 'v3' is possibly undefined
// 100081B21: variable 'v4' is possibly undefined
// 100081B5B: variable 'v7' is possibly undefined
// 100081B5B: variable 'v8' is possibly undefined
// 100081B5B: variable 'v9' is possibly undefined
// 100081B5B: variable 'v11' is possibly undefined
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
