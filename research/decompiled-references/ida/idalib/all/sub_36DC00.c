__int64 __fastcall sub_36DC00(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 104);
  v11 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a1 + 40);
  v9[0] = v3;
  v9[1] = *(_QWORD *)(a1 + 136);
  v9[2] = *(_QWORD *)(a1 + 168);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 8);
  v10 = v6;
  clr_op_type(v7, v5);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)op_offset_ex(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 40), (int)v9);
  return 0;
}
