__int64 __fastcall sub_3662A0(__int64 a1, __int64 a2)
{
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  get_manual_insn(a2 + 8, *(unsigned int *)(a1 + 8));
  return 0;
}

