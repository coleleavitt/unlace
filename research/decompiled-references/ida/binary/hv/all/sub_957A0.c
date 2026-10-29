__off64_t __fastcall sub_957A0(int a1)
{
  __off64_t v1; // r12
  __off64_t v2; // rax
  __off64_t v3; // rbp

  v1 = -1;
  v2 = sub_95260(a1);
  if ( v2 != -1 )
  {
    v3 = v2;
    v1 = sub_95290(a1, 0, 2);
    sub_95290(a1, v3, 0);
  }
  return v1;
}

