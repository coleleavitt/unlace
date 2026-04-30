char __fastcall sub_5AE444(__int64 a1)
{
  char result; // al
  size_t v2; // rbx
  unsigned __int64 v3; // rax

  result = sub_59BD42(a1) != 0;
  if ( result )
  {
    v2 = sub_59BD54(a1);
    v3 = sub_59BD42(a1);
    sub_5AE149(v3, v2);
    return sub_5AE4CE(a1, 0, 0);
  }
  return result;
}
