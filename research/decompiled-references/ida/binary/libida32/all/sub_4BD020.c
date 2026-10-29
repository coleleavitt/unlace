__int64 __fastcall sub_4BD020(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // rbp
  _QWORD *v7; // rbx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v2 = *a1;
  ptr = nullptr;
  v3 = *(_QWORD *)(v2 + 1528);
  v10 = 0;
  v4 = strlen(a2);
  v5 = v4 + 1;
  v6 = v4;
  ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
  *(_QWORD *)&v10 = v5;
  memmove(ptr, a2, v6);
  *((_BYTE *)ptr + v6) = 0;
  v7 = sub_3D80D0(v3 + 136, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( v7 == (_QWORD *)(v3 + 144) )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)v7 + 14);
}

