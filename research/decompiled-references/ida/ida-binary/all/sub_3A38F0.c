unsigned __int64 __fastcall sub_3A38F0(__m128i *this, char *a2, __int64 a3)
{
  __int64 v5; // rdi
  const char *v6; // r12
  int v7; // r13d
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_27D070((__int64)this, a2, (int *)a3);
  v5 = *(_QWORD *)(a3 + 112);
  this->m128i_i64[0] = (__int64)&TEAViewer___vtable;
  *((_QWORD *)this + 2) = TEAViewer___vtable_at__16;
  *((_QWORD *)this + 5) = TEAViewer___vtable_at__40;
  *((_QWORD *)this + 13) = TEAViewer___vtable_at__104;
  v6 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 120LL))(v5);
  v7 = 1;
  if ( strcmp(v6, "hexrays_place_t") && strcmp(v6, "microplace_t") )
    v7 = (strcmp(v6, "mbui_place_t") == 0) + 2;
  *((_DWORD *)this + 258) = v7;
  sub_1FC230(this, a3);
  if ( *((_DWORD *)this + 258) == 1 )
  {
    QT::QObject::connect(
      &v9,
      *((_QWORD *)this + 111),
      "2model_invalidated()",
      this,
      "1on_renderer_model_invalidated()",
      0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v9);
  }
  return v10 - __readfsqword(0x28u);
}
