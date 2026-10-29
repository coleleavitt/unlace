__int64 __fastcall sub_83EA10(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, __int64); // rax
  void *v2; // rbp

  v1 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 56);
  if ( v1 )
    v1(a1 + 40, a1 + 40, 3);
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1);
  return sub_182CBA0(v2, a1 + 16);
}

