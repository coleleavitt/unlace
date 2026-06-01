__int64 __fastcall sub_4D2150(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _BYTE *v4; // rax
  char *v5; // r9
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // r15
  __m128i v9; // xmm5
  char *v10; // rdi
  __int64 v11; // rax
  char *v12; // rsi
  __m128i si128; // xmm3
  __m128i *v14; // r14
  __m128i v15; // xmm4
  void *v16; // rsi
  __int64 v17; // rax
  __m128 v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // r10
  char *v21; // rax
  double v22; // xmm0_8
  void *v23; // rdx
  void **v24; // rbx
  void **v25; // rbp
  __int64 v27; // rdx
  char *v28; // rax
  __m128 v29; // xmm0
  void *v30; // rcx
  __m128 v31; // [rsp+0h] [rbp-C8h] BYREF
  void *v32; // [rsp+10h] [rbp-B8h]
  __int64 v33; // [rsp+18h] [rbp-B0h]
  void *v34; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-A0h]
  void *src[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+40h] [rbp-88h]
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v39; // [rsp+60h] [rbp-68h]
  void *v40; // [rsp+70h] [rbp-58h] BYREF
  void *v41; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+80h] [rbp-48h]
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v2 = 0;
  v33 = a1;
  v43 = __readfsqword(0x28u);
  *(_OWORD *)src = 0;
  v37 = 0;
  while ( v2 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 464LL))(a2) )
  {
    v4 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 456LL))(a2, v2);
    if ( v4[44] )
      goto LABEL_18;
    (*(void (__fastcall **)(void **, _BYTE *))(*(_QWORD *)v4 + 416LL))(ptr, v4);
    v6 = v37;
    if ( !src[0] )
    {
      si128 = _mm_load_si128((const __m128i *)ptr);
      v8 = v39;
      v39 = 0;
      v32 = ptr[0];
      v31 = (__m128)si128;
      v34 = ptr[1];
      *(_OWORD *)ptr = 0;
      v35 = v37;
      sub_1B21C0((__m128i *)src, 0, 1, 0, v37, (__int64)v5);
      v12 = (char *)src[1];
      v11 = v37;
      v6 = v35;
      goto LABEL_11;
    }
    v7 = *(_DWORD *)src[0];
    v32 = ptr[0];
    if ( v7 > 1 )
      goto LABEL_6;
    v5 = (char *)src[1];
    v16 = (void *)(((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *((_QWORD *)src[0] + 1) - 0xAAAAAAAAAAAAAAABLL * (((char *)src[1] - (char *)v16) >> 3) == v37 )
    {
      if ( v37 )
      {
        v30 = ptr[1];
        v8 = v39;
        *(_OWORD *)ptr = 0;
        v34 = v30;
        v39 = 0;
        v31 = _mm_loadh_ps((const double *)&v34);
LABEL_7:
        if ( *(int *)src[0] > 1 )
          goto LABEL_8;
        v12 = (char *)src[1];
        v19 = *((_QWORD *)src[0] + 1);
        v20 = (__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
        v11 = v37;
        v5 = (char *)(v19 - v37 - 0xAAAAAAAAAAAAAAABLL * (v20 >> 3));
        if ( (__int64)v5 > 0 )
          goto LABEL_11;
        if ( v20 <= 0 || (v5 = (char *)(2 * v37), 3 * v37 >= 2 * v19) )
        {
LABEL_8:
          v35 = v37;
          sub_1B21C0((__m128i *)src, 0, 1, 0, v37, (__int64)v5);
          v10 = (char *)src[1];
          v6 = v35;
        }
        else
        {
          v10 = (char *)src[1] - 8 * (v20 >> 3);
          if ( v37 && v10 != src[1] && src[1] && v10 )
          {
            v32 = (void *)v37;
            v21 = (char *)memmove(v10, src[1], 24 * v37);
            v6 = (__int64)v32;
            v10 = v21;
          }
          src[1] = v10;
        }
        v11 = v37;
        v12 = v10;
LABEL_11:
        v14 = (__m128i *)&v12[24 * v6];
        memmove(&v14[1].m128i_u64[1], v14, 24 * (v11 - v6));
        v15 = _mm_load_si128((const __m128i *)&v31);
        v14[1].m128i_i64[0] = v8;
        *v14 = v15;
        ++v37;
        goto LABEL_12;
      }
      if ( v16 == src[1] )
      {
LABEL_6:
        v8 = v39;
        v9 = _mm_load_si128((const __m128i *)ptr);
        v39 = 0;
        v32 = ptr[0];
        v31 = (__m128)v9;
        v34 = ptr[1];
        *(_OWORD *)ptr = 0;
        goto LABEL_7;
      }
      v17 = v39;
      v39 = 0;
      v18 = _mm_loadh_ps((const double *)&ptr[1]);
      *((_QWORD *)src[1] - 1) = v17;
      *(__m128 *)(v5 - 24) = v18;
      *(_OWORD *)ptr = 0;
      src[1] = (char *)src[1] - 24;
      ++v37;
    }
    else
    {
      v27 = v39;
      v28 = (char *)src[1] + 24 * v37;
      v29 = _mm_loadh_ps((const double *)&ptr[1]);
      v39 = 0;
      *((_QWORD *)v28 + 2) = v27;
      *(__m128 *)v28 = v29;
      *(_OWORD *)ptr = 0;
      ++v37;
    }
LABEL_12:
    if ( !src[0] || *(int *)src[0] > 1 )
      sub_1B21C0((__m128i *)src, 0, 0, 0, v6, (__int64)v5);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
LABEL_18:
    ++v2;
  }
  v22 = QT::QString::fromUtf8(&v40, 2, ", ");
  v23 = v41;
  if ( !v41 )
    v23 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(v33, src, v23, v42, v22);
  if ( v40 && !_InterlockedSub((volatile signed __int32 *)v40, 1u) )
    free(v40);
  if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
  {
    v24 = (void **)src[1];
    v25 = (void **)((char *)src[1] + 24 * v37);
    if ( src[1] != v25 )
    {
      do
      {
        if ( *v24 && !_InterlockedSub((volatile signed __int32 *)*v24, 1u) )
          free(*v24);
        v24 += 3;
      }
      while ( v25 != v24 );
    }
    free(src[0]);
  }
  return v33;
}
