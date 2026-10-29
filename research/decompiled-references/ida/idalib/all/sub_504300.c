unsigned __int64 __fastcall sub_504300(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r9
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  const char *v14; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a2 != a3 )
  {
    ptr = nullptr;
    v16 = 0;
    v6 = ea2node(a2);
    v7 = ea2node(a3);
    v8 = netnode_qsupstr(*a1, &ptr, v6, 82);
    if ( v8 > 0 )
    {
      v10 = haystack;
      if ( (_QWORD)v16 )
        v10 = (const char *)ptr;
      netnode_supset(*a1, v7, v10, v8, 82, v9);
      netnode_supdel(*a1, v6, 82);
    }
    v11 = netnode_qsupstr(*a1, &ptr, v6, 67);
    if ( v11 > 0 )
    {
      v13 = *a1;
      v14 = haystack;
      if ( (_QWORD)v16 )
        v14 = (const char *)ptr;
      netnode_supset(v13, v7, v14, v11, 67, v12);
      netnode_supdel(*a1, v6, 67);
    }
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
    }
  }
  return v17 - __readfsqword(0x28u);
}
