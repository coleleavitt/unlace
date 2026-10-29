__int64 __fastcall sub_622090(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(unsigned __int64, const char *, _QWORD, __int64),
        __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  const char *v8; // rsi
  __int64 result; // rax
  void *v10; // rdi
  unsigned int v12; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v13 = a2;
  v16 = __readfsqword(0x28u);
  v6 = sub_7BEB80(&v13, a1, 83);
  if ( v6 == -1 )
    return 1;
  while ( 1 )
  {
    v15 = 0;
    ptr = nullptr;
    if ( sub_7BEA80(&v13, a1, &ptr, v6, 83) <= 0 )
      break;
    v7 = sub_3BDE50(*(_QWORD **)(a1 + 1672), v6);
    v8 = haystack;
    if ( (_QWORD)v15 )
      v8 = (const char *)ptr;
    result = a3(v7, v8, 0, a4);
    v10 = ptr;
    if ( (int)result <= 0 )
      goto LABEL_11;
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
    v6 = sub_7BEBF0(&v13, a1, v6, 83);
    if ( v6 == -1 )
      return 1;
  }
  v10 = ptr;
  result = 0xFFFFFFFFLL;
LABEL_11:
  if ( v10 )
  {
    v12 = result;
    *(_QWORD *)&v15 = 0;
    qfree(v10);
    return v12;
  }
  return result;
}
