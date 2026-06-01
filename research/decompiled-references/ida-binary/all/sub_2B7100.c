unsigned __int64 __fastcall sub_2B7100(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v13; // rax
  char v14; // bp
  __int64 (*v15)(void); // rax
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned int v25; // r12d
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r14
  unsigned int v32; // ebx
  const __m128i *v33; // rax
  __int64 v34; // rdi
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int32 v37; // eax
  __int64 v38; // rcx
  double v39; // xmm4_8
  double v40; // xmm5_8
  int *v42; // rbx
  int *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  char v46; // [rsp+0h] [rbp-148h]
  __int64 v47; // [rsp+8h] [rbp-140h]
  __m128i v48; // [rsp+10h] [rbp-138h] BYREF
  __m128i v49; // [rsp+20h] [rbp-128h]
  __int64 v50; // [rsp+30h] [rbp-118h]
  __int64 (__fastcall **v51)(); // [rsp+40h] [rbp-108h] BYREF
  __int64 v52; // [rsp+48h] [rbp-100h]
  __int128 v53; // [rsp+50h] [rbp-F8h]
  __int64 v54; // [rsp+60h] [rbp-E8h]
  const char *v55; // [rsp+68h] [rbp-E0h]
  int v56; // [rsp+70h] [rbp-D8h]
  __m128i v57; // [rsp+78h] [rbp-D0h]
  int v58; // [rsp+88h] [rbp-C0h]
  _BYTE v59[96]; // [rsp+90h] [rbp-B8h] BYREF
  int v60; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD *v61; // [rsp+F8h] [rbp-50h]
  unsigned int v62; // [rsp+100h] [rbp-48h]
  char v63; // [rsp+104h] [rbp-44h]
  unsigned __int64 v64; // [rsp+108h] [rbp-40h]

  v13 = *a1;
  v64 = __readfsqword(0x28u);
  v14 = a2;
  v15 = *(__int64 (**)(void))(v13 + 504);
  if ( (char *)v15 == (char *)sub_2B36E0 )
  {
    v16 = sub_1EA6A0(a1[2] + 384LL, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
    v17 = *(_DWORD *)(v16 + 32);
    v18 = v16;
    if ( v17 != (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)a1,
        v19,
        v20,
        v21,
        v22,
        a3,
        a4,
        a5,
        a6,
        v23,
        v24,
        a9,
        a10,
        v46);
    v25 = *(_DWORD *)(v18 + 24);
  }
  else
  {
    v25 = v15();
  }
  v26 = (__int64 *)a1[55];
  if ( v26 )
    v26 = (__int64 *)v26[1];
  v27 = *v26;
  v28 = v25;
  if ( v14 )
    v31 = (*(int (__fastcall **)(__int64 *, _QWORD))(v27 + 104))(v26, v25);
  else
    v31 = (*(int (__fastcall **)(__int64 *, _QWORD))(v27 + 96))(v26, v25);
  if ( (v25 & 0x80000000) == 0 && v31 )
  {
    if ( v31 == 1 )
    {
      v32 = 0;
LABEL_13:
      v33 = (const __m128i *)sub_1EA6A0(a1[2] + 384LL, v28, v29, v30, *(double *)a3.m128_u64);
      v34 = a1[55];
      v48 = _mm_loadu_si128(v33);
      v35 = _mm_loadu_si128(v33 + 1);
      v49 = v35;
      v50 = v33[2].m128i_i64[0];
      if ( v14 )
      {
        v49.m128i_i16[7] = 1024;
        if ( v34 )
        {
          v34 = *(_QWORD *)(v34 + 8);
          v45 = v34;
        }
        else
        {
          v45 = 0;
        }
        v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v45 + 120LL))(v34, v25, v32);
      }
      else
      {
        v49.m128i_i16[7] = 0;
        if ( v34 )
        {
          v34 = *(_QWORD *)(v34 + 8);
          v36 = v34;
        }
        else
        {
          v36 = 0;
        }
        *(double *)v35.m128i_i64 = (*(double (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 112LL))(
                                     v34,
                                     v25,
                                     v32);
      }
      v49.m128i_i32[2] = v37;
      *(_DWORD *)(a1[2] + 952LL) |= 0x7000000u;
      sub_2004D0(a1[2], v48.m128i_i8, 1, v38, *(double *)v35.m128i_i64, a4, a5, a6, v39, v40, a9, a10);
      return v64 - __readfsqword(0x28u);
    }
    v54 = 0;
    v51 = (__int64 (__fastcall **)())&stru_86F6A0;
    v42 = &v60;
    v52 = 0x3FF000004LL;
    v55 = "Please select a node";
    v53 = -1;
    a4 = (__m128)(unsigned __int64)&off_861250;
    v43 = (int *)v59;
    v56 = 2;
    v58 = -1;
    v57 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_861260), (__m128i)(unsigned __int64)&off_861250);
    a3.m128_u64[0] = 0;
    do
    {
      *(_QWORD *)v43 = 0;
      v43 += 6;
      *((_OWORD *)v43 - 1) = 0;
    }
    while ( &v60 != v43 );
    v60 = 0;
    if ( ((HIDWORD(v52) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v52) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, HIDWORD(v52), v29, v30, 0.0);
        BUG();
      }
      BYTE3(v52) = ((HIDWORD(v52) >> 19) & 0x3F) - 1;
      HIDWORD(v52) &= 0xFE07FFFF;
    }
    v28 = (__int64)&v48;
    v61 = a1;
    v51 = link_chooser_t___vtable;
    v62 = v25;
    v63 = v14;
    v48.m128i_i64[0] = 0;
    v47 = sub_4AED50(&v51, &v48, v29, v30);
    v51 = (__int64 (__fastcall **)())&stru_86F6A0;
    do
    {
      v44 = *((_QWORD *)v42 - 3);
      v42 -= 6;
      if ( v44 )
      {
        *((_QWORD *)v42 + 1) = 0;
        *(double *)a3.m128_u64 = qfree(v44, v48.m128i_i8, *(double *)a3.m128_u64);
      }
    }
    while ( v42 != (int *)v59 );
    if ( v47 >= 0 )
    {
      v32 = v47;
      if ( v47 < v31 )
        goto LABEL_13;
    }
  }
  return v64 - __readfsqword(0x28u);
}
