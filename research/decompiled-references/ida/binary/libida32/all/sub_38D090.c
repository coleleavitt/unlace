__int64 __fastcall sub_38D090(__int64 a1, int a2)
{
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_38CFF0((__int64)ptr, a2, "BADSEL");
  sub_38C9E0();
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return 0;
}

