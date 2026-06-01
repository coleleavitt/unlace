std::string *__fastcall sub_5ACDDA(std::string *a1, __int64 a2)
{
  size_t v2; // rbx
  const void *v3; // rax
  _QWORD dest[2]; // [rsp+10h] [rbp-40h] BYREF
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF

  dest[0] = 0;
  dest[1] = 0;
  v6[0] = sub_5986CE(a2);
  v2 = *sub_598413(&qword_75C0F8, v6);
  v3 = (const void *)sub_5AD11A(a2, 0);
  memcpy(dest, v3, v2);
  v6[3] = dest;
  LODWORD(dest[0]) = htonl(dest[0]);
  v6[2] = (char *)dest + 4;
  WORD2(dest[0]) = htons(WORD2(dest[0]));
  v6[1] = (char *)dest + 6;
  HIWORD(dest[0]) = htons(HIWORD(dest[0]));
  sub_5ACD3A(a1, (__int64)dest, 0x10u);
  return a1;
}
