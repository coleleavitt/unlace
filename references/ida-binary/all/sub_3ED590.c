__int64 __fastcall sub_3ED590(
        __int64 a1,
        char a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128 v10; // xmm1
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm5
  const char *v14; // rax
  int *v15; // rax
  double v16; // xmm0_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __m128 si128; // xmm4
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r12
  char v23; // al
  __int64 v24; // r12
  __m128i *v25; // rbp
  __int64 v26; // rdi
  __int64 v28; // rax
  __m128 v29; // [rsp+0h] [rbp-178h] BYREF
  __int64 v30; // [rsp+10h] [rbp-168h] BYREF
  char v31; // [rsp+18h] [rbp-160h]
  const char *v32; // [rsp+20h] [rbp-158h] BYREF
  __int128 v33; // [rsp+28h] [rbp-150h]
  __m128i *v34; // [rsp+40h] [rbp-138h] BYREF
  __int128 v35; // [rsp+48h] [rbp-130h]
  __int64 (__fastcall **v36)(); // [rsp+60h] [rbp-118h] BYREF
  __int64 v37; // [rsp+68h] [rbp-110h]
  __int128 v38; // [rsp+70h] [rbp-108h]
  __int64 v39; // [rsp+80h] [rbp-F8h]
  const char *v40; // [rsp+88h] [rbp-F0h]
  int v41; // [rsp+90h] [rbp-E8h]
  __m128i v42; // [rsp+98h] [rbp-E0h] BYREF
  int v43; // [rsp+A8h] [rbp-D0h]
  char v44; // [rsp+B0h] [rbp-C8h] BYREF
  char v45; // [rsp+F8h] [rbp-80h] BYREF
  int v46; // [rsp+110h] [rbp-68h] BYREF
  __m128 v47; // [rsp+118h] [rbp-60h]
  __int64 v48; // [rsp+128h] [rbp-50h]
  __int16 v49; // [rsp+130h] [rbp-48h]
  unsigned __int64 v50; // [rsp+138h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v33 = 0;
  v32 = nullptr;
  v10 = (__m128)_mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)&xref_chooser_t___vtable_at__184,
                  (__m128i)(unsigned __int64)&v34);
  v29 = v10;
  sub_3ECD30((__int64 *)&v32, a1, a2);
  v35 = 0;
  v34 = nullptr;
  sub_3EBB40(&v34, a1, a2, nullptr, 0, 1);
  v14 = &s1;
  if ( (_QWORD)v33 )
    v14 = v32;
  v40 = v14;
  v38 = -1;
  v36 = (__int64 (__fastcall **)())&stru_86F6A0;
  v37 = 0x20003FF000004LL;
  v15 = (int *)&v44;
  v39 = 0;
  v41 = 4;
  v43 = -1;
  v42 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86A468), (__m128i)(unsigned __int64)&off_86A440);
  v16 = 0.0;
  do
  {
    *(_QWORD *)v15 = 0;
    v15 += 6;
    *((_OWORD *)v15 - 1) = 0;
  }
  while ( &v46 != v15 );
  v46 = 0;
  v17 = HIDWORD(v37);
  v18 = ((HIDWORD(v37) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v37) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v37) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a1, HIDWORD(v37), v18, 0.0);
      BUG();
    }
    v17 = HIDWORD(v37) & 0xFE07FFFF;
    BYTE3(v37) = ((HIDWORD(v37) >> 19) & 0x3F) - 1;
    HIDWORD(v37) &= 0xFE07FFFF;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&v29);
  v36 = xref_chooser_t___vtable;
  v43 = 55;
  v46 = 2;
  v48 = -1;
  v49 = 0;
  v47 = si128;
  if ( (_QWORD)v35 )
  {
    v20 = (const char *)a1;
    v21 = sub_3EBDF0((__int64)&v36);
    if ( v21 >= 0 && (unsigned __int64)v21 < *(_QWORD *)(v47.m128_u64[1] + 8) )
    {
      v22 = *(_QWORD *)v47.m128_u64[1] + 16 * v21;
      if ( v21 )
      {
        v23 = *(_BYTE *)(v22 + 9);
        v20 = (const char *)&v30;
        v30 = *(_QWORD *)v22;
        v31 = v23;
        set_xrefpos(a1, &v30, 0.0);
      }
      else
      {
        v28 = ea2node(a1);
        v20 = (_BYTE *)(&off_18 + 3);
        netnode_supdel(v28, 27, 83);
      }
      v24 = *(_QWORD *)v22;
      goto LABEL_14;
    }
  }
  else
  {
    v20 = v40;
    sub_169630(
      (int)"There are no %s",
      (__int64)v40,
      v17,
      v18,
      v11,
      v12,
      (__m128)0LL,
      v10,
      (__m128)(unsigned __int64)&v34,
      (__m128)(unsigned __int64)&off_86A440,
      si128,
      v13,
      a9,
      a10,
      v29.m128_i8[0]);
  }
  v24 = -1;
LABEL_14:
  v47.m128_u64[0] = (unsigned __int64)&xref_chooser_t___vtable_at__184;
  v25 = (__m128i *)&v45;
  v36 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v26 = v25->m128i_i64[0];
    if ( v25->m128i_i64[0] )
    {
      v25->m128i_i64[1] = 0;
      v16 = qfree(v26, v20);
    }
    v25 = (__m128i *)((char *)v25 - 24);
  }
  while ( &v42 != v25 );
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    v16 = qfree(v34, v20, v16);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v20, v16);
  }
  return v24;
}
