void __fastcall std::vector<CoinTreeSiblings *>::_M_realloc_insert<CoinTreeSiblings * const&>(
        __int64 *a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // rcx
  char *v5; // rbx
  char *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  size_t v13; // r8
  char *v14; // r14
  char *v15; // r8
  __int64 v16; // r14
  char *v17; // r14
  _QWORD *v18; // [rsp+0h] [rbp-48h]
  size_t v19; // [rsp+0h] [rbp-48h]
  char *v20; // [rsp+8h] [rbp-40h]

  v4 = (char *)a1[1];
  v5 = (char *)*a1;
  v6 = &a2[-*a1];
  v7 = (__int64)&v4[-*a1] >> 3;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_14;
  }
  v8 = 2 * v7;
  v9 = -8;
  if ( v7 > 2 * v7 || v8 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_14:
    v9 = 8 * v8;
LABEL_3:
    v18 = a3;
    v10 = operator new(v9);
    v5 = (char *)*a1;
    v4 = (char *)a1[1];
    a3 = v18;
    v11 = v10;
    v12 = v10 + v9;
    v13 = (size_t)&a2[-*a1];
    goto LABEL_4;
  }
  v13 = (size_t)v6;
  v12 = 0;
  v11 = 0;
LABEL_4:
  v14 = &v6[v11];
  if ( v14 )
    *(_QWORD *)v14 = *a3;
  if ( a2 != v5 )
  {
    v20 = v4;
    v19 = v13;
    memmove((void *)v11, v5, v13);
    v4 = v20;
    v13 = v19;
  }
  v15 = (char *)(v11 + v13 + 8);
  v16 = v4 - a2;
  if ( v4 != a2 )
    v15 = (char *)memcpy(v15, a2, v4 - a2);
  v17 = &v15[v16];
  if ( v5 )
    operator delete(v5);
  *a1 = v11;
  a1[1] = (__int64)v17;
  a1[2] = v12;
}

