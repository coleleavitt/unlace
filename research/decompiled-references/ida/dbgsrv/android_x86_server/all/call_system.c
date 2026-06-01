/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_system
// Address: 0x000B9D80

//----- (000B9D80) --------------------------------------------------------
int __cdecl call_system(int a1)
{
  void *v1; // eax
  int v3; // [esp+0h] [ebp-44h] BYREF
  int v4; // [esp+4h] [ebp-40h] BYREF
  _DWORD v5[15]; // [esp+8h] [ebp-3Ch] BYREF

  v5[10] = __readgsdword(0x14u);
  v5[0] = 40;
  v5[2] = 0;
  memset(&v5[4], 255, 12);
  memset(&v5[7], 0, 12);
  v5[1] = 136;
  v5[3] = a1;
  v4 = -1;
  if ( is_main_thread() )
    callui((int)&v3);
  v1 = launch_process((int)v5, nullptr);
  if ( v1 )
    check_process_exit((__pid_t)v1, &v4, -1);
  if ( is_main_thread() )
    callui((int)&v3);
  return v4;
}
// 13BC20: using guessed type int (__stdcall *callui)(int);
