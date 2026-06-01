__int64 __fastcall sub_1370B0(
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
  __int64 v20; // rbx
  unsigned int v21; // r13d
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v27; // [rsp+0h] [rbp-78h] BYREF
  __int64 not_tail; // [rsp+8h] [rbp-70h] BYREF
  const char *v29; // [rsp+10h] [rbp-68h]
  __int128 v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  __int128 v32; // [rsp+38h] [rbp-40h]
  unsigned __int64 v33; // [rsp+48h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v27 = 0;
  not_tail = -1;
  if ( !(unsigned __int8)sub_161C80(0, &v27, &not_tail) )
  {
    if ( (BYTE2(xmmword_2450C0) & 1) == 0 )
    {
      v9 = a1 | BYTE2(xmmword_2450C0);
      not_tail = xmmword_2528A0;
      v10 = (a1 | BYTE2(xmmword_2450C0)) & 1;
      if ( ((a1 | BYTE2(xmmword_2450C0)) & 2) == 0 )
        goto LABEL_7;
      goto LABEL_5;
    }
    v27 = xmmword_2528A0;
  }
  v9 = a1 | BYTE2(xmmword_2450C0);
  v10 = (a1 | BYTE2(xmmword_2450C0)) & 1;
  if ( ((a1 | BYTE2(xmmword_2450C0)) & 2) == 0 )
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
    sub_108D20(1072, v11);
    return v21;
  }
  v27 = next_not_tail();
  v11 = v27;
  if ( v27 == -1 )
    goto LABEL_28;
LABEL_7:
  v29 = nullptr;
  v30 = 0;
  v32 = 0;
  v31 = 0;
  if ( (unsigned __int8)parse_binpat_str() )
    goto LABEL_11;
  v12 = s1;
  if ( (_QWORD)v30 )
    v12 = v29;
  sub_8F740((__int64)"%s\n", v12);
  if ( (_QWORD)v32 )
  {
LABEL_11:
    sub_136B90(v9, &v31);
    sub_10E0D0(
      (__int64)"Searching for a binary pattern",
      (__int64)&v31,
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
    sub_10DB30();
    if ( v20 == -1 )
    {
      sub_108D20(1072, v19);
      v21 = 0;
    }
    else
    {
      sub_108D20(1071, v20);
      v21 = (unsigned __int8)sub_120E80();
    }
    v22 = v31;
    if ( !v31 )
      goto LABEL_24;
    v23 = v32;
    if ( (_QWORD)v32 )
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
        v22 = v31;
      }
      while ( v23 != v24 );
    }
    goto LABEL_23;
  }
  v21 = 0;
  if ( v31 )
  {
LABEL_23:
    *(_QWORD *)&v32 = 0;
    qfree();
  }
LABEL_24:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v21;
}

