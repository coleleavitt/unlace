void __fastcall sub_46BA60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdx
  _DWORD *v16; // rsi
  __int64 (__fastcall *v17)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  _QWORD *v18; // rcx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rax
  int v22; // [rsp+4h] [rbp-34h] BYREF
  __int64 v23; // [rsp+8h] [rbp-30h] BYREF
  int v24[2]; // [rsp+10h] [rbp-28h] BYREF
  __m128i v25; // [rsp+18h] [rbp-20h]
  unsigned __int64 v26; // [rsp+28h] [rbp-10h]

  v26 = __readfsqword(0x28u);
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 7 )
    {
      v18 = *(_QWORD **)a4;
      if ( (_DWORD)a3 || **(_DWORD **)(a4 + 8) )
        *v18 = 0;
      else
        *v18 = &unk_8C1460;
    }
    else if ( (_DWORD)a2 == 5 )
    {
      v15 = *(_QWORD *)(a4 + 8);
      v16 = *(_DWORD **)a4;
      v17 = *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v15;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v15 == sub_46B850 )
      {
        if ( !*(_QWORD *)(v15 + 8) )
          *v16 = 0;
      }
      else if ( (char *)v17 == (char *)sub_46B8B0 )
      {
        if ( !*(_QWORD *)(v15 + 8) )
          *v16 = 1;
      }
      else if ( v17 == sub_46B930 )
      {
        if ( !*(_QWORD *)(v15 + 8) )
          *v16 = 2;
      }
      else if ( v17 == sub_46B950 && !*(_QWORD *)(v15 + 8) )
      {
        *v16 = 3;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v21 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v24 = 0;
        v23 = v21;
        v25.m128i_i64[0] = (__int64)&v23;
        QT::QMetaObject::activate((QT::QMetaObject *)a1, (QT::QObject *)&off_88BBA0, nullptr, (int)v24, a5);
        break;
      case 1LL:
        v19 = **(_DWORD **)(a4 + 8);
        v20 = **(_DWORD **)(a4 + 16);
        *(_QWORD *)v24 = 0;
        v22 = v19;
        LODWORD(v23) = v20;
        v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v22, (__m128i)(unsigned __int64)&v23);
        QT::QMetaObject::activate(
          (QT::QMetaObject *)a1,
          (QT::QObject *)&off_88BBA0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          (int)v24,
          a5);
        break;
      case 2LL:
        QT::QMetaObject::activate(
          (QT::QMetaObject *)a1,
          (QT::QObject *)&off_88BBA0,
          (const QT::QMetaObject *)((char *)&dword_0 + 2),
          0,
          a5);
        break;
      case 3LL:
        QT::QMetaObject::activate(
          (QT::QMetaObject *)a1,
          (QT::QObject *)&off_88BBA0,
          (const QT::QMetaObject *)((char *)&dword_0 + 3),
          0,
          a5);
        break;
      case 4LL:
        sub_25F590((QT::QObject *)a1, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 5LL:
        sub_25F750((QT::QObject *)a1, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 6LL:
        sub_311340(a1, a2);
        break;
      case 7LL:
        sub_310F00(a1, **(_BYTE **)(a4 + 8));
        break;
      case 8LL:
        sub_3365A0((QT::QObject *)a1, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 9LL:
        sub_310D60(a1);
        break;
      case 10LL:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 456LL))(a1);
        break;
      case 11LL:
        sub_3157B0((QT::QObject *)a1, a2, (unsigned int)a3, a4, (__int64)a5, a6);
        break;
      case 12LL:
        sub_315290(a1);
        break;
      case 13LL:
        sub_313A50(a1);
        break;
      case 14LL:
        sub_3140E0(a1);
        break;
      case 15LL:
        sub_317020(a1);
        break;
      case 16LL:
        sub_316FE0(a1);
        break;
      case 17LL:
        sub_30E440(a7, a8, a9, a10, a11, a12, a13, a14, a1, *(QT::QString **)(a4 + 8));
        break;
      case 18LL:
        sub_311C40((QT::QObject *)a1, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 19LL:
        sub_30F260((QT::QMainWindow *)a1, *(_QWORD *)(a4 + 8), *(double *)a7.m128_u64);
        break;
      case 20LL:
        sub_258F10(a1, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 21LL:
        sub_312650(a1);
        break;
      default:
        return;
    }
  }
}
