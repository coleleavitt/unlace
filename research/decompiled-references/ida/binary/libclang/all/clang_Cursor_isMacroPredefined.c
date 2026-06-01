_BOOL8 __fastcall clang_Cursor_isMacroPredefined(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  __m128i v8; // xmm0
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rbp
  int v13; // r8d
  int v14; // r9d
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbx
  _DWORD *v19; // rax
  int v20; // r13d
  __int64 v21; // rbx
  unsigned int v22; // ebp
  __int64 v23; // r12
  int v24; // r14d
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  _DWORD *v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  __int64 *v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rsi
  _DWORD *v40; // rax
  _DWORD *v41; // rdx
  __int64 *v42; // rdi
  __int64 v43; // rcx
  _DWORD *v44; // rax
  _DWORD *v45; // rdx
  __m128i v46; // [rsp+0h] [rbp-88h]
  __m128i si128; // [rsp+0h] [rbp-88h]
  _QWORD *v48; // [rsp+28h] [rbp-60h]
  _BYTE v49[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v50; // [rsp+48h] [rbp-40h]

  v8 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  if ( (_DWORD)a7 == 501 )
  {
    *(_QWORD *)v49 = __PAIR64__(DWORD1(a7), 501);
    *(__m128i *)&v49[8] = v8;
    v50 = a8.m128i_i64[1];
    si128 = _mm_load_si128((const __m128i *)v49);
    v28 = sub_639FD0((_DWORD)a1, a2, a8.m128i_i32[2], DWORD1(a7), a5, a6, si128.m128i_i32[0], si128.m128i_i64[1]);
    if ( !v28 )
      return 0;
    v12 = *(_QWORD *)(v28 + 16);
  }
  else
  {
    if ( (_DWORD)a7 != 502 )
      return 0;
    a1 = v49;
    *(_QWORD *)v49 = __PAIR64__(DWORD1(a7), 502);
    v50 = a8.m128i_i64[1];
    *(__m128i *)&v49[8] = v8;
    v12 = sub_63A030(v49, a2, a8.m128i_i64[1], DWORD1(a7), a5, a6);
  }
  if ( !v12 )
    return 0;
  v46 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = _mm_loadu_si128(&a8);
  v16 = sub_63A2F0(
          (_DWORD)a1,
          a2,
          v10,
          v11,
          v13,
          v14,
          v46.m128i_i32[0],
          v46.m128i_i32[2],
          v15.m128i_i32[0],
          v15.m128i_i64[1]);
  v17 = *(_QWORD *)(v16 + 64);
  v18 = v16;
  v19 = (_DWORD *)sub_601340((_QWORD *)v17, v12);
  if ( !v19 )
    return 0;
  v20 = *(_DWORD *)(v17 + 2376);
  v21 = *(_QWORD *)(*(_QWORD *)(v18 + 80) + 2152LL);
  v22 = *v19 & 0x7FFFFFFF;
  v23 = *(int *)(v21 + 408);
  v24 = v23 + 1;
  if ( (unsigned int)(v23 + 1) <= 1 )
  {
    v25 = *(_DWORD **)(v21 + 184);
    if ( v22 < (*v25 & 0x7FFFFFFFu) )
      goto LABEL_26;
LABEL_10:
    if ( *(_DWORD *)(v21 + 192) != v24 )
    {
      v26 = &v25[6 * v24];
      goto LABEL_12;
    }
    goto LABEL_27;
  }
  if ( (int)v23 >= 0 )
  {
    v25 = *(_DWORD **)(v21 + 184);
    if ( v22 < (v25[6 * v23] & 0x7FFFFFFFu) )
      goto LABEL_26;
    goto LABEL_10;
  }
  v29 = (unsigned int)(-2 - v23);
  v30 = *(_QWORD *)(*(_QWORD *)(v21 + 256) + 8LL * ((unsigned int)(-2 - v23) >> 6));
  if ( _bittest64(&v30, v29) )
  {
    v36 = (_QWORD *)(*(_QWORD *)(v21 + 208) + 8 * ((unsigned __int64)(int)v29 >> 5));
    v37 = *v36;
    if ( !*v36 )
    {
      v38 = (__int64 *)(*(_QWORD *)(v21 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v39 = *v38;
      v38[10] += 768;
      v40 = (_DWORD *)((v39 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v38[1] >= (unsigned __int64)(v40 + 192) && v39 )
      {
        *v38 = (__int64)(v40 + 192);
      }
      else
      {
        v48 = v36;
        v40 = (_DWORD *)sub_5F8390((__int64)v38, 768, 3);
        v36 = v48;
      }
      *v36 = v40;
      v41 = v40 + 192;
      do
      {
        *v40 = 0;
        v40 += 6;
        *((_OWORD *)v40 - 1) = 0;
      }
      while ( v41 != v40 );
      v37 = *v36;
    }
    v31 = (_DWORD *)(v37 + 24LL * ((-2 - (_BYTE)v23) & 0x1F));
  }
  else
  {
    v31 = (_DWORD *)sub_CA9380(v21, (unsigned int)v29, 0);
  }
  if ( v22 < (*v31 & 0x7FFFFFFFu) )
    goto LABEL_26;
  if ( (_DWORD)v23 == -2 )
    goto LABEL_13;
  if ( v24 == *(_DWORD *)(v21 + 192) )
  {
LABEL_27:
    if ( v22 < *(_DWORD *)(v21 + 248) )
      goto LABEL_13;
LABEL_26:
    v27 = sub_CA9700(v21, v22);
    return v27 == v20;
  }
  v32 = (unsigned int)(-2 - v24);
  v33 = *(_QWORD *)(*(_QWORD *)(v21 + 256) + 8LL * ((unsigned int)(-2 - v24) >> 6));
  if ( _bittest64(&v33, v32) )
  {
    v34 = (__int64 *)(*(_QWORD *)(v21 + 208) + 8 * ((unsigned __int64)(int)v32 >> 5));
    v35 = *v34;
    if ( !*v34 )
    {
      v42 = (__int64 *)(*(_QWORD *)(v21 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v43 = *v42;
      v42[10] += 768;
      v44 = (_DWORD *)((v43 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v42[1] >= (unsigned __int64)(v44 + 192) && v43 )
        *v42 = (__int64)(v44 + 192);
      else
        v44 = (_DWORD *)sub_5F8390((__int64)v42, 768, 3);
      *v34 = (__int64)v44;
      v45 = v44 + 192;
      do
      {
        *v44 = 0;
        v44 += 6;
        *((_OWORD *)v44 - 1) = 0;
      }
      while ( v44 != v45 );
      v35 = *v34;
    }
    v26 = (_DWORD *)(v35 + 24 * (v32 & 0x1F));
  }
  else
  {
    v26 = (_DWORD *)sub_CA9380(v21, (unsigned int)v32, 0);
  }
LABEL_12:
  if ( v22 >= (*v26 & 0x7FFFFFFFu) )
    goto LABEL_26;
LABEL_13:
  v27 = *(_DWORD *)(v21 + 408);
  return v27 == v20;
}

