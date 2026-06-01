size_t __fastcall sub_20D1950(__int64 a1)
{
  size_t v1; // rax

  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 0:
      return j__strlen("allocator");
    case 1:
      return j__strlen("basic_string");
    case 2:
      v1 = j__strlen("basic_string");
      return v1 - 6;
    case 3:
      v1 = j__strlen("basic_istream");
      return v1 - 6;
    case 4:
      v1 = j__strlen("basic_ostream");
      return v1 - 6;
    case 5:
      v1 = j__strlen("basic_iostream");
      return v1 - 6;
  }
}
