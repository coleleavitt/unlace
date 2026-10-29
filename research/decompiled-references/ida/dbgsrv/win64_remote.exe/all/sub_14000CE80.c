/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000CE80
// Address: 0x000000014000CE80

//----- (000000014000CE80) ----------------------------------------------------
void __fastcall sub_14000CE80(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // r15
  char *v8; // r12
  unsigned __int64 i; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  char *v13; // r12
  const void *v14; // rdx
  size_t v15; // r8
  char *v16; // rcx
  _QWORD *v17; // rcx

  v3 = a1[2];
  v4 = 1;
  if ( v3 )
    v4 = v3;
  while ( v4 - v3 < a2 || v4 < 8 )
  {
    if ( 0x38E38E38E38E38ELL - v4 < v4 )
      unknown_libname_3(v3, a2, 0x38E38E38E38E38ELL);
    v4 *= 2LL;
  }
  v5 = a1[3];
  if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
    sub_140004220();
  v6 = sub_140003060(8 * v4);
  v7 = 8 * v5;
  v8 = (char *)&v6[v5];
  for ( i = v4 >> 1; v4 <= i; v4 *= 2LL )
    ;
  v10 = a1[2];
  v11 = v4 - v10;
  v12 = 8 * v10 - v7;
  memcpy(v8, (const void *)(a1[1] + v7), v12);
  v13 = &v8[v12];
  v14 = (const void *)a1[1];
  if ( v5 > v11 )
  {
    memcpy(v13, v14, 8 * v11);
    memcpy(v6, (const void *)(8 * v11 + a1[1]), v7 - 8 * v11);
    v16 = (char *)v6 + v7 - 8 * v11;
    v15 = 8 * v11;
  }
  else
  {
    memcpy(v13, v14, 8 * v5);
    memset(&v13[v7], 0, 8 * (v11 - v5));
    v15 = 8 * v5;
    v16 = (char *)v6;
  }
  memset(v16, 0, v15);
  v17 = (_QWORD *)a1[1];
  if ( v17 )
  {
    if ( (unsigned __int64)(8LL * a1[2]) >= 0x1000 )
    {
      if ( (unsigned __int64)v17 - *(v17 - 1) - 8 > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v17 = (_QWORD *)*(v17 - 1);
    }
    j_j_free(v17);
  }
  a1[1] = v6;
  a1[2] += v11;
}
// 14000D03D: control flows out of bounds to 14000D042
// 14000D110: using guessed type void __fastcall __noreturn unknown_libname_3(_QWORD, _QWORD, _QWORD);
