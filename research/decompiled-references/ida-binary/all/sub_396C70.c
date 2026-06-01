__int64 __fastcall sub_396C70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // rbp
  double v8; // xmm0_8
  __int64 v9; // rax
  int *v10; // rsi
  __int64 v11; // rbx
  char *v12; // rdi
  bool v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v17; // rax
  void *src; // [rsp+0h] [rbp-68h] BYREF
  int v19[4]; // [rsp+8h] [rbp-60h]
  int v20; // [rsp+18h] [rbp-50h]
  int v21[2]; // [rsp+20h] [rbp-48h] BYREF
  int v22[4]; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v4 = *(const char **)(a1 + 40);
  v23 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)v19 = 0;
  if ( v4 )
  {
    v5 = strlen(v4);
    v6 = v5 + 1;
    v7 = v5;
    src = (void *)qvector_reserve(&src, 0, v5 + 1, 1);
    *(_QWORD *)v19 = v6;
    memmove(src, v4, v7);
    *((_BYTE *)src + v7) = 0;
  }
  v8 = 0.0;
  *(_QWORD *)v21 = 0;
  *(_OWORD *)v22 = 0;
  if ( a2 != -1 )
  {
    v9 = qvector_reserve(v21, 0, 1, 8);
    a3 = *(_QWORD *)v22;
    *(_QWORD *)v21 = v9;
    *(_QWORD *)(v9 + 8LL * (*(_QWORD *)v22)++) = a2;
  }
  v10 = v21;
  v11 = sub_4AED50(a1, v21, a3, a4);
  if ( *(_QWORD *)v21 )
  {
    *(_QWORD *)v22 = 0;
    v8 = qfree(*(_QWORD *)v21, (const char *)v21);
  }
  v12 = (char *)&s1;
  v13 = v11 == 0;
  if ( *(_QWORD *)v19 )
    v12 = (char *)src;
  v14 = sub_4A0300(v12, (__int64)src, v19[0], v19[2], v20, v21[0], v22[0], *(__int64 *)&v22[2]);
  v15 = v14;
  if ( v14 && v13 )
  {
    v17 = *(_QWORD *)(v14 + 2488);
    *(_QWORD *)v22 = 0;
    *(_QWORD *)v21 = v17;
    sub_534250(v21, 0, 0, v8);
    sub_534250(v21, unk_8CA8B8, 0, v8);
    sub_534250(v21, unk_8CA8C0, 0, v8);
    v10 = (int *)unk_8CA8C8;
    sub_534250(v21, unk_8CA8C8, 0, v8);
  }
  if ( src )
  {
    *(_QWORD *)v19 = 0;
    qfree(src, (const char *)v10);
  }
  return v15;
}
