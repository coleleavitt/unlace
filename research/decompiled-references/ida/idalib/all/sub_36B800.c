__int64 __fastcall sub_36B800(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 func; // rax

  v2 = a1[9];
  v3 = a1[5];
  func = get_func(a1[1]);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)append_func_tail(func, v3, v2);
  return 0;
}
