unsigned __int64 __fastcall delete_all_xrefs_from(unsigned __int64 a1, char a2)
{
  _QWORD *v2; // r12
  unsigned __int64 result; // rax

  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  sub_3E34B0((__int64)v2, a1);
  result = sub_3E37A0(v2, a1, a2);
  v2[276] = a1;
  return result;
}
