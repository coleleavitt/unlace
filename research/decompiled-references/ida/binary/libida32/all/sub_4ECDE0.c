unsigned __int64 __fastcall sub_4ECDE0(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  __int64 v8; // rcx
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  const char *v12; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a2 != a3 )
  {
    ptr = nullptr;
    v14 = 0;
    v6 = ea2node(a2);
    v7 = ea2node(a3);
    v8 = netnode_qsupstr(*a1, &ptr, v6, 82);
    if ( v8 > 0 )
    {
      v9 = haystack;
      if ( (_QWORD)v14 )
        v9 = (const char *)ptr;
      netnode_supset(*a1, v7, v9, v8, 82);
      netnode_supdel(*a1, v6, 82);
    }
    v10 = netnode_qsupstr(*a1, &ptr, v6, 67);
    if ( v10 > 0 )
    {
      v11 = *a1;
      v12 = haystack;
      if ( (_QWORD)v14 )
        v12 = (const char *)ptr;
      netnode_supset(v11, v7, v12, v10, 67);
      netnode_supdel(*a1, v6, 67);
    }
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
  }
  return v15 - __readfsqword(0x28u);
}

