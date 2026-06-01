unsigned __int64 __fastcall sub_45E2B0(QT::QMetaObject *a1, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rdx
  _DWORD *v9; // rsi
  unsigned __int64 (__fastcall *v10)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+8h] [rbp-30h] BYREF
  int v19[2]; // [rsp+10h] [rbp-28h] BYREF
  __m128i v20; // [rsp+18h] [rbp-20h]
  unsigned __int64 v21; // [rsp+28h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v9 = *(_DWORD **)a4;
      v10 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v8;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v8 == sub_45E0F0 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *v9 = 0;
      }
      else if ( v10 == sub_45E160 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *v9 = 1;
      }
      else if ( v10 == sub_45E1D0 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *v9 = 2;
      }
      else if ( v10 == sub_45E240 && !*(_QWORD *)(v8 + 8) )
      {
        *v9 = 3;
      }
    }
  }
  else if ( a3 == 2 )
  {
    v13 = **(_QWORD **)(a4 + 16);
    v14 = **(_QWORD **)(a4 + 8);
    *(_QWORD *)v19 = 0;
    v18 = v13;
    v17 = v14;
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v17, (__m128i)(unsigned __int64)&v18);
    QT::QMetaObject::activate(
      a1,
      (QT::QObject *)&off_87B7E0,
      (const QT::QMetaObject *)((char *)&dword_0 + 2),
      (int)v19,
      a5);
  }
  else if ( a3 > 2 )
  {
    if ( a3 == 3 )
    {
      v15 = **(_QWORD **)(a4 + 16);
      v16 = **(_QWORD **)(a4 + 8);
      *(_QWORD *)v19 = 0;
      v18 = v15;
      v17 = v16;
      v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v17, (__m128i)(unsigned __int64)&v18);
      QT::QMetaObject::activate(
        a1,
        (QT::QObject *)&off_87B7E0,
        (const QT::QMetaObject *)((char *)&dword_0 + 3),
        (int)v19,
        a5);
    }
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = **(_QWORD **)(a4 + 16);
      v6 = **(_QWORD **)(a4 + 8);
      *(_QWORD *)v19 = 0;
      v18 = v5;
      v17 = v6;
      v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v17, (__m128i)(unsigned __int64)&v18);
      QT::QMetaObject::activate(
        a1,
        (QT::QObject *)&off_87B7E0,
        (const QT::QMetaObject *)((char *)&dword_0 + 1),
        (int)v19,
        a5);
    }
  }
  else
  {
    v11 = **(_QWORD **)(a4 + 16);
    v12 = **(_QWORD **)(a4 + 8);
    *(_QWORD *)v19 = 0;
    v18 = v11;
    v17 = v12;
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v17, (__m128i)(unsigned __int64)&v18);
    QT::QMetaObject::activate(a1, (QT::QObject *)&off_87B7E0, nullptr, (int)v19, a5);
  }
  return v21 - __readfsqword(0x28u);
}
