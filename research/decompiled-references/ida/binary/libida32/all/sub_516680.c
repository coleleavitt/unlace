void __fastcall sub_516680(__int64 a1, __int64 a2)
{
  _DWORD **v2; // rax
  void *v3; // rdi

  v2 = sub_516630(a1, *(_DWORD *)a2);
  memmove(v2, v2 + 1, *(_QWORD *)(a1 + 8) + 8LL * *(_QWORD *)(a1 + 16) - (_QWORD)v2 - 8);
  --*(_QWORD *)(a1 + 16);
  v3 = *(void **)(a2 + 8);
  if ( v3 )
    qfree(v3);
  if ( a2 )
    operator delete((void *)a2, 0x20u);
}

