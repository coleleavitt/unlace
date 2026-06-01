__int64 __fastcall sub_775C30(void *a1, const char *a2)
{
  __int64 v2; // rbp
  const char *v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  const char *v6; // rdx
  int v7; // r12d
  const char *v8; // rax
  __int64 v9; // rax
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // r14
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v2 = (__int64)a1;
  v3 = *(const char **)a2;
  v4 = *((_QWORD *)a2 + 1);
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
  if ( !v3 || (a1 = (void *)v3, v10 = strlen(v3), (v11 = v10) == 0) )
  {
LABEL_6:
    *(_QWORD *)(v2 + 8) = 0;
    goto LABEL_7;
  }
  a1 = *(void **)v2;
  v12 = v10 + 1;
  if ( *(_QWORD *)(v2 + 16) < v10 + 1 )
  {
    v13 = qvector_reserve(v2, *(_QWORD *)v2, v10 + 1, 1);
    *(_QWORD *)v2 = v13;
    a1 = (void *)v13;
  }
  *(_QWORD *)(v2 + 8) = v12;
  a2 = v3;
  memmove(a1, v3, v11);
  *(_BYTE *)(*(_QWORD *)v2 + v11) = 0;
LABEL_7:
  if ( (unsigned __int8)is_cvt64(a1, a2, v6) )
  {
    v9 = (unsigned int)unpack_dd(&v14);
    if ( (unsigned int)v9 == 0xFFFFFFFFLL )
      v9 = -1;
  }
  else
  {
    v9 = unpack_dq(&v14);
  }
  *(_QWORD *)(v2 + 160) = v9;
  *(_DWORD *)(v2 + 168) = unpack_dd(&v14) & 0xFFFFFFFC;
  return sub_775500(v2, (std::__detail::_Prime_rehash_policy *)&v14, v7);
}
