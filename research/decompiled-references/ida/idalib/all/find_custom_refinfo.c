__int64 __fastcall find_custom_refinfo(const char *src)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r12
  void *v6; // r12
  _QWORD *v7; // rbx
  __int64 result; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v1 = **(_QWORD **)(qword_2CCB598 + 1672);
  ptr = nullptr;
  v10 = 0;
  v2 = *(_QWORD *)(v1 + 1600);
  if ( src )
  {
    v3 = strlen(src);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v10 = v4;
    memmove(ptr, src, v5);
    *((_BYTE *)ptr + v5) = 0;
    v6 = ptr;
    v7 = sub_3DDF90(v2 + 152, (__int64)&ptr);
    if ( v6 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v6);
    }
  }
  else
  {
    v7 = sub_3DDF90(v2 + 152, (__int64)&ptr);
  }
  if ( v7 == (_QWORD *)(v2 + 160) )
    return 0xFFFFFFFFLL;
  result = *((unsigned int *)v7 + 14);
  if ( !*(_QWORD *)(*(_QWORD *)(v2 + 128) + 16 * result) )
    return 0xFFFFFFFFLL;
  return result;
}
