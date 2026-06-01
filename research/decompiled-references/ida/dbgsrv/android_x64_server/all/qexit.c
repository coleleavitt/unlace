/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x00000000000C3800

//----- (00000000000C3800) ----------------------------------------------------
void __fastcall __noreturn qexit(int status)
{
  char v1; // al
  char *v2; // rbx
  int v3; // r8d
  int v4; // r9d
  char v5; // [rsp-8h] [rbp-18h]

  v5 = v1;
  byte_158B24 = 1;
  if ( qword_158B38 )
  {
    if ( qword_158B48 )
    {
      v2 = (char *)operator new(0x20u);
      *(_OWORD *)(v2 + 8) = 0;
      *(_QWORD *)v2 = off_1506F0;
      *((_DWORD *)v2 + 6) = status;
      v2[28] = 1;
      if ( is_main_thread() )
        sub_C4980((__int64)v2);
      else
        callui(86, (_DWORD)v2, 2, (unsigned int)&callui, v3, v4, v5);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
    }
    if ( !byte_158B50 )
    {
      byte_158B50 = 1;
      if ( !(_BYTE)under_debugger )
        interr(546);
      BUG();
    }
  }
  exit(status);
}
// C3802: variable 'v1' is possibly undefined
// C386E: variable 'v3' is possibly undefined
// C386E: variable 'v4' is possibly undefined
// 1506F0: using guessed type __int64 (__fastcall *off_1506F0[2])();
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 158B24: using guessed type char byte_158B24;
// 158B38: using guessed type __int64 qword_158B38;
// 158B40: using guessed type __int64 under_debugger;
// 158B50: using guessed type char byte_158B50;
