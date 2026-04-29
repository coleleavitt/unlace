__int64 __fastcall sub_3E1240(__m128i *a1)
{
  char *v2; // rax
  char v3; // r13
  const char *v4; // rbp
  __int64 v5; // r15
  char i; // al
  char *v7; // r12
  unsigned int v8; // edi
  __int16 v9; // ax
  char *v10; // rax
  __m128i *v11; // rdx
  char v12; // cl
  __int8 *v13; // rax
  int v15; // edx
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // edi
  __int64 *m128i_i64; // r12
  int v20; // ebp
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int16 v25; // dx
  char v26; // [rsp+4h] [rbp-54h]
  char v27; // [rsp+4h] [rbp-54h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  char *endptr[9]; // [rsp+10h] [rbp-48h] BYREF

  endptr[1] = (char *)__readfsqword(0x28u);
  v2 = (char *)skip_spaces(a1[1].m128i_i64[0]);
  a1[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  v3 = *v2;
  if ( *v2 == 59 || !v3 )
  {
    a1[67].m128i_i16[2] = 1;
    return 0;
  }
  v4 = v2;
  if ( (unsigned int)v3 > 0x7F )
  {
LABEL_4:
    v5 = 3;
    for ( i = 62; ; i = **((_BYTE **)&unk_4CA040 + v5) )
    {
      v28 = *((_QWORD *)&unk_4CA040 + v5);
      if ( i )
        break;
LABEL_34:
      if ( !--v5 )
        return set_qerrno(47);
    }
    v7 = *((char **)&unk_4CA040 + v5);
    while ( 1 )
    {
      if ( v3 == i )
      {
        if ( v5 == 1 )
        {
          a1[1].m128i_i64[0] = (__int64)(v4 + 1);
          v9 = *v4;
          goto LABEL_55;
        }
        if ( v4[1] == v7[1] && (v5 != 3 || v4[2] == v7[2]) )
        {
          v8 = v4[v5];
          v26 = v4[v5];
          if ( v8 > 0x7F )
            break;
          v16 = isalnum(v8);
          if ( v26 != 95 && !v16 )
            break;
          v17 = v4[v5 - 1];
          v27 = v4[v5 - 1];
          if ( v17 > 0x7F || !isalnum(v17) && v27 != 95 )
            break;
        }
      }
      v7 += v5;
      i = *v7;
      if ( !*v7 )
        goto LABEL_34;
    }
    if ( (_DWORD)v5 == 3 )
    {
      a1[1].m128i_i64[0] = (__int64)(v4 + 3);
      v9 = (__int64)&v7[-v28] / 3 + 1024;
    }
    else
    {
      a1[1].m128i_i64[0] = (__int64)(v4 + 1);
      v25 = *v4;
      a1[1].m128i_i64[0] = (__int64)(v4 + 2);
      v9 = v25 | (v4[1] << 8);
    }
LABEL_55:
    a1[67].m128i_i16[2] = v9;
    return 0;
  }
  if ( (unsigned int)(v3 - 48) <= 9 )
  {
    v15 = 10;
    a1[67].m128i_i16[2] = 3;
    if ( *v2 == 48 )
    {
      v23 = tolower((unsigned __int8)v2[1]);
      v15 = 10;
      if ( v23 == 120 )
      {
        v4 += 2;
        v15 = 16;
        a1[1].m128i_i64[0] = (__int64)v4;
      }
    }
    a1[66].m128i_i64[0] = strtoull(v4, endptr, v15);
    a1[1].m128i_i64[0] = (__int64)endptr[0];
    return 0;
  }
  if ( v3 != 34 )
  {
    v18 = v3;
    if ( isalpha(v3) || v3 == 95 )
    {
      m128i_i64 = a1[2].m128i_i64;
      while ( v18 <= 0x7F )
      {
        v22 = isalnum(v18);
        if ( v3 != 95 && !v22 )
          break;
        m128i_i64 = (__int64 *)((char *)m128i_i64 + 1);
        a1[1].m128i_i64[0] = (__int64)(v4 + 1);
        *((_BYTE *)m128i_i64 - 1) = *v4;
        if ( m128i_i64 == (__int64 *)&a1[66] )
          return set_qerrno(47);
        v4 = (const char *)a1[1].m128i_i64[0];
        v18 = *v4;
        v3 = *v4;
      }
      *(_BYTE *)m128i_i64 = 0;
      if ( a1[2].m128i_i16[0] == 119 )
      {
        v24 = a1->m128i_i64[0];
        a1[67].m128i_i16[2] = 3;
        a1[66].m128i_i64[0] = *(int *)(*(_QWORD *)(v24 + 112) + 84LL);
      }
      else
      {
        a1[67].m128i_i16[2] = 2;
        if ( unk_40DB00 )
        {
          v20 = 0;
          v21 = 0;
          while ( strcmp(a1[2].m128i_i8, (&off_4BEC00)[v21]) )
          {
            v21 = ++v20;
            if ( (unsigned __int64)v20 >= unk_40DB00 )
              return 0;
          }
          a1[67].m128i_i16[2] = v20 + 128;
        }
      }
      return 0;
    }
    goto LABEL_4;
  }
  v10 = v2 + 1;
  v11 = a1 + 2;
  a1[1].m128i_i64[0] = (__int64)(v4 + 1);
  v12 = v4[1];
  if ( v12 == 34 )
  {
LABEL_50:
    a1[1].m128i_i64[0] = (__int64)(v10 + 1);
    v11->m128i_i8[0] = 0;
    a1[67].m128i_i16[2] = 4;
    return 0;
  }
  while ( 1 )
  {
    if ( v12 == 92 )
    {
      v13 = v10 + 1;
      a1[1].m128i_i64[0] = (__int64)v13;
    }
    else
    {
      v13 = (__int8 *)a1[1].m128i_i64[0];
    }
    if ( !*v13 )
      return 26;
    v11 = (__m128i *)((char *)v11 + 1);
    if ( v11 == &a1[66] )
      return 25;
    a1[1].m128i_i64[0] = (__int64)(v13 + 1);
    v11[-1].m128i_i8[15] = *v13;
    v10 = (char *)a1[1].m128i_i64[0];
    v12 = *v10;
    if ( *v10 == 34 )
      goto LABEL_50;
  }
}
