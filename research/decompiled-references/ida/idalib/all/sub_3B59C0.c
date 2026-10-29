__int64 __fastcall sub_3B59C0(__int64 a1, unsigned __int8 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // rax
  _BYTE *v11; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v8 = sub_3B57B0(a1, a2, 0, a4, a5, a6);
  if ( v8 == 2 && (unsigned __int8)must_journal(a1, a2, v7) )
  {
    ptr = nullptr;
    v13 = 0;
    sub_3ABBE0((__int64 *)&ptr, (_QWORD *)(a1 + 32));
    v10 = v13;
    v11 = ptr;
    if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v13 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v13 + 1, 1);
      v11 = ptr;
      v10 = v13;
    }
    v11[v10] = a2;
    *(_QWORD *)&v13 = v13 + 1;
    add_undo_record(194, ptr, v13);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
  }
  return v8;
}
