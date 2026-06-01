__int64 __fastcall insn_add_off_drefs(__int64 a1, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  __int64 *v6; // r14
  unsigned __int64 v7; // rax

  v6 = *(__int64 **)(qword_2CA1698 + 1480);
  v7 = sub_3B9AA0((__int64)v6, *(_DWORD *)(a1 + 8), 0);
  return sub_3DED70(*v6, a1, a2, *(_DWORD *)(a1 + 8), v7, a3, a4);
}

