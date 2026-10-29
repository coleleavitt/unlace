__int64 __fastcall sub_3851C0(__int64 a1, unsigned int a2)
{
  const char *v3; // rsi
  unsigned int v4; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  sub_35A6C0((char **)&ptr);
  v3 = haystack;
  if ( (_QWORD)v7 )
    v3 = (const char *)ptr;
  v4 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, v3, a2);
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  return v4;
}
