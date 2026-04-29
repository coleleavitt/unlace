signed __int64 __fastcall sub_3809D0(__int64 a1)
{
  const char *v1; // r13
  char *v3; // rax
  char v4; // dl
  char *v5; // r12
  int v6; // ecx
  char *v7; // rax
  char *v8; // rsi
  size_t v9; // rbx
  __int64 v10; // rax
  signed __int64 v11; // r12
  __int64 v13; // r14
  char *v14; // rdi
  char *v15; // rsi
  const char *v16; // rax
  __int64 v17; // rdx
  const char *v18; // rcx
  __m128i v19; // xmm0
  const char *v20; // [rsp+0h] [rbp-48h] BYREF
  __m128i v21; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v1 = *(const char **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v3 = sub_37F170(*(const char **)a1);
  if ( !v3 )
    return 0;
  v4 = v3[1];
  v5 = v3 + 1;
  v6 = 1;
  v7 = v3 + 1;
  if ( !v4 )
  {
    v20 = nullptr;
    v21 = 0;
    goto LABEL_17;
  }
  do
  {
    while ( 1 )
    {
      v8 = v7++;
      if ( v4 != 40 )
        break;
      v4 = *v7;
      ++v6;
      if ( !*v7 )
        goto LABEL_9;
    }
    if ( v4 == 41 && !--v6 )
      break;
    v4 = *v7;
  }
  while ( *v7 );
LABEL_9:
  v20 = nullptr;
  v9 = v8 - v5;
  v21 = 0;
  if ( v8 != v5 )
  {
    v13 = v9 + 1;
    if ( v9 != -1 )
    {
      v20 = (const char *)qvector_reserve(&v20, 0, v9 + 1, 1);
      v14 = (char *)v20;
      goto LABEL_18;
    }
LABEL_17:
    v9 = -1;
    v13 = 0;
    v14 = nullptr;
LABEL_18:
    v15 = v5;
    v21.m128i_i64[0] = v13;
    v11 = v5 - v1;
    memmove(v14, v15, v9);
    v20[v9] = 0;
    v17 = *(_QWORD *)(a1 + 16);
    v18 = v20;
    v19 = _mm_loadu_si128(&v21);
    v20 = *(const char **)a1;
    v16 = v20;
    *(_QWORD *)a1 = v18;
    v21.m128i_i64[1] = v17;
    *(__m128i *)(a1 + 8) = v19;
    if ( !v16 )
      return v11;
    v1 = v16;
    goto LABEL_11;
  }
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = 0;
  v11 = v5 - v1;
  v20 = v1;
  v21.m128i_i64[1] = v10;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_11:
  v21.m128i_i64[0] = 0;
  qfree(v1);
  return v11;
}
