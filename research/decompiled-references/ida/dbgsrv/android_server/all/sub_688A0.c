/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_688A0
// Address: 0x00000000000688A0

//----- (00000000000688A0) ----------------------------------------------------
const char *__fastcall sub_688A0(__int64 a1)
{
  pthread_mutex_t *v1; // x20
  __int64 v3; // x0
  size_t v4; // x21
  __int64 v5; // x22
  void *align; // x0

  *(_QWORD *)(a1 + 8) = code_highlight_block;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v1 = (pthread_mutex_t *)(a1 + 64);
  *(_QWORD *)(a1 + 176) = 0x2727222200000000LL;
  *(_QWORD *)a1 = off_15D740;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 128) = 6;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_WORD *)(a1 + 184) = 9052;
  *(_QWORD *)(a1 + 120) = 0x400000005LL;
  *(_BYTE *)(a1 + 112) = 0;
  v3 = __strlen_chk("//", 3);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 1;
    if ( *(_QWORD *)(a1 + 80) >= (unsigned __int64)(v3 + 1) )
    {
      align = (void *)v1->__align;
    }
    else
    {
      align = qvector_reserve(v1, (void *)v1->__align, v3 + 1, 1u);
      v1->__align = (__int64)align;
    }
    *(_QWORD *)(a1 + 72) = v5;
    memmove(align, "//", v4);
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
  }
  sub_6BE5C(a1, "/*", "*/");
  sub_6C0AC(a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_6C0AC(a1, "long|string|__int64|success|char|float|void", 2);
  return sub_6C0AC(a1, "BADADDR|BADSEL|MAXADDR", 3);
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 15D740: using guessed type __int64 (__fastcall *off_15D740[2])();
