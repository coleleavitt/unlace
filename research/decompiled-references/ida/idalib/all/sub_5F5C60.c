int __fastcall sub_5F5C60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  char *v4; // rbp
  size_t v5; // rax
  __int64 v6; // r15
  size_t v7; // r12
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  char *v13; // r12
  __int64 v14; // r15
  char *v15; // rcx
  __int64 v16; // r14
  const char *v17; // rsi
  const char *v18; // rdi
  int result; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  char *v26; // [rsp+0h] [rbp-78h]
  int v27; // [rsp+0h] [rbp-78h]
  __int64 *v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  __m128i v32; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v33 = __readfsqword(0x28u);
  v4 = *(char **)(a1 + 48);
  v32 = 0;
  s2 = nullptr;
  if ( v4 )
  {
    v5 = strlen(v4);
    v6 = v5 + 1;
    v7 = v5;
    s2 = (char *)qvector_reserve(&s2, 0, v5 + 1, 1);
    v32.m128i_i64[0] = v6;
    memmove(s2, v4, v7);
    s2[v7] = 0;
    if ( !a2 )
      goto LABEL_3;
  }
  else if ( !a2 )
  {
    v8 = 6;
    v9 = 5;
LABEL_28:
    s2 = (char *)qvector_reserve(&s2, v4, v8, 1);
    v4 = s2;
    goto LABEL_6;
  }
  sub_35A910((__int64 *)&s2);
LABEL_3:
  v3 = v32.m128i_i64[0];
  v8 = 6;
  v9 = 5;
  v4 = s2;
  if ( v32.m128i_i64[0] )
  {
    v9 = v32.m128i_i64[0] + 4;
    v8 = v32.m128i_i64[0] + 5;
    v3 = v32.m128i_i64[0] - 1;
  }
  if ( v32.m128i_i64[1] < v8 )
    goto LABEL_28;
LABEL_6:
  v32.m128i_i64[0] = v8;
  v4[v9] = 0;
  v10 = &s2[v3];
  *(_DWORD *)v10 = 1651799647;
  v10[4] = 108;
  v28 = *(__int64 **)(a1 + 40);
  v11 = v28[1];
  v29 = *v28;
  if ( v11 )
  {
    v12 = v32.m128i_i64[0];
    v13 = s2;
    v14 = *v28 + 56;
    v15 = (char *)haystack;
    if ( v32.m128i_i64[0] )
      v15 = s2;
    v16 = 0;
    v26 = v15;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v14 + 8);
      if ( !v12 )
        break;
      v17 = v13;
      v18 = haystack;
      if ( v20 )
        goto LABEL_15;
LABEL_11:
      result = strcmp(v18, v17);
      if ( !result )
        goto LABEL_22;
      ++v16;
      v14 += 88;
      if ( v16 == v11 )
      {
        v21 = v11 + 1;
        goto LABEL_18;
      }
    }
    if ( !v20 )
    {
      result = 0;
      goto LABEL_22;
    }
LABEL_15:
    v18 = *(const char **)v14;
    v17 = v26;
    goto LABEL_11;
  }
  v21 = 1;
LABEL_18:
  if ( v28[2] < v21 )
  {
    v25 = qvector_reserve(v28, v29, v21, 88);
    *v28 = v25;
    v11 = v28[1];
    v29 = v25;
  }
  v22 = v29 + 88 * v11;
  *(_QWORD *)v22 = 0;
  *(_QWORD *)(v22 + 40) = 0;
  *(_QWORD *)(v22 + 48) = 1;
  *(_QWORD *)(v22 + 56) = 0;
  *(_BYTE *)(v22 + 80) = 0;
  *(_OWORD *)(v22 + 8) = 0;
  *(_OWORD *)(v22 + 24) = 0;
  *(_OWORD *)(v22 + 64) = 0;
  ++v28[1];
  if ( (unsigned __int8)get_tinfo_details(*a3, 13, v22) )
  {
    v13 = *(char **)(v22 + 56);
    v23 = *(_QWORD *)(v22 + 72);
    *(_QWORD *)(v22 + 56) = s2;
    result = 0;
    v24 = _mm_loadu_si128(&v32);
    *(_DWORD *)(v22 + 44) = 256;
    s2 = v13;
    v32.m128i_i64[1] = v23;
    *(__m128i *)(v22 + 64) = v24;
  }
  else
  {
    v13 = s2;
    result = -1;
  }
LABEL_22:
  if ( v13 )
  {
    v27 = result;
    v32.m128i_i64[0] = 0;
    qfree(v13);
    return v27;
  }
  return result;
}
