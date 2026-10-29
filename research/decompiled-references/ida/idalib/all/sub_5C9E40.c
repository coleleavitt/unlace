unsigned __int64 __fastcall sub_5C9E40(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // r13
  void *v6; // r14
  char *v7; // r12
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 1672);
  v21 = __readfsqword(0x28u);
  sub_504B40(v2 + 1704);
  v5 = *(_QWORD **)(a1 + 1616);
  v6 = (void *)v5[4];
  if ( v6 )
  {
    if ( (_BYTE)a2 )
      sub_5C9D00(a1, a2, v3, v4);
    v7 = nullptr;
    v8 = nullptr;
    ptr = nullptr;
    v20 = 0;
    v9 = 10LL * (_QWORD)v6;
    if ( 10LL * (_QWORD)v6 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, 10LL * (_QWORD)v6, 1);
      memset((char *)ptr + v20, 0, v9 - v20);
      v8 = ptr;
      *(_QWORD *)&v20 = 10LL * (_QWORD)v6;
      v7 = (char *)ptr + v9;
    }
    v10 = (__int64 *)v5[3];
    v11 = &v10[2 * v5[4]];
    if ( v11 == v10 )
    {
      v15 = v8;
      v16 = 0;
    }
    else
    {
      v12 = 0;
      do
      {
        v13 = v12;
        v12 = *v10;
        v14 = pack_dq(v8, v7, *v10 - v13);
        v10 += 2;
        v8 = (void *)v14;
      }
      while ( v11 != v10 );
      v15 = ptr;
      v16 = v14 - (_QWORD)ptr;
    }
    netnode_setblob(v5[2], v15, v16, 0, 83);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
  }
  else
  {
    netnode_delblob(v5[2], 0, 83);
  }
  ptr = v6;
  netnode_supset(v5[2], 0, &ptr, 8, 65, v17);
  return v21 - __readfsqword(0x28u);
}
