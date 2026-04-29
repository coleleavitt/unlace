void __fastcall sub_4980(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  void *v7; // rax
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // r12
  void *v11; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v7, a2, v6);
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = v8 + 1;
    v10 = v8;
    v11 = (void *)qvector_reserve(a1 + 24, 0, v8 + 1, 1);
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 32) = v9;
    memmove(v11, a3, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v10) = 0;
  }
}
