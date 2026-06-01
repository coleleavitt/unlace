__int64 __fastcall sub_755730(__int64 a1, __int64 a2)
{
  const char *v3; // rbp
  __int64 v4; // rbx
  __int64 result; // rax
  const char *v6; // rbx
  int v7; // r13d
  const char *v8; // rax
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // rdi
  size_t v12; // rbx
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v3 = *(const char **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v15 = __readfsqword(0x28u);
  result = 0;
  v6 = &v3[v4];
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v6);
  if ( v3 >= v6 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *(unsigned __int8 *)v3;
    v14.m128i_i64[0] = (__int64)++v3;
    if ( (unsigned __int8)v7 > 1u )
      return result;
  }
  v8 = v3;
  do
  {
    if ( v8 >= v6 )
      goto LABEL_6;
    ++v8;
  }
  while ( *(v8 - 1) );
  v14.m128i_i64[0] = (__int64)v8;
  if ( !v3 || (v9 = strlen(v3), (v10 = v9) == 0) )
  {
LABEL_6:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  v11 = *(void **)a1;
  v12 = v9 + 1;
  if ( *(_QWORD *)(a1 + 16) < v9 + 1 )
  {
    v13 = qvector_reserve(a1, *(_QWORD *)a1, v9 + 1, 1);
    *(_QWORD *)a1 = v13;
    v11 = (void *)v13;
  }
  *(_QWORD *)(a1 + 8) = v12;
  memmove(v11, v3, v10);
  *(_BYTE *)(*(_QWORD *)a1 + v10) = 0;
LABEL_7:
  *(_DWORD *)(a1 + 160) = unpack_dd(&v14);
  *(_DWORD *)(a1 + 164) = unpack_dd(&v14) & 0xFFFFFFFC;
  return sub_755080(a1, &v14, v7);
}

