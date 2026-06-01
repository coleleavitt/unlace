void __fastcall sub_1392680(__int64 a1, const void *a2, __int64 *a3)
{
  size_t v5; // rcx
  void *v6; // rbp
  size_t v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  char *v11; // rax
  char *v12; // rbx
  char *v13; // r14
  __int64 v14; // rax
  char *v15; // r9
  size_t v16; // r15
  char *v17; // [rsp+8h] [rbp-50h] BYREF
  size_t n; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)a1;
  v7 = (size_t)a2 - *(_QWORD *)a1;
  v8 = (__int64)(v5 - *(_QWORD *)a1) >> 3;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_16;
  }
  v9 = 2 * v8;
  v10 = -8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  v13 = nullptr;
  v12 = nullptr;
  if ( v9 )
  {
LABEL_16:
    v10 = 8 * v9;
LABEL_3:
    n = v7;
    v17 = (char *)v5;
    v11 = (char *)operator new(v10);
    v7 = n;
    v5 = (size_t)v17;
    v12 = v11;
    v13 = &v11[v10];
  }
  v14 = *a3;
  v15 = &v12[v7 + 8];
  v16 = v5 - (_QWORD)a2;
  *(_QWORD *)&v12[v7] = v14;
  v17 = &v15[v5 - (_QWORD)a2];
  if ( a2 != v6 )
  {
    dest = &v12[v7 + 8];
    n = v5;
    memmove(v12, v6, v7);
    v15 = (char *)dest;
    if ( a2 == (const void *)n )
    {
LABEL_9:
      operator delete(v6);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( a2 != (const void *)v5 )
LABEL_6:
    memcpy(v15, a2, v16);
  if ( v6 )
    goto LABEL_9;
LABEL_8:
  n = (size_t)v12;
  *(_QWORD *)(a1 + 16) = v13;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v17);
}
