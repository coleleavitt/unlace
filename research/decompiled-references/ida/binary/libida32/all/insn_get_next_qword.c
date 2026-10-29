__int64 __fastcall insn_get_next_qword(__int64 a1)
{
  __int64 result; // rax

  result = sub_3BA0E0(
             *(_QWORD **)(qword_2CA1698 + 1480),
             *(_DWORD *)(a1 + 8) + (unsigned int)*(unsigned __int16 *)(a1 + 14));
  *(_WORD *)(a1 + 14) += 8;
  return result;
}

