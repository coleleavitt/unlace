unsigned __int64 __fastcall sub_509260(__int64 a1, const char *a2, char a3)
{
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  void *v8; // rax
  const char *v9; // rsi
  char *v10; // rdi
  __int64 extlang; // rax
  __int64 v12; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v6;
    memmove(v8, a2, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  }
  *(_QWORD *)(a1 + 24) = get_current_extlang();
  v9 = "LastCLIExtlang";
  *(_BYTE *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  if ( a3 )
    v9 = "LastSnippetsExtlang";
  *(_DWORD *)(a1 + 56) = -1;
  *(_OWORD *)(a1 + 40) = 0;
  ptr = nullptr;
  v15 = 0;
  if ( (unsigned __int8)reg_str_get(&ptr, v9, 0) )
  {
    v10 = (char *)haystack;
    if ( (_QWORD)v15 )
      v10 = (char *)ptr;
    extlang = find_extlang(v10);
    if ( extlang )
    {
      v12 = *(_QWORD *)(a1 + 24);
      if ( v12 )
        --*(_DWORD *)(v12 + 12);
      *(_QWORD *)(a1 + 24) = extlang;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return v16 - __readfsqword(0x28u);
}

