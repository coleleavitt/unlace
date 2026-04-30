__int64 __fastcall IDAView__::vfunc_5(__m128i *this, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  int v6; // eax
  __int64 *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  int v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  int v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v6 = *(unsigned __int16 *)(a2 + 8);
  v22 = __readfsqword(0x28u);
  if ( v6 == 2005 )
  {
    v8 = *(__int64 **)(a2 + 16);
    v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_888680, *(const QT::QObject **)(this->m128i_i64[1] + 16));
    if ( v9 )
    {
      v10 = v8[1];
      if ( v10 )
      {
        v11 = *v8;
        v12 = 0;
        while ( !*(_QWORD *)(v11 + 8) || strcmp(*(const char **)v11, "arrows_width") )
        {
          ++v12;
          v11 += 40;
          if ( v10 == v12 )
            return watchview_t__::vfunc_5(this, a2, a3, a4, a5, a6);
        }
        if ( *(_DWORD *)(v11 + 24) == 1 )
        {
          v13 = *(_QWORD *)(v11 + 32);
          if ( (int)v13 >= 0 )
            *(_DWORD *)(v9 + 160) = v13;
        }
      }
    }
    return watchview_t__::vfunc_5(this, a2, a3, a4, a5, a6);
  }
  if ( v6 != 3005 )
    return watchview_t__::vfunc_5(this, a2, a3, a4, a5, a6);
  *(_BYTE *)(a2 + 12) = 1;
  v14 = sub_1F3AB0((__int64)this, 0, a3, a4, a5);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16 = sub_1F07A0((__int64)this, (__int64)&v18, (__int64)&v20, nullptr);
  v17 = v15;
  if ( v16 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64))(*(_QWORD *)v18 + 128LL))(v18, &v18, v15);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20);
  }
  sub_28AF10(a2 + 32, v15, v17, *(_QWORD *)(a2 + 16));
  return 1;
}
