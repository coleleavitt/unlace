/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x000B1490

//----- (000B1490) --------------------------------------------------------
void __cdecl __noreturn qexit(int status)
{
  _DWORD *v1; // esi
  int v2; // [esp+18h] [ebp-14h] BYREF

  byte_13E338 = 1;
  if ( dword_13E348 )
  {
    if ( dword_13E350 )
    {
      v1 = operator new(0x14u);
      v1[1] = 0;
      v1[2] = 0;
      *v1 = off_139380;
      v1[3] = status;
      *((_BYTE *)v1 + 16) = 1;
      if ( is_main_thread() )
        sub_B26D0((int)v1);
      else
        ((void (__cdecl *)(int *, int, _DWORD *, int))callui)(&v2, 86, v1, 2);
      (*(void (__cdecl **)(_DWORD *))(*v1 + 8))(v1);
    }
    if ( !byte_13E354 )
    {
      byte_13E354 = 1;
      if ( !(_BYTE)under_debugger )
        interr(546);
      BUG();
    }
  }
  exit(status);
}
// 139380: using guessed type int (__cdecl *off_139380[2])(int);
// 13BC20: using guessed type int (__stdcall *callui)(int);
// 13E338: using guessed type char byte_13E338;
// 13E348: using guessed type int dword_13E348;
// 13E34C: using guessed type int under_debugger;
// 13E350: using guessed type int dword_13E350;
// 13E354: using guessed type char byte_13E354;
