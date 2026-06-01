__int64 __fastcall insn_get_next_byte(__int64 a1)
{
  unsigned __int8 v2; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  sub_3BEB30(
    *(_QWORD **)(qword_2CCB598 + 1672),
    &v2,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 24LL) + 16LL)
  & (*(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26)));
  ++*(_WORD *)(a1 + 26);
  return v2;
}
