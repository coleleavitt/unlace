std::string *__fastcall google_breakpad::elf::FileID::ConvertIdentifierToString(std::string *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax

  v2 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::size(a2);
  v3 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::operator[](a2, 0);
  sub_1C0C7A(a1, v3, v2);
  return a1;
}

