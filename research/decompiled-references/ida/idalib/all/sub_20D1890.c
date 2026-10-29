size_t __fastcall sub_20D1890(__int64 a1)
{
  size_t result; // rax

  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 0:
      result = j__strlen("allocator");
      break;
    case 1:
    case 2:
      result = j__strlen("basic_string");
      break;
    case 3:
      result = j__strlen("basic_istream");
      break;
    case 4:
      result = j__strlen("basic_ostream");
      break;
    case 5:
      result = j__strlen("basic_iostream");
      break;
  }
  return result;
}
