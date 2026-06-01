unsigned __int64 __fastcall sub_461640(
        QT::QObject *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 result; // rax
  void *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v19; // [rsp+18h] [rbp-30h]
  __int64 v20; // [rsp+20h] [rbp-28h]
  unsigned __int64 v21; // [rsp+28h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( a2 )
    return v21 - __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0LL:
      result = sub_1AF650(a1);
      break;
    case 1LL:
      result = sub_1B2A80((__int64)a1);
      break;
    case 2LL:
      result = sub_1AEF30((__int64)a1, a4[1]);
      break;
    case 5LL:
      QT::QString::fromUtf8(&ptr, 13, "Output window");
      v13 = ptr;
      v14 = *a4;
      if ( *a4 )
      {
        v13 = *(void **)v14;
        *(_QWORD *)v14 = ptr;
        ptr = v13;
        v15 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = v19;
        v19 = v15;
        v16 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)(v14 + 16) = v20;
        v20 = v16;
      }
      if ( v13 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v13, 1u) )
          free(ptr);
      }
      return v21 - __readfsqword(0x28u);
    case 6LL:
      QT::QFont::QFont((QT::QFont *)&ptr, (const QT::QFont *)a4[1]);
      sub_1AEEB0(a1, (QT::QFont *)&ptr);
      QT::QFont::~QFont((QT::QFont *)&ptr);
      return v21 - __readfsqword(0x28u);
    case 7LL:
      result = sub_1AEEF0((__int64)a1, *(_QWORD *)a4[1]);
      break;
    case 8LL:
      result = sub_1B0E20((__int64)a1);
      break;
    case 9LL:
      result = sub_1B0E50((__int64)a1);
      break;
    case 10LL:
      result = sub_1AF6C0((__int64)a1);
      break;
    case 11LL:
      result = sub_1AF740((__int64)a1);
      break;
    case 12LL:
      result = sub_1AF7C0();
      break;
    case 13LL:
      result = sub_1AFD40((__int64)a1, a5, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 14LL:
      result = sub_1B2730((__int64)a1, a5, a6, a7, a8, a9, a10, a11, a12);
      break;
    default:
      return v21 - __readfsqword(0x28u);
  }
  return result;
}
