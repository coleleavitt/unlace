unsigned __int64 __fastcall sub_4DD4C0(__int64 a1, __int64 a2, int a3)
{
  const char *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v6; // rdx
  const char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx
  char *v12; // r14
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // r15
  _QWORD *v19; // rbx
  __int64 v20; // r12
  char *v21; // rax
  _QWORD *v22; // r13
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  const char *v29; // rsi
  _QWORD *v30; // rax
  char *v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  char **p_s2; // [rsp+28h] [rbp-70h] BYREF
  __m128i v34; // [rsp+30h] [rbp-68h] BYREF
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v3 = *(const char **)(a2 + 8);
  v4 = *(_QWORD **)(a1 + 1720);
  v37 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  s2 = nullptr;
  v7 = v3;
  v8 = &v3[v6];
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v8);
  v36 = 0;
  do
  {
    if ( v7 >= v8 )
      goto LABEL_4;
    ++v7;
  }
  while ( *(v7 - 1) );
  v34.m128i_i64[0] = (__int64)v7;
  if ( v3 )
  {
    v14 = strlen(v3);
    v15 = v14;
    if ( v14 )
    {
      v16 = v14 + 1;
      s2 = (char *)qvector_reserve(&s2, 0, v14 + 1, 1);
      *(_QWORD *)&v36 = v16;
      memmove(s2, v3, v15);
      s2[v15] = 0;
      if ( a3 )
        goto LABEL_12;
LABEL_5:
      v9 = (__int64)(v4 + 18);
      v10 = sub_4DA2B0(v9, (__int64)&s2);
      sub_4DA450(v9, (__int64)v10, v11);
      v12 = s2;
      goto LABEL_6;
    }
  }
LABEL_4:
  if ( !a3 )
    goto LABEL_5;
LABEL_12:
  v17 = unpack_dq(&v34);
  v18 = (_QWORD *)v4[20];
  v19 = v4 + 19;
  v32 = v17;
  if ( !v18 )
  {
    v19 = v4 + 19;
    goto LABEL_31;
  }
  v20 = v36;
  v12 = s2;
  v21 = (char *)haystack;
  if ( (_QWORD)v36 )
    v21 = s2;
  v31 = v21;
  while ( 1 )
  {
    v27 = v18[5];
    if ( !v20 )
      break;
    if ( v27 )
      goto LABEL_25;
    v22 = v18;
    v23 = v12;
    v24 = haystack;
LABEL_18:
    v25 = strcmp(v24, v23);
    v26 = (_QWORD *)v18[2];
    v18 = (_QWORD *)v18[3];
    if ( v25 >= 0 )
    {
      v19 = v22;
      v18 = v26;
    }
    if ( !v18 )
      goto LABEL_27;
  }
  if ( v27 )
  {
LABEL_25:
    v24 = (const char *)v18[4];
    v23 = v31;
    v22 = v18;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v28 = v18[2];
    if ( !v28 )
      break;
    v19 = v18;
    v18 = (_QWORD *)v18[2];
    if ( *(_QWORD *)(v28 + 40) )
      goto LABEL_25;
  }
  v19 = v18;
LABEL_27:
  if ( v19 == v4 + 19 )
    goto LABEL_31;
  if ( !v19[5] )
  {
    v29 = haystack;
    if ( !v20 )
      goto LABEL_32;
LABEL_34:
    if ( strcmp(v12, v29) >= 0 )
      goto LABEL_32;
LABEL_31:
    p_s2 = &s2;
    v30 = sub_4DD360(v4 + 18, v19, (__int64 *)&p_s2);
    v12 = s2;
    v19 = v30;
    goto LABEL_32;
  }
  v29 = (const char *)v19[4];
  if ( v20 )
    goto LABEL_34;
  if ( strcmp(haystack, v29) < 0 )
    goto LABEL_31;
LABEL_32:
  v19[7] = v32;
LABEL_6:
  if ( v12 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v12);
  }
  return v37 - __readfsqword(0x28u);
}
