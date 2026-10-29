unsigned __int64 __fastcall sub_4698A0(QT::QMetaObject *this, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r12
  size_t v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // [rsp+8h] [rbp-90h]
  void *v13; // [rsp+10h] [rbp-88h] BYREF
  __int128 v14; // [rsp+18h] [rbp-80h]
  void *v15; // [rsp+30h] [rbp-68h] BYREF
  __int128 v16; // [rsp+38h] [rbp-60h]
  int v17[2]; // [rsp+50h] [rbp-48h] BYREF
  __m128i v18; // [rsp+58h] [rbp-40h]
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_468FD0
        && !*(_QWORD *)(v6 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
  }
  else if ( !a3 )
  {
    v7 = *(_QWORD *)(a4 + 16);
    v15 = nullptr;
    v16 = 0;
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      v12 = a4;
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(v7 + 8);
      v15 = (void *)qalloc_or_throw(8 * v8);
      memcpy(v15, *(const void **)v7, 8 * v8);
      *(_QWORD *)&v16 = v8;
      a4 = v12;
    }
    v9 = *(_QWORD *)(a4 + 8);
    v13 = nullptr;
    v14 = 0;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      v13 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
      *((_QWORD *)&v14 + 1) = v10;
      memcpy(v13, *(const void **)v9, v10);
      *(_QWORD *)&v14 = v10;
    }
    *(_QWORD *)v17 = 0;
    v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v13, (__m128i)(unsigned __int64)&v15);
    v18 = v11;
    QT::QMetaObject::activate(this, (QT::QObject *)&off_889E00, nullptr, (int)v17, a5);
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      *(double *)v11.m128i_i64 = qfree(v13, (const char *)&off_889E00);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15, (const char *)&off_889E00, *(double *)v11.m128i_i64);
    }
  }
  return v19 - __readfsqword(0x28u);
}
