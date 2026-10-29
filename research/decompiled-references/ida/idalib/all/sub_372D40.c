__int64 __fastcall sub_372D40(__int64 a1, __int64 a2)
{
  const char *v2; // r13
  char *v4; // rax
  char *v5; // rbx
  char *v6; // rsi
  char *v7; // rdi
  size_t v8; // r12
  unsigned __int8 v9; // al
  void *v10; // rdi
  void *v12; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(const char **)(a1 + 8);
    v4 = strchr(v2, 61);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 1;
      ptr = nullptr;
      v14 = 0;
      v7 = (char *)haystack;
      v8 = v4 - v2;
      if ( v4 != v2 )
      {
        v12 = nullptr;
        if ( v8 != -1 )
        {
          ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
          v12 = ptr;
        }
        *(_QWORD *)&v14 = v8 + 1;
        memmove(v12, v2, v8);
        v6 = v5 + 1;
        *((_BYTE *)ptr + v8) = 0;
        if ( (_QWORD)v14 )
          v7 = (char *)ptr;
        else
          v7 = (char *)haystack;
      }
      v9 = qsetenv(v7, v6);
      v10 = ptr;
      *(_QWORD *)(a2 + 8) = v9;
      if ( v10 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v10);
      }
    }
  }
  return 0;
}
