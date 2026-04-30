void __fastcall sub_461A50(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // esi
  int v16; // esi

  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v14 = *(_QWORD **)a4;
      if ( (_DWORD)a3 != 9 || **(_DWORD **)(a4 + 8) )
        *v14 = 0;
      else
        *v14 = &unk_8BF8E0;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        sub_1B5550(a1, *(int **)(a4 + 8), (__int64)&unk_5DFF40, 0x31u, *(_DWORD *)(a1 + 336));
        break;
      case 1LL:
        sub_1B5550(a1, *(int **)(a4 + 8), (__int64)&unk_5DFDE0, 0x2Au, *(_DWORD *)(a1 + 340));
        break;
      case 2LL:
        sub_1B9C80((QT::QObject *)a1, *(int **)(a4 + 8));
        break;
      case 3LL:
        v16 = **(_DWORD **)(a4 + 8);
        v12 = *(_QWORD *)(a1 + 256);
        *(_DWORD *)(a1 + 336) = v16;
        sub_1B4910(a1, v16, (__int64)&unk_5DFF40, 0x31u, 1, *(QT::QAbstractButton **)(v12 + 168), a5);
        break;
      case 4LL:
        v15 = **(_DWORD **)(a4 + 8);
        v13 = *(_QWORD *)(a1 + 256);
        *(_DWORD *)(a1 + 340) = v15;
        sub_1B4910(a1, v15, (__int64)&unk_5DFDE0, 0x2Au, 0, *(QT::QAbstractButton **)(v13 + 144), a5);
        break;
      case 5LL:
        sub_1BC0E0((QT::QWidget **)a1, a5, a6, a7, a8, a9, a10, a11, a12);
        break;
      case 6LL:
        sub_1B4C50(a1, **(_DWORD **)(a4 + 8));
        break;
      case 7LL:
        QT::QAbstractButton::click(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 256) + 208LL));
        break;
      case 8LL:
        sub_1B4CF0(a1, *(unsigned int **)(a4 + 8));
        break;
      case 9LL:
        sub_1B94B0((_QWORD *)a1, **(_QWORD **)(a4 + 8), **(_BYTE **)(a4 + 16));
        break;
      case 10LL:
        sub_1B51F0(a1, a5);
        break;
      case 11LL:
        sub_1BB400((QT::QSyntaxHighlighter **)a1, a5, a6, a7, a8, a9, a10, a11, a12);
        break;
      case 12LL:
        sub_1B56A0(a1);
        break;
      case 13LL:
        sub_1BC430((QT::QWidget **)a1, a5, *(double *)a6.m128_u64, a7, a8, a9, a10, a11, a12);
        break;
      case 14LL:
        sub_1BC450((QT::QWidget *)a1, a5, *(double *)a6.m128_u64, a7, a8, a9, a10, a11, a12);
        break;
      case 15LL:
        sub_1BADB0((_QWORD *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
        break;
      case 16LL:
        sub_1B57F0(a1);
        break;
      default:
        return;
    }
  }
}
