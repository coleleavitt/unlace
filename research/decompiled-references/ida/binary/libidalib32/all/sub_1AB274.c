__int64 __fastcall sub_1AB274(__int64 a1, unsigned int a2)
{
  google_breakpad::PageAllocator *v2; // rax

  v2 = (google_breakpad::PageAllocator *)google_breakpad::LinuxDumper::allocator(*(google_breakpad::LinuxDumper **)(a1 + 16));
  return google_breakpad::PageAllocator::Alloc(v2, a2);
}

