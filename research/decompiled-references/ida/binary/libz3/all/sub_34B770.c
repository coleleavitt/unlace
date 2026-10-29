__int64 __fastcall sub_34B770(__int64 *a1)
{
  void *v1; // rbp
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 2);
  result = sub_182CBA0(v1, a1 + 4);
  v3 = *a1;
  if ( v3 )
    return sub_186B220((void *)(v3 - 8));
  return result;
}

