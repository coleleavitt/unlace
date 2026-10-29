bool __fastcall is_type_choosable(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  v3 = sub_6BB440(v2, a1, a2);
  v5[0] = sub_3BDD60(v2, v3);
  return (unsigned __int8)sub_7BE710(v5, *v2, 0, 4161) == 0;
}
