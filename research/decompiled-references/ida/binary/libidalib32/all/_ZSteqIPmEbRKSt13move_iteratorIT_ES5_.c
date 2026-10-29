bool __fastcall std::operator==<unsigned long *>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = std::move_iterator<unsigned long *>::base(a1);
  return v2 == std::move_iterator<unsigned long *>::base(a2);
}

