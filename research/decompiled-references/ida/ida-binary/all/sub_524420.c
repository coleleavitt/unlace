__int64 __fastcall sub_524420(QT::QAbstractItemView *this, __int64 a2, double a3, double a4, __m128 a5)
{
  char v5; // r13
  __int64 v7; // rax
  void (__fastcall *v8)(__int64, const char *); // rax
  const char *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+8h] [rbp-A0h]
  __int64 v32; // [rsp+18h] [rbp-90h] BYREF
  __int128 v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  __int128 v35; // [rsp+38h] [rbp-70h]
  __int128 v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+58h] [rbp-50h] BYREF
  __int128 v38; // [rsp+60h] [rbp-48h]
  int v39; // [rsp+70h] [rbp-38h]
  unsigned __int64 v40; // [rsp+78h] [rbp-30h]

  v5 = 0;
  v40 = __readfsqword(0x28u);
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  v39 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v36 = -1;
  v38 = 0;
  if ( (*(_BYTE *)(a2 + 65) & 4) != 0 )
  {
    v5 = sub_494BB0(this, (__int64)&v30, 240, a2 + 8, 0.0, NAN, a5);
    v29 = QT::QAbstractItemView::model(this);
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v29 + 504LL))(v29, a2, &v30);
  }
  v7 = *(_QWORD *)this;
  *((_DWORD *)this + 496) |= 1u;
  v8 = *(void (__fastcall **)(__int64, const char *))(v7 + 888);
  if ( v8 == sub_5243E0 )
  {
    sub_4DEC50((__int64)this + 304, (const char *)a2);
    *((_DWORD *)this + 54) = 15;
  }
  else
  {
    ((void (__fastcall *)(QT::QAbstractItemView *))v8)(this);
  }
  if ( v5 )
    sub_4971A0(this, &v37);
  v9 = (const char *)(a2 + 8);
  (*(void (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this + 38) + 240LL))((char *)this + 304, a2 + 8, 0);
  if ( v5 )
  {
    v9 = (const char *)&v32;
    sub_493F60(this, &v32, 0.0, NAN, a5);
  }
  if ( (*(_BYTE *)(a2 + 136) & 2) != 0 )
  {
    v9 = (const char *)(a2 + 72);
    sub_493F70(this, a2 + 72);
  }
  (*(void (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)this + 1056LL))(this);
  v12 = *((unsigned int *)this + 553);
  if ( (int)v12 >= 0 )
  {
    v9 = (const char *)((unsigned __int64)((v12 & 0x40) == 0) << v12);
    (*(void (__fastcall **)(_QWORD *, const char *, unsigned __int64, _QWORD))(QT::QCoreApplication::self[2] + 176LL))(
      QT::QCoreApplication::self + 2,
      v9,
      (unsigned __int64)((v12 & 0x40) != 0) << v12,
      0);
  }
  v13 = v37;
  if ( v37 )
  {
    v14 = v38;
    if ( (_QWORD)v38 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 48 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, v9);
          v13 = v37;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v13, v9);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v9);
  }
  v18 = v32;
  if ( v32 )
  {
    v19 = v33;
    if ( (_QWORD)v33 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v18 + 24 * v20);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22, v9);
          v18 = v32;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v18, v9);
  }
  v23 = v30;
  if ( v30 )
  {
    v24 = v31;
    if ( (_QWORD)v31 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 40 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27, v9);
          v23 = v30;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    qfree(v23, v9, v23, v12, v10, v11, v30, 0, *((_QWORD *)&v31 + 1));
  }
  return 1;
}
