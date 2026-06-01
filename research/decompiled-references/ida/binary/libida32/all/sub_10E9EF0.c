__m128i *__fastcall sub_10E9EF0(__m128i *a1, __int64 a2)
{
  size_t v3; // rax
  __m128i *v4; // rax
  unsigned __int64 v5; // rax
  __m128i *v6; // rax
  void *v7; // rdi
  void *v8; // rdi
  size_t v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  size_t v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r15
  __m128i *v16; // rax
  int v17; // eax
  size_t v18; // rax
  __m128i *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-A0h]
  __m128i v21; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  __m128i v23; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v25; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v26[4]; // [rsp+60h] [rbp-48h] BYREF

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *(char *)(a2 + 7) >= 0 || (*(_DWORD *)(a2 + 4) & 0x7FFFFFFF) == 0 )
      {
        v11 = *(_QWORD *)(a2 + 72);
        v12 = v11 + 120LL * *(unsigned int *)(a2 + 80);
        if ( v11 == v12 )
        {
LABEL_35:
          a1->m128i_i64[1] = 0;
          a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
          a1[1].m128i_i8[0] = 0;
          return a1;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(v11 + 96);
            if ( v13 )
              break;
            v11 += 120;
            if ( v12 == v11 )
              goto LABEL_35;
          }
          v14 = *(_QWORD *)(a2 + 16);
          v15 = v14 + 40LL * *(unsigned int *)(a2 + 24);
          if ( v14 == v15 )
            break;
          while ( 1 )
          {
            if ( v13 == *(_QWORD *)(v14 + 8) )
            {
              v20 = v12;
              v17 = sub_990B80(*(const void **)v14, *(const void **)(v11 + 88), v13);
              v12 = v20;
              if ( !v17 )
                break;
            }
            v14 += 40;
            if ( v15 == v14 )
              goto LABEL_25;
          }
          v11 += 120;
          if ( v20 == v11 )
            goto LABEL_35;
        }
LABEL_25:
        sub_BE13C0((__int64)&v21, "multilib \"", v11);
        sub_10BDC40(&v23, &v21, "\" specifies undefined group name \"");
        v16 = (__m128i *)sub_9CA820(&v23, *(_BYTE **)(v11 + 88), *(_QWORD *)(v11 + 96));
        v25.m128i_i64[0] = (__int64)v26;
        if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
        {
          v26[0] = _mm_loadu_si128(v16 + 1);
        }
        else
        {
          v25.m128i_i64[0] = v16->m128i_i64[0];
          *(_QWORD *)&v26[0] = v16[1].m128i_i64[0];
        }
        v25.m128i_i64[1] = v16->m128i_i64[1];
        v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
        v16->m128i_i64[1] = 0;
        v16[1].m128i_i8[0] = 0;
        sub_10BDC40(a1, &v25, "\"");
        if ( (_OWORD *)v25.m128i_i64[0] != v26 )
          operator delete((void *)v25.m128i_i64[0]);
        if ( (_BYTE *)v23.m128i_i64[0] != v24 )
          operator delete((void *)v23.m128i_i64[0]);
        v8 = (void *)v21.m128i_i64[0];
        if ( (__int64 *)v21.m128i_i64[0] != &v22 )
          goto LABEL_11;
        return a1;
      }
      sub_2233AF0(&v23, a2);
      v18 = j__strlen("multilib version ");
      v19 = (__m128i *)sub_978080(&v23, 0, 0, "multilib version ", v18);
      v25.m128i_i64[0] = (__int64)v26;
      if ( (__m128i *)v19->m128i_i64[0] == &v19[1] )
      {
        v26[0] = _mm_loadu_si128(v19 + 1);
      }
      else
      {
        v25.m128i_i64[0] = v19->m128i_i64[0];
        *(_QWORD *)&v26[0] = v19[1].m128i_i64[0];
      }
      v25.m128i_i64[1] = v19->m128i_i64[1];
      v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
      v19->m128i_i64[1] = 0;
      v19[1].m128i_i8[0] = 0;
      sub_10BDC40(a1, &v25, " is unsupported");
      v7 = (void *)v25.m128i_i64[0];
      if ( (_OWORD *)v25.m128i_i64[0] != v26 )
        goto LABEL_9;
      goto LABEL_10;
    }
  }
  else if ( (*(_DWORD *)(a2 + 4) & 0x7FFFFFFF) == 0
         && (*(_DWORD *)(a2 + 8) & 0x7FFFFFFF) == 0
         && (*(_DWORD *)(a2 + 12) & 0x7FFFFFFF) == 0 )
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v10 = j__strlen("missing required key 'MultilibVersion'");
    sub_DD43A0(a1, "missing required key 'MultilibVersion'", (__int64)&aMissingRequire[v10]);
    return a1;
  }
  sub_2233AF0(&v23, a2);
  v3 = j__strlen("multilib version ");
  v4 = (__m128i *)sub_978080(&v23, 0, 0, "multilib version ", v3);
  v25.m128i_i64[0] = (__int64)v26;
  if ( (__m128i *)v4->m128i_i64[0] == &v4[1] )
  {
    v26[0] = _mm_loadu_si128(v4 + 1);
  }
  else
  {
    v25.m128i_i64[0] = v4->m128i_i64[0];
    *(_QWORD *)&v26[0] = v4[1].m128i_i64[0];
  }
  v25.m128i_i64[1] = v4->m128i_i64[1];
  v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
  v4->m128i_i64[1] = 0;
  v4[1].m128i_i8[0] = 0;
  v5 = j__strlen(" is unsupported");
  if ( v5 > 0x7FFFFFFFFFFFFFFFLL - v25.m128i_i64[1] )
    std::__throw_length_error("basic_string::append");
  v6 = (__m128i *)sub_9CA820(&v25, " is unsupported", v5);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v6->m128i_i64[0] == &v6[1] )
  {
    a1[1] = _mm_loadu_si128(v6 + 1);
  }
  else
  {
    a1->m128i_i64[0] = v6->m128i_i64[0];
    a1[1].m128i_i64[0] = v6[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = v6->m128i_i64[1];
  v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
  v6->m128i_i64[1] = 0;
  v6[1].m128i_i8[0] = 0;
  v7 = (void *)v25.m128i_i64[0];
  if ( (_OWORD *)v25.m128i_i64[0] != v26 )
LABEL_9:
    operator delete(v7);
LABEL_10:
  v8 = (void *)v23.m128i_i64[0];
  if ( (_BYTE *)v23.m128i_i64[0] != v24 )
LABEL_11:
    operator delete(v8);
  return a1;
}

