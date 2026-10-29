__int64 __fastcall sub_69AA70(_QWORD *a1, __int64 a2, unsigned int a3)
{
  const char *v3; // rax
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r12
  const char *v8; // rsi
  unsigned int v9; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v3 = (const char *)sub_6309B0((__int64)a1, a2, a3, nullptr);
  ptr = nullptr;
  v12 = 0;
  if ( !v3
    || (v4 = v3,
        v5 = strlen(v3),
        v6 = v5 + 1,
        v7 = v5,
        ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1),
        *(_QWORD *)&v12 = v6,
        memmove(ptr, v4, v7),
        *((_BYTE *)ptr + v7) = 0,
        v8 = (const char *)ptr,
        !(_QWORD)v12) )
  {
    v8 = haystack;
  }
  v9 = sub_698F20(a1, v8, 0, 0);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v9;
}

