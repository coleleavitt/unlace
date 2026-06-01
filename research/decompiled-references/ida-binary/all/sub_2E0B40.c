QT::QSplitter *__fastcall sub_2E0B40(const char *a1, __int64 **a2)
{
  char *v2; // r12
  int v3; // eax
  __int64 v4; // rbx
  int v5; // r14d
  __m128i si128; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  QT::QWidget *v17; // r12
  QT::QSplitter *v18; // rbx
  double v19; // xmm0_8
  double v20; // xmm0_8
  const char *v22; // r8
  void *ptr[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v24; // [rsp+20h] [rbp-118h]
  int v25; // [rsp+28h] [rbp-110h]
  __int64 v26[2]; // [rsp+30h] [rbp-108h] BYREF
  __m128i v27; // [rsp+40h] [rbp-F8h] BYREF
  int v28; // [rsp+50h] [rbp-E8h]
  void *v29; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-D0h]
  __int128 v31; // [rsp+78h] [rbp-C0h]
  __int128 v32; // [rsp+88h] [rbp-B0h]
  __int64 v33; // [rsp+98h] [rbp-A0h]
  __m128i v34; // [rsp+A0h] [rbp-98h]
  __m128i v35; // [rsp+B0h] [rbp-88h]
  __int64 v36; // [rsp+C0h] [rbp-78h]
  __int128 v37; // [rsp+C8h] [rbp-70h]
  __int64 v38; // [rsp+D8h] [rbp-60h]
  __int64 v39; // [rsp+E0h] [rbp-58h]
  char v40; // [rsp+E8h] [rbp-50h]
  __int64 v41; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+F8h] [rbp-40h]

  v2 = (char *)a1;
  v42 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v24 = 0;
  v3 = sub_2E06C0(a1, (__m128i *)ptr);
  v4 = v3;
  if ( v3 == -1 )
  {
    v18 = nullptr;
    goto LABEL_12;
  }
  if ( !a1 || !*a1 )
  {
    QT::QString::toUtf8_helper((QT::QString *)&v29, (const QT::QString *)ptr);
    v22 = (const char *)v30;
    if ( !(_QWORD)v30 )
      v22 = (const char *)&QT::QByteArray::_empty;
    qsnprintf(&unk_8CCF20, 1024, "%s%s", "IDA View-", v22);
    if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
    {
      v2 = (char *)&unk_8CCF20;
      free(v29);
    }
    else
    {
      v2 = (char *)&unk_8CCF20;
    }
    v5 = 2;
    if ( a2 )
      goto LABEL_5;
    goto LABEL_22;
  }
  v5 = 2;
  if ( !a2 )
  {
LABEL_22:
    v5 = 1;
    if ( (unsigned __int8)auto_is_ok() )
      v5 = (unsigned __int8)sub_3D5FB0(v2) + 1;
  }
LABEL_5:
  v29 = nullptr;
  v33 = 0;
  v35.m128i_i64[0] = 0;
  v35.m128i_i64[1] = -1;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  sub_1E8870((__int64)v26, 1);
  si128 = _mm_load_si128((const __m128i *)v26);
  v40 = 0;
  v41 = 0;
  v34 = si128;
  v7 = _mm_load_si128(&v27);
  LODWORD(v36) = v28;
  v35 = v7;
  v8 = operator new(0x1B8u);
  sub_2876C0(v8, 0);
  *(_QWORD *)&v30 = v8;
  v9 = operator new(0x218u);
  sub_2A8E80(v9, a2, 0);
  *((_QWORD *)&v30 + 1) = v9;
  v10 = operator new(0x218u);
  sub_375880(v10, a2);
  *(_QWORD *)&v31 = v10;
  sub_1E8870((__int64)v26, v5);
  v11 = _mm_load_si128((const __m128i *)v26);
  LODWORD(v36) = v28;
  v34 = v11;
  v35 = _mm_load_si128(&v27);
  v35.m128i_i16[7] = word_8BCE1C;
  sub_1E88C0(&v29, 16);
  v12 = qalloc_or_throw(24);
  *(_QWORD *)(v12 + 16) = getinf(19);
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)v12 = &idaplace_t___vtable;
  *((_QWORD *)&v37 + 1) = v12;
  v13 = qalloc_or_throw(24);
  v14 = getinf(20);
  *(_DWORD *)(v13 + 8) = 0x7FFFFFFF;
  *(_QWORD *)v13 = &idaplace_t___vtable;
  *(_QWORD *)(v13 + 16) = v14;
  v38 = v13;
  v15 = getinf(19);
  LODWORD(v26[1]) = -1;
  v26[0] = (__int64)&idaplace_t___vtable;
  v27.m128i_i64[0] = v15;
  if ( a2 && a2[1] )
    v27.m128i_i64[0] = **a2;
  if ( (_QWORD)v37 )
  {
    qfree(v37, (const char *)&word_10);
    *(_QWORD *)&v37 = 0;
  }
  *(_QWORD *)&v37 = idaplace_t__clone(v26);
  v16 = operator new(0x410u);
  sub_27D070(v16, v2, (int *)&v29);
  *(_DWORD *)(v16 + 1032) = v4;
  *(_BYTE *)(v16 + 741) = 1;
  *(_QWORD *)v16 = &IDAView___vtable;
  *(_QWORD *)(v16 + 16) = IDAView___vtable_at__16;
  *(_QWORD *)(v16 + 40) = IDAView___vtable_at__40;
  *(_QWORD *)(v16 + 104) = IDAView___vtable_at__104;
  sub_27D430((QT::QAbstractScrollArea *)v16, v2);
  sub_1FC230((__m128i *)v16, (__int64)&v29);
  qword_8CD320[v4] = v16;
  v17 = (QT::QWidget *)operator new(0x758u);
  sub_39C1C0(v17);
  v18 = (QT::QSplitter *)operator new(0xB0u);
  sub_2E35C0(v18, (int)v26, (int)ptr, (int)ptr[0], (__int64)ptr[1], v24, v25, v26[0]);
  sub_4B8B20(v18, 256);
  v19 = qfree(*((_QWORD *)&v37 + 1), (const char *)&qword_100);
  *((_QWORD *)&v37 + 1) = 0;
  v20 = qfree(v38, (const char *)&qword_100, v19);
  v38 = 0;
  if ( (_QWORD)v37 )
    qfree(v37, (const char *)&qword_100, v20);
LABEL_12:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v18;
}
