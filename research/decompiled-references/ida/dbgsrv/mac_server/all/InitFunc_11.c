/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_11
// Address: 0x000000010007D9E0

//----- (000000010007D9E0) ----------------------------------------------------
__int64 InitFunc_11()
{
  size_t v1; // [rsp+0h] [rbp-2B0h] BYREF
  _BYTE v2[32]; // [rsp+8h] [rbp-2A8h] BYREF
  int v3; // [rsp+28h] [rbp-288h]
  int v4[2]; // [rsp+290h] [rbp-20h] BYREF
  int v5; // [rsp+298h] [rbp-18h]
  pid_t v6; // [rsp+29Ch] [rbp-14h]

  v3 = 0;
  *(_QWORD *)v4 = 0xE00000001LL;
  v5 = 1;
  v6 = getpid();
  v1 = 648;
  sysctl(v4, 4u, v2, &v1, nullptr, 0);
  under_debugger = (v3 & 0x800) != 0;
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
