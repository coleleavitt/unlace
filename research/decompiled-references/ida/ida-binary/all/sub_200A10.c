__int64 __fastcall sub_200A10(
        const __m128i *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  const char *v16; // r13
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  double v19; // xmm4_8
  double v20; // xmm5_8
  unsigned int v21; // ebx
  int v23; // r14d
  const char *v24; // rax
  int utf8_char; // eax
  const char *v26; // [rsp+0h] [rbp-68h] BYREF
  const char *v27; // [rsp+8h] [rbp-60h] BYREF
  const char *v28; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v12 = (const char *)&v28;
  v29 = 0;
  v28 = nullptr;
  if ( sub_1EB270((__int64)a1, (__int64)&v28, 0, a12, 0.0) > 0 )
  {
    if ( !a1[26].m128i_i64[1] )
      sub_1E69C0(0.0, (__int64)a1, (__int64)&v28, v13, v14);
    v15 = a1[25].m128i_i16[6];
    v16 = &s1;
    if ( (_QWORD)v29 )
      v16 = v28;
    v18 = qustrlen(v16);
    if ( v18 < v15 )
    {
LABEL_6:
      v12 = (const char *)&v27;
      LODWORD(v27) = v18;
      sub_2006B0(a1, (__int64)&v27, 0, v17, 0.0, a3, a4, a5, v19, v20, a8, a9);
      v21 = 1;
      goto LABEL_7;
    }
    v26 = v16;
    skip_utf8(&v26, v15);
    v23 = 0;
    if ( v15 >= v18 )
      goto LABEL_20;
LABEL_11:
    v24 = v26;
    while ( 1 )
    {
      v27 = v24;
      utf8_char = get_utf8_char(&v27);
      if ( utf8_char == -1 )
      {
LABEL_19:
        if ( v23 == 1 )
          goto LABEL_21;
LABEL_20:
        v23 = 1;
        if ( v15 >= v18 )
        {
LABEL_21:
          LODWORD(v18) = v15;
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      if ( v23 != 1 )
        break;
      if ( utf8_char != 32 )
        goto LABEL_13;
LABEL_14:
      v24 = v27;
      ++v15;
      v26 = v27;
      if ( v18 == v15 )
        goto LABEL_19;
    }
    if ( utf8_char == 32 )
      goto LABEL_19;
LABEL_13:
    if ( v23 )
      goto LABEL_21;
    goto LABEL_14;
  }
  v21 = 0;
LABEL_7:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, v12);
  }
  return v21;
}
