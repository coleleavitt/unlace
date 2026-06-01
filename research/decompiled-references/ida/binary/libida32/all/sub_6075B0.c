unsigned __int64 __fastcall sub_6075B0(__int64 a1, unsigned int a2)
{
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  ptr = nullptr;
  idt_format_error(&ptr, a1, a2);
  if ( (unsigned __int64)v4 > 1 )
    sub_375400();
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    qfree(ptr);
  }
  return v5 - __readfsqword(0x28u);
}

