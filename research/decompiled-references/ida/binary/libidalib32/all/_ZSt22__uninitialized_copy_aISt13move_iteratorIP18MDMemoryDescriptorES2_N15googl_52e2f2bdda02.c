__int64 __fastcall std::__uninitialized_copy_a<std::move_iterator<MDMemoryDescriptor *>,MDMemoryDescriptor *,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v8; // [rsp+10h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]

  v9[0] = a1;
  v8 = a2;
  v10 = a3;
  while ( (unsigned __int8)std::operator!=<MDMemoryDescriptor *>(v9, &v8) )
  {
    v4 = std::move_iterator<MDMemoryDescriptor *>::operator*(v9);
    v5 = std::__addressof<MDMemoryDescriptor>(v10);
    std::allocator_traits<google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::construct<MDMemoryDescriptor,MDMemoryDescriptor>(
      a4,
      v5,
      v4);
    std::move_iterator<MDMemoryDescriptor *>::operator++(v9);
    v10 += 16;
  }
  return v10;
}

