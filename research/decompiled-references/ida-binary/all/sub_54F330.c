__int64 __fastcall sub_54F330(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rsi
  __int64 (__fastcall *v13)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  _DWORD *v14; // rsi
  char v15; // al
  int v16; // eax
  void *v17; // rdx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  void *ptr; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+10h] [rbp-D8h]
  __int128 v26; // [rsp+B0h] [rbp-38h]
  __int128 v27; // [rsp+C0h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+D8h] [rbp-10h]

  v28 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      switch ( a3 )
      {
        case 0LL:
          result = QT::QMetaObject::activate(a1, (QT::QObject *)&off_89E260, nullptr, 0, a5);
          break;
        case 1LL:
          v15 = **(_BYTE **)(a4 + 8);
          *((_QWORD *)&v27 + 1) = &ptr;
          *(_QWORD *)&v27 = 0;
          LOBYTE(ptr) = v15;
          QT::QMetaObject::activate(
            a1,
            (QT::QObject *)&off_89E260,
            (const QT::QMetaObject *)((char *)&dword_0 + 1),
            (int)&v27,
            a5);
          return v28 - __readfsqword(0x28u);
        case 2LL:
          result = QT::QMetaObject::activate(
                     a1,
                     (QT::QObject *)&off_89E260,
                     (const QT::QMetaObject *)((char *)&dword_0 + 2),
                     0,
                     a5);
          break;
        case 3LL:
          v16 = sub_527DF0(a1);
          if ( *(_QWORD *)a4 )
            **(_DWORD **)a4 = v16;
          return v28 - __readfsqword(0x28u);
        case 4LL:
          QT::QString::fromUtf8(&ptr, 10, "Text input");
          v17 = ptr;
          v18 = *(_DWORD **)a4;
          if ( *(_QWORD *)a4 )
          {
            v17 = *(void **)v18;
            *(_QWORD *)v18 = ptr;
            ptr = v17;
            v19 = *((_QWORD *)v18 + 1);
            *((_QWORD *)v18 + 1) = v24;
            v24 = v19;
            v20 = *((_QWORD *)v18 + 2);
            *((_QWORD *)v18 + 2) = v25;
            v25 = v20;
          }
          if ( v17 && !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
            free(ptr);
          return v28 - __readfsqword(0x28u);
        case 5LL:
          result = (*(__int64 (__fastcall **)(QT::QMetaObject *))(*(_QWORD *)a1 + 504LL))(a1);
          break;
        case 6LL:
          result = (*(__int64 (__fastcall **)(QT::QMetaObject *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 512LL))(
                     a1,
                     **(unsigned int **)(a4 + 8),
                     **(unsigned int **)(a4 + 16),
                     **(unsigned int **)(a4 + 24));
          break;
        default:
          return v28 - __readfsqword(0x28u);
      }
      return result;
    case 5:
      v11 = *(_QWORD *)(a4 + 8);
      v12 = *(_DWORD **)a4;
      v13 = *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v11;
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v11 == sub_54ED60 )
      {
        if ( !*(_QWORD *)(v11 + 8) )
          *v12 = 0;
      }
      else if ( (char *)v13 == (char *)sub_54ED70 )
      {
        if ( !*(_QWORD *)(v11 + 8) )
          *v12 = 1;
      }
      else if ( (char *)v13 == (char *)&loc_54EDD0 && !*(_QWORD *)(v11 + 8) )
      {
        *v12 = 2;
      }
      return v28 - __readfsqword(0x28u);
    case 1:
      v10 = *(_DWORD **)a4;
      switch ( a3 )
      {
        case 0LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563904LL;
          goto LABEL_4;
        case 1LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 160);
          return v28 - __readfsqword(0x28u);
        case 2LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 171);
          return v28 - __readfsqword(0x28u);
        case 3LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563905LL;
          goto LABEL_4;
        case 4LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 161);
          return v28 - __readfsqword(0x28u);
        case 5LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 172);
          return v28 - __readfsqword(0x28u);
        case 6LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563906LL;
          goto LABEL_4;
        case 7LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 162);
          return v28 - __readfsqword(0x28u);
        case 8LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 173);
          return v28 - __readfsqword(0x28u);
        case 9LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563907LL;
          goto LABEL_4;
        case 10LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 163);
          return v28 - __readfsqword(0x28u);
        case 11LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 174);
          return v28 - __readfsqword(0x28u);
        case 12LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563908LL;
          goto LABEL_4;
        case 13LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 164);
          return v28 - __readfsqword(0x28u);
        case 14LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 175);
          return v28 - __readfsqword(0x28u);
        case 15LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563909LL;
          goto LABEL_4;
        case 16LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 165);
          return v28 - __readfsqword(0x28u);
        case 17LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 176);
          return v28 - __readfsqword(0x28u);
        case 18LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563910LL;
          goto LABEL_4;
        case 19LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 166);
          return v28 - __readfsqword(0x28u);
        case 20LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 177);
          return v28 - __readfsqword(0x28u);
        case 21LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563911LL;
          goto LABEL_4;
        case 22LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 167);
          return v28 - __readfsqword(0x28u);
        case 23LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 178);
          return v28 - __readfsqword(0x28u);
        case 24LL:
          v6 = (__int64)a1 + 40;
          v7 = 2165563912LL;
