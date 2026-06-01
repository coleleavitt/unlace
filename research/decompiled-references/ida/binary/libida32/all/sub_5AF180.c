unsigned __int64 __fastcall sub_5AF180(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r13
  int *v7; // r15
  __int64 v8; // rdi
  int *v9; // rbp
  char *v10; // rbx
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  void *v14; // rsi
  __int64 v15; // rdx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 1480);
  v19 = __readfsqword(0x28u);
  sub_4ED600((unsigned int *)(v2 + 1624));
  v5 = *(_QWORD *)(a1 + 1424);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
  {
    if ( (_BYTE)a2 )
      sub_5AF050(a1, a2, v3, v4);
    ptr = nullptr;
    v18 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 5 * v6, 1);
    memset((char *)ptr + v18, 0, 5 * v6 - v18);
    *(_QWORD *)&v18 = 5 * v6;
    v7 = *(int **)(v5 + 16);
    v8 = (__int64)ptr;
    v9 = &v7[2 * *(_QWORD *)(v5 + 24)];
    v10 = (char *)ptr + 5 * v6;
    if ( v9 == v7 )
    {
      v14 = ptr;
      v15 = 0;
    }
    else
    {
      v11 = 0;
      do
      {
        v12 = v11;
        v11 = *v7;
        v13 = pack_dd(v8, v10, (unsigned int)(*v7 - v12));
        v7 += 2;
        v8 = v13;
      }
      while ( v9 != v7 );
      v14 = ptr;
      v15 = v13 - (_QWORD)ptr;
    }
    netnode_setblob(*(unsigned int *)(v5 + 12), v14, v15, 0, 83);
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
  }
  else
  {
    netnode_delblob(*(unsigned int *)(v5 + 12), 0, 83);
  }
  LODWORD(ptr) = v6;
  netnode_supset(*(unsigned int *)(v5 + 12), 0, &ptr, 4, 65);
  return v19 - __readfsqword(0x28u);
}

