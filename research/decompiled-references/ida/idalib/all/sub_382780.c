unsigned __int64 __fastcall sub_382780(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  const char *v3; // rdx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a2 + 24);
  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  get_ea_name(&ptr, v2, 23, 0);
  v3 = haystack;
  if ( (_QWORD)v6 )
    v3 = (const char *)ptr;
  sub_3804E0(a1, (__int64)"END OF FUNCTION CHUNK FOR %s", v3);
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  return v7 - __readfsqword(0x28u);
}
