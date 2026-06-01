unsigned __int64 __fastcall sub_4C65F0(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v6; // rdx
  char *v7; // rax
  char *v8; // rdx
  int v9; // eax
  char *v10; // r15
  char *v11; // rbx
  __int64 v12; // r12
  char *v13; // r14
  char *v14; // rax
  char *v15; // r13
  const char *v16; // rsi
  const char *v17; // rdi
  int v18; // eax
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  size_t v22; // rax
  size_t v23; // r13
  size_t v24; // r14
  __int64 v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rdx
  const char *v29; // rsi
  char *v30; // rax
  char *v31; // [rsp+8h] [rbp-90h]
  int v32; // [rsp+14h] [rbp-84h]
  char **p_s2; // [rsp+28h] [rbp-70h] BYREF
  __m128i v34; // [rsp+30h] [rbp-68h] BYREF
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v3 = *(char **)(a2 + 8);
  v4 = *(_QWORD **)(a1 + 1528);
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
  if ( v3 && (v22 = strlen(v3), (v23 = v22) != 0) )
  {
    v24 = v22 + 1;
    s2 = (char *)qvector_reserve(&s2, 0, v22 + 1, 1);
    *(_QWORD *)&v36 = v24;
    memmove(s2, v3, v23);
    s2[v23] = 0;
    if ( a3 )
      goto LABEL_22;
  }
  else
  {
LABEL_4:
    if ( a3 )
    {
LABEL_22:
      v25 = (__int64)(v4 + 17);
      v26 = sub_4C3150(v25, (__int64)&s2);
      sub_4C32F0(v25, (__int64)v26, v27);
      v13 = s2;
      goto LABEL_23;
    }
  }
  v9 = unpack_dd(&v34);
  v10 = (char *)v4[19];
  v11 = (char *)(v4 + 18);
  v32 = v9;
  if ( !v10 )
  {
    v11 = (char *)(v4 + 18);
    goto LABEL_31;
  }
  v12 = v36;
  v13 = s2;
  v14 = (char *)haystack;
  if ( (_QWORD)v36 )
    v14 = s2;
  v31 = v14;
  while ( 1 )
  {
    v20 = *((_QWORD *)v10 + 5);
    if ( !v12 )
      break;
    if ( v20 )
      goto LABEL_18;
    v15 = v10;
    v16 = v13;
    v17 = haystack;
LABEL_11:
    v18 = strcmp(v17, v16);
    v19 = *((char **)v10 + 2);
    v10 = *((char **)v10 + 3);
    if ( v18 >= 0 )
    {
      v11 = v15;
      v10 = v19;
    }
    if ( !v10 )
      goto LABEL_27;
  }
  if ( v20 )
  {
LABEL_18:
    v17 = *((const char **)v10 + 4);
    v16 = v31;
    v15 = v10;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v21 = *((_QWORD *)v10 + 2);
    if ( !v21 )
      break;
    v11 = v10;
    v10 = *((char **)v10 + 2);
    if ( *(_QWORD *)(v21 + 40) )
      goto LABEL_18;
  }
  v11 = v10;
LABEL_27:
  if ( v4 + 18 == (_QWORD *)v11 )
    goto LABEL_31;
  if ( !*((_QWORD *)v11 + 5) )
  {
    v29 = haystack;
    if ( !v12 )
      goto LABEL_32;
LABEL_34:
    if ( strcmp(v13, v29) >= 0 )
      goto LABEL_32;
LABEL_31:
    p_s2 = &s2;
    v30 = (char *)sub_4C6200(v4 + 17, v11, (__int64 *)&p_s2);
    v13 = s2;
    v11 = v30;
    goto LABEL_32;
  }
  v29 = *((const char **)v11 + 4);
  if ( v12 )
    goto LABEL_34;
  if ( strcmp(haystack, v29) < 0 )
    goto LABEL_31;
LABEL_32:
  *((_DWORD *)v11 + 14) = v32;
LABEL_23:
  if ( v13 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v13);
  }
  return v37 - __readfsqword(0x28u);
}

