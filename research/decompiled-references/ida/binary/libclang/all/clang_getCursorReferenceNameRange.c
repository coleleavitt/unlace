_QWORD *__fastcall clang_getCursorReferenceNameRange(
        _QWORD *a1,
        void **a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  int v10; // r12d
  const __m128i *v11; // r15
  __int8 v12; // al
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 *v16; // r9
  unsigned int *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // dl
  int *v21; // rax
  int v22; // ecx
  int v23; // edx
  void *v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // rax
  unsigned __int16 *v27; // rax
  const __m128i *v28; // r15
  __int16 v29; // ax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  const __m128i *v36; // r15
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int128 v42; // xmm0
  int v43; // edx
  int v44; // ecx
  unsigned __int64 v45; // rbp
  int v46; // r8d
  int v47; // r9d
  __m128i v48; // xmm0
  __int64 v49; // rax
  __m128i v50; // [rsp+0h] [rbp-F8h]
  __m128i v51; // [rsp+0h] [rbp-F8h]
  __m128i v52; // [rsp+0h] [rbp-F8h]
  __m128i v53; // [rsp+0h] [rbp-F8h]
  __m128i si128; // [rsp+0h] [rbp-F8h]
  __int64 v55; // [rsp+28h] [rbp-D0h] BYREF
  __m128i v56; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-B8h] BYREF
  __int32 v58; // [rsp+48h] [rbp-B0h]
  __int64 v59; // [rsp+50h] [rbp-A8h]
  void *v60; // [rsp+60h] [rbp-98h] BYREF
  __int64 v61; // [rsp+68h] [rbp-90h]
  _BYTE v62[32]; // [rsp+70h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-68h] BYREF
  __m128i v64[5]; // [rsp+A0h] [rbp-58h] BYREF

  v8 = (unsigned int)a3;
  v9 = a1;
  v10 = a7;
  v60 = v62;
  v61 = 0x400000000LL;
  switch ( (_DWORD)a7 )
  {
    case 'f':
      v53 = _mm_loadu_si128((const __m128i *)&a7);
      v36 = (const __m128i *)sub_63A260(
                               (_DWORD)a1,
                               (_DWORD)a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               v53.m128i_i32[0],
                               v53.m128i_i32[2],
                               _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
      if ( (v36->m128i_i16[0] & 0x1FF) != 0x2F )
        break;
      v37 = 0;
      if ( (v36->m128i_i8[2] & 0x10) != 0 )
        v37 = _mm_loadu_si128(v36 + 3);
      v56 = v37;
      v38 = sub_A7BB10(&v56);
      v16 = nullptr;
      v17 = (unsigned int *)v38;
      v39 = v36[1].m128i_i64[1];
      v58 = v36[2].m128i_i32[2];
      v20 = 1;
      v40 = *(_QWORD *)(v39 + 40);
      v41 = v36[2].m128i_i64[0];
      v57 = v40;
      v59 = v41;
      goto LABEL_11;
    case 'g':
      v52 = _mm_loadu_si128((const __m128i *)&a7);
      v27 = (unsigned __int16 *)sub_63A260(
                                  (_DWORD)a1,
                                  (_DWORD)a2,
                                  a3,
                                  a4,
                                  a5,
                                  a6,
                                  v52.m128i_i32[0],
                                  v52.m128i_i32[2],
                                  _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
      a3 = *v27;
      LOWORD(a3) = a3 & 0x1FF;
      if ( (_WORD)a3 == 92 )
      {
        a3 = *((unsigned __int8 *)v27 + 3);
        v28 = *(const __m128i **)((char *)v27 + a3);
        v29 = v28->m128i_i16[0] & 0x1FF;
        if ( v29 == 80 )
        {
          v28 = (const __m128i *)v28[1].m128i_i64[0];
          v29 = v28->m128i_i16[0] & 0x1FF;
        }
        if ( v29 == 72 )
        {
          v30 = 0;
          if ( (v28->m128i_i8[2] & 8) != 0 )
            v30 = _mm_loadu_si128(v28 + 2);
          v56 = v30;
          v31 = sub_A7BB10(&v56);
          v16 = nullptr;
          v17 = (unsigned int *)v31;
          v32 = v28[1].m128i_i64[0];
          v58 = v28->m128i_i32[1];
          v33 = *(_QWORD *)(v32 + 40);
          v34 = v28[1].m128i_i64[1];
          v57 = v33;
          v59 = v34;
          goto LABEL_10;
        }
      }
      break;
    case 'e':
      v50 = _mm_loadu_si128((const __m128i *)&a7);
      v11 = (const __m128i *)sub_63A260(
                               (_DWORD)a1,
                               (_DWORD)a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               v50.m128i_i32[0],
                               v50.m128i_i32[2],
                               _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
      if ( (v11->m128i_i16[0] & 0x1FF) == 0x48 )
      {
        v12 = v11->m128i_i8[2];
        v13 = 0;
        if ( (v12 & 0x10) != 0 )
          v13 = v11[((v11->m128i_i8[2] & 8) != 0) + 2].m128i_i64[(v12 & 0x20) != 0];
        v55 = v13;
        v14 = 0;
        if ( (v12 & 8) != 0 )
          v14 = _mm_loadu_si128(v11 + 2);
        v56 = v14;
        v15 = sub_A7BB10(&v56);
        v16 = &v55;
        v17 = (unsigned int *)v15;
        v18 = v11[1].m128i_i64[0];
        v58 = v11->m128i_i32[1];
        v19 = *(_QWORD *)(v18 + 40);
        v59 = v11[1].m128i_i64[1];
        v57 = v19;
LABEL_10:
        v20 = 0;
LABEL_11:
        sub_5FA080((unsigned int **)ptr, (char)a2, v20, (__int64 *)&v57, v17, v16);
        a2 = ptr;
        sub_5F84D0((__int64)&v60, (__int64)ptr);
        LODWORD(a1) = ptr[0];
        if ( ptr[0] != v64 )
          free(ptr[0]);
      }
      break;
    default:
      goto LABEL_25;
  }
  if ( (_DWORD)v61 )
  {
    if ( (unsigned int)v8 < (unsigned int)v61 )
    {
      v21 = (int *)((char *)v60 + 8 * v8);
      v22 = v21[1];
      if ( v22 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          LODWORD(a7) = v10;
          v24 = *(void **)v21;
          v51 = _mm_loadu_si128((const __m128i *)&a7);
          v25 = _mm_loadu_si128((const __m128i *)&a8);
          v26 = sub_63A2D0(
                  (_DWORD)a1,
                  (_DWORD)a2,
                  v23,
                  v22,
                  a5,
                  a6,
                  v51.m128i_i32[0],
                  v51.m128i_i32[2],
                  v25.m128i_i32[0],
                  v25.m128i_i64[1]);
          ptr[0] = v24;
          LOBYTE(ptr[1]) = 1;
          sub_602210(v9, *(_QWORD *)(v26 + 2152), *(_QWORD *)(v26 + 2160), (__int64)ptr);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_26;
  }
LABEL_25:
  if ( (_DWORD)v8
    || (LODWORD(a7) = v10,
        v42 = (__int128)_mm_loadu_si128((const __m128i *)&a8),
        *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)&a7),
        v64[0] = (__m128i)v42,
        v45 = sub_5FD3D0((int)a1, (__int64)a2, a3, a4, a5, a6, *(__int128 *)ptr, v42),
        !HIDWORD(v45))
    || !(_DWORD)v45 )
  {
LABEL_26:
    clang_getNullRange(v9);
    goto LABEL_27;
  }
  si128 = _mm_load_si128((const __m128i *)ptr);
  v48 = _mm_load_si128(v64);
  v49 = sub_63A2D0(
          (_DWORD)a1,
          (_DWORD)a2,
          v43,
          v44,
          v46,
          v47,
          si128.m128i_i32[0],
          si128.m128i_i32[2],
          v48.m128i_i32[0],
          v48.m128i_i64[1]);
  v57 = v45;
  LOBYTE(v58) = 1;
  sub_602210(v9, *(_QWORD *)(v49 + 2152), *(_QWORD *)(v49 + 2160), (__int64)&v57);
LABEL_27:
  if ( v60 != v62 )
    free(v60);
  return v9;
}

