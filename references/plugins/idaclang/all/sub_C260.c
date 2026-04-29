__int64 __fastcall sub_C260(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  void *v11; // rax
  __int64 v12; // rax

  v1 = sub_BB20();
  v2 = sub_A980(v1);
  v4 = v3;
  v5 = sub_BB20();
  v6 = (const char *)sub_A3E0(v5, v2, v4);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v6 )
  {
    v7 = v6;
    v8 = strlen(v6);
    v9 = v8 + 1;
    v10 = v8;
    v11 = (void *)qvector_reserve(a1, 0, v8 + 1, 1);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v9;
    memmove(v11, v7, v10);
    *(_BYTE *)(*(_QWORD *)a1 + v10) = 0;
  }
  v12 = sub_BB20();
  sub_A410(v12, v2, v4);
  return a1;
}
