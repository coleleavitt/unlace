bool __fastcall func_item_iterator_decode_prev_insn(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *(_QWORD *)(qword_2CA1698 + 1480);
  return (unsigned __int8)func_item_iterator_prev(a1, sub_5A9570, 0)
      && (~((unsigned __int16)sub_3B9AA0(v2, *(_DWORD *)(a1 + 24), 4) >> 8) & 6) == 0
      && (unsigned int)decode_insn(a2, *(unsigned int *)(a1 + 24), v4, v5, v6, v7) != 0;
}

