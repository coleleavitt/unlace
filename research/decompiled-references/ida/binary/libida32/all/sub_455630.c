__int64 __fastcall sub_455630(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 not_tail; // rbx
  __int64 v5; // r13
  int v6; // edx
  __int64 v7; // rax
  unsigned int (__fastcall ***v9)(_QWORD, __int64, _QWORD, _QWORD); // rdi

  not_tail = a3;
  v5 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 4LL * (int)a2 + 16)) + 1480);
  if ( sub_3B8910(v5, (unsigned int)not_tail) )
  {
    if ( (get_flags_ex((unsigned int)not_tail, 4) & 0x600) == 0x200 )
      not_tail = (unsigned int)prev_not_tail((unsigned int)not_tail);
    v9 = *(unsigned int (__fastcall ****)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 56);
    if ( v9 )
      not_tail = (**v9)(v9, a1, a2, (unsigned int)not_tail);
  }
  v6 = sub_3B8820(v5, not_tail);
  v7 = (unsigned int)(v6 + 1);
  if ( v6 == -1 )
    v7 = 0;
  return (not_tail << 32) | v7;
}

