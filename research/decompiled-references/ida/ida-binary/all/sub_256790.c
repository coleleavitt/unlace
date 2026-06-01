__int64 __fastcall sub_256790(__int64 *a1, const char *a2)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // rbx
  char *v7; // rax
  const char *v8; // rsi
  int *v9; // rbx
  unsigned __int64 v10; // r12
  const void *v12; // rbx
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  const char *v16; // [rsp+8h] [rbp-468h] BYREF
  __int128 v17; // [rsp+10h] [rbp-460h]
  _BYTE v18[1032]; // [rsp+28h] [rbp-448h] BYREF
  unsigned __int64 v19; // [rsp+430h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  v4 = strlen(a2);
  v5 = v4 + 1;
  v6 = v4;
  v7 = (char *)qvector_reserve(&v16, 0, v4 + 1, 1);
  *(_QWORD *)&v17 = v5;
  v16 = v7;
  memmove(v7, a2, v6);
  v8 = (const char *)&v16;
  v16[v6] = 0;
  v9 = (int *)sub_24D6C0((__int64)&unk_8CC080, (__int64)&v16);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, (const char *)&v16);
  }
  if ( v9 != &dword_8CC088 )
    goto LABEL_4;
  if ( (unsigned __int8)netnode_inited() )
  {
    netnode_check(&v16, "$ debugger application", 0, 0);
    v8 = a2;
    if ( netnode_hashval(v16, a2, v18, 1024, 72) >= 0 )
    {
      v8 = (const char *)&v16;
      v16 = a2;
      *(_QWORD *)&v17 = v18;
      v9 = (int *)sub_256560((__int64)&unk_8CC080, &v16);
    }
  }
  if ( v9 == &dword_8CC088 )
  {
    v14 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v14, v8);
      *a1 = 0;
      a1[2] = 0;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( a1 != (__int64 *)(v9 + 14) )
    {
      v10 = *((_QWORD *)v9 + 8);
      if ( v10 > 1 )
      {
        v12 = *((const void **)v9 + 7);
        v13 = (void *)*a1;
        if ( a1[2] < v10 )
        {
          v15 = qvector_reserve(a1, *a1, v10, 1);
          *a1 = v15;
          v13 = (void *)v15;
        }
        a1[1] = v10;
        memmove(v13, v12, v10 - 1);
        *(_BYTE *)(*a1 + v10 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 1;
  }
}
