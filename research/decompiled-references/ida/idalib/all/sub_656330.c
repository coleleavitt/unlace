unsigned __int64 __fastcall sub_656330(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 1704);
  ptr = nullptr;
  v8 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v8 = v4;
    memmove(ptr, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
  }
  sub_655ED0((__int64 *)(v2 + 48), (__int64)&ptr, 147);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
