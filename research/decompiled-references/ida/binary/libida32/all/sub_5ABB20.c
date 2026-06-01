unsigned __int64 __fastcall sub_5ABB20(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  char *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  signed __int64 v8; // r13
  __int64 v10; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    ptr = nullptr;
    v12 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *((_BYTE *)ptr + v12) = 0;
    *(_QWORD *)&v12 = v12 + 1;
    sub_3FA160((__int64 *)&ptr, a2);
    add_undo_record(*(unsigned int *)(a1 + 40), ptr, v12);
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
  }
  v4 = *(char **)(a1 + 16);
  v5 = (char *)sub_5AA180(v4, (__int64)&v4[8 * *(_QWORD *)(a1 + 24)], a2);
  v8 = v5 - v4;
  if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1 + 16, v4, v7 + 1, 8);
    *(_QWORD *)(a1 + 16) = v10;
    v5 = (char *)(v10 + v8);
    v6 = 8LL * *(_QWORD *)(a1 + 24);
  }
  memmove(v5 + 8, v5, v6 - v8);
  *(_DWORD *)v5 = a2;
  *((_DWORD *)v5 + 1) = 0;
  ++*(_QWORD *)(a1 + 24);
  return v13 - __readfsqword(0x28u);
}

