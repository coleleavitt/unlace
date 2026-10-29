/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_plugin_options
// Address: 0x00000000000B38C0

//----- (00000000000B38C0) ----------------------------------------------------
char __fastcall parse_plugin_options(__int64 a1, const char *a2)
{
  __int64 v2; // r15
  const char *i; // r13
  __int64 v4; // rax
  char *v5; // rbx
  __int64 v6; // r12
  char *v7; // rax
  const void *v8; // rbp
  size_t v9; // rax
  size_t v10; // r14
  char **v11; // r15
  unsigned __int64 v12; // rdx
  char *v13; // rax
  size_t v14; // rax
  size_t v15; // rbp
  char *v16; // r14
  unsigned __int64 v17; // r15
  bool v18; // cf
  void *v19; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-60h]
  void *ptr[3]; // [rsp+10h] [rbp-58h] BYREF
  const char *v23[8]; // [rsp+28h] [rbp-40h] BYREF

  v23[1] = (const char *)__readfsqword(0x28u);
  if ( !a2 || !*a2 )
    return 0;
  v2 = a1;
  sub_37F60((__int64)ptr, a2);
  for ( i = qstrtok((char *)ptr[0], ":", v23); i; i = qstrtok(nullptr, ":", v23) )
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v4 + 1) )
    {
      v5 = *(char **)v2;
    }
    else
    {
      v5 = (char *)qvector_reserve(v2, *(char **)v2, v4 + 1, 0x30u);
      *(_QWORD *)v2 = v5;
      v4 = *(_QWORD *)(v2 + 8);
    }
    v6 = 48 * v4;
    *(_OWORD *)&v5[v6 + 32] = 0;
    *(_OWORD *)&v5[v6 + 16] = 0;
    *(_OWORD *)&v5[v6] = 0;
    ++*(_QWORD *)(v2 + 8);
    v7 = strchr(i, 61);
    if ( v7 )
    {
      *v7 = 0;
      v8 = v7 + 1;
      if ( v7 == (char *)-1LL || (v9 = strlen(v7 + 1)) == 0 )
      {
        *(_QWORD *)&v5[v6 + 32] = 0;
      }
      else
      {
        v10 = v9;
        v11 = (char **)&v5[v6 + 24];
        v12 = v9 + 1;
        if ( *(_QWORD *)&v5[v6 + 40] >= v9 + 1 )
        {
          v13 = *v11;
        }
        else
        {
          v21 = v9 + 1;
          v13 = (char *)qvector_reserve((__int64)&v5[v6 + 24], *v11, v12, 1u);
          *v11 = v13;
          v12 = v21;
        }
        *(_QWORD *)&v5[v6 + 32] = v12;
        memmove(v13, v8, v10);
        (*v11)[v10] = 0;
        v2 = a1;
      }
    }
    v14 = strlen(i);
    if ( v14 )
    {
      v15 = v14;
      v16 = &v5[v6];
      v17 = v14 + 1;
      v18 = *(_QWORD *)&v5[v6 + 16] < v14 + 1;
      v19 = *(void **)&v5[v6];
      if ( v18 )
      {
        v19 = qvector_reserve((__int64)&v5[v6], *(char **)&v5[v6], v17, 1u);
        *(_QWORD *)v16 = v19;
      }
      *(_QWORD *)&v5[v6 + 8] = v17;
      memmove(v19, i, v15);
      *(_BYTE *)(*(_QWORD *)v16 + v15) = 0;
      v2 = a1;
    }
    else
    {
      *(_QWORD *)&v5[v6 + 8] = 0;
    }
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return 1;
}
