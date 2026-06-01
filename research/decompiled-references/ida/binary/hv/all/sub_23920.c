unsigned __int64 __fastcall sub_23920(void ***a1)
{
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  ptr = nullptr;
  v3 = 0;
  sub_23450((__int64)&ptr, a1, (__int64)&off_15F2A0, qword_165638);
  if ( ptr )
  {
    *(_QWORD *)&v3 = 0;
    j__free(ptr);
  }
  return v4 - __readfsqword(0x28u);
}

