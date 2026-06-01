unsigned __int64 __fastcall sub_19AA60(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  const char *v5; // r14
  char *v6; // rbx
  const char *v7; // rbp
  char *v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  size_t v11; // r8
  __int64 v12; // r15
  size_t v13; // r9
  __int64 v14; // rdx
  char *v15; // rdi
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rdi
  const char *v18; // rdx
  const char *v19; // rsi
  const char *v21; // rax
  const char *v22; // rbx
  size_t v23; // rax
  size_t v24; // rbp
  const void *v25; // rbp
  void *v26; // rdi
  unsigned __int64 v27; // r14
  __int64 v28; // rbx
  size_t v29; // rax
  size_t v30; // r14
  size_t v31; // r15
  __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-90h]
  size_t v34; // [rsp+10h] [rbp-88h]
  char *dest; // [rsp+20h] [rbp-78h]
  unsigned __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  __m128i v38; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  a1[1] = 0;
  *a1 = &off_235FB8;
  if ( (*(_BYTE *)(a2 + 114) & 4) != 0 )
    return v39 - __readfsqword(0x28u);
  dest = nullptr;
  v36 = 0;
  if ( *(int *)(a2 + 164) > 0 )
  {
    v21 = (const char *)itext();
    v22 = v21;
    if ( !v21 || (v23 = strlen(v21), (v24 = v23) == 0) )
    {
      v4 = *(_QWORD *)(a2 + 184);
      v36 = 0;
      if ( v4 <= 1 )
        goto LABEL_4;
      goto LABEL_35;
    }
    v26 = nullptr;
    v27 = v23 + 1;
    if ( v23 != -1 )
    {
      dest = (char *)qvector_reserve();
      v26 = dest;
    }
    v36 = v27;
    memmove(v26, v22, v24);
    dest[v24] = 0;
    if ( v27 > 1 )
    {
      v37 = 0;
      v38 = 0;
      goto LABEL_42;
    }
  }
  v4 = *(_QWORD *)(a2 + 184);
  if ( v4 <= 1 )
    goto LABEL_4;
LABEL_35:
  v25 = *(const void **)(a2 + 176);
  dest = (char *)qvector_reserve();
  v36 = v4;
  memmove(dest, v25, v4 - 1);
  dest[v4 - 1] = 0;
LABEL_4:
  v37 = 0;
  v38 = 0;
  if ( !v36 )
  {
    v5 = s1;
    v6 = nullptr;
    goto LABEL_6;
  }
LABEL_42:
  v5 = dest;
  v6 = strchr(dest, 126);
LABEL_6:
  v7 = v5;
  v8 = nullptr;
  while ( v6 )
  {
    v11 = v6 - v7;
    if ( v6 != v7 )
    {
      v12 = v38.m128i_i64[0];
      v13 = v6 - v7;
      if ( v38.m128i_i64[0] )
      {
        v12 = v38.m128i_i64[0] - 1;
        v13 = v11 + v38.m128i_i64[0] - 1;
      }
      v14 = v13 + 1;
      if ( v38.m128i_i64[1] < v13 + 1 )
      {
        v34 = v13;
        v33 = v13 + 1;
        v37 = qvector_reserve();
        v11 = v6 - v7;
        v8 = (char *)v37;
        v13 = v34;
        v14 = v33;
      }
      v38.m128i_i64[0] = v14;
      v8[v13] = 0;
      memmove((void *)(v12 + v37), v7, v11);
      v8 = (char *)v37;
    }
    v9 = v38.m128i_i64[0];
    v10 = 1;
    if ( v38.m128i_i64[0] )
    {
      v10 = v38.m128i_i64[0];
      v9 = v38.m128i_i64[0] - 1;
    }
    if ( v38.m128i_i64[1] < v10 )
    {
      v37 = qvector_reserve();
      v8 = (char *)v37;
    }
    v38.m128i_i64[0] = v10;
    v8[v9] = 0;
    v7 = v6 + 1;
    v8 = (char *)v37;
    v6 = strchr(v6 + 1, 126);
  }
  if ( v7 == v5 )
  {
    v15 = v8;
  }
  else
  {
    if ( *v7 && v7 )
    {
      v28 = v38.m128i_i64[0];
      v29 = strlen(v7);
      v30 = v29;
      v31 = v29;
      if ( v38.m128i_i64[0] )
      {
        v28 = v38.m128i_i64[0] - 1;
        v31 = v29 + v38.m128i_i64[0] - 1;
      }
      v32 = v31 + 1;
      if ( v38.m128i_i64[1] < v31 + 1 )
      {
        v37 = qvector_reserve();
        v32 = v31 + 1;
        v8 = (char *)v37;
      }
      v38.m128i_i64[0] = v32;
      v8[v31] = 0;
      memmove((void *)(v37 + v28), v7, v30);
      v8 = (char *)v37;
    }
    v15 = dest;
    dest = v8;
    v16 = _mm_loadu_si128(&v38).m128i_u64[0];
    v38.m128i_i64[1] = 0;
    v36 = v16;
  }
  if ( v15 )
  {
    v38.m128i_i64[0] = 0;
    qfree();
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  if ( v36 )
    v18 = dest;
  else
    v18 = s1;
  if ( *(_QWORD *)(a2 + 48) )
    v19 = *(const char **)(a2 + 40);
  else
    v19 = s1;
  a1[1] = (*(__int64 (__fastcall **)(__int64, const char *, const char *))(*(_QWORD *)v17 + 80LL))(v17, v19, v18);
  if ( dest )
    qfree();
  return v39 - __readfsqword(0x28u);
}

