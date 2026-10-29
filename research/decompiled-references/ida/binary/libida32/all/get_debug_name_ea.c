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
    return 0xFFFFFFFFLL;
  v1 = **(_QWORD **)(qword_2CA1698 + 1480);
  ptr = nullptr;
  v9 = 0;
  v2 = *(_QWORD *)(v1 + 1528);
  v3 = strlen(src);
  v4 = v3 + 1;
  v5 = v3;
  ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
  *(_QWORD *)&v9 = v4;
  memmove(ptr, src, v5);
  *((_BYTE *)ptr + v5) = 0;
  v6 = sub_3D80D0(v2 + 136, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  if ( v6 == (_QWORD *)(v2 + 144) )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)v6 + 14);
}

