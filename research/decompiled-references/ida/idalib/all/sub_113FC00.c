char *__fastcall sub_113FC00(char **a1, char *a2)
{
  char *v2; // rbx
  char *v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  char *v9; // r13
  char *v10; // r12
  char **v11; // r15
  char *v12; // rax
  char *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  char *s; // [rsp+8h] [rbp-40h]

  v2 = a1[1];
  if ( v2 != a1[2] )
  {
    *(_QWORD *)v2 = a2;
    *((_QWORD *)v2 + 1) = strlen(a2);
    a1[1] = v2 + 16;
    return v2;
  }
  v4 = *a1;
  v5 = v2 - *a1;
  v6 = v5 >> 4;
  if ( v5 >> 4 )
  {
    v7 = 2 * v6;
    v8 = -16;
    if ( v6 <= 2 * v6 && v7 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( !v7 )
      {
        v16 = 16;
        v10 = nullptr;
        v9 = nullptr;
        goto LABEL_7;
      }
      v8 = 32 * v6;
    }
  }
  else
  {
    v8 = 16;
  }
  s = a2;
  v9 = (char *)operator new(v8);
  v10 = &v9[v8];
  v16 = (__int64)(v9 + 16);
LABEL_7:
  v11 = (char **)&v9[v5];
  *v11 = a2;
  v11[1] = (char *)strlen(a2);
  if ( v2 == v4 )
  {
    v2 = v9;
  }
  else
  {
    v12 = v4;
    v13 = v9;
    do
    {
      v14 = *(_QWORD *)v12;
      v15 = *((_QWORD *)v12 + 1);
      v12 += 16;
      v13 += 16;
      *((_QWORD *)v13 - 2) = v14;
      *((_QWORD *)v13 - 1) = v15;
    }
    while ( v2 != v12 );
    v2 = &v9[((v2 - 16 - v4) & 0xFFFFFFFFFFFFFFF0LL) + 16];
    v16 = (__int64)(v2 + 16);
  }
  if ( v4 )
    operator delete(v4);
  s = v9;
  a1[2] = v10;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v16);
  return v2;
}
