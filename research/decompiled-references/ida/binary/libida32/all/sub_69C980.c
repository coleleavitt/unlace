char *__fastcall sub_69C980(const char *src, __int64 a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // r14
  void *v6; // r15
  size_t v7; // r13
  void *v8; // rdi
  void *v9; // rdi
  void *v11; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( !src )
    return nullptr;
  v3 = strchr(src, 46);
  v4 = v3;
  if ( v3 )
  {
    if ( a2 )
    {
      v5 = 0;
      v6 = nullptr;
      ptr = nullptr;
      v13 = 0;
      v7 = v3 - src;
      if ( v3 != src )
      {
        v11 = nullptr;
        if ( v7 != -1 )
        {
          ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
          v11 = ptr;
        }
        *(_QWORD *)&v13 = v7 + 1;
        memmove(v11, src, v7);
        *((_BYTE *)ptr + v7) = 0;
        v6 = ptr;
        v5 = *((_QWORD *)&v13 + 1);
        v7 = v13;
      }
      v8 = *(void **)a2;
      ptr = nullptr;
      v13 = 0;
      if ( v8 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        qfree(v8);
        v9 = ptr;
        *(_QWORD *)a2 = v6;
        *(_QWORD *)(a2 + 8) = v7;
        *(_QWORD *)(a2 + 16) = v5;
        if ( v9 )
        {
          *(_QWORD *)&v13 = 0;
          qfree(v9);
        }
      }
      else
      {
        *(_QWORD *)a2 = v6;
        *(_QWORD *)(a2 + 8) = v7;
        *(_QWORD *)(a2 + 16) = v5;
      }
    }
    ++v4;
  }
  return v4;
}

