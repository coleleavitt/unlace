__int64 __fastcall sub_C340(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rax
  const char *v17; // rax
  const char *v18; // rbp
  size_t v19; // rax
  size_t v20; // r15
  size_t v21; // r14
  void *v22; // rax
  __int64 v23; // rax

  v8 = sub_BB20();
  v13 = sub_A260(
          v8,
          a2,
          v9,
          v10,
          v11,
          v12,
          (__int128)_mm_loadu_si128((const __m128i *)&a7),
          (__int128)_mm_loadu_si128((const __m128i *)&a8));
  v15 = v14;
  v16 = sub_BB20();
  v17 = (const char *)sub_A3E0(v16, v13, v15);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v17 )
  {
    v18 = v17;
    v19 = strlen(v17);
    v20 = v19 + 1;
    v21 = v19;
    v22 = (void *)qvector_reserve(a1, 0, v19 + 1, 1);
    *(_QWORD *)a1 = v22;
    *(_QWORD *)(a1 + 8) = v20;
    memmove(v22, v18, v21);
    *(_BYTE *)(*(_QWORD *)a1 + v21) = 0;
  }
  v23 = sub_BB20();
  sub_A410(v23, v13, v15);
  return a1;
}
