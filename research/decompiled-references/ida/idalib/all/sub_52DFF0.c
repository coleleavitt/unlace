unsigned __int64 __fastcall sub_52DFF0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r13
  _QWORD **v5; // rbx
  _QWORD **v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rax
  bool v14; // [rsp+Fh] [rbp-59h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v2 = *a1;
  v17 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 1584);
  v5 = (_QWORD **)(v4 + 8);
  v14 = a2 != nullptr;
  v6 = (_QWORD **)(v4 + 64);
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      v8 = *(_QWORD *)(*v7 + 152LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 72LL))(*v7) != 1 && v14 )
      {
        v9 = a2[1];
        v10 = *a2;
        if ( a2[2] < (unsigned __int64)(v9 + 1) )
        {
          v13 = qvector_reserve(a2, v10, v9 + 1, 24);
          v9 = a2[1];
          *a2 = v13;
          v10 = v13;
        }
        v11 = v10 + 24 * v9;
        *(_QWORD *)v11 = 0;
        *(_OWORD *)(v11 + 8) = 0;
        ++a2[1];
        sub_35A790((char **)v11);
      }
      v16 = 0;
      ptr = nullptr;
      if ( netnode_qgetblob(v8, &ptr, 1, 0, 66) > 0 )
        netnode_setblob(v8, ptr, v16, 0, 66);
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
    }
    ++v5;
  }
  while ( v5 != v6 );
  return v17 - __readfsqword(0x28u);
}
