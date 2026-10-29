__int64 __fastcall sub_36B9C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 func; // rax

  v2 = *(_QWORD *)(a1 + 8);
  func = get_func(v2);
  *(_QWORD *)(a2 + 8) = get_spd(func, v2);
  return 0;
}
