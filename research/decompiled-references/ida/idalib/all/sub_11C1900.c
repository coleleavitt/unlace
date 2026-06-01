void __fastcall sub_11C1900(__int64 a1, __int64 a2, char *a3, const char *a4)
{
  char *v5; // rax
  const char *v6; // rbp
  size_t v7; // r14
  unsigned __int64 v8; // rbx
  size_t v9; // rax
  size_t v10; // r15
  bool v11; // r14
  _BYTE *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __m128i *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __m128i *v22; // rax
  __int64 v23; // rax
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+28h] [rbp-F0h]
  void *v31[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v32[16]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v35; // [rsp+70h] [rbp-A8h]
  __m128i v36; // [rsp+80h] [rbp-98h] BYREF
  __m128i v37; // [rsp+90h] [rbp-88h] BYREF
  __int16 v38; // [rsp+A0h] [rbp-78h]
  __m128i v39[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v40; // [rsp+D0h] [rbp-48h]

  v5 = getenv(a4);
  if ( !v5 )
    return;
  v6 = v5;
  v7 = j__strlen("-I");
  v8 = j__strlen(v6);
  if ( !a3 )
  {
    if ( !v7 )
      goto LABEL_6;
    v11 = 1;
LABEL_25:
    if ( v8 )
      goto LABEL_7;
    return;
  }
  v9 = j__strlen(a3);
  v10 = v9;
  if ( v9 != v7 )
  {
    if ( v9 != j__strlen("-L") )
    {
LABEL_50:
      v11 = v10 == 0;
      goto LABEL_25;
    }
    if ( !v10 )
      goto LABEL_6;
LABEL_49:
    if ( !memcmp(a3, "-L", v10) )
      goto LABEL_6;
    goto LABEL_50;
  }
  if ( v9 && memcmp(a3, "-I", v9) )
  {
    if ( v10 != j__strlen("-L") )
    {
      v11 = 0;
      goto LABEL_25;
    }
    goto LABEL_49;
  }
LABEL_6:
  v11 = 1;
  if ( !v8 )
    return;
LABEL_7:
  while ( 1 )
  {
    v12 = memchr(v6, 58, v8);
    if ( !v12 )
      break;
    v13 = v12 - v6;
    if ( v13 == -1 )
      break;
    if ( v13 )
    {
      v18 = v13;
      v17 = v13 + 1;
      if ( v8 <= v13 )
        v18 = v8;
      if ( v11 )
      {
        v36.m128i_i64[1] = v18;
        v38 = 261;
        v36.m128i_i64[0] = (__int64)v6;
        sub_11BA9A0(v31, a3);
        v35 = 260;
        v33.m128i_i64[0] = (__int64)v31;
        sub_A41580(v39, &v33, &v36, v19, v20, 260);
        v21 = sub_10DA6C0(a1, (__int64)v39);
        sub_10DC5D0(a2, v21);
        if ( v31[0] != v32 )
          operator delete(v31[0]);
      }
      else
      {
        v30 = v18;
        sub_10DC5D0(a2, (__int64)a3);
        v40 = 261;
        v39[0].m128i_i64[0] = (__int64)v6;
        v39[0].m128i_i64[1] = v30;
        v25 = sub_10DA6C0(a1, (__int64)v39);
        sub_10DC5D0(a2, v25);
      }
      if ( v8 < v17 )
      {
        if ( v11 )
        {
LABEL_34:
          sub_11BA9A0(&v33, a3);
          if ( v33.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
LABEL_55:
            std::__throw_length_error("basic_string::append");
          v22 = (__m128i *)sub_9EE560(&v33, ".", 1u);
          v36.m128i_i64[0] = (__int64)&v37;
          if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
          {
            v37 = _mm_loadu_si128(v22 + 1);
          }
          else
          {
            v36.m128i_i64[0] = v22->m128i_i64[0];
            v37.m128i_i64[0] = v22[1].m128i_i64[0];
          }
          v36.m128i_i64[1] = v22->m128i_i64[1];
          v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
          v22->m128i_i64[1] = 0;
          v22[1].m128i_i8[0] = 0;
          v40 = 260;
          v39[0].m128i_i64[0] = (__int64)&v36;
          v23 = sub_10DA6C0(a1, (__int64)v39);
          sub_10DC5D0(a2, v23);
          if ( (__m128i *)v36.m128i_i64[0] != &v37 )
            operator delete((void *)v36.m128i_i64[0]);
          v24 = (void *)v33.m128i_i64[0];
          if ( (__int64 *)v33.m128i_i64[0] == &v34 )
            return;
LABEL_46:
          operator delete(v24);
          return;
        }
LABEL_21:
        sub_10DC5D0(a2, (__int64)a3);
        sub_10DC5D0(a2, (__int64)".");
        return;
      }
    }
    else
    {
      if ( v11 )
      {
        sub_11BA9A0(v31, a3);
        v14 = j__strlen(".");
        if ( v14 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v31[1] )
          goto LABEL_55;
        v15 = (__m128i *)sub_9EE560(v31, ".", v14);
        v36.m128i_i64[0] = (__int64)&v37;
        if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
        {
          v37 = _mm_loadu_si128(v15 + 1);
        }
        else
        {
          v36.m128i_i64[0] = v15->m128i_i64[0];
          v37.m128i_i64[0] = v15[1].m128i_i64[0];
        }
        v36.m128i_i64[1] = v15->m128i_i64[1];
        v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
        v15->m128i_i64[1] = 0;
        v15[1].m128i_i8[0] = 0;
        v39[0].m128i_i64[0] = (__int64)&v36;
        v40 = 260;
        v16 = sub_10DA6C0(a1, (__int64)v39);
        sub_10DC5D0(a2, v16);
        if ( (__m128i *)v36.m128i_i64[0] != &v37 )
          operator delete((void *)v36.m128i_i64[0]);
        if ( v31[0] != v32 )
          operator delete(v31[0]);
      }
      else
      {
        sub_10DC5D0(a2, (__int64)a3);
        sub_10DC5D0(a2, (__int64)".");
      }
      v17 = 1;
    }
    v6 += v17;
    v8 -= v17;
    if ( !v8 )
    {
      if ( v11 )
        goto LABEL_34;
      goto LABEL_21;
    }
  }
  if ( !v11 )
  {
    sub_10DC5D0(a2, (__int64)a3);
    v40 = 261;
    v39[0].m128i_i64[0] = (__int64)v6;
    v39[0].m128i_i64[1] = v8;
    v29 = sub_10DA6C0(a1, (__int64)v39);
    sub_10DC5D0(a2, v29);
    return;
  }
  v36.m128i_i64[1] = v8;
  v36.m128i_i64[0] = (__int64)v6;
  v38 = 261;
  sub_11BA9A0(v31, a3);
  v35 = 260;
  v33.m128i_i64[0] = (__int64)v31;
  sub_A41580(v39, &v33, &v36, 260, v26, v27);
  v28 = sub_10DA6C0(a1, (__int64)v39);
  sub_10DC5D0(a2, v28);
  v24 = v31[0];
  if ( v31[0] != v32 )
    goto LABEL_46;
}
