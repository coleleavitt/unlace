__int64 __fastcall sub_327C30(
        double a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int *v11; // rbx
  int *v12; // rax
  __m128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdi
  __int64 v24; // r14
  __int64 problem_name; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 *v31; // [rsp+0h] [rbp-148h]
  char v32; // [rsp+Fh] [rbp-139h]
  __int64 v33; // [rsp+10h] [rbp-138h] BYREF
  __int128 v34; // [rsp+18h] [rbp-130h]
  __int64 (__fastcall **v35)(); // [rsp+30h] [rbp-118h] BYREF
  __int64 v36; // [rsp+38h] [rbp-110h]
  __int128 v37; // [rsp+40h] [rbp-108h]
  __int64 v38; // [rsp+50h] [rbp-F8h]
  __int64 v39; // [rsp+58h] [rbp-F0h]
  int v40; // [rsp+60h] [rbp-E8h]
  __m128i v41; // [rsp+68h] [rbp-E0h]
  int v42; // [rsp+78h] [rbp-D0h]
  _BYTE v43[72]; // [rsp+80h] [rbp-C8h] BYREF
  int v44; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-60h]
  __int128 v46; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v47; // [rsp+108h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v11 = &v44;
  v35 = (__int64 (__fastcall **)())&stru_86F6A0;
  v39 = itext(1075, a10, a11);
  v37 = -1;
  v12 = (int *)v43;
  v36 = 0x20A07FF000004LL;
  v38 = 0;
  v40 = 3;
  v42 = -1;
  v41 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8661D8), (__m128i)(unsigned __int64)&off_8661C0);
  v13.m128_u64[0] = 0;
  do
  {
    *(_QWORD *)v12 = 0;
    v12 += 6;
    *((_OWORD *)v12 - 1) = 0;
  }
  while ( &v44 != v12 );
  v44 = 0;
  v14 = HIDWORD(v36);
  v15 = ((HIDWORD(v36) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v36) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v36) != 0xFF )
      goto LABEL_23;
    LOBYTE(v14) = BYTE4(v36);
    BYTE3(v36) = ((HIDWORD(v36) >> 19) & 0x3F) - 1;
    HIDWORD(v36) &= 0xFE07FFFF;
  }
  v13 = 0;
  v16 = v14 & 1;
  v45 = 0;
  v35 = pl_chooser_t___vtable;
  v42 = 45;
  v46 = 0;
  if ( !(_DWORD)v16 )
  {
    if ( under_debugger )
      goto LABEL_25;
    interr(40542, a10, v16, v15, 0.0);
LABEL_23:
    if ( !under_debugger )
      interr(3449, a10, v14, v15, *(double *)v13.m128_u64);
LABEL_25:
    BUG();
  }
  v34 = 0;
  v33 = 0;
  v17 = qword_8BCDD0;
  if ( qword_8BCDD0 != -1 )
  {
    v31 = &v33;
    v32 = byte_8BCDD8;
    v33 = qvector_reserve(&v33, 0, 1, 16);
    v16 = 16 * v34;
    v18 = 16 * v34 + v33;
    *(_QWORD *)v18 = v17;
    *(_BYTE *)(v18 + 8) = v32;
    *(_QWORD *)&v34 = v34 + 1;
  }
  v19 = (const char *)&v33;
  v20 = sub_4AED50(&v35, &v33, v16, v15);
  if ( v33 )
  {
    v31 = (__int64 *)v20;
    *(_QWORD *)&v34 = 0;
    *(double *)v13.m128_u64 = qfree(v33, (const char *)&v33);
    v20 = (__int64)v31;
  }
  v21 = -1;
  if ( v20 >= 0 && v20 < (unsigned __int64)v46 )
  {
    v24 = v45 + 16 * v20;
    qword_8BCDD0 = *(_QWORD *)v24;
    byte_8BCDD8 = *(_BYTE *)(v24 + 8);
    problem_name = get_problem_name(*(unsigned __int8 *)(v24 + 8), 1);
    v19 = *(const char **)v24;
    sub_169700(
      (int)"%08a: %s\n",
      *(_QWORD *)v24,
      problem_name,
      v26,
      v27,
      v28,
      v13,
      (__m128)(unsigned __int64)&off_8661C0,
      a3,
      a4,
      v29,
      v30,
      a7,
      a8,
      (char)v31);
    v21 = *(_QWORD *)v24;
  }
  v35 = pl_chooser_t___vtable;
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v19);
  }
  v35 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v22 = *((_QWORD *)v11 - 3);
    v11 -= 6;
    if ( v22 )
    {
      *((_QWORD *)v11 + 1) = 0;
      qfree(v22, v19);
    }
  }
  while ( v11 != (int *)v43 );
  return v21;
}
