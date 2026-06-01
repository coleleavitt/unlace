unsigned __int64 __fastcall sub_6D1510(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int *v7; // r12
  size_t v8; // rbp
  void *v10; // rax
  const char *v11; // rdx
  const char *v12; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v2 + 512) )
  {
    v3 = *(unsigned __int16 *)(a2 + 16);
    if ( (unsigned __int16)v3 > 0x13u || (v5 = 982656, v6 = 0, !_bittest64(&v5, v3)) )
    {
      if ( (((_WORD)v3 - 8) & 0xFFF7) == 0 || (_WORD)v3 == 1 )
        v6 = 0;
      else
        v6 = *(_QWORD *)(a2 + 8);
    }
    v7 = *(unsigned int **)(v6 + 16);
    v8 = *v7;
    v14 = 0;
    ptr = nullptr;
    if ( v8 )
    {
      v10 = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
      *(_QWORD *)&v14 = v8 + 1;
      ptr = v10;
      memmove(v10, v7 + 4, v8);
      *((_BYTE *)ptr + v8) = 0;
      if ( (_QWORD)v14 )
        v11 = (const char *)ptr;
      else
        v11 = haystack;
      v2 = *(_QWORD *)(a1 + 32);
      v12 = v11;
      if ( !*(_QWORD *)(v2 + 512) )
        std::__throw_bad_function_call();
    }
    else
    {
      v12 = haystack;
    }
    (*(void (__fastcall **)(__int64, const char **))(v2 + 520))(v2 + 496, &v12);
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
  }
  return v15 - __readfsqword(0x28u);
}

