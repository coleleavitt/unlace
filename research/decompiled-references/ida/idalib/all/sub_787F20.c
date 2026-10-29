__int64 __fastcall sub_787F20(__m128i *a1, const char *a2)
{
  bool v3; // zf
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbp
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // rbp
  const char *v12; // rdi
  int v13; // eax
  __int8 v14; // dl
  __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 result; // rax
  size_t v23; // rdx
  _BYTE *v24; // rsi
  __int64 v25; // rbp
  size_t v26; // r15
  __int64 *v27; // [rsp+8h] [rbp-90h]
  unsigned int v28; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+10h] [rbp-88h] BYREF
  __int128 v30; // [rsp+18h] [rbp-80h]
  char v31[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v3 = a1[7].m128i_i64[1] == 0;
  v34 = __readfsqword(0x28u);
  if ( !v3 )
    sub_781BB0((__m128i *)a1[7].m128i_i64);
  v27 = &a1[8].m128i_i64[1];
  if ( a1[9].m128i_i64[0] )
    sub_781BB0(&a1[8].m128i_i64[1]);
  if ( a1[10].m128i_i64[1] )
    sub_781BB0((__m128i *)a1[10].m128i_i64);
  v5 = a1[27].m128i_i64[0];
  if ( v5 )
  {
    v31[0] = 2;
    v6 = 0;
    v33 = 0;
    v32 = 0;
    do
    {
      v7 = v6++;
      free_idcv(a1[26].m128i_i64[1] + 32 * v7);
    }
    while ( v5 != v6 );
    a1[27].m128i_i64[0] = 0;
    free_idcv(v31);
  }
  sub_787E10(a1[14].m128i_i64, 0);
  sub_787E10(&a1[15].m128i_i64[1], 0);
  sub_787E10(a1[17].m128i_i64, 0);
  sub_787E10(&a1[18].m128i_i64[1], 0);
  if ( a1[20].m128i_i64[1] )
    a1[20].m128i_i64[1] = 0;
  if ( a1[22].m128i_i64[0] )
    a1[22].m128i_i64[0] = 0;
  sub_787E90(a1[23].m128i_i64, 0);
  sub_787E90(&a1[24].m128i_i64[1], 0);
  v8 = a1[11].m128i_i64[1];
  a1[13].m128i_i32[2] = 0;
  a1[28].m128i_i32[0] = -1;
  if ( !v8 )
  {
    v15 = sub_78D1E0(a1[6].m128i_i64[1], a2);
    if ( v15 != -1 )
    {
LABEL_32:
      v21 = *(_QWORD *)(*(_QWORD *)a1[6].m128i_i64[1] + 8 * v15);
      a1[13].m128i_i8[4] = -90;
      a1[13].m128i_i32[0] = 0;
      a1[12] = _mm_unpacklo_epi64((__m128i)v21, (__m128i)(v21 + 32));
      if ( *(_DWORD *)(v21 + 136) != -1 )
      {
        if ( !under_debugger )
          interr(484);
        BUG();
      }
      return 0;
    }
LABEL_39:
    set_error_string(0, a2);
    return set_qerrno(40);
  }
  src = nullptr;
  v30 = 0;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
    *(_QWORD *)&v30 = v10;
    memmove(src, a2, v11);
    *((_BYTE *)src + v11) = 0;
    v8 = a1[11].m128i_i64[1];
  }
  v12 = haystack;
  if ( *(_QWORD *)(v8 + 64) )
    v12 = *(const char **)(v8 + 56);
  v13 = strcmp(v12, a2);
  v14 = a1[13].m128i_i8[12];
  if ( !v13 )
  {
    if ( !v14 )
    {
      a1[13].m128i_i32[2] = 1;
      goto LABEL_22;
    }
    v23 = v30;
    v24 = src;
    if ( (_QWORD)v30 )
    {
      v25 = v30 + 1;
      v26 = v30 - 1;
      if ( *((_QWORD *)&v30 + 1) >= (unsigned __int64)(v30 + 1) )
        goto LABEL_44;
    }
    else
    {
      if ( *((_QWORD *)&v30 + 1) > 1u )
      {
        *(_QWORD *)&v30 = 2;
        *((_BYTE *)src + 1) = 0;
LABEL_46:
        *(_BYTE *)src = 126;
        v8 = a1[11].m128i_i64[1];
        a1[13].m128i_i32[2] = 2;
        goto LABEL_22;
      }
      v26 = 0;
      v25 = 2;
    }
    src = (void *)qvector_reserve(&src, src, v25, 1);
    v24 = src;
    v23 = v26 + 1;
LABEL_44:
    *(_QWORD *)&v30 = v25;
    v24[v23] = 0;
    if ( v26 )
      memmove((char *)src + 1, src, v26);
    goto LABEL_46;
  }
  if ( !v14 )
  {
LABEL_22:
    v15 = sub_78EEC0(v8, a1[6].m128i_i64[1], &src);
    if ( v15 != -1 )
    {
      if ( a1[13].m128i_i32[2] == 2 )
        *(_DWORD *)(a1[11].m128i_i64[1] + 88) = v15;
      v16 = a1[9].m128i_u64[0];
      if ( v16 )
      {
        v17 = a1[8].m128i_i64[1];
        v18 = 0;
        v19 = 0;
        while ( 1 )
        {
          v20 = v17 + 24 * v19;
          if ( *(_QWORD *)(v20 + 8) )
          {
            if ( !strcmp(*(const char **)v20, "this") )
              break;
          }
          v19 = ++v18;
          if ( v18 >= v16 )
            goto LABEL_37;
        }
      }
      else
      {
LABEL_37:
        sub_783C00(v27, "this");
      }
      if ( src )
      {
        *(_QWORD *)&v30 = 0;
        qfree(src);
      }
      goto LABEL_32;
    }
    if ( src )
    {
      *(_QWORD *)&v30 = 0;
      qfree(src);
    }
    goto LABEL_39;
  }
  result = set_qerrno(1584);
  if ( src )
  {
    v28 = result;
    *(_QWORD *)&v30 = 0;
    qfree(src);
    return v28;
  }
  return result;
}
