__int64 __fastcall sub_46C660(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  _QWORD *v5; // rbx
  char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // [rsp+4h] [rbp-154h] BYREF
  __int64 v19; // [rsp+8h] [rbp-150h] BYREF
  __int128 v20; // [rsp+120h] [rbp-38h]
  _BYTE v21[24]; // [rsp+130h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      switch ( a3 )
      {
        case 0LL:
          v13 = **(_QWORD **)(a4 + 8);
          v14 = **(_DWORD **)(a4 + 16);
          *(_QWORD *)v21 = 0;
          v19 = v13;
          v18 = v14;
          *(__m128i *)&v21[8] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v19, (__m128i)(unsigned __int64)&v18);
          QT::QMetaObject::activate(a1, (QT::QObject *)&off_88C6E0, nullptr, (int)v21, a5);
          return v22 - __readfsqword(0x28u);
        case 1LL:
          v15 = *(_QWORD *)(a4 + 8);
          *(_QWORD *)v21 = 0;
          *(_QWORD *)&v21[8] = v15;
          QT::QMetaObject::activate(
            a1,
            (QT::QObject *)&off_88C6E0,
            (const QT::QMetaObject *)((char *)&dword_0 + 1),
            (int)v21,
            a5);
          return v22 - __readfsqword(0x28u);
        case 2LL:
          result = sub_3416C0(a1, **(_QWORD **)(a4 + 8), **(_QWORD **)(a4 + 16));
          break;
        case 3LL:
          result = sub_33F7B0(a1);
          break;
        case 4LL:
          result = sub_341630(a1);
          break;
        case 5LL:
          result = sub_341650(a1);
          break;
        case 6LL:
          result = sub_3416E0(a1, **(_QWORD **)(a4 + 8));
          break;
        case 7LL:
          result = sub_33F7E0(a1);
          break;
        case 8LL:
          result = sub_33EB10((__int64)a1, *(unsigned __int64 **)(a4 + 8));
          break;
        default:
          return v22 - __readfsqword(0x28u);
      }
      return result;
    case 5:
      v10 = *(_QWORD *)(a4 + 8);
      v11 = *(_DWORD **)a4;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, int, __int64, void **))v10 == sub_46C590 )
      {
        if ( !*(_QWORD *)(v10 + 8) )
          *v11 = 0;
      }
      else if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v10 == sub_46C600
             && !*(_QWORD *)(v10 + 8) )
      {
        *v11 = 1;
      }
      return v22 - __readfsqword(0x28u);
    case 1:
      v5 = *(_QWORD **)a4;
      v6 = (char *)a1 + 40;
      switch ( a3 )
      {
        case 0LL:
          v7 = 2165563904LL;
          goto LABEL_7;
        case 1LL:
          v7 = 2165563905LL;
          goto LABEL_7;
        case 2LL:
          v7 = 2165563906LL;
          goto LABEL_7;
        case 3LL:
          v7 = 2165563907LL;
          goto LABEL_7;
        case 4LL:
          v7 = 2165563908LL;
          goto LABEL_7;
        case 5LL:
          v7 = 2165563909LL;
          goto LABEL_7;
        case 6LL:
          v7 = 2165563910LL;
          goto LABEL_7;
        case 7LL:
          v7 = 2165563911LL;
          goto LABEL_7;
        case 8LL:
          v7 = 2165563912LL;
          goto LABEL_7;
        case 9LL:
          v7 = 2165563913LL;
          goto LABEL_7;
        case 10LL:
          v7 = 2165563914LL;
          goto LABEL_7;
        case 11LL:
          v7 = 2165563915LL;
          goto LABEL_7;
        case 12LL:
          v7 = 2165563916LL;
          goto LABEL_7;
        case 13LL:
          v7 = 2165563917LL;
          goto LABEL_7;
        case 14LL:
          v7 = 2165563918LL;
          goto LABEL_7;
        case 15LL:
          v7 = 2165563919LL;
          goto LABEL_7;
        case 16LL:
          v7 = 2165563920LL;
LABEL_7:
          *(_QWORD *)v21 = sub_524FA0(v6, v7, 0);
          *(_QWORD *)&v21[8] = v8;
          *v5 = *(_QWORD *)v21;
          *(_QWORD *)((char *)v5 + 6) = *(_QWORD *)&v21[6];
          break;
        case 17LL:
          *(_QWORD *)v21 = sub_524FA0(v6, 2165563921LL, 0);
          *(_QWORD *)&v21[8] = v17;
          *(_QWORD *)&v20 = *(_QWORD *)v21;
          *v5 = *(_QWORD *)v21;
          *((_QWORD *)&v20 + 1) = v17;
          *(_QWORD *)((char *)v5 + 6) = *(_QWORD *)&v21[6];
          break;
        case 18LL:
          *(_QWORD *)v21 = sub_524FA0(v6, 2165563922LL, 0);
          *(_QWORD *)&v21[8] = v16;
          *(_QWORD *)&v20 = *(_QWORD *)v21;
          *v5 = *(_QWORD *)v21;
          *((_QWORD *)&v20 + 1) = v16;
          *(_QWORD *)((char *)v5 + 6) = *(_QWORD *)((char *)&v20 + 6);
          break;
        default:
          return v22 - __readfsqword(0x28u);
      }
      return v22 - __readfsqword(0x28u);
  }
  if ( a2 != 2 )
    return v22 - __readfsqword(0x28u);
  v12 = *(_DWORD **)a4;
  switch ( a3 )
  {
    case 0LL:
      result = sub_524FF0((char *)a1 + 40, 2165563904LL, v12, 0);
      break;
    case 1LL:
      result = sub_524FF0((char *)a1 + 40, 2165563905LL, v12, 0);
      break;
    case 2LL:
      result = sub_524FF0((char *)a1 + 40, 2165563906LL, v12, 0);
      break;
    case 3LL:
      result = sub_524FF0((char *)a1 + 40, 2165563907LL, v12, 0);
      break;
    case 4LL:
      result = sub_524FF0((char *)a1 + 40, 2165563908LL, v12, 0);
      break;
    case 5LL:
      result = sub_524FF0((char *)a1 + 40, 2165563909LL, v12, 0);
      break;
    case 6LL:
      result = sub_524FF0((char *)a1 + 40, 2165563910LL, v12, 0);
      break;
    case 7LL:
      result = sub_524FF0((char *)a1 + 40, 2165563911LL, v12, 0);
      break;
    case 8LL:
      result = sub_524FF0((char *)a1 + 40, 2165563912LL, v12, 0);
      break;
    case 9LL:
      result = sub_524FF0((char *)a1 + 40, 2165563913LL, v12, 0);
      break;
    case 10LL:
      result = sub_524FF0((char *)a1 + 40, 2165563914LL, v12, 0);
      break;
    case 11LL:
      result = sub_524FF0((char *)a1 + 40, 2165563915LL, v12, 0);
      break;
    case 12LL:
      result = sub_524FF0((char *)a1 + 40, 2165563916LL, v12, 0);
      break;
    case 13LL:
      result = sub_524FF0((char *)a1 + 40, 2165563917LL, v12, 0);
      break;
    case 14LL:
      result = sub_524FF0((char *)a1 + 40, 2165563918LL, v12, 0);
      break;
    case 15LL:
      result = sub_524FF0((char *)a1 + 40, 2165563919LL, v12, 0);
      break;
    case 16LL:
      result = sub_524FF0((char *)a1 + 40, 2165563920LL, v12, 0);
      break;
    case 17LL:
      result = sub_524FF0((char *)a1 + 40, 2165563921LL, v12, 0);
      break;
    case 18LL:
      result = sub_524FF0((char *)a1 + 40, 2165563922LL, v12, 0);
      break;
    default:
      return v22 - __readfsqword(0x28u);
  }
  return result;
}
