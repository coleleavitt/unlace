__int64 __fastcall sub_4671A0(
        QT::QMetaObject *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 result; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  unsigned __int64 (__fastcall *v16)(QT::QMetaObject *, int, int, __int64, void **); // rax
  int v17; // eax
  int v18; // edx
  int v19; // [rsp+8h] [rbp-30h] BYREF
  int v20; // [rsp+Ch] [rbp-2Ch] BYREF
  int v21[2]; // [rsp+10h] [rbp-28h] BYREF
  __m128i v22; // [rsp+18h] [rbp-20h]
  unsigned __int64 v23; // [rsp+28h] [rbp-10h]

  v23 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v14 = *(_QWORD *)(a4 + 8);
      v15 = *(_DWORD **)a4;
      v16 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, int, int, __int64, void **))v14;
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v14 == sub_466DD0 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 0;
      }
      else if ( (char *)v16 == (char *)sub_466DE0 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 1;
      }
      else if ( v16 == sub_466E00 && !*(_QWORD *)(v14 + 8) )
      {
        *v15 = 2;
      }
    }
    return v23 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        result = QT::QMetaObject::activate(a1, (QT::QObject *)&off_886820, nullptr, 0, a5);
        break;
      case 1LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_886820,
                   (const QT::QMetaObject *)((char *)&dword_0 + 1),
                   0,
                   a5);
        break;
      case 2LL:
        v17 = **(_DWORD **)(a4 + 16);
        v18 = **(_DWORD **)(a4 + 8);
        *(_QWORD *)v21 = 0;
        v20 = v17;
        v19 = v18;
        v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v19, (__m128i)(unsigned __int64)&v20);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_886820,
          (const QT::QMetaObject *)((char *)&dword_0 + 2),
          (int)v21,
          a5);
        return v23 - __readfsqword(0x28u);
      case 3LL:
        result = sub_2BE0A0((__int64)a1);
        break;
      case 4LL:
        result = sub_2BE0B0(a1, **(_QWORD **)(a4 + 8), a6, a7, a8, a9, a10, a11, a12, a13);
        break;
      case 5LL:
        result = sub_2BE480((__int64)a1);
        break;
      default:
        return v23 - __readfsqword(0x28u);
    }
  }
  return result;
}
