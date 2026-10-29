__int64 __fastcall sub_6DF880(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

  result = a1[176];
  if ( !result )
  {
    v2 = sub_6DE400(a1, a1[2372], nullptr, nullptr, nullptr, 0, 0);
    v3 = sub_6C94F0((__int64)a1, v2);
    result = sub_6BAD90(a1, v3, "id", 2u);
    a1[176] = result;
  }
  return result;
}

