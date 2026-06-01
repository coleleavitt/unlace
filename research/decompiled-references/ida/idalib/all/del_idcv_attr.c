__int64 __fastcall del_idcv_attr(__int64 a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r12
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return set_qerrno(1532);
  ptr = nullptr;
  v8 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v8 = v4;
    memmove(ptr, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
  }
  v6 = 0;
  if ( !sub_79BD80(*(_QWORD *)(a1 + 8), (__int64)&ptr) )
  {
    set_error_string(0, a2);
    v6 = set_qerrno(1538);
  }
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v6;
}
