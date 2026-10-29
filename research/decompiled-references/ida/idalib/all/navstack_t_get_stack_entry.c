__int64 __fastcall navstack_t_get_stack_entry(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // eax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  v6 = *(__int64 **)(qword_2CCB598 + 1672);
  v7 = *(_QWORD *)a2;
  v8 = *v6;
  v10[0] = v7;
  v9 = sub_7BE710(v10, v8, 1, 65);
  if ( !a1 || a3 >= v9 )
    return 0;
  else
    return sub_4B8CB0(*v6, a1, *(_QWORD *)a2, a3, 0);
}
