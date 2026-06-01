__int64 __fastcall insn_add_off_drefs(__int64 a1, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  __int64 *v6; // r14
  unsigned __int64 v7; // rax

  v6 = *(__int64 **)(qword_2CCB598 + 1672);
  v7 = sub_3BE900(v6, *(_QWORD *)(a1 + 16), 0);
  return sub_3E4AA0(*v6, a1, a2, *(_QWORD *)(a1 + 16), v7, a3, a4);
}
