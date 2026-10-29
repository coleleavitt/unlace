bool __fastcall func_item_iterator_decode_prev_insn(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = *(_QWORD **)(qword_2CCB598 + 1672);
  return (unsigned __int8)func_item_iterator_prev(
                            a1,
                            (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_5C3E30,
                            nullptr)
      && (~((unsigned __int16)sub_3BE900(v3, *(_QWORD *)(a1 + 32), 4) >> 8) & 6) == 0
      && (unsigned int)decode_insn(a2, *(_QWORD *)(a1 + 32), v5, v6, v7, v8, a3) != 0;
}
