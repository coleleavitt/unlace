char __fastcall sub_38F090(
        _QWORD *a1,
        unsigned int (__fastcall *a2)(_QWORD, __int64, _QWORD, _QWORD),
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  char result; // al
  bool v7; // zf
  const char *v8; // rax
  __int64 v9; // rdi
  const char *v10; // rcx
  char v11; // [rsp+Fh] [rbp-29h]
  void *ptr; // [rsp+10h] [rbp-28h] BYREF
  __int128 v13; // [rsp+18h] [rbp-20h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
    return a2(a1[1], a3, a4, a5) != 0;
  v7 = *(_QWORD *)(a3 + 8) == 0;
  ptr = nullptr;
  v8 = haystack;
  v13 = 0;
  if ( !v7 )
    v8 = *(const char **)a3;
  tag_remove(&ptr, v8, 0);
  v9 = *a1;
  v10 = haystack;
  if ( (_QWORD)v13 )
    v10 = (const char *)ptr;
  result = (*(__int64 (**)(__int64, _QWORD, char *, ...))(*(_QWORD *)*a1 + 32LL))(v9, a1[1], "%s\n", v10);
  if ( ptr )
  {
    v11 = result;
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
    return v11;
  }
  return result;
}
