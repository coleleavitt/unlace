/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_system
// Address: 0x00000000000CC230

//----- (00000000000CC230) ----------------------------------------------------
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
  char v11; // [rsp+0h] [rbp-68h]
  unsigned int v12; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  int v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int128 v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-10h]
  unsigned __int64 v21; // [rsp+60h] [rbp-8h]

  v21 = __readfsqword(0x28u);
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
  v6 = launch_process((__int64)&v13, nullptr);
  if ( v6 )
  {
    v5 = &v12;
    check_process_exit(v6, (int *)&v12, -1);
  }
  if ( is_main_thread() )
    callui(6, (_DWORD)v5, v7, (unsigned int)&callui, v8, v9, v11);
  return v12;
}
// CC2A6: variable 'v2' is possibly undefined
// CC2A6: variable 'v3' is possibly undefined
// CC2A6: variable 'v4' is possibly undefined
// CC2E2: variable 'v7' is possibly undefined
// CC2E2: variable 'v8' is possibly undefined
// CC2E2: variable 'v9' is possibly undefined
// CC2E2: variable 'v11' is possibly undefined
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
