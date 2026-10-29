__int64 __fastcall find_custom_data_format(const char *src)
{
  __int64 v1; // rbp
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // r12
  void *v5; // r12
  _QWORD *v6; // rbx
  __int64 result; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  v1 = *(_QWORD *)(qword_2CCB598 + 1552);
  if ( src )
  {
    v2 = strlen(src);
    v3 = v2 + 1;
    v4 = v2;
    ptr = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
    *(_QWORD *)&v9 = v3;
    memmove(ptr, src, v4);
    *((_BYTE *)ptr + v4) = 0;
    v5 = ptr;
    v6 = sub_3DDF90(v1 + 136, (__int64)&ptr);
    if ( v5 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v5);
    }
  }
  else
  {
    v6 = sub_3DDF90(v1 + 136, (__int64)&ptr);
  }
  if ( v6 == (_QWORD *)(v1 + 144) )
    return 0xFFFFFFFFLL;
  result = *((unsigned int *)v6 + 14);
  if ( !*(_QWORD *)(*(_QWORD *)(v1 + 112) + 16 * result) )
    return 0xFFFFFFFFLL;
  return result;
}
