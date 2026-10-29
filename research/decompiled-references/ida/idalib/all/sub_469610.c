__int64 __fastcall sub_469610(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 (__fastcall ***v7)(_QWORD, __int64, _QWORD, __int64); // rdi
  __int64 v8; // rcx
  __int64 not_tail; // rax

  v5 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 4LL * (int)a2 + 16)) + 1672);
  if ( !sub_3BD540(v5, a3) )
    goto LABEL_2;
  if ( (get_flags_ex(a3, 4) & 0x600) != 0x200 )
  {
    v7 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64))(a1 + 56);
    v8 = a3;
    if ( !v7 )
      goto LABEL_2;
    goto LABEL_7;
  }
  not_tail = prev_not_tail(a3);
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64))(a1 + 56);
  v8 = not_tail;
  if ( v7 )
LABEL_7:
    v8 = (**v7)(v7, a1, a2, v8);
  if ( a3 != v8 )
    a3 = sub_4695A0(a1, a2, a3);
LABEL_2:
  if ( !sub_3BD540(v5, a3) )
    sub_3BD3C0(v5, a3);
  return a3;
}
