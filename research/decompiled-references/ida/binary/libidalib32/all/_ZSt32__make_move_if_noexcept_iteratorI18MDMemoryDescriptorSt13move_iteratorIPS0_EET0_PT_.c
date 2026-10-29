__int64 __fastcall std::__make_move_if_noexcept_iterator<MDMemoryDescriptor,std::move_iterator<MDMemoryDescriptor*>>(
        __int64 a1)
{
  __int64 v2; // [rsp+18h] [rbp-8h] BYREF

  std::move_iterator<MDMemoryDescriptor *>::move_iterator(&v2, a1);
  return v2;
}

