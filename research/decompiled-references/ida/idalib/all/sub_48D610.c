__int64 __fastcall sub_48D610(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rbp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 8);
  sub_484340((__int64)ptr, a2);
  sub_4790E0(v2, (unsigned __int64)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return 0;
}
