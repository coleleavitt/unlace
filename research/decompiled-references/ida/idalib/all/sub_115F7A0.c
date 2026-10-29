__m128i *__fastcall sub_115F7A0(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __m128i *v9; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  const char **v13; // rax
  __m128i *v14; // rbp
  char *v15; // rbx
  const char *v16; // rdi
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __m128i *v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  void *v27; // [rsp+0h] [rbp-48h] BYREF
  __int64 v28; // [rsp+8h] [rbp-40h]
  __m128i v29[3]; // [rsp+10h] [rbp-38h] BYREF

  LODWORD(v27) = 2260;
  v5 = sub_21B6DA0(a2, &v27, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2260) )
    {
      if ( v8 == ++v7 )
        goto LABEL_5;
    }
    if ( v8 != v7 )
    {
      do
      {
        v11 = *v7;
        v12 = *(_QWORD *)(*v7 + 16LL);
        if ( !v12 )
          v12 = *v7;
        ++v7;
        *(_BYTE *)(v12 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2260) )
        {
          if ( v8 == ++v7 )
            goto LABEL_15;
        }
      }
      while ( v8 != v7 );
LABEL_15:
      v13 = *(const char ***)(v11 + 48);
      v14 = a1 + 1;
      v15 = (char *)*v13;
      if ( *v13 )
      {
        v16 = *v13;
        v17 = strlen(*v13);
        if ( v17 == 6 && *(_DWORD *)v15 == 1769234798 && *((_WORD *)v15 + 2) == 25974 )
        {
          v21 = (_BYTE *)sub_22A33B0(v16, 2260, v18, v19, v20);
          v27 = v29;
          sub_115EE40(&v27, v21, (__int64)&v21[v22]);
          v23 = v28;
          v24 = (__m128i *)v27;
          if ( v28 )
          {
            v25 = sub_9B4AA0((__int64)&v27, "generic");
            v24 = (__m128i *)v27;
            if ( v25 )
            {
              a1->m128i_i64[0] = (__int64)v14;
              if ( v24 == v29 )
              {
                a1[1] = _mm_load_si128(v29);
              }
              else
              {
                v26 = v29[0].m128i_i64[0];
                a1->m128i_i64[0] = (__int64)v24;
                a1[1].m128i_i64[0] = v26;
              }
              a1->m128i_i64[1] = v23;
              return a1;
            }
          }
          a1->m128i_i64[0] = (__int64)v14;
          a1->m128i_i64[1] = 0;
          a1[1].m128i_i8[0] = 0;
          if ( v24 != v29 )
          {
            operator delete(v24);
            return a1;
          }
          return a1;
        }
      }
      else
      {
        v17 = 0;
      }
      a1->m128i_i64[0] = (__int64)v14;
      sub_115EE40(a1, v15, (__int64)&v15[v17]);
      return a1;
    }
  }
LABEL_5:
  v9 = a1 + 1;
  if ( *(_DWORD *)(a3 + 44) == 16 )
  {
    a1->m128i_i64[0] = (__int64)v9;
    a1[1].m128i_i32[0] = 826492282;
    a1[1].m128i_i8[4] = 50;
    a1->m128i_i64[1] = 5;
    a1[1].m128i_i8[5] = 0;
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v9;
    a1[1].m128i_i16[0] = 12666;
    a1[1].m128i_i8[2] = 48;
    a1->m128i_i64[1] = 3;
    a1[1].m128i_i8[3] = 0;
  }
  return a1;
}
