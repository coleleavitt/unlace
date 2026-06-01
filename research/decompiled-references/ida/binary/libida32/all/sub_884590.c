__int64 __fastcall sub_884590(_QWORD *a1, int *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  const char *v9; // rbp
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // r12
  unsigned __int8 v13; // [rsp+Fh] [rbp-49h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v6 = *a2;
  v16 = __readfsqword(0x28u);
  if ( v6 == 2 )
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = haystack;
    if ( *(_QWORD *)(v8 + 8) )
      v9 = *(const char **)v8;
    ptr = nullptr;
    v15 = 0;
    if ( v9 )
    {
      v10 = strlen(v9);
      v11 = v10 + 1;
      v12 = v10;
      ptr = (void *)qvector_reserve(&ptr, 0, v10 + 1, 1);
      *(_QWORD *)&v15 = v11;
      memmove(ptr, v9, v12);
      *((_BYTE *)ptr + v12) = 0;
    }
    result = sub_884420(a1, (__int64)&ptr, a3, a4, a5, a6);
    if ( ptr )
    {
      v13 = result;
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
      return v13;
    }
  }
  else if ( v6 == 6 )
  {
    *a1 = 0;
    return 1;
  }
  else
  {
    return 0;
  }
  return result;
}

