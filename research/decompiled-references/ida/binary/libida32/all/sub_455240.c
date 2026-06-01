__int64 __fastcall sub_455240(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r13
  char v6; // dl
  __int64 v7; // rax
  __int64 (__fastcall ***v9)(_QWORD, __int64, _QWORD, __int64); // rdi
  __int64 v10; // rcx
  unsigned int not_tail; // eax

  v5 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 4LL * (int)a2 + 16)) + 1480);
  if ( !sub_3B8910(v5, a3) )
    goto LABEL_2;
  if ( (get_flags_ex(a3, 4) & 0x600) != 0x200 )
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64))(a1 + 56);
    v10 = a3;
    if ( !v9 )
      goto LABEL_2;
    goto LABEL_7;
  }
  not_tail = prev_not_tail(a3);
  v9 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64))(a1 + 56);
  v10 = not_tail;
  if ( v9 )
LABEL_7:
    LODWORD(v10) = (**v9)(v9, a1, a2, v10);
  if ( a3 != (_DWORD)v10 )
    a3 = sub_4551E0(a1, a2, a3);
LABEL_2:
  v6 = sub_3B8910(v5, a3);
  v7 = a3;
  if ( !v6 )
    v7 = sub_3B87D0(v5, a3);
  return (v7 << 32) | a3;
}

