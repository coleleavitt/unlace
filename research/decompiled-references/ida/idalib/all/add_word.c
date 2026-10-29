bool __fastcall add_word(unsigned __int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rax

  v2 = *(__int64 **)(qword_2CCB598 + 1672);
  v3 = sub_3BF1D0(v2, a1);
  return sub_59A180(v2, a1, a2 + v3);
}
