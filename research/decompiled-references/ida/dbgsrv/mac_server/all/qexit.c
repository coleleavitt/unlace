/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x000000010007D250

//----- (000000010007D250) ----------------------------------------------------
void __fastcall qexit(int a1, __va_list_tag *a2)
{
  char *v2; // r14
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d

  byte_1000AE230 = 1;
  if ( !qword_1000AECE8 )
    goto LABEL_8;
  if ( qword_1000AECF0 )
  {
    v2 = (char *)operator new(0x20u);
    *(_OWORD *)(v2 + 8) = 0;
    *(_QWORD *)v2 = off_1000AAAA8;
    *((_DWORD *)v2 + 6) = a1;
    v2[28] = 1;
    if ( is_main_thread() )
    {
      sub_10007D800((__int64)v2);
    }
    else
    {
      a2 = (__va_list_tag *)v2;
      ((void (__fastcall *)(int, _DWORD, int, unsigned int, int, int))callui)(
        86,
        (_DWORD)v2,
        2,
        (unsigned int)&callui,
        v3,
        v4);
    }
    (*(void (__fastcall **)(char *, __va_list_tag *))(*(_QWORD *)v2 + 16LL))(v2, a2);
  }
  if ( byte_1000AECF8 )
LABEL_8:
    exit(a1);
  byte_1000AECF8 = 1;
  if ( under_debugger == 1 )
    BUG();
  interr(0x222u);
  verror((char *)0x222, (__int64)a2, v5, v6, v7, v8);
}
// 10007D2C4: variable 'v3' is possibly undefined
// 10007D2C4: variable 'v4' is possibly undefined
// 10007D2FC: variable 'v5' is possibly undefined
// 10007D2FC: variable 'v6' is possibly undefined
// 10007D2FC: variable 'v7' is possibly undefined
// 10007D2FC: variable 'v8' is possibly undefined
// 1000AAAA8: using guessed type __int64 (__fastcall *off_1000AAAA8[2])();
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1000AE230: using guessed type char byte_1000AE230;
// 1000AE23D: using guessed type char under_debugger;
// 1000AECE8: using guessed type __int64 qword_1000AECE8;
// 1000AECF0: using guessed type __int64 qword_1000AECF0;
// 1000AECF8: using guessed type char byte_1000AECF8;
