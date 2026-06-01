__int64 __fastcall sub_6BCC40(_QWORD *a1, const char *a2, _QWORD *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rax
  const char *v6; // r12
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r13
  const char *v10; // rsi
  unsigned __int64 v11; // rbx
  void *v12; // rdi
  void *v14; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a4 >= a3[1] )
    return -1;
  v5 = *a3 + 144 * a4;
  v6 = haystack;
  if ( *(_QWORD *)(v5 + 24) )
    v6 = *(const char **)(v5 + 16);
  v14 = nullptr;
  v15 = 0;
  if ( !a5 )
  {
    if ( !(unsigned __int8)sub_6BC9A0((__int64)a1, (__int64 *)&v14, (__int64)a3, a4) )
    {
      v12 = v14;
      v11 = -1;
      if ( !v14 )
        return v11;
      goto LABEL_15;
    }
    v6 = haystack;
    if ( (_QWORD)v15 )
      v6 = (const char *)v14;
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
  sub_6BCB20((__int64 *)&ptr, v6);
  v10 = haystack;
  if ( (_QWORD)v17 )
    v10 = (const char *)ptr;
  v11 = sub_6B9860(a1, v10, 0, 0);
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
