__int64 __fastcall sub_C510(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  const char *v9; // rax
  const char *v10; // rbp
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // r14
  void *v14; // rax
  __int64 v15; // rax

  v2 = sub_BB20();
  v3 = sub_AE90(v2);
  v4 = sub_BB20();
  v5 = sub_AE60(v4, a2, v3);
  v7 = v6;
  v8 = sub_BB20();
  v9 = (const char *)sub_A3E0(v8, v5, v7);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v9 )
  {
    v10 = v9;
    v11 = strlen(v9);
    v12 = v11 + 1;
    v13 = v11;
    v14 = (void *)qvector_reserve(a1, 0, v11 + 1, 1);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v12;
    memmove(v14, v10, v13);
    *(_BYTE *)(*(_QWORD *)a1 + v13) = 0;
  }
  v15 = sub_BB20();
  sub_A410(v15, v5, v7);
  return a1;
}
