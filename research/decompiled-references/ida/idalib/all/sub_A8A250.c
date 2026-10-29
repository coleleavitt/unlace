__int64 __fastcall sub_A8A250(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  size_t v4; // rax

  result = a1[185];
  if ( !result )
  {
    v2 = sub_A750A0((__int64)a1, a1[2392], nullptr, 0, nullptr, 0, 0);
    v3 = sub_A74EC0((__int64)a1, v2);
    v4 = j__strlen("id");
    result = sub_A8A070(a1, v3, "id", v4);
    a1[185] = result;
  }
  return result;
}
