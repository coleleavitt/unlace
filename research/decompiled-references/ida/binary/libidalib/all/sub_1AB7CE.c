_BYTE *__fastcall sub_1AB7CE(_QWORD *a1)
{
  unsigned __int8 v2[1232]; // [rsp+10h] [rbp-4D0h] BYREF

  my_memset(v2, 0, 1232);
  google_breakpad::UContextReader::FillCPUContext(v2, *a1, a1[1]);
  sub_1AAF74((__int64)a1, (__int64)"C ");
  sub_1AAFCA((__int64)a1, v2, 0x4D0u);
  return sub_1AB020((__int64)a1);
}

