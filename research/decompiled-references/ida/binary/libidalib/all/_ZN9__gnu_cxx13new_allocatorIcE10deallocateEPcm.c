void __fastcall __gnu_cxx::new_allocator<char>::deallocate(__int64 a1, void *a2)
{
  operator delete(a2);
}

