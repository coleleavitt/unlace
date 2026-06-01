__int64 __fastcall insn_get_next_dword(__int64 a1)
{
  __int64 result; // rax

  result = sub_3BEEF0(
             *(_QWORD **)(qword_2CCB598 + 1672),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 24LL) + 16LL)
           & (*(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26)));
  *(_WORD *)(a1 + 26) += 4;
  return result;
}
