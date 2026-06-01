__int64 __fastcall sub_1B6F8E(__int64 a1, unsigned int a2)
{
  google_breakpad::PageAllocator *v2; // rax

  v2 = (google_breakpad::PageAllocator *)google_breakpad::LinuxDumper::allocator(*(google_breakpad::LinuxDumper **)(a1 + 32));
  return google_breakpad::PageAllocator::Alloc(v2, a2);
}

