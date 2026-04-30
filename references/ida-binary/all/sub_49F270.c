unsigned __int64 __fastcall sub_49F270(__int64 a1, char *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  bool v9; // cf
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)a2;
  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)a2 + 1) = 0;
    qfree(v5, a2);
    *(_QWORD *)a2 = 0;
    *((_QWORD *)a2 + 2) = 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = a3 < v7;
    v10 = *((_QWORD *)a2 + 1);
    v11 = *(_QWORD *)a2;
    if ( !v9 )
      a3 = v8;
    if ( *((_QWORD *)a2 + 2) < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve(a2, v11, v10 + 1, 8);
      *(_QWORD *)a2 = v13;
      v11 = v13;
      v10 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v11 + 8 * v10) = a3;
    ++*((_QWORD *)a2 + 1);
  }
  return v14 - __readfsqword(0x28u);
}
