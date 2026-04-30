__int64 __fastcall sub_1D0E00(__int64 a1, const char *a2)
{
  const char *v2; // r13
  size_t v3; // r12
  const char *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  const char *v8; // rsi
  char *v9; // rax
  char *v10; // rbx
  size_t v11; // r15
  __int64 v12; // r9
  size_t v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rdi
  __m128i v16; // xmm0
  const char *v17; // rbp
  __int64 user_idadir; // rax
  __int64 v20; // rbx
  size_t v21; // rax
  size_t v22; // r12
  size_t v23; // r13
  char *v24; // rsi
  const char **v25; // [rsp+8h] [rbp-10C0h]
  char *haystack; // [rsp+10h] [rbp-10B8h]
  __int64 v27; // [rsp+18h] [rbp-10B0h]
  size_t v28; // [rsp+20h] [rbp-10A8h]
  __int64 v29; // [rsp+28h] [rbp-10A0h]
  char *v31; // [rsp+40h] [rbp-1088h] BYREF
  __m128i v32; // [rsp+48h] [rbp-1080h]
  __int64 v33; // [rsp+60h] [rbp-1068h] BYREF
  __m128i v34; // [rsp+68h] [rbp-1060h] BYREF
  char v35[4104]; // [rsp+80h] [rbp-1048h] BYREF
  unsigned __int64 v36; // [rsp+1088h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  sub_1A1F60((__int64)&v31, a2);
  v25 = (const char **)&off_85D980;
  do
  {
    v33 = 0;
    v34 = 0;
    v2 = *v25;
    v3 = strlen(*v25);
    haystack = (char *)&s1;
    if ( v32.m128i_i64[0] )
      haystack = v31;
    v4 = haystack;
    v5 = 0;
    while ( 1 )
    {
      v8 = v2;
      v9 = strstr(v4, v2);
      v10 = v9;
      if ( !v9 )
        break;
      v11 = v9 - v4;
      if ( v9 != v4 )
      {
        v12 = v34.m128i_i64[0];
        v13 = v9 - v4;
        if ( v34.m128i_i64[0] )
        {
          v12 = v34.m128i_i64[0] - 1;
          v13 = v11 + v34.m128i_i64[0] - 1;
        }
        v14 = v13 + 1;
        if ( v34.m128i_i64[1] < v13 + 1 )
        {
          v29 = v12;
          v28 = v13;
          v27 = v13 + 1;
          v33 = qvector_reserve(&v33, v5, v14, 1);
          v12 = v29;
          v5 = v33;
          v13 = v28;
          v14 = v27;
        }
        v34.m128i_i64[0] = v14;
        *(_BYTE *)(v5 + v13) = 0;
        memmove((void *)(v12 + v33), v4, v11);
        v5 = v33;
      }
      v6 = v34.m128i_i64[0];
      v7 = 1;
      if ( v34.m128i_i64[0] )
      {
        v7 = v34.m128i_i64[0];
        v6 = v34.m128i_i64[0] - 1;
      }
      if ( v34.m128i_i64[1] < v7 )
      {
        v33 = qvector_reserve(&v33, v5, v7, 1);
        v5 = v33;
      }
      v34.m128i_i64[0] = v7;
      *(_BYTE *)(v5 + v6) = 0;
      v5 = v33;
      v4 = &v10[v3];
    }
    if ( v4 == haystack )
    {
      v15 = v5;
    }
    else
    {
      if ( *v4 && v4 )
      {
        v20 = v34.m128i_i64[0];
        v21 = strlen(v4);
        v22 = v21;
        v23 = v21;
        if ( v20 )
        {
          --v20;
          v23 = v21 + v20;
        }
        if ( v34.m128i_i64[1] < v23 + 1 )
        {
          v33 = qvector_reserve(&v33, v5, v23 + 1, 1);
          v5 = v33;
        }
        v34.m128i_i64[0] = v23 + 1;
        v8 = v4;
        *(_BYTE *)(v5 + v23) = 0;
        memmove((void *)(v33 + v20), v4, v22);
        v5 = v33;
      }
      v15 = (__int64)v31;
      v31 = (char *)v5;
      v16 = _mm_loadu_si128(&v34);
      v33 = v15;
      v34.m128i_i64[1] = v32.m128i_i64[1];
      v32 = v16;
    }
    if ( v15 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v15, v8);
    }
    ++v25;
  }
  while ( &`vtable for'dbgreg_place_t != (__int64 *)v25 );
  if ( v32.m128i_i64[0] > 1uLL )
    goto LABEL_25;
  v24 = "Default";
  if ( dword_8CC5F0 )
    v24 = "Default debugger";
  sub_1CB2E0((__int64 *)&v31, v24);
  if ( v32.m128i_i64[0] )
LABEL_25:
    v17 = v31;
  else
    v17 = &s1;
  user_idadir = get_user_idadir();
  qmakepath(v35, 4096, user_idadir, v17, 0);
  qstrncat(v35, ".lyt", 4096);
  sub_1A1F60(a1, v35);
  if ( v31 )
  {
    v32.m128i_i64[0] = 0;
    qfree(v31, v35);
  }
  return a1;
}
