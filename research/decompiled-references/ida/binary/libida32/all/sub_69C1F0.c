__int64 __fastcall sub_69C1F0(_QWORD *a1, const char *a2, _QWORD *a3, unsigned __int64 a4, char a5)
{
  const char *v5; // r12
  unsigned __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r13
  const char *v10; // rsi
  unsigned int v11; // ebx
  void *v12; // rdi
  void *v14; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a4 >= a3[1] )
    return (unsigned int)-1;
  v5 = haystack;
  v6 = *a3 + (a4 << 7);
  if ( *(_QWORD *)(v6 + 24) )
    v5 = *(const char **)(v6 + 16);
  v14 = nullptr;
  v15 = 0;
  if ( !a5 )
  {
    if ( !(unsigned __int8)sub_69BF50((__int64)a1, (__int64 *)&v14, (__int64)a3, a4) )
    {
      v12 = v14;
      v11 = -1;
      if ( !v14 )
        return v11;
      goto LABEL_15;
    }
    v5 = haystack;
    if ( (_QWORD)v15 )
      v5 = (const char *)v14;
  }
  ptr = nullptr;
  v17 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
    *(_QWORD *)&v17 = v8;
    memmove(ptr, a2, v9);
    *((_BYTE *)ptr + v9) = 0;
  }
  sub_69C0D0((__int64 *)&ptr, v5);
  v10 = haystack;
  if ( (_QWORD)v17 )
    v10 = (const char *)ptr;
  v11 = sub_698F20(a1, v10, 0, 0);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  v12 = v14;
  if ( v14 )
  {
LABEL_15:
    *(_QWORD *)&v15 = 0;
    qfree(v12);
  }
  return v11;
}

