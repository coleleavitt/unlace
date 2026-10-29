__int64 __fastcall sub_3A34A0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 *v7; // rax
  int v8; // eax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 2528) & 1) != 0
    && (v4 = sub_4A0A30(a1, a2, 0), v5 = sub_277DF0(), sub_278450(v5))
    && (v7 = sub_2781D0(v5, v4, v9)) != nullptr
    && (v8 = sub_277C90(a1 + 2512, *((_DWORD *)v7 + 6)), v8 != -1) )
  {
    return sub_524F80(a1 + 40, dword_5E9840[3 * (v9[0] == *(_QWORD *)(v5 + 120)) + v8], 0);
  }
  else
  {
    return vault_files_dirtree_widget_t__::vfunc_41(a1 + 104, a2, a3);
  }
}
