unsigned __int64 __fastcall sub_5C65A0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char *v4; // rdi
  char *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  signed __int64 v8; // r13
  __int64 v10; // rax
  __int64 v11; // r9
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    ptr = nullptr;
    v13 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *((_BYTE *)ptr + v13) = 0;
    *(_QWORD *)&v13 = v13 + 1;
    sub_40D2A0((__int64 *)&ptr, a2);
    add_undo_record(*(unsigned int *)(a1 + 48), ptr, v13);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
  }
  v4 = *(char **)(a1 + 24);
  v5 = (char *)sub_5C46C0(v4, (__int64)&v4[16 * *(_QWORD *)(a1 + 32)], a2);
  v8 = v5 - v4;
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1 + 24, v4, v7 + 1, 16);
    v11 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v10;
    v5 = (char *)(v10 + v8);
    v6 = 16 * v11;
  }
  memmove(v5 + 16, v5, v6 - v8);
  *(_QWORD *)v5 = a2;
  *((_DWORD *)v5 + 2) = 0;
  ++*(_QWORD *)(a1 + 32);
  return v14 - __readfsqword(0x28u);
}
