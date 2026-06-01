__int64 __fastcall sub_6DF820(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

  result = a1[178];
  if ( !result )
  {
    v2 = sub_6DE400(a1, a1[2373], nullptr, nullptr, nullptr, 0, 0);
    v3 = sub_6C94F0((__int64)a1, v2);
    result = sub_6BAD90(a1, v3, "Class", 5u);
    a1[178] = result;
  }
  return result;
}

