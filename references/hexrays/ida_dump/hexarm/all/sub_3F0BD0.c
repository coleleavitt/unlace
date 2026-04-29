bool __fastcall sub_3F0BD0(__int64 a1, __int64 a2, double a3)
{
  bool result; // al
  __int64 first_dref_from; // rax
  __int64 v5; // rbx
  unsigned __int64 v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 3) > 1u )
  {
    if ( !under_debugger )
      sub_3835A0(0xCCDBu, a2, a3);
    BUG();
  }
  result = (sub_32EB60(
              v6,
              *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL),
              *(unsigned __int16 *)(a1 + 110),
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
              *(_QWORD *)(a1 + 40),
              1)
          & 1) != 0
        && (first_dref_from = get_first_dref_from(v6[0]), v5 = first_dref_from, first_dref_from != -1)
        && get_next_dref_from(v6[0], first_dref_from) == -1
        && (unsigned __int8)segtype(v5) == 1;
  return result;
}
