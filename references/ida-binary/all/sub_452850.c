__int64 sub_452850()
{
  __int64 v0; // rax
  QT::QWidget *v1; // r14
  __int64 v2; // rdi
  __int64 Child_helper; // rax
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __m128i *v8; // rsi
  __m128i si128; // xmm0
  _QWORD *v10; // rdi
  QT::QWidget *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // [rsp+10h] [rbp-100h] BYREF
  __int128 v15; // [rsp+18h] [rbp-F8h]
  __int64 v16; // [rsp+28h] [rbp-E8h]
  _BYTE v17[56]; // [rsp+30h] [rbp-E0h] BYREF
  _QWORD v18[6]; // [rsp+68h] [rbp-A8h] BYREF
  int v19; // [rsp+98h] [rbp-78h]
  _QWORD v20[6]; // [rsp+A0h] [rbp-70h] BYREF
  int v21; // [rsp+D0h] [rbp-40h]
  _QWORD v22[7]; // [rsp+D8h] [rbp-38h] BYREF

  v22[0] = __readfsqword(0x28u);
  v0 = sub_41A4D0("Worklists");
  if ( v0 && (v1 = (QT::QWidget *)QT::qt_qFindChild_helper(v0, 0, 0, &off_876A60, 1)) != nullptr )
  {
    v2 = sub_41A4D0("Worklists");
    if ( v2 )
    {
      Child_helper = QT::qt_qFindChild_helper(v2, 0, 0, &off_878E40, 1);
      if ( Child_helper )
        sub_4E4640(Child_helper + 304, 1031, 0);
    }
  }
  else
  {
    v5 = v22;
    v14 = 0;
    v16 = -4294967282LL;
    v6 = v17;
    v15 = 0;
    do
    {
      *v6 = 0;
      v6 += 7;
      *((_OWORD *)v6 - 3) = 0;
      *(v6 - 4) = 0;
      *(_OWORD *)(v6 - 3) = 0;
      *((_DWORD *)v6 - 2) = -1;
    }
    while ( v6 != v22 );
    v7 = v18[0];
    if ( v18[2] <= 0x13u )
    {
      v18[0] = qvector_reserve(v18, v18[0], 20, 1);
      v7 = v18[0];
    }
    v18[1] = 20;
    *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_5DDC80);
    *(_DWORD *)(v7 + 15) = 774778484;
    *(_BYTE *)(v18[0] + 19LL) = 0;
    v8 = (__m128i *)v20[0];
    if ( v20[2] <= 0x12u )
    {
      v20[0] = qvector_reserve(v20, v20[0], 19, 1);
      v8 = (__m128i *)v20[0];
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DDC90);
    v20[1] = 19;
    v8[1].m128i_i16[0] = 11822;
    *v8 = si128;
    v10 = QT::QCoreApplication::self;
    *(_BYTE *)(v20[0] + 18LL) = 0;
    v19 = sub_47A0E0(v10, "add_worklist", "resources/icons/actions");
    v21 = sub_47A0E0(QT::QCoreApplication::self, "delete_worklist", "resources/icons/actions");
    v11 = (QT::QWidget *)operator new(0x9F0u);
    sub_444AF0(v11, "Worklists", 1, 0, (__int64)&v14, 15, -1);
    v1 = (QT::QWidget *)operator new(0x48u);
    sub_5226F0(v1);
    *(_QWORD *)v1 = &files_dirtree_widget_host_t___vtable;
    *((_QWORD *)v1 + 2) = files_dirtree_widget_host_t___vtable_at__16;
    do
    {
      v12 = *(v5 - 4);
      v5 -= 7;
      if ( v12 )
      {
        v5[4] = 0;
        *(double *)si128.m128i_i64 = qfree(v12, (const char *)v11);
      }
      v13 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        *(double *)si128.m128i_i64 = qfree(v13, (const char *)v11, *(double *)si128.m128i_i64);
      }
    }
    while ( v5 != (__int64 *)v17 );
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, (const char *)v11, *(double *)si128.m128i_i64);
    }
  }
  sub_42D340((const char *)v1);
  return 1;
}
