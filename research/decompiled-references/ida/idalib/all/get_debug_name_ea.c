__int64 __fastcall get_debug_name_ea(const char *src)
{
  __int64 v1; // rax
  __int64 v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rbp
  _QWORD *v6; // rbx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !src )
    return -1;
  v1 = **(_QWORD **)(qword_2CCB598 + 1672);
  ptr = nullptr;
  v9 = 0;
  v2 = *(_QWORD *)(v1 + 1720);
  v3 = strlen(src);
  v4 = v3 + 1;
  v5 = v3;
  ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
  *(_QWORD *)&v9 = v4;
  memmove(ptr, src, v5);
  *((_BYTE *)ptr + v5) = 0;
  v6 = sub_4D3F70(v2 + 144, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  if ( v6 == (_QWORD *)(v2 + 152) )
    return -1;
  else
    return v6[7];
}
