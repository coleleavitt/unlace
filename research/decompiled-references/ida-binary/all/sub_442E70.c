__int64 __fastcall sub_442E70(__int64 a1, __int64 *a2, _QWORD *a3)
{
  const char **v5; // r12
  const char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r14
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rdi
  const char *v12; // rsi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 472) || *a3 == -1 && a3[1] )
    return 0;
  v5 = *(const char ***)(a1 + 216);
  if ( v5 )
  {
    if ( !a2 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(const char ***)(a1 + 208);
    if ( !a2 )
      goto LABEL_8;
  }
  v15 = 0;
  v16 = 0;
  v6 = *v5;
  dirtree_get_abspath_by_cursor(&v15, *v5, a3, 0);
  v7 = *a2;
  v8 = v15;
  v15 = 0;
  v9 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v7 )
  {
    a2[1] = 0;
    v14 = v9;
    qfree(v7, v6);
    v10 = _mm_load_si128(&v14);
    v11 = v15;
    *a2 = v8;
    *(__m128i *)(a2 + 1) = v10;
    if ( v11 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v11, v6);
    }
  }
  else
  {
    *a2 = v8;
    *(__m128i *)(a2 + 1) = v9;
  }
LABEL_8:
  v12 = *v5;
  v16.m128i_i8[0] = 0;
  v15 = -1;
  dirtree_resolve_cursor(&v15, v12, a3);
  if ( v15 != -1 )
    return v16.m128i_u8[0] ^ 1u;
  return 0;
}
