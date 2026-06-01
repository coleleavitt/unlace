bool __fastcall google_breakpad::IsValidElf(google_breakpad *this, const void *a2)
{
  return (unsigned int)my_strncmp(this, &unk_1DA344, 4) == 0;
}

