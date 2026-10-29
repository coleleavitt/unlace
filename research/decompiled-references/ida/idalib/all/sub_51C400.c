__int64 __fastcall sub_51C400(__int64 a1, unsigned __int64 a2, signed int a3, __int64 a4, unsigned __int8 a5, char a6)
{
  __int64 v7; // rbx
  __int64 *v8; // r15
  int v10; // eax
  __int64 v12; // rax
  const void *v13; // r13
  size_t v14; // rax
  size_t v15; // rbx
  const char *v16; // rdx
  size_t v17; // r14
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v7 = a3;
  v8 = *(__int64 **)(a1 + 1768);
  v20 = __readfsqword(0x28u);
  v10 = sub_518880((__int64)v8, a2, a3, a4, a5);
  if ( v10 == -2 )
  {
    sub_518410(v8, v7, a2);
  }
  else if ( v10 != -1 )
  {
    return v10 & 1;
  }
  if ( !a6 )
  {
    v12 = *(_QWORD *)(a1 + 984);
    ptr = nullptr;
    v19 = 0;
    if ( v12 )
    {
      v13 = *(const void **)(v12 + 8 * v7);
      if ( !v13 )
        goto LABEL_10;
      v14 = strlen(*(const char **)(v12 + 8 * v7));
      v15 = v14;
      if ( !v14 )
        goto LABEL_10;
      v17 = v14 + 1;
      ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
      *(_QWORD *)&v19 = v17;
      memmove(ptr, v13, v15);
      *((_BYTE *)ptr + v15) = 0;
    }
    else
    {
      sub_35A790((char **)&ptr);
    }
    if ( (_QWORD)v19 )
    {
      v16 = (const char *)ptr;
LABEL_11:
      sub_387D20(1337, a2, (__int64)v16, a4);
    }
LABEL_10:
    v16 = haystack;
    goto LABEL_11;
  }
  return 0;
}
