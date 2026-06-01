unsigned __int64 __fastcall sub_2EC400(__int64 a1)
{
  char **v1; // rax
  _QWORD *v2; // rdx
  char *v3; // r12
  char *v4; // rbp
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // rbx
  void *v13; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  void *v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v1 = *(char ***)(a1 + 8);
  v2 = *(_QWORD **)a1;
  v17 = __readfsqword(0x28u);
  v3 = *v1;
  v4 = &v1[1][*v2];
  if ( ((unsigned __int8)*v1 & 1) != 0 )
    v3 = *(char **)&v3[*(_QWORD *)v4 - 1];
  v5 = *(__int64 **)(a1 + 16);
  v6 = *v5;
  v15 = nullptr;
  v7 = *(_QWORD *)(v6 + 16);
  v16 = 0;
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    *((_QWORD *)&v16 + 1) = *(_QWORD *)(v7 + 8);
    v15 = (void *)qalloc_or_throw(8 * v8);
    memcpy(v15, *(const void **)v7, 8 * v8);
    *(_QWORD *)&v16 = v8;
    v5 = *(__int64 **)(a1 + 16);
  }
  v9 = *v5;
  v13 = nullptr;
  v10 = *(_QWORD *)(v9 + 8);
  v14 = 0;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
    *((_QWORD *)&v14 + 1) = v11;
    memcpy(v13, *(const void **)v10, v11);
    *(_QWORD *)&v14 = v11;
  }
  ((void (__fastcall *)(char *, void **, void **))v3)(v4, &v13, &v15);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, (const char *)&v13);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (const char *)&v13);
  }
  return v17 - __readfsqword(0x28u);
}
