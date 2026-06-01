__int64 __fastcall call_system(__int64 a1, int a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  unsigned int *v5; // rsi
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned int v11; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h] BYREF
  int v13; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int128 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  unsigned __int64 v20; // [rsp+68h] [rbp-10h]

  v20 = __readfsqword(0x28u);
  v16 = -1;
  v12 = 80;
  v14 = 0;
  v17 = -1;
  v19 = 0;
  v13 = 136;
  v15 = a1;
  v11 = -1;
  v18 = 0;
  if ( (unsigned __int8)is_main_thread() )
    callui(5, a2, (int)&callui, v2, v3, v4);
  LODWORD(v5) = 0;
  v6 = launch_process(&v12, 0);
  if ( v6 )
  {
    v5 = &v11;
    check_process_exit(v6, &v11, 0xFFFFFFFFLL);
  }
  if ( (unsigned __int8)is_main_thread() )
    callui(6, (int)v5, (int)&callui, v7, v8, v9);
  return v11;
}
