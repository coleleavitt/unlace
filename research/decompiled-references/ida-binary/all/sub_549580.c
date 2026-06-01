unsigned __int64 __fastcall sub_549580(QT::QMetaObject *a1, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  _QWORD *v8; // rax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h] BYREF
  int v15[2]; // [rsp+10h] [rbp-28h] BYREF
  __m128i v16; // [rsp+18h] [rbp-20h]
  unsigned __int64 v17; // [rsp+28h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v8 = *(_QWORD **)a4;
      if ( a3 )
      {
        if ( a3 == 1 && !**(_DWORD **)(a4 + 8) )
        {
          *v8 = &unk_8C31A0;
          return v17 - __readfsqword(0x28u);
        }
      }
      else if ( !**(_DWORD **)(a4 + 8) )
      {
        *v8 = &unk_8C3020;
        return v17 - __readfsqword(0x28u);
      }
      *v8 = 0;
      return v17 - __readfsqword(0x28u);
    }
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      v7 = *(_DWORD **)a4;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_5492C0 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *v7 = 0;
      }
      else if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, int, __int64, void **))v6 == sub_549330
             && !*(_QWORD *)(v6 + 8) )
      {
        *v7 = 1;
      }
    }
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
    {
      v9 = **(_DWORD **)(a4 + 16);
      v10 = *(_QWORD *)(a4 + 8);
      *(_QWORD *)v15 = 0;
      LODWORD(v14) = v9;
      v16.m128i_i64[0] = v10;
      v16.m128i_i64[1] = (__int64)&v14;
      QT::QMetaObject::activate(
        a1,
        (QT::QObject *)&off_86E0C0,
        (const QT::QMetaObject *)((char *)&dword_0 + 1),
        (int)v15,
        a5);
    }
  }
  else
  {
    v11 = **(_QWORD **)(a4 + 16);
    v12 = **(_QWORD **)(a4 + 8);
    *(_QWORD *)v15 = 0;
    v14 = v11;
    v13 = v12;
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v13, (__m128i)(unsigned __int64)&v14);
    QT::QMetaObject::activate(a1, (QT::QObject *)&off_86E0C0, nullptr, (int)v15, a5);
  }
  return v17 - __readfsqword(0x28u);
}
