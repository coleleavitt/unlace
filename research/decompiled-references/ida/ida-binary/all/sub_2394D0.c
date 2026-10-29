__int64 __fastcall sub_2394D0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbx
  int *v10; // rax
  __int64 v11; // r12
  __m128i *v12; // rsi
  const char *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  char v27; // [rsp+0h] [rbp-B8h]
  char v28; // [rsp+Fh] [rbp-A9h]
  __m128i v29; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+20h] [rbp-98h]
  _QWORD v31[6]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v28 = 1;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = sub_227EE0(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 8 * v9));
      if ( v10 )
        break;
LABEL_5:
      if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 56) )
        return 1;
    }
    v11 = *((_QWORD *)v10 + 3);
    v12 = &v29;
    v31[5] = 9;
    v31[2] = 0xFFFFFFFFLL;
    v31[0] = -1;
    v31[1] = 0;
    v31[3] = -1;
    v31[4] = 4;
    v32 = 0xFFFFFFFF00000000LL;
    v33 = 0;
    v13 = *((const char **)v10 + 4);
    v29 = (__m128i)0x60uLL;
    v30 = 0;
    if ( !(unsigned __int8)sub_19A7A0(v11, &v29) )
      goto LABEL_11;
    if ( (const char *)(int)v32 == v13 )
      break;
    v12 = (__m128i *)"HIDECANCEL\nA breakpoint at the module start is already present.\nDo you want to replace it?";
    if ( !(unsigned int)sub_1698A0(
                          0,
                          (int)"HIDECANCEL\n"
                               "A breakpoint at the module start is already present.\n"
                               "Do you want to replace it?") )
      goto LABEL_19;
    sub_19A8C0(
      (__int64)v31,
      (__int64)"HIDECANCEL\nA breakpoint at the module start is already present.\nDo you want to replace it?");
LABEL_11:
    if ( !sub_19B620(v11, (__int64)v13, 3u, 0.0, *(double *)a3.m128_u64, a4) || !v28 )
    {
      if ( v29.m128i_i64[1] )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29.m128i_i64[1], v13);
      }
      goto LABEL_5;
    }
    sub_169630(
      (int)"On-access breakpoints added for selected modules.",
      (__int64)v13,
      v20,
      v21,
      v22,
      v23,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v24,
      v25,
      a8,
      a9,
      v27);
    if ( v29.m128i_i64[1] )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29.m128i_i64[1], v13);
    }
    v28 = 0;
    if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 56) )
      return 1;
  }
  sub_169630(
    (int)"On-access breakpoint already present for selected module.",
    (__int64)&v29,
    v14,
    v15,
    v16,
    v17,
    (__m128)0LL,
    a3,
    a4,
    a5,
    v18,
    v19,
    a8,
    a9,
    v27);
LABEL_19:
  if ( !v29.m128i_i64[1] )
    return 1;
  *(_QWORD *)&v30 = 0;
  qfree(v29.m128i_i64[1], v12->m128i_i8);
  return 1;
}
