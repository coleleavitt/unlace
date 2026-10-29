__int64 __fastcall sub_567540(__int64 a1, char **a2)
{
  char *v3; // rax
  int v4; // eax
  char *v5; // r14
  size_t v6; // rbp
  void *v7; // r13
  __int64 result; // rax
  char *v9; // rax
  __int64 v10; // r15
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rax
  void *s; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( !a2 || (v3 = *a2, (s = v3) == nullptr) || !*v3 )
  {
    if ( a1 )
    {
      v13 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v13);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    return 1;
  }
  v4 = sub_6B3760(&s);
  if ( v4 < 0 )
    return 0;
  v5 = (char *)s;
  v6 = v4;
  v7 = memchr(s, 0, v4);
  result = 0;
  if ( !v7 )
  {
    v9 = &v5[v6];
    s = &v5[v6];
    if ( a1 )
    {
      ptr = nullptr;
      v10 = 0;
      v17 = 0;
      if ( v6 )
      {
        v14 = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
        *(_QWORD *)&v17 = v6 + 1;
        ptr = v14;
        memmove(v14, v5, v6);
        *((_BYTE *)ptr + v6) = 0;
        v7 = ptr;
        v10 = *((_QWORD *)&v17 + 1);
        v6 = v17;
      }
      v11 = *(void **)a1;
      ptr = nullptr;
      v17 = 0;
      if ( v11 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v11);
        v12 = ptr;
        *(_QWORD *)a1 = v7;
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = v10;
        if ( v12 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v12);
        }
      }
      else
      {
        *(_QWORD *)a1 = v7;
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = v10;
      }
      v9 = (char *)s;
    }
    *a2 = v9;
    return 1;
  }
  return result;
}
