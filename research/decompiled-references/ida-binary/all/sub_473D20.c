void __fastcall sub_473D20(
        QT::QApplication *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rsi
  unsigned __int128 v15; // rax
  _QWORD *v16; // rbp
  char *v17; // rdi
  void *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int128 v22; // rax
  unsigned __int128 v23; // rax
  __int64 *v24; // [rsp+8h] [rbp-170h]
  void *ptr; // [rsp+10h] [rbp-168h] BYREF
  __int64 v26; // [rsp+18h] [rbp-160h]
  __int64 v27; // [rsp+20h] [rbp-158h]
  unsigned __int128 v28; // [rsp+130h] [rbp-48h]
  unsigned __int128 v29; // [rsp+140h] [rbp-38h]
  unsigned __int64 v30; // [rsp+158h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      v16 = (_QWORD *)*a4;
      v17 = (char *)this + 40;
      switch ( a3 )
      {
        case 0LL:
          v14 = 2165563904LL;
          goto LABEL_7;
        case 1LL:
          v14 = 2165563905LL;
          goto LABEL_7;
        case 2LL:
          v14 = 2165563906LL;
          goto LABEL_7;
        case 3LL:
          v14 = 2165563907LL;
          goto LABEL_7;
        case 4LL:
          v14 = 2165563908LL;
          goto LABEL_7;
        case 5LL:
          v14 = 2165563909LL;
          goto LABEL_7;
        case 6LL:
          v14 = 2165563910LL;
          goto LABEL_7;
        case 7LL:
          v14 = 2165563911LL;
          goto LABEL_7;
        case 8LL:
          v14 = 2165563912LL;
          goto LABEL_7;
        case 9LL:
          v14 = 2165563913LL;
          goto LABEL_7;
        case 10LL:
          v14 = 2165563914LL;
          goto LABEL_7;
        case 11LL:
          v14 = 2165563915LL;
          goto LABEL_7;
        case 12LL:
          v14 = 2165563916LL;
          goto LABEL_7;
        case 13LL:
          v14 = 2165563917LL;
          goto LABEL_7;
        case 14LL:
          v14 = 2165563918LL;
          goto LABEL_7;
        case 15LL:
          v14 = 2165563919LL;
LABEL_7:
          *(_QWORD *)&v15 = sub_524FA0(v17, v14, 0);
          *v16 = v15;
          *(_QWORD *)((char *)v16 + 6) = v15 >> 48;
          break;
        case 16LL:
          *(_QWORD *)&v22 = sub_524FA0(v17, 2165563920LL, 0);
          *v16 = v22;
          v28 = v22;
          *(_QWORD *)((char *)v16 + 6) = v22 >> 48;
          break;
        case 17LL:
          *(_QWORD *)&v23 = sub_524FA0(v17, 2165563921LL, 0);
          *v16 = v23;
          v29 = v23;
          *(_QWORD *)((char *)v16 + 6) = v23 >> 48;
          break;
        default:
          return;
      }
    }
    else if ( (_DWORD)a2 == 2 )
    {
      switch ( a3 )
      {
        case 0LL:
          sub_524FF0((char *)this + 40, 2165563904LL, *a4, 0);
          break;
        case 1LL:
          sub_524FF0((char *)this + 40, 2165563905LL, *a4, 0);
          break;
        case 2LL:
          sub_524FF0((char *)this + 40, 2165563906LL, *a4, 0);
          break;
        case 3LL:
          sub_524FF0((char *)this + 40, 2165563907LL, *a4, 0);
          break;
        case 4LL:
          sub_524FF0((char *)this + 40, 2165563908LL, *a4, 0);
          break;
        case 5LL:
          sub_524FF0((char *)this + 40, 2165563909LL, *a4, 0);
          break;
        case 6LL:
          sub_524FF0((char *)this + 40, 2165563910LL, *a4, 0);
          break;
        case 7LL:
          sub_524FF0((char *)this + 40, 2165563911LL, *a4, 0);
          break;
        case 8LL:
          sub_524FF0((char *)this + 40, 2165563912LL, *a4, 0);
          break;
        case 9LL:
          sub_524FF0((char *)this + 40, 2165563913LL, *a4, 0);
          break;
        case 10LL:
          sub_524FF0((char *)this + 40, 2165563914LL, *a4, 0);
          break;
        case 11LL:
          sub_524FF0((char *)this + 40, 2165563915LL, *a4, 0);
          break;
        case 12LL:
          sub_524FF0((char *)this + 40, 2165563916LL, *a4, 0);
          break;
        case 13LL:
          sub_524FF0((char *)this + 40, 2165563917LL, *a4, 0);
          break;
        case 14LL:
          sub_524FF0((char *)this + 40, 2165563918LL, *a4, 0);
          break;
        case 15LL:
          sub_524FF0((char *)this + 40, 2165563919LL, *a4, 0);
          break;
        case 16LL:
          sub_524FF0((char *)this + 40, 2165563920LL, *a4, 0);
          break;
        case 17LL:
          sub_524FF0((char *)this + 40, 2165563921LL, *a4, 0);
          break;
        default:
          return;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        sub_3F1710(this);
        break;
      case 1LL:
        sub_401BD0((__int64)this, *(_QWORD *)a4[1], *(_QWORD *)a4[2]);
        break;
      case 2LL:
        sub_401C10((__int64)this, *(_BYTE *)a4[1], (unsigned int)a3, (__int64)a4, a5, a6);
        break;
      case 3LL:
        sub_401C40((__int64)this, *(_BYTE *)a4[1], (unsigned int)a3, (__int64)a4, a5, a6);
        break;
      case 4LL:
        sub_3F7730(this, *(unsigned __int8 *)a4[1]);
        break;
      case 5LL:
        sub_401C80((__int64)this, *(_BYTE *)a4[1], (unsigned int)a3, (__int64)a4, a5, a6);
        break;
      case 6LL:
        sub_401CA0((__int64)this, *(_BYTE *)a4[1], (unsigned int)a3, (__int64)a4, a5, a6);
        break;
      case 7LL:
        sub_401CC0((__int64)this);
        break;
      case 8LL:
        sub_3F7820(this, *(unsigned __int8 *)a4[1]);
        break;
      case 9LL:
        sub_3FB5C0((__int64)this, a4[1]);
        break;
      case 10LL:
        sub_3FB850((__int64)this, a4[1]);
        break;
      case 11LL:
        sub_408B80(this, a4[1]);
        break;
      case 12LL:
        sub_3FD3A0(this);
        break;
      case 13LL:
        sub_407980(this);
        break;
      case 14LL:
        sub_3EDE10((__int64)this);
        break;
      case 15LL:
        sub_3EE2F0((__int64)this);
        break;
      case 16LL:
        sub_3F3420((__int64)this);
        break;
      case 17LL:
        sub_408110((const __m128i *)this);
        break;
      case 18LL:
        sub_3FF2D0((__int64)this, a2, (unsigned int)a3, (__int64)a4, a5, a6);
        break;
      case 19LL:
        sub_3FF310((__int64)this, a2, (unsigned int)a3, (__int64)a4, a5, a6);
        break;
      case 20LL:
        sub_3F4770(this);
        break;
      case 21LL:
        nullsub_166();
        break;
      case 22LL:
        v24 = a4;
        QT::QString::fromUtf8(&ptr, 21, "Structured data views");
        goto LABEL_11;
      case 23LL:
        QT::QFont::QFont((QT::QFont *)&ptr, (const QT::QFont *)a4[1]);
        sub_3F2680((__int64)this, (QT::QFont *)&ptr);
        QT::QFont::~QFont((QT::QFont *)&ptr);
        break;
      case 24LL:
        sub_3F7180((__int64)this, *(_QWORD *)a4[1]);
        break;
      case 25LL:
        sub_408330((__int64)this, a7, a8, a9, a10, a11, a12, a13, a14);
        break;
      case 26LL:
        v24 = a4;
        sub_3F4A70((__int64)&ptr, (__int64)this);
LABEL_11:
        v18 = ptr;
        v19 = *v24;
        if ( *v24 )
        {
          v18 = *(void **)v19;
          *(_QWORD *)v19 = ptr;
          ptr = v18;
          v20 = *(_QWORD *)(v19 + 8);
          *(_QWORD *)(v19 + 8) = v26;
          v26 = v20;
          v21 = *(_QWORD *)(v19 + 16);
          *(_QWORD *)(v19 + 16) = v27;
          v27 = v21;
        }
        if ( v18 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)v18, 1u) )
            free(ptr);
        }
        break;
      default:
        return;
    }
  }
}
