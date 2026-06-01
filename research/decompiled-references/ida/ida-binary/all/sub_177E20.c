unsigned __int64 __fastcall sub_177E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // eax
  bool v7; // dl
  int v8; // r13d
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  QT::QTextLayout *v15; // rbp
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  const char *v22; // r12
  unsigned __int64 v23; // rdx
  size_t v24; // rax
  void *v25; // rdx
  void **v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  QT::QTextLayout *v31; // rbp
  __m128i v33; // [rsp+10h] [rbp-158h] BYREF
  __m128i v34; // [rsp+20h] [rbp-148h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-138h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+50h] [rbp-118h] BYREF
  const char *v37; // [rsp+58h] [rbp-110h]
  __int64 v38; // [rsp+60h] [rbp-108h]
  __int64 v39; // [rsp+70h] [rbp-F8h]
  __m128i v40; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v41[3]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-C8h]
  __int64 v43; // [rsp+A8h] [rbp-C0h]
  __int64 v44; // [rsp+B8h] [rbp-B0h]
  __m128i v45; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-98h]
  __m128i v47[3]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v48; // [rsp+10Ch] [rbp-5Ch]
  __int64 v49; // [rsp+118h] [rbp-50h]
  int v50; // [rsp+120h] [rbp-48h]
  unsigned __int64 v51; // [rsp+128h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v5 = sub_524F80(a4 + 40, 1, 1);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 728LL))(a4, a2);
  v7 = 1;
  if ( v6 == -1 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    v7 = v6 != -1;
  }
  v8 = *(unsigned __int8 *)(a2 + 32);
  sub_173DE0((__int64)&v36, v5 | 0x100000000LL, v6 | ((unsigned __int64)v7 << 32));
  v36 = &line_rendering_t::build_formats;
  v49 = a4;
  v50 = v8;
  sub_174160((__int64)&v36, a2 + 8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 192));
  v10 = v39;
  v11 = _mm_loadu_si128(&v40);
  v39 = *(_QWORD *)(a1 + 184);
  v12 = v48;
  *(_QWORD *)(a1 + 184) = v10;
  v13 = v44;
  *(_QWORD *)(a1 + 208) = v12;
  v14 = *(_QWORD *)(a1 + 56);
  *(__m128i *)(a1 + 192) = v11;
  v15 = *(QT::QTextLayout **)(a1 + 48);
  v16 = _mm_load_si128(&v45);
  v40 = v9;
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(a1 + 56) = v13;
  v18 = v46;
  v44 = v14;
  v19 = *(_QWORD *)(a1 + 80);
  *(__m128i *)(a1 + 64) = v16;
  v20 = _mm_loadu_si128(v47);
  v45 = v17;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  *(_QWORD *)(a1 + 80) = v18;
  v46 = v19;
  *(__m128i *)(a1 + 88) = v20;
  v47[0] = v21;
  if ( !v15 )
  {
    v31 = (QT::QTextLayout *)operator new(8u);
    QT::QTextLayout::QTextLayout(v31);
    *(_QWORD *)(a1 + 48) = v31;
    QT::QTextLayout::setCacheEnabled(v31, 1);
    v15 = *(QT::QTextLayout **)(a1 + 48);
  }
  if ( (unsigned int)QT::QTextLayout::lineCount(v15) )
  {
    v26 = (void **)v41;
    sub_177D10(a1, (__int64)v41);
    goto LABEL_14;
  }
  if ( v38 )
  {
    v24 = v38 - 1;
    v22 = v37;
    v23 = (unsigned __int64)(v38 - 1) >> 63;
    if ( !v37 )
    {
LABEL_28:
      v24 = 0;
      if ( v22 )
        v24 = strlen(v22);
      goto LABEL_9;
    }
  }
  else
  {
    v22 = &s1;
    LOBYTE(v23) = 0;
    v24 = 0;
    if ( !&s1 )
      goto LABEL_28;
  }
  if ( (_BYTE)v23 )
    goto LABEL_28;
LABEL_9:
  QT::QString::fromUtf8(ptr, v24, v22);
  QT::QTextLayout::setText(v15, (const QT::QString *)ptr);
  QT::QTextLayout::setFont(v15, (const QT::QFont *)(a3 + 64));
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  sub_177D10(a1, (__int64)v41);
  QT::QTextLayout::beginLayout(v15);
  LODWORD(ptr[0]) = QT::QTextLayout::createLine(v15);
  ptr[1] = v25;
  QT::QTextLine::setLineWidth((QT::QTextLine *)ptr, 10000000.0);
  QT::QTextLine::setNumColumns((QT::QTextLine *)ptr, 1000000);
  v26 = ptr;
  QT::QTextLine::naturalTextRect((QT::QTextLine *)&v33);
  *(__m128i *)(a1 + 104) = _mm_loadu_si128(&v33);
  *(__m128i *)(a1 + 120) = _mm_loadu_si128(&v34);
  QT::QTextLayout::endLayout(v15);
LABEL_14:
  v36 = &tagged_line_sections_parser_t___vtable;
  if ( v46 )
  {
    v47[0].m128i_i64[0] = 0;
    qfree(v46, v26, v27, v28, v29);
  }
  if ( v44 )
  {
    v45.m128i_i64[0] = 0;
    qfree(v44, v26, v27, v28, v29);
  }
  if ( v42 )
  {
    v43 = 0;
    qfree(v42, v26, v27, v28, v29);
  }
  if ( v41[0] )
  {
    v41[1] = 0;
    qfree(v41[0], v26, v27, v28, v29);
  }
  if ( v39 )
  {
    v40.m128i_i64[0] = 0;
    qfree(v39, v26, v27, v28, v29);
  }
  if ( v37 )
  {
    v38 = 0;
    qfree(v37, v26, v27, v28, v29);
  }
  return v51 - __readfsqword(0x28u);
}
