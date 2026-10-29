__int64 __fastcall sub_469A00(__int64 a1, unsigned int a2, __int64 not_tail)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64, _QWORD, __int64); // rdi

  v5 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 4LL * (int)a2 + 16)) + 1672);
  if ( sub_3BD540(v5, not_tail) )
  {
    if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(not_tail);
    v8 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64))(a1 + 56);
    if ( v8 )
      not_tail = (**v8)(v8, a1, a2, not_tail);
  }
  v6 = sub_3BD420(v5, not_tail) + 1;
  result = 0;
  if ( v6 )
    return v6;
  return result;
}
