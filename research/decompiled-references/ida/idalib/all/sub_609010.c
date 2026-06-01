__int64 __fastcall sub_609010(__int64 *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // r12
  __int64 v5; // rdx
  unsigned int v6; // ebx
  const char *v7; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    ptr = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
    *(_QWORD *)&v10 = v3;
    memmove(ptr, a2, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  v6 = sub_606290(*a1, (__int64)a2, 1u);
  if ( (_BYTE)v6 )
  {
    v7 = haystack;
    if ( (_QWORD)v10 )
      v7 = (const char *)ptr;
    sub_6060A0(149, v7, v5);
  }
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return v6;
}
