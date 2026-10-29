__int64 __fastcall sub_325670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rbp
  const char *v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rsi
  char v22; // al
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128i v31; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+10h] [rbp-98h]
  _QWORD v33[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]
  __int64 v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( !dbg || (*(_BYTE *)(dbg + 34) & 0x40) == 0 )
  {
    if ( !under_debugger )
      interr(40342, a2, a3, a4, a5);
    BUG();
  }
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = getnseg(*(unsigned int *)(*(_QWORD *)(a1 + 48) + 8 * v12));
    if ( !v13 )
      goto LABEL_15;
    v33[0] = -1;
    v33[2] = 0xFFFFFFFFLL;
    v33[1] = 0;
    v34 = -1;
    v35 = 4;
    v36 = 9;
    v37 = 0xFFFFFFFF00000000LL;
    v38 = 0;
    v32 = 0;
    v14 = *(_QWORD *)(v13 + 8);
    v31 = (__m128i)0x60uLL;
    v15 = (const char *)(v14 - *(_QWORD *)v13);
    if ( (unsigned __int8)sub_19A7A0(*(_QWORD *)v13, &v31) )
      break;
LABEL_10:
    v22 = *(_BYTE *)(v13 + 42);
    v23 = 8;
    if ( (v22 & 1) == 0 )
      v23 = ((v22 & 2) != 0) + 2;
    if ( !sub_19B620(*(_QWORD *)v13, (__int64)v15, v23, 0.0, *(double *)a6.m128_u64, a7) )
    {
      v21 = *(const char **)v13;
      sub_169630(
        (int)"%a: failed to add breakpoint (would it overlap with another breakpoint?)",
        *(_QWORD *)v13,
        v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a6,
        a7,
        a8,
        v28,
        v29,
        a11,
        a12,
        v31.m128i_i8[0]);
      goto LABEL_18;
    }
    if ( v31.m128i_i64[1] )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31.m128i_i64[1], v15);
    }
LABEL_15:
    if ( (unsigned __int64)++v12 >= *(_QWORD *)(a1 + 56) )
      goto LABEL_16;
  }
  if ( (const char *)(int)v37 != v15 )
  {
    v21 = "HIDECANCEL\nA breakpoint at %a already exists. Do you want to replace it?";
    if ( !(unsigned int)sub_1698A0(
                          0,
                          (int)"HIDECANCEL\nA breakpoint at %a already exists. Do you want to replace it?",
                          v34) )
      goto LABEL_18;
    sub_19A8C0((__int64)v33, (__int64)"HIDECANCEL\nA breakpoint at %a already exists. Do you want to replace it?");
    goto LABEL_10;
  }
  v21 = (const char *)v34;
  sub_169630(
    (int)"On-access breakpoint already exists for segment at %a",
    v34,
    v34,
    v16,
    v17,
    v18,
    (__m128)0LL,
    a6,
    a7,
    a8,
    v19,
    v20,
    a11,
    a12,
    v31.m128i_i8[0]);
LABEL_18:
  if ( v31.m128i_i64[1] )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31.m128i_i64[1], v21);
  }
LABEL_16:
  mark_builtin_widgets(0x8000000, 0, 1);
  return 1;
}
