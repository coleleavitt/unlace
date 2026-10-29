__int64 __fastcall sub_783F90(__int64 a1, const char *a2, unsigned int a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  size_t v8; // r14
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 192);
  if ( !v6 )
    return v12 - __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
    *(_QWORD *)&v11 = v8 + 1;
    memmove(ptr, a2, v8);
    *((_BYTE *)ptr + v8) = 0;
  }
  sub_78CB00(v6, *(_DWORD *)(a1 + 208), (unsigned int)&ptr, a4, a5, a6);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return sub_78CE80(*(_QWORD *)(a1 + 192), *(unsigned int *)(a1 + 208), a3);
}
