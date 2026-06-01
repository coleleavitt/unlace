unsigned __int64 __fastcall sub_3CC480(_QWORD *a1, const char *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  __m128 v11; // xmm0
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_2DB930((__int64)a1, 165, a2, a4, a5);
  *a1 = &til_dirtree_widget_t___vtable;
  a1[2] = til_dirtree_widget_t___vtable_at__16;
  a1[30] = til_dirtree_widget_t___vtable_at__240;
  a1[38] = til_dirtree_widget_t___vtable_at__304;
  a1[311] = *a3;
  v6 = a3[1];
  a1[312] = v6;
  if ( v6 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    else
      ++*(_DWORD *)(v6 + 8);
  }
  v7 = QT::QCoreApplication::self;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*QT::QCoreApplication::self + 120LL))(
         QT::QCoreApplication::self,
         7);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 224LL))(v7);
    *(_OWORD *)ptr = 0;
    v14 = 0;
    v10 = sub_53F860(v9, v8, ptr, a1);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v11 = _mm_loadh_ps(&dbl_8CA7C0);
    *(__m128 *)ptr = v11;
    sub_534250(ptr, unk_8CA758, 0, *(double *)v11.m128_u64);
    sub_534250(ptr, unk_8C9F48, 0, *(double *)v11.m128_u64);
    sub_534250(ptr, 0, 0, *(double *)v11.m128_u64);
    a1[306] = v10;
  }
  return v15 - __readfsqword(0x28u);
}
