__int64 __fastcall sub_373380(__int64 a1, __int64 a2)
{
  int v2; // edi
  const char *v4; // rsi
  size_t v5; // rax
  size_t v6; // r12
  size_t v8; // r13
  void *v9; // rax
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v11; // [rsp+8h] [rbp-460h]
  char s[1032]; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int64 v13; // [rsp+438h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  if ( sub_36B4D0(v2, (__int64)&ptr) )
  {
    v4 = haystack;
    if ( (_QWORD)v11 )
      v4 = (const char *)ptr;
    qstrncpy(s, v4, 1024);
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
    v5 = strlen(s);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v6 = v5;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v5 )
    {
      v8 = v5 + 1;
      v9 = (void *)qvector_reserve(a2 + 8, 0, v5 + 1, 1);
      *(_QWORD *)(a2 + 8) = v9;
      *(_QWORD *)(a2 + 16) = v8;
      memmove(v9, s, v6);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
    }
  }
  else
  {
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  return 0;
}

