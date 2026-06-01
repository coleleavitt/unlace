__int64 __fastcall sub_1AAF32(__int64 a1, logger *a2)
{
  const char *v2; // rax
  unsigned __int64 v3; // rdx

  v2 = (const char *)my_strlen(a2);
  logger::write(a2, v2, (unsigned __int64)v2);
  return logger::write((logger *)"\n", (const char *)&dword_0 + 1, v3);
}

