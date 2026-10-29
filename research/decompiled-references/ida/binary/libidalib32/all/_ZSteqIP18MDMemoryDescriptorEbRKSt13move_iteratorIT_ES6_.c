bool __fastcall std::operator==<MDMemoryDescriptor *>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = std::move_iterator<MDMemoryDescriptor *>::base(a1);
  return v2 == std::move_iterator<MDMemoryDescriptor *>::base(a2);
}

