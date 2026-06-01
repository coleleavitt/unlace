__int64 __fastcall sub_31A8A0(
        double a1,
        double a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __m128i v10; // xmm0
  int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdi
  __m128i *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rbx
  _QWORD *v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i v35; // [rsp+0h] [rbp-128h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+10h] [rbp-118h] BYREF
  __int64 v37; // [rsp+18h] [rbp-110h]
  __int128 v38; // [rsp+20h] [rbp-108h]
  __int64 v39; // [rsp+30h] [rbp-F8h]
  const char *v40; // [rsp+38h] [rbp-F0h]
  int v41; // [rsp+40h] [rbp-E8h]
  __m128i v42; // [rsp+48h] [rbp-E0h] BYREF
  int v43; // [rsp+58h] [rbp-D0h]
  char v44; // [rsp+60h] [rbp-C8h] BYREF
  char v45; // [rsp+A8h] [rbp-80h] BYREF
  int v46; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-60h]
  __int128 v48; // [rsp+D0h] [rbp-58h]
  __int64 v49; // [rsp+E0h] [rbp-48h]
  __int128 v50; // [rsp+E8h] [rbp-40h]
  unsigned __int64 v51; // [rsp+F8h] [rbp-30h]

  v51 = __readfsqword(0x28u);
  v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_865CA8), (__m128i)(unsigned __int64)&off_865CA0);
  if ( !byte_8CEB00 )
  {
    v35 = v10;
    v27 = qalloc_or_throw(232);
    v28 = _mm_load_si128(&v35);
    v29 = v27;
    *(_QWORD *)v27 = &stru_86F6A0;
    v30 = (_QWORD *)(v27 + 176);
    *(_QWORD *)(v27 + 32) = 0;
    *(_DWORD *)(v27 + 48) = 1;
    *(_DWORD *)(v27 + 72) = -1;
    *(_QWORD *)(v27 + 8) = 0x20F04FF000004LL;
    *(_QWORD *)(v27 + 40) = "Recent scripts";
    v31 = (_QWORD *)(v27 + 80);
    *(__m128i *)(v29 + 56) = v28;
    *(_OWORD *)(v29 + 16) = -1;
    do
    {
      *v31 = 0;
      v31 += 3;
      *((_OWORD *)v31 - 1) = 0;
    }
    while ( v30 != v31 );
    *(_DWORD *)(v29 + 176) = 0;
    v32 = *(unsigned int *)(v29 + 12);
    v33 = ((*(_DWORD *)(v29 + 12) >> 19) & 0x3Fu) - 1;
    if ( ((*(_DWORD *)(v29 + 12) >> 19) & 0x3F) != 0 )
    {
      if ( *(_BYTE *)(v29 + 11) != 0xFF )
      {
        if ( under_debugger )
          goto LABEL_41;
        interr(3449, a10, v32, v33, 0.0);
        goto LABEL_39;
      }
      v32 = (unsigned int)v32 & 0xFE07FFFF;
      *(_BYTE *)(v29 + 11) = ((*(_DWORD *)(v29 + 12) >> 19) & 0x3F) - 1;
      *(_DWORD *)(v29 + 12) = v32;
    }
    *(_QWORD *)(v29 + 184) = 0;
    *(_QWORD *)v29 = rs_chooser_t___vtable;
    *(_QWORD *)(v29 + 208) = 0;
    *(_DWORD *)(v29 + 72) = 64;
    *(_OWORD *)(v29 + 192) = 0;
    *(_OWORD *)(v29 + 216) = 0;
    sub_4AED50(v29, &qword_8CDAC0, v32, v33);
    return 1;
  }
  v41 = 1;
  v36 = (__int64 (__fastcall **)())&stru_86F6A0;
  v39 = 0;
  v11 = (int *)&v44;
  v43 = -1;
  v37 = 0x20F07FF000004LL;
  v40 = "Recent scripts";
  v42 = v10;
  v38 = -1;
  do
  {
    *(_QWORD *)v11 = 0;
    v11 += 6;
    *((_OWORD *)v11 - 1) = 0;
  }
  while ( v11 != &v46 );
  v46 = 0;
  v12 = HIDWORD(v37);
  v13 = ((HIDWORD(v37) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v37) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v37) == 0xFF )
    {
      LOBYTE(v12) = BYTE4(v37);
      BYTE3(v37) = ((HIDWORD(v37) >> 19) & 0x3F) - 1;
      HIDWORD(v37) &= 0xFE07FFFF;
      goto LABEL_7;
    }
LABEL_39:
    if ( !under_debugger )
      interr(3449, a10, v12, v13, 0.0);
LABEL_41:
    BUG();
  }
LABEL_7:
  v14 = v12 & 1;
  v47 = 0;
  v36 = rs_chooser_t___vtable;
  v49 = 0;
  v43 = 64;
  v48 = 0;
  v50 = 0;
  if ( !(_DWORD)v14 )
  {
    if ( !under_debugger )
      interr(40537, a10, v14, v13, 0.0);
    goto LABEL_41;
  }
  v15 = sub_4AED50(&v36, &qword_8CDAC0, v14, v13);
  if ( v15 >= 0 && v15 < (unsigned __int64)v48 )
  {
    v18 = &s1;
    v19 = v47 + 24 * v15;
    if ( *(_QWORD *)(v19 + 8) )
      v18 = *(const char **)v19;
    if ( v18 )
      sub_319590(v18, 0.0, (__m128)-1LL, (__m128)(unsigned __int64)&off_865CA0, a4, v16, v17, a7, a8);
  }
  v36 = rs_chooser_t___vtable;
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49, (const char *)&qword_8CDAC0);
  }
  v20 = v47;
  if ( v47 )
  {
    v21 = v48;
    if ( (_QWORD)v48 )
    {
      v22 = 0;
      do
      {
        v23 = (__int64 *)(v20 + 24 * v22);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24, (const char *)&qword_8CDAC0);
          v20 = v47;
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v48 = 0;
    qfree(v20, (const char *)&qword_8CDAC0);
  }
  v36 = (__int64 (__fastcall **)())&stru_86F6A0;
  v25 = (__m128i *)&v45;
  do
  {
    v26 = v25->m128i_i64[0];
    if ( v25->m128i_i64[0] )
    {
      v25->m128i_i64[1] = 0;
      qfree(v26, (const char *)&qword_8CDAC0);
    }
    v25 = (__m128i *)((char *)v25 - 24);
  }
  while ( &v42 != v25 );
  return 1;
}
