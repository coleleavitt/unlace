void *__fastcall ClpCopyOfArray<double>(void *src, int a2)
{
  void *v2; // rax

  if ( !src )
    return nullptr;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v2 = (void *)operator new[](8LL * a2);
  return memcpy(v2, src, 8LL * a2);
}

