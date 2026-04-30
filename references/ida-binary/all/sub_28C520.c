__int64 __fastcall sub_28C520(
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
  const char *v9; // rbx
  __int64 func; // rax
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r13
  const char *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  char *v22; // rax
  int v23; // r13d
  const char *v24; // r14
  unsigned int v25; // eax
  unsigned int v26; // r13d
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r14
  unsigned __int64 v30; // r13
  __int64 v31; // rsi
  __m128i *v32; // rbp
  __m128i si128; // xmm0
  double v34; // xmm0_8
  const char *v35; // r14
  __int64 v36; // rbp
  const char *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r12d
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  const char *v43; // rsi
  char i; // al
  char v45; // [rsp+0h] [rbp-B8h]
  __int16 v46; // [rsp+16h] [rbp-A2h] BYREF
  __int64 ind_purged; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+20h] [rbp-98h] BYREF
  __int128 v49; // [rsp+28h] [rbp-90h]
  const char *v50; // [rsp+40h] [rbp-78h] BYREF
  __int128 v51; // [rsp+48h] [rbp-70h]
  _QWORD v52[11]; // [rsp+60h] [rbp-58h] BYREF

  v52[3] = __readfsqword(0x28u);
  v9 = *(const char **)(a1 + 88);
  func = get_func(v9);
  if ( func )
    return sub_28B520(func);
  v12 = getseg(v9);
  result = 0;
  if ( v12 && *(_BYTE *)(v12 + 184) == 1 )
  {
    v49 = 0;
    v48 = 0;
    v13 = qvector_reserve(&v48, 0, 46, 1);
    v48 = v13;
    v14 = 40;
    v15 = "<~P~urged  bytes:D::8::> (-1:undefined)\n";
    *(_QWORD *)&v49 = 46;
    *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_5DCCA0);
    v16 = v48;
    *(__m128i *)(v13 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCCB0);
    *(__m128i *)(v13 + 29) = _mm_load_si128((const __m128i *)&xmmword_5DCCC0);
    *(_BYTE *)(v16 + 45) = 0;
    if ( *(_BYTE *)(v12 + 43) == 2 )
    {
      v14 = 17;
      v15 = "Purged  bytes:%D\n";
    }
    v17 = v49;
    v18 = v14;
    if ( (_QWORD)v49 )
    {
      v17 = v49 - 1;
      v18 = v49 - 1 + v14;
    }
    v19 = v18 + 1;
    if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v18 + 1) )
    {
      v48 = qvector_reserve(&v48, v16, v19, 1);
      v19 = v18 + 1;
      v16 = v48;
    }
    *(_QWORD *)&v49 = v19;
    *(_BYTE *)(v16 + v18) = 0;
    v20 = (_QWORD *)(v17 + v48);
    *v20 = *(_QWORD *)v15;
    *(_QWORD *)((char *)v20 + v14 - 8) = *(_QWORD *)&v15[v14 - 8];
    v21 = (unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = (char *)v20 - v21;
    v23 = (_DWORD)v22 + v14;
    v24 = (const char *)(v15 - v22);
    v25 = 0;
    v26 = v23 & 0xFFFFFFF8;
    do
    {
      v27 = v25;
      v25 += 8;
      *(_QWORD *)(v21 + v27) = *(_QWORD *)&v24[v27];
    }
    while ( v25 < v26 );
    v28 = v49;
    if ( (_QWORD)v49 )
    {
      v29 = v49 + 23;
      v30 = v49 + 24;
      v28 = v49 - 1;
    }
    else
    {
      v30 = 25;
      v29 = 24;
    }
    v31 = v48;
    if ( *((_QWORD *)&v49 + 1) < v30 )
    {
      v48 = qvector_reserve(&v48, v48, v30, 1);
      v31 = v48;
    }
    *(_QWORD *)&v49 = v30;
    *(_BYTE *)(v31 + v29) = 0;
    v32 = (__m128i *)(v48 + v28);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DCCD0);
    v32[1].m128i_i64[0] = 0xA0A3E3E433A6E72LL;
    *v32 = si128;
    v34 = 0.0;
    v50 = nullptr;
    v51 = 0;
    get_ea_name(&v50, v9, 0, 0);
    v35 = &s1;
    if ( (_QWORD)v51 )
      v35 = v50;
    ind_purged = get_ind_purged(v9);
    v36 = ind_purged;
    v37 = &s1;
    v40 = get_aflags(v9) & 0x400000;
    v46 = v40 >> 22;
    if ( (_QWORD)v49 )
      LODWORD(v37) = v48;
    v43 = v35;
    if ( (int)sub_1697D0(
                (int)v37,
                (__int64)v35,
                (__int64)&ind_purged,
                (__int64)&v46,
                v38,
                v39,
                (__m128)0LL,
                a3,
                a4,
                a5,
                v41,
                v42,
                a8,
                a9,
                v45) > 0 )
    {
      v43 = (const char *)ind_purged;
      if ( v36 != ind_purged )
        set_purged(v9, ind_purged, 1);
      if ( (v40 != 0) != v46 )
      {
        if ( v40 )
          clr_abits(v9, 0x400000);
        else
          set_abits(v9, 0x400000);
        v43 = v9;
        for ( i = xrefblk_t_first_to(v52, v9, 2); i; i = xrefblk_t_next_to(v52) )
        {
          v43 = (const char *)(v52[0] + 1LL);
          auto_mark_range(v52[0], v52[0] + 1LL, 40);
        }
      }
    }
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      v34 = qfree(v50, v43);
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48, v43, v34);
    }
    return 1;
  }
  return result;
}
