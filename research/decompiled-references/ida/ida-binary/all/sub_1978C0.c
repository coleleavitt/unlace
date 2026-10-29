unsigned __int64 __fastcall sub_1978C0(
        __int64 a1,
        __int64 a2,
        QT::QObject *a3,
        const __m128i *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  char *v12; // r14
  __m128i v13; // xmm0
  __int32 v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // r15d
  __int64 v20; // r15
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __int64 v24; // [rsp+0h] [rbp-80h]
  _BYTE v25[8]; // [rsp+8h] [rbp-78h] BYREF
  __m128i v26; // [rsp+10h] [rbp-70h] BYREF
  _QWORD v27[2]; // [rsp+20h] [rbp-60h] BYREF
  int v28[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-38h]

  v12 = (char *)(a1 + 2488);
  v29 = __readfsqword(0x28u);
  sub_2DB930(a1, 126, a2, a6, a7, a8);
  *(_QWORD *)a1 = &bookmarks_dirtree_widget_t___vtable;
  *(_QWORD *)(a1 + 16) = bookmarks_dirtree_widget_t___vtable_at__16;
  *(_QWORD *)(a1 + 240) = bookmarks_dirtree_widget_t___vtable_at__240;
  *(_QWORD *)(a1 + 304) = bookmarks_dirtree_widget_t___vtable_at__304;
  sub_197810((QT::QObject *)(a1 + 2488), a1);
  v13.m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 2544) = 0;
  *(_QWORD *)(a1 + 2552) = -1;
  *(_QWORD *)(a1 + 2560) = 0;
  *(_QWORD *)(a1 + 2568) = 0;
  *(_OWORD *)(a1 + 2528) = 0;
  if ( a4 == (const __m128i *)(a1 + 2528)
    || (v14 = a4[2].m128i_i32[0],
        v15 = a4[2].m128i_i64[1],
        *(__m128i *)(a1 + 2528) = _mm_loadu_si128(a4),
        v13 = _mm_loadu_si128(a4 + 1),
        *(_DWORD *)(a1 + 2560) = v14,
        *(__m128i *)(a1 + 2544) = v13,
        !v15) )
  {
    v17 = 0;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *(_QWORD *)(a1 + 2568) = v16;
    v17 = v16;
  }
  *(_QWORD *)(a1 + 2576) = a5;
  *(_DWORD *)(a1 + 2584) = 0;
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 112LL))(v17);
  if ( get_place_class(v28, 0, v18) && (v28[0] & 1) != 0 )
    *(_DWORD *)(a1 + 2584) |= 1u;
  if ( a3 && sub_194200(a3) )
  {
    *(_DWORD *)(a1 + 2584) |= 2u;
    sub_478D00(v12, v24);
    *(_QWORD *)(a1 + 2576) = 0;
  }
  *(_QWORD *)v28 = &idaplace_t___vtable;
  v19 = idaplace_t((int)v28, *(double *)v13.m128i_i64);
  if ( v19 == (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2568) + 112LL))(*(_QWORD *)(a1 + 2568)) )
    *(_DWORD *)(a1 + 2584) |= 2u;
  v20 = sub_414310();
  if ( v20 )
  {
    v26.m128i_i64[1] = 0;
    v26.m128i_i64[0] = (__int64)sub_198540;
    v27[1] = 0;
    v27[0] = sub_4762C0;
    v21 = (__m128i *)operator new(0x20u);
    v22 = _mm_load_si128(&v26);
    v21->m128i_i32[0] = 1;
    v21[1] = v22;
    v21->m128i_i64[1] = (__int64)sub_196DF0;
    QT::QObject::connectImpl(v25, v20, v27, a1, &v26, v21, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v25);
  }
  return v29 - __readfsqword(0x28u);
}
