__int64 __fastcall sub_E49E0(__int64 *a1, const char *a2)
{
  size_t v3; // rbx
  int *v4; // rbx
  unsigned __int64 v5; // r12
  const void *v7; // rbx
  void *v8; // rdi
  __int64 v9; // rax
  char *v10; // [rsp+8h] [rbp-468h] BYREF
  __int128 v11; // [rsp+10h] [rbp-460h]
  char v12; // [rsp+28h] [rbp-448h] BYREF
  unsigned __int64 v13; // [rsp+430h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v3 = strlen(a2);
  *(_QWORD *)&v11 = v3 + 1;
  v10 = (char *)qvector_reserve();
  memmove(v10, a2, v3);
  v10[v3] = 0;
  v4 = (int *)sub_DD760((__int64)&unk_251120, (__int64)&v10);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  if ( v4 != &dword_251128 )
    goto LABEL_4;
  if ( (unsigned __int8)netnode_inited() )
  {
    netnode_check();
    if ( netnode_hashval() >= 0 )
    {
      v10 = (char *)a2;
      *(_QWORD *)&v11 = &v12;
      v4 = (int *)sub_E47B0((__int64)&unk_251120, (const char **)&v10);
    }
  }
  if ( v4 == &dword_251128 )
  {
    if ( *a1 )
    {
      a1[1] = 0;
      qfree();
      *a1 = 0;
      a1[2] = 0;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( a1 != (__int64 *)(v4 + 14) )
    {
      v5 = *((_QWORD *)v4 + 8);
      if ( v5 > 1 )
      {
        v7 = *((const void **)v4 + 7);
        v8 = (void *)*a1;
        if ( a1[2] < v5 )
        {
          v9 = qvector_reserve();
          *a1 = v9;
          v8 = (void *)v9;
        }
        a1[1] = v5;
        memmove(v8, v7, v5 - 1);
        *(_BYTE *)(*a1 + v5 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 1;
  }
}

