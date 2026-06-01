__int64 __fastcall sub_3734E0(__int64 a1, __int64 a2)
{
  int v3; // esi
  const char *v5; // rsi
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r14
  void *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-458h] BYREF
  void *ptr; // [rsp+10h] [rbp-450h] BYREF
  __int128 v12; // [rsp+18h] [rbp-448h]
  char s[1032]; // [rsp+30h] [rbp-430h] BYREF
  unsigned __int64 v14; // [rsp+438h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 8);
  v10 = 0;
  if ( !(unsigned int)guess_tinfo((int)&v10, v3) )
  {
LABEL_2:
    clear_tinfo_t(&v10);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    return 0;
  }
  v12 = 0;
  ptr = nullptr;
  if ( !(unsigned __int8)print_tinfo((int)&ptr, 0, 0, 0, 0, (int)&v10, 0, 0) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
    goto LABEL_2;
  }
  v5 = haystack;
  if ( (_QWORD)v12 )
    v5 = (const char *)ptr;
  qstrncpy(s, v5, 1024);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  clear_tinfo_t(&v10);
  v6 = strlen(s);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v6 )
  {
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(a2 + 8, 0, v6 + 1, 1);
    *(_QWORD *)(a2 + 8) = v9;
    *(_QWORD *)(a2 + 16) = v7;
    memmove(v9, s, v8);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v8) = 0;
  }
  return 0;
}

