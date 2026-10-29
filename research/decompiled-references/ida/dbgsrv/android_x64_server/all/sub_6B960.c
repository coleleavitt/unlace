/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B960
// Address: 0x000000000006B960

//----- (000000000006B960) ----------------------------------------------------
unsigned __int64 __fastcall sub_6B960(__int64 a1)
{
  __int64 v2; // rax
  size_t v3; // r14
  char **v4; // r12
  __int64 v5; // r15
  char *v6; // rdi

  *(_QWORD *)(a1 + 8) = code_highlight_block;
  *(_DWORD *)(a1 + 116) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 120) = 0x400000005LL;
  *(_DWORD *)(a1 + 128) = 6;
  *(_OWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0x2727222200000000LL;
  *(_QWORD *)a1 = &off_14DED8;
  *(_WORD *)(a1 + 184) = 9052;
  *(_BYTE *)(a1 + 112) = 0;
  v2 = __strlen_chk("//", 3);
  v3 = v2;
  if ( v2 )
  {
    v4 = (char **)(a1 + 64);
    v5 = v2 + 1;
    if ( *(_QWORD *)(a1 + 80) >= (unsigned __int64)(v2 + 1) )
    {
      v6 = *v4;
    }
    else
    {
      v6 = (char *)qvector_reserve(a1 + 64, *v4, v2 + 1, 1u);
      *v4 = v6;
    }
    *(_QWORD *)(a1 + 72) = v5;
    memmove(v6, "//", v3);
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
  }
  sub_6F370((_QWORD *)a1, "/*", "*/");
  sub_6F610((_QWORD *)a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_6F610((_QWORD *)a1, "long|string|__int64|success|char|float|void", 2);
  return sub_6F610((_QWORD *)a1, "BADADDR|BADSEL|MAXADDR", 3);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 70980: using guessed type __int64 __fastcall code_highlight_block();
// 14DED8: using guessed type __int64 (__fastcall *off_14DED8)();