LABEL_4:
          *(_QWORD *)&v27 = sub_524FA0(v6, v7, 0);
          *((_QWORD *)&v27 + 1) = v8;
          *(_QWORD *)v10 = v27;
          *(_QWORD *)((char *)v10 + 6) = *(_QWORD *)((char *)&v27 + 6);
          break;
        case 25LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 168);
          break;
        case 26LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 179);
          break;
        case 27LL:
          *(_QWORD *)&v27 = sub_524FA0((__int64)a1 + 40, 2165563913LL, 0);
          *((_QWORD *)&v27 + 1) = v22;
          *(_QWORD *)&v26 = v27;
          *(_QWORD *)v10 = v27;
          *((_QWORD *)&v26 + 1) = v22;
          *(_QWORD *)((char *)v10 + 6) = *(_QWORD *)((char *)&v27 + 6);
          break;
        case 28LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 169);
          break;
        case 29LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 180);
          break;
        case 30LL:
          *(_QWORD *)&v27 = sub_524FA0((__int64)a1 + 40, 2165563914LL, 0);
          *((_QWORD *)&v27 + 1) = v21;
          *(_QWORD *)&v26 = v27;
          *(_QWORD *)v10 = v27;
          *((_QWORD *)&v26 + 1) = v21;
          *(_QWORD *)((char *)v10 + 6) = *(_QWORD *)((char *)&v26 + 6);
          break;
        case 31LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 170);
          break;
        case 32LL:
          *(_BYTE *)v10 = *((_BYTE *)a1 + 181);
          break;
        default:
          return v28 - __readfsqword(0x28u);
      }
      return v28 - __readfsqword(0x28u);
  }
  if ( a2 != 2 )
    return v28 - __readfsqword(0x28u);
  v14 = *(_DWORD **)a4;
  switch ( a3 )
  {
    case 0LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563904LL, *(QT::QColor **)a4, 0);
      break;
    case 1LL:
      *((_BYTE *)a1 + 160) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 2LL:
      *((_BYTE *)a1 + 171) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 3LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563905LL, *(QT::QColor **)a4, 0);
      break;
    case 4LL:
      *((_BYTE *)a1 + 161) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 5LL:
      *((_BYTE *)a1 + 172) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 6LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563906LL, *(QT::QColor **)a4, 0);
      break;
    case 7LL:
      *((_BYTE *)a1 + 162) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 8LL:
      *((_BYTE *)a1 + 173) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 9LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563907LL, *(QT::QColor **)a4, 0);
      break;
    case 10LL:
      *((_BYTE *)a1 + 163) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 11LL:
      *((_BYTE *)a1 + 174) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 12LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563908LL, *(QT::QColor **)a4, 0);
      break;
    case 13LL:
      *((_BYTE *)a1 + 164) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 14LL:
      *((_BYTE *)a1 + 175) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 15LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563909LL, *(QT::QColor **)a4, 0);
      break;
    case 16LL:
      *((_BYTE *)a1 + 165) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 17LL:
      *((_BYTE *)a1 + 176) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 18LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563910LL, *(QT::QColor **)a4, 0);
      break;
    case 19LL:
      *((_BYTE *)a1 + 166) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 20LL:
      *((_BYTE *)a1 + 177) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 21LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563911LL, *(QT::QColor **)a4, 0);
      break;
    case 22LL:
      *((_BYTE *)a1 + 167) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 23LL:
      *((_BYTE *)a1 + 178) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 24LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563912LL, *(QT::QColor **)a4, 0);
      break;
    case 25LL:
      *((_BYTE *)a1 + 168) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 26LL:
      *((_BYTE *)a1 + 179) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 27LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563913LL, *(QT::QColor **)a4, 0);
      break;
    case 28LL:
      *((_BYTE *)a1 + 169) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 29LL:
      *((_BYTE *)a1 + 180) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 30LL:
      result = sub_524FF0((__int64)a1 + 40, 2165563914LL, *(QT::QColor **)a4, 0);
      break;
    case 31LL:
      *((_BYTE *)a1 + 170) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    case 32LL:
      *((_BYTE *)a1 + 181) = *(_BYTE *)v14;
      return v28 - __readfsqword(0x28u);
    default:
      return v28 - __readfsqword(0x28u);
  }
  return result;
}
