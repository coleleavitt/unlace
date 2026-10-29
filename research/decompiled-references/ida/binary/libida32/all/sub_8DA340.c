__int64 __fastcall sub_8DA340(__int64 a1, __int64 a2, _BYTE *a3)
{
  const char *v3; // r12
  bool v4; // zf
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r13
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v3 = haystack;
  v4 = *(_QWORD *)(a2 + 40) == 0;
  v12 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)(a2 + 32);
  ptr = nullptr;
  v11 = 0;
  if ( v3 )
  {
    v6 = strlen(v3);
    v7 = v6 + 1;
    v8 = v6;
    ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v11 = v7;
    memmove(ptr, v3, v8);
    *((_BYTE *)ptr + v8) = 0;
  }
  sub_8DA120(a1, (__int64)&ptr, a3);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return a1;
}

