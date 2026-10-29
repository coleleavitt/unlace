bool __fastcall sub_1AA1590(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _WORD *v10; // rbp
  _WORD *v11; // rax
  _WORD *v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rbp

  v5 = a4;
  if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5)
    || sub_9EC890(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, v9) )
  {
    if ( !a1 )
      return 1;
    v10 = sub_1AA0870(a2);
    v11 = sub_1AA0870(a3);
    v12 = v11;
    if ( !v10 )
      return 1;
    if ( !v11 )
      return 1;
    v13 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v10 + 32LL))(v10);
    if ( v13 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
      return 1;
    if ( v5 )
    {
      v14 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v12 + 32LL))(v12);
      return v14 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    }
  }
  return 0;
}
