__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_S_construct<MDMemoryDescriptor,MDMemoryDescriptor>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = (__int64 *)std::forward<MDMemoryDescriptor>(a3);
  v4 = (__int64 *)operator new(0x10u, a2);
  result = *v3;
  v6 = v3[1];
  *v4 = *v3;
  v4[1] = v6;
  return result;
}

