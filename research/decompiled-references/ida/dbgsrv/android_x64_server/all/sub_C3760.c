/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3760
// Address: 0x00000000000C3760

//----- (00000000000C3760) ----------------------------------------------------
void __fastcall sub_C3760(char a1, int a2)
{
  char *v2; // rbx
  int v3; // r8d
  int v4; // r9d

  byte_158B24 = 1;
  if ( qword_158B38 )
  {
    if ( qword_158B48 )
    {
      v2 = (char *)operator new(0x20u);
      *(_OWORD *)(v2 + 8) = 0;
      *(_QWORD *)v2 = off_1506F0;
      *((_DWORD *)v2 + 6) = a2;
      v2[28] = a1;
      if ( is_main_thread() )
        sub_C4980((__int64)v2);
      else
        ((void (__fastcall *)(int, _DWORD, int, unsigned int, int, int))callui)(
          86,
          (_DWORD)v2,
          2,
          (unsigned int)&callui,
          v3,
          v4);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}
// C37DD: variable 'v3' is possibly undefined
// C37DD: variable 'v4' is possibly undefined
// 1506F0: using guessed type __int64 (__fastcall *off_1506F0[2])();
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 158B24: using guessed type char byte_158B24;
// 158B38: using guessed type __int64 qword_158B38;
