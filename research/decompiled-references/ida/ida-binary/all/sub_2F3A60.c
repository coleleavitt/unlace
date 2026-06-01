__int64 *__fastcall metadata_dumper_t__::vfunc_5(__int64 a1, int **a2, char a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  const char *v9; // rdx
  __int64 v10; // rdi
  __int64 *result; // rax
  int *v12; // rbx
  __int64 v13; // r12
  const char *v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // edx
  __int64 *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax

  v6 = *(__int64 **)(a1 + 56);
  v7 = v6[1];
  v8 = *v6;
  if ( v6[2] < (unsigned __int64)(v7 + 1) )
  {
    v22 = qvector_reserve(*(_QWORD *)(a1 + 56), v8, v7 + 1, 24);
    v7 = v6[1];
    *v6 = v22;
    v8 = v22;
  }
  v9 = "regular";
  v10 = v8 + 24 * v7;
  *(_QWORD *)v10 = 0;
  *(_OWORD *)(v10 + 8) = 0;
  ++v6[1];
  if ( a3 )
    v9 = "repeatable";
  result = sub_169A50((__int64 *)v10, (__int64)"Comments (%s)", v9);
  v12 = *a2;
  v13 = (__int64)&(*a2)[8 * (_QWORD)a2[1]];
  if ( (int *)v13 != *a2 )
  {
    do
    {
      v18 = *(__int64 **)(a1 + 56);
      v19 = v18[1];
      v20 = *v18;
      if ( v18[2] < (unsigned __int64)(v19 + 1) )
      {
        v21 = qvector_reserve(*(_QWORD *)(a1 + 56), v20, v19 + 1, 24);
        v19 = v18[1];
        *v18 = v21;
        v20 = v21;
      }
      v14 = &s1;
      v15 = v20 + 24 * v19;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      ++v18[1];
      if ( *((_QWORD *)v12 + 2) )
        v14 = *((const char **)v12 + 1);
      v16 = v12[1];
      v17 = *v12;
      v12 += 8;
      result = sub_169A50((__int64 *)v15, (__int64)"  @ %u+0x%x \"%s\"", v17, v16, v14);
    }
    while ( (int *)v13 != v12 );
  }
  return result;
}
