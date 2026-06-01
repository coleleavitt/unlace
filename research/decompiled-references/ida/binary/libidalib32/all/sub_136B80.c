__int64 __fastcall sub_136B80(
        unsigned __int8 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v9; // bl
  char v10; // r12
  __int64 v11; // rsi
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rsi
  unsigned int v20; // ebx
  unsigned int v21; // r13d
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  char v27; // [rsp+0h] [rbp-78h]
  unsigned int v28; // [rsp+8h] [rbp-70h] BYREF
  unsigned int not_tail; // [rsp+Ch] [rbp-6Ch] BYREF
  const char *v30; // [rsp+10h] [rbp-68h]
  __int128 v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  __int128 v33; // [rsp+38h] [rbp-40h]
  unsigned __int64 v34; // [rsp+48h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v28 = 0;
  not_tail = -1;
  if ( !(unsigned __int8)sub_161360(0, &v28, &not_tail) )
  {
    if ( (BYTE10(xmmword_244090) & 1) == 0 )
    {
      v9 = a1 | BYTE10(xmmword_244090);
      not_tail = qword_251700;
      v10 = (a1 | BYTE10(xmmword_244090)) & 1;
      if ( ((a1 | BYTE10(xmmword_244090)) & 2) == 0 )
        goto LABEL_7;
      goto LABEL_5;
    }
    v28 = qword_251700;
  }
  v9 = a1 | BYTE10(xmmword_244090);
  v10 = (a1 | BYTE10(xmmword_244090)) & 1;
  if ( ((a1 | BYTE10(xmmword_244090)) & 2) == 0 )
    goto LABEL_7;
LABEL_5:
  if ( !v10 )
  {
    not_tail = prev_not_tail();
    v11 = not_tail;
    if ( not_tail != -1 )
      goto LABEL_7;
LABEL_28:
    v21 = 0;
    sub_108A90(1072, v11);
    return v21;
  }
  v28 = next_not_tail();
  v11 = v28;
  if ( v28 == -1 )
    goto LABEL_28;
LABEL_7:
  v30 = nullptr;
  v31 = 0;
  v33 = 0;
  v32 = 0;
  if ( (unsigned __int8)parse_binpat_str() )
    goto LABEL_11;
  v12 = s1;
  if ( (_QWORD)v31 )
    v12 = v30;
  sub_8F660((__int64)"%s\n", v12);
  if ( (_QWORD)v33 )
  {
LABEL_11:
    sub_136660(v9, &v32);
    sub_10DDF0(
      (__int64)"Searching for a binary pattern",
      (__int64)&v32,
      v13,
      v14,
      v15,
      v16,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v17,
      v18,
      a8,
      a9,
      v27);
    v19 = not_tail;
    v20 = bin_search();
    sub_10D850();
    if ( v20 == -1 )
    {
      sub_108A90(1072, v19);
      v21 = 0;
    }
    else
    {
      sub_108A90(1071, v20);
      v21 = (unsigned __int8)sub_120900();
    }
    v22 = v32;
    if ( !v32 )
      goto LABEL_24;
    v23 = v33;
    if ( (_QWORD)v33 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 80 * v24);
        if ( v25[6] )
        {
          v25[7] = 0;
          qfree();
        }
        if ( v25[3] )
        {
          v25[4] = 0;
          qfree();
        }
        if ( *v25 )
        {
          v25[1] = 0;
          qfree();
        }
        ++v24;
        v22 = v32;
      }
      while ( v23 != v24 );
    }
    goto LABEL_23;
  }
  v21 = 0;
  if ( v32 )
  {
LABEL_23:
    *(_QWORD *)&v33 = 0;
    qfree();
  }
LABEL_24:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return v21;
}

