__int64 __fastcall sub_C5F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rax
  const char *v7; // rax
  const char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rax

  v2 = sub_BB20();
  v3 = sub_B010(v2, a2);
  v5 = v4;
  v6 = sub_BB20();
  v7 = (const char *)sub_A3E0(v6, v3, v5);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v7 )
  {
    v8 = v7;
    v9 = strlen(v7);
    v10 = v9 + 1;
    v11 = v9;
    v12 = (void *)qvector_reserve(a1, 0, v9 + 1, 1);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v10;
    memmove(v12, v8, v11);
    *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
  }
  v13 = sub_BB20();
  sub_A410(v13, v3, v5);
  return a1;
}
