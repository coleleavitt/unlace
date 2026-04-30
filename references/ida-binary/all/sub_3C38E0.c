unsigned __int64 __fastcall sub_3C38E0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 i; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rbp
  char *v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 *v23; // rbp
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  struct _Unwind_Exception *v31; // rbx
  const char *v32; // [rsp+0h] [rbp-D8h]
  const char *v33; // [rsp+8h] [rbp-D0h]
  __int64 *v34; // [rsp+10h] [rbp-C8h]
  __int64 v35; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+28h] [rbp-B0h]
  __int64 v37; // [rsp+40h] [rbp-98h] BYREF
  __int128 v38; // [rsp+48h] [rbp-90h]
  __int64 v39; // [rsp+60h] [rbp-78h] BYREF
  __int128 v40; // [rsp+68h] [rbp-70h]
  __int64 v41; // [rsp+80h] [rbp-58h] BYREF
  __int128 v42; // [rsp+88h] [rbp-50h]
  unsigned __int64 v43; // [rsp+98h] [rbp-40h]

  v32 = a2;
  v43 = __readfsqword(0x28u);
  v40 = 0;
  v39 = 0;
  v3 = qvector_reserve(&v39, 0, 28, 1);
  v39 = v3;
  *(_QWORD *)&v40 = 28;
  *(__m128i *)v3 = _mm_load_si128((const __m128i *)&xmmword_5DD6B0);
  v37 = 0;
  *(__m128i *)(v3 + 11) = _mm_load_si128((const __m128i *)&xmmword_5DD6C0);
  v38 = 0;
  *(_BYTE *)(v39 + 27) = 0;
  v34 = &v37;
  v4 = qvector_reserve(&v37, 0, 6, 1);
  v37 = v4;
  v33 = (const char *)&v35;
  *(_QWORD *)&v38 = 6;
  *(_DWORD *)v4 = 1769221674;
  *(_BYTE *)(v4 + 4) = 108;
  *(_BYTE *)(v37 + 5) = 0;
  v35 = 0;
  v36 = 0;
  v5 = qvector_reserve(&v35, 0, 28, 1);
  v35 = v5;
  *(_QWORD *)&v36 = 28;
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_5DD6D0);
  *(__m128i *)(v5 + 11) = _mm_load_si128((const __m128i *)&xmmword_5DD6E0);
  *(_BYTE *)(v35 + 27) = 0;
  v6 = qalloc_or_throw(216);
  *(_QWORD *)v6 = &stru_86F6A0;
  *(_QWORD *)(v6 + 8) = 0x3FF000004LL;
  *(_QWORD *)(v6 + 40) = "Available Type Libraries";
  *(_OWORD *)(v6 + 16) = -1;
  v7 = _mm_loadl_epi64((const __m128i *)&off_869120);
  v8 = (_QWORD *)(v6 + 80);
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 48) = 3;
  *(_DWORD *)(v6 + 72) = -1;
  *(__m128i *)(v6 + 56) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&off_869100);
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( (_QWORD *)(v6 + 176) != v8 );
  v9 = *(unsigned int *)(v6 + 12);
  *(_DWORD *)(v6 + 176) = 0;
  v10 = (((unsigned int)v9 >> 19) & 0x3F) - 1;
  if ( (((unsigned int)v9 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v31 = (struct _Unwind_Exception *)interr(3449, 0, v9, v10, 0.0);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39, nullptr);
        }
        _Unwind_Resume(v31);
      }
      BUG();
    }
    v9 = (unsigned int)v9 & 0xFE07FFFF;
    *(_BYTE *)(v6 + 11) = v10;
    *(_DWORD *)(v6 + 12) = v9;
  }
  *(_QWORD *)(v6 + 184) = a1;
  *(_QWORD *)v6 = atl_chooser_t___vtable;
  *(_QWORD *)(v6 + 192) = 0;
  *(_DWORD *)(v6 + 72) = 69;
  *(_OWORD *)(v6 + 200) = 0;
  sub_1C76F0((int)"HIDECANCEL\nBuilding list of .til files", 0, v9, v10);
  v41 = 0;
  v11 = "til";
  v42 = 0;
  get_ida_subdirs(&v41, "til", 1);
  for ( i = 0; i < (unsigned __int64)v42; ++i )
  {
    v11 = (const char *)(v6 + 192);
    v16 = *(_QWORD *)(v41 + 24 * i);
    sub_3B6CD0(v16, (__int64 *)(v6 + 192));
    v17 = qbasename(v16);
    if ( v16 != v17 )
    {
      *(_BYTE *)(v17 - 1) = 0;
      v11 = (const char *)(v6 + 192);
      sub_3B6CD0(v16, (__int64 *)(v6 + 192));
    }
  }
  v18 = *(_QWORD *)(v6 + 192);
  v19 = 56LL * *(_QWORD *)(v6 + 200);
  v20 = (char *)(v18 + v19);
  if ( v18 != v18 + v19 )
  {
    v21 = 0x6DB6DB6DB6DB6DB7LL * (v19 >> 3);
    if ( v21 )
    {
      _BitScanReverse64(&v22, v21);
      sub_3C2D40(*(_QWORD *)(v6 + 192), v20, 2LL * (int)v22);
      if ( v19 > 896 )
      {
        v23 = (__int64 *)(v18 + 896);
        v11 = (const char *)(v18 + 896);
        sub_3B6220(v18, v18 + 896);
        do
        {
          v24 = v23;
          v23 += 7;
          sub_3B6080(v24, v11);
        }
        while ( v20 != (char *)v23 );
        goto LABEL_15;
      }
    }
    else
    {
      sub_3C2D40(*(_QWORD *)(v6 + 192), v20, -2);
    }
    v11 = (const char *)(v18 + v19);
    sub_3B6220(v18, (__int64)v20);
  }
LABEL_15:
  v25 = v41;
  if ( v41 )
  {
    v26 = v42;
    if ( (_QWORD)v42 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v25 + 24 * v27);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, v11);
          v25 = v41;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v25, v11, v25, v12, v13, v14, v32, &v35, &v37, &v41);
  }
  sub_1C78D0();
  sub_3BF3E0((__int64)a1, (__int64)v32, v6, v33, (__int64)v34, (__int64)&v39);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v32);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v32);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v32);
  }
  *a1 = &type_library_dialog_t___vtable;
  return v43 - __readfsqword(0x28u);
}
