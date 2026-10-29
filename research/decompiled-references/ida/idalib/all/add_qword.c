bool __fastcall add_qword(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rax

  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  v3 = sub_3BEF70(v2, a1);
  return sub_59A2D0(v2, a1, a2 + v3);
}
