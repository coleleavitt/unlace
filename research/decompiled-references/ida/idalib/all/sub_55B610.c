__int64 __fastcall sub_55B610(_QWORD *a1)
{
  __int64 v1; // rax
  const char *v3; // rdx
  void *ptr; // [rsp+0h] [rbp-30h] BYREF
  __int128 v5; // [rsp+8h] [rbp-28h]
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  v1 = a1[31];
  v6 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v1 + 100) != 12 )
  {
    ptr = nullptr;
    v3 = haystack;
    v5 = 0;
    if ( *(_QWORD *)(v1 + 16) )
      v3 = *(const char **)(v1 + 8);
    print_tinfo((unsigned int)&ptr, 0, 0, 0, 133183, v1 + 88, (__int64)v3, 0);
    if ( (unsigned __int64)v5 > 1 )
      sub_55B170((__int64)a1, (__int64)&ptr, 0);
    if ( ptr )
    {
      *(_QWORD *)&v5 = 0;
      qfree(ptr);
    }
  }
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 192LL))(a1, &byte_22F0C30, 0);
  return (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL))(a1, &byte_22F0C30, 0x80000000LL);
}
