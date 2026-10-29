unsigned __int64 __fastcall declaration_compiler_t__set_smart_pointers(__int64 a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // r13
  void *v5; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    v5 = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
    *(_QWORD *)&v8 = v3;
    ptr = v5;
    memmove(v5, a2, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  sub_456FB0(&ptr, (__int64 *)(*(_QWORD *)(a1 + 32) + 96LL), ";", 1);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
