QT::QAbstractScrollArea *__fastcall sub_272850(__int64 a1, __int64 a2, const char *a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  __m128i si128; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 (*v13)(); // rax
  char *v14; // rbx
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r13
  size_t v18; // r8
  char *v19; // r14
  QT::QAbstractScrollArea *v20; // rax
  QT::QAbstractScrollArea *v21; // rbx
  const char *v22; // rsi
  double v23; // xmm0_8
  double v24; // xmm0_8
  __int64 (*v26)(); // rdx
  __int64 v27; // rax
  size_t v28; // [rsp+8h] [rbp-110h]
  char *dest; // [rsp+10h] [rbp-108h] BYREF
  void *dest_8[2]; // [rsp+18h] [rbp-100h] BYREF
  int v31; // [rsp+30h] [rbp-E8h]
  __int64 v32; // [rsp+40h] [rbp-D8h]
  __int128 v33; // [rsp+48h] [rbp-D0h]
  __int128 v34; // [rsp+58h] [rbp-C0h]
  __int128 v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+78h] [rbp-A0h]
  __m128i v37; // [rsp+80h] [rbp-98h]
  __m128i v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+A0h] [rbp-78h]
  __int128 v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B8h] [rbp-60h]
  __int64 v42; // [rsp+C0h] [rbp-58h]
  char v43; // [rsp+C8h] [rbp-50h]
  __int64 v44; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v4 = getinf(45);
  setinf(45, v4 | 0xE0u);
  v5 = getinf(48);
  setinf(48, v5 | 4u);
  setinf(47, 4);
  v32 = 0;
  v36 = 0;
  v38.m128i_i64[0] = 0;
  v38.m128i_i64[1] = -1;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v40 = 0;
  sub_1E8870((__int64)&dest, 1);
  si128 = _mm_load_si128((const __m128i *)&dest);
  v43 = 0;
  v44 = 0;
  v37 = si128;
  v7 = _mm_load_si128((const __m128i *)&dest_8[1]);
  LODWORD(v39) = v31;
  v38 = v7;
  v8 = operator new(0x1B8u);
  sub_2876C0(v8, 0);
  *(_QWORD *)&v33 = v8;
  v9 = qalloc_or_throw(24);
  *(_QWORD *)(v9 + 16) = getinf(19);
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)v9 = &idaplace_t___vtable;
  *((_QWORD *)&v40 + 1) = v9;
  v10 = qalloc_or_throw(24);
  v11 = getinf(20);
  *(_DWORD *)(v10 + 8) = 0x7FFFFFFF;
  *(_QWORD *)v10 = &idaplace_t___vtable;
  *(_QWORD *)(v10 + 16) = v11;
  v41 = v10;
  v12 = getinf(19);
  LODWORD(dest_8[0]) = 0;
  dest = (char *)&idaplace_t___vtable;
  dest_8[1] = (void *)v12;
  if ( a1 )
  {
    v13 = *(__int64 (**)())(*(_QWORD *)a1 + 160LL);
    if ( v13 != desktops_diff_source_t__::vfunc_20 && ((__int64 (__fastcall *)(__int64))v13)(a1) != -1 )
    {
      v26 = *(__int64 (**)())(*(_QWORD *)a1 + 160LL);
      v27 = -1;
      if ( v26 != desktops_diff_source_t__::vfunc_20 )
        v27 = ((__int64 (__fastcall *)(__int64))v26)(a1);
      dest_8[1] = (void *)v27;
    }
  }
  if ( (_QWORD)v40 )
  {
    qfree(v40, nullptr);
    *(_QWORD *)&v40 = 0;
  }
  *(_QWORD *)&v40 = idaplace_t__clone(&dest);
  dest = nullptr;
  *(_OWORD *)dest_8 = 0;
  dest = (char *)qvector_reserve(&dest, 0, 11, 1);
  dest_8[0] = byte_9 + 2;
  strcpy(dest, "IDA View-A");
  v14 = dest;
  if ( a3 )
  {
    v15 = strlen(a3);
    v16 = (size_t)dest_8[0];
    v17 = v15;
    if ( dest_8[0] )
    {
      v16 = (size_t)dest_8[0] - 1;
      v18 = (size_t)dest_8[0] + v15 - 1;
      v19 = (char *)dest_8[0] + v15;
      if ( dest_8[1] >= (char *)dest_8[0] + v15 )
      {
        dest_8[0] = (char *)dest_8[0] + v15;
        v14[v18] = 0;
        if ( !v16 )
        {
LABEL_9:
          memmove(dest, a3, v17);
          goto LABEL_10;
        }
        goto LABEL_21;
      }
    }
    else
    {
      v19 = (char *)(v15 + 1);
      if ( dest_8[1] >= (void *)(v15 + 1) )
      {
        dest_8[0] = (void *)(v15 + 1);
        v14[v15] = 0;
        memmove(dest, a3, v15);
        goto LABEL_10;
      }
      v18 = v15;
    }
    v28 = v18;
    dest = (char *)qvector_reserve(&dest, v14, v19, 1);
    dest_8[0] = v19;
    dest[v28] = 0;
    if ( !v16 )
      goto LABEL_9;
LABEL_21:
    memmove(&dest[v17], dest, v16);
    memmove(dest, a3, v17);
  }
LABEL_10:
  v20 = (QT::QAbstractScrollArea *)operator new(0x410u);
  v21 = v20;
  v22 = &s1;
  if ( dest_8[0] )
    v22 = dest;
  sub_2DF680(v20);
  if ( v21 )
    v21 = (QT::QAbstractScrollArea *)((char *)v21 + 104);
  if ( dest )
  {
    dest_8[0] = nullptr;
    qfree(dest, v22);
  }
  v23 = qfree(*((_QWORD *)&v40 + 1), v22);
  *((_QWORD *)&v40 + 1) = 0;
  v24 = qfree(v41, v22, v23);
  v41 = 0;
  if ( (_QWORD)v40 )
    qfree(v40, v22, v24);
  return v21;
}
