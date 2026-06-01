unsigned __int64 __fastcall sub_3B1E40(__int64 *a1, __int64 a2, __int64 a3)
{
  size_t v3; // rbp
  void *v7; // rax
  const char *v8; // rsi
  const char *v9; // rbp
  int v10; // ebx
  __int64 v11; // rbx
  void *v13; // rdi
  __int64 v14; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a1 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    src = nullptr;
    v16 = 0;
    if ( v3 <= 1 )
    {
      v8 = nullptr;
      src = (void *)qvector_reserve(&src, 0, 9, 1);
      *(_QWORD *)&v16 = 9;
      strcpy((char *)src, "struct_0");
    }
    else
    {
      v7 = (void *)qalloc_or_throw(v3);
      v8 = *(const char **)a3;
      *((_QWORD *)&v16 + 1) = v3;
      src = v7;
      memcpy(v7, v8, v3);
      *(_QWORD *)&v16 = v3;
    }
    v9 = (const char *)src;
    v10 = 0;
    if ( (unsigned __int64)a1[1] <= 1 )
    {
      while ( 1 )
      {
        v8 = v9;
        if ( !(unsigned int)get_type_ordinal(a2, v9) )
          break;
        v8 = "struct_%d";
        sub_169A50((__int64 *)&src, (__int64)"struct_%d", v10++);
        v9 = (const char *)src;
        if ( (unsigned __int64)a1[1] > 1 )
          goto LABEL_10;
      }
      v11 = v16;
      v9 = (const char *)src;
      if ( (unsigned __int64)v16 > 1 )
      {
        v13 = (void *)*a1;
        if ( a1[2] < (unsigned __int64)v16 )
        {
          v14 = qvector_reserve(a1, *a1, v16, 1);
          *a1 = v14;
          v13 = (void *)v14;
        }
        a1[1] = v11;
        v8 = v9;
        memmove(v13, v9, v11 - 1);
        *(_BYTE *)(*a1 + v11 - 1) = 0;
        v9 = (const char *)src;
      }
      else
      {
        a1[1] = 0;
      }
    }
LABEL_10:
    if ( v9 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v9, v8);
    }
  }
  return v17 - __readfsqword(0x28u);
}
