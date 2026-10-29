__int64 __fastcall sub_545BD0(QT::QApplication *a1, int a2, __int64 a3, __int64 a4, void **a5, double a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  unsigned __int64 (__fastcall *v10)(QT::QMetaObject *, __int64, __int64, __int64, void **, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  bool v15; // al
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  void **v24; // r8
  __int64 v25; // rax
  char v26; // al
  void **v27; // [rsp+8h] [rbp-70h] BYREF
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h] BYREF
  int v32[2]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v33; // [rsp+38h] [rbp-40h]
  __m128i v34; // [rsp+48h] [rbp-30h]
  __int64 *v35; // [rsp+58h] [rbp-20h]
  unsigned __int64 v36; // [rsp+68h] [rbp-10h]

  v36 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v9 = *(_BYTE **)a4;
      v10 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **, __int64))v8;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v8 == sub_545750 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 0;
      }
      else if ( (char *)v10 == (char *)sub_5457C0 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 1;
      }
      else if ( (char *)v10 == (char *)sub_545820 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 2;
      }
      else if ( (char *)v10 == (char *)sub_545880 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 3;
      }
      else if ( (char *)v10 == (char *)sub_5458E0 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 4;
      }
      else if ( (char *)v10 == (char *)sub_545940 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 5;
      }
      else if ( (char *)v10 == (char *)sub_5459A0 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 6;
      }
      else if ( (char *)v10 == (char *)sub_545A00 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *(_DWORD *)v9 = 7;
      }
      else if ( v10 == sub_545A60 && !*(_QWORD *)(v8 + 8) )
      {
        *(_DWORD *)v9 = 8;
      }
    }
    return v36 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v13 = **(_QWORD **)(a4 + 16);
        v14 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v13;
        v30 = v14;
        v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v30, (__m128i)(unsigned __int64)&v31);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, nullptr, (int)v32, a5);
        return v36 - __readfsqword(0x28u);
      case 1LL:
        v12 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v12;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8955C0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          (int)v32,
          a5);
        return v36 - __readfsqword(0x28u);
      case 2LL:
        v11 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v11;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8955C0,
          (const QT::QMetaObject *)((char *)&dword_0 + 2),
          (int)v32,
          a5);
        return v36 - __readfsqword(0x28u);
      case 3LL:
        v20 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v20;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8955C0,
          (const QT::QMetaObject *)((char *)&dword_0 + 3),
          (int)v32,
          a5);
        return v36 - __readfsqword(0x28u);
      case 4LL:
        v19 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v19;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, (const QT::QMetaObject *)&byte_4, (int)v32, a5);
        return v36 - __readfsqword(0x28u);
      case 5LL:
        v18 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v18;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, (const QT::QMetaObject *)&byte_5, (int)v32, a5);
        return v36 - __readfsqword(0x28u);
      case 6LL:
        v17 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v17;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, (const QT::QMetaObject *)&byte_6, (int)v32, a5);
        return v36 - __readfsqword(0x28u);
      case 7LL:
        v25 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v32 = 0;
        v31 = v25;
        v33.m128i_i64[0] = (__int64)&v31;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, (const QT::QMetaObject *)&byte_7, (int)v32, a5);
        return v36 - __readfsqword(0x28u);
      case 8LL:
        v21 = **(_QWORD **)(a4 + 32);
        v22 = **(_QWORD **)(a4 + 24);
        v23 = **(_QWORD **)(a4 + 16);
        v24 = **(void ****)(a4 + 8);
        v31 = **(_QWORD **)(a4 + 40);
        v29 = v22;
        v28 = v23;
        v30 = v21;
        v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v27, (__m128i)(unsigned __int64)&v28);
        v27 = v24;
        v35 = &v31;
        *(_QWORD *)v32 = 0;
        v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v29, (__m128i)(unsigned __int64)&v30);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8955C0, (const QT::QMetaObject *)&byte_8, (int)v32, v24);
        return v36 - __readfsqword(0x28u);
      case 9LL:
        v26 = sub_47B170((__int64)a1, **(_QWORD **)(a4 + 8), a6);
        if ( *(_QWORD *)a4 )
          **(_BYTE **)a4 = v26;
        return v36 - __readfsqword(0x28u);
      case 10LL:
        v16 = sub_47AFB0((__int64)a1, a6);
        if ( *(_QWORD *)a4 )
          **(_BYTE **)a4 = v16;
        return v36 - __readfsqword(0x28u);
      case 11LL:
        v15 = sub_47B250((__int64)a1);
        if ( *(_QWORD *)a4 )
          **(_BYTE **)a4 = v15;
        return v36 - __readfsqword(0x28u);
      case 12LL:
        result = (*(__int64 (__fastcall **)(QT::QApplication *, _QWORD, _QWORD))(*(_QWORD *)a1 + 464LL))(
                   a1,
                   **(_QWORD **)(a4 + 8),
                   **(_QWORD **)(a4 + 16));
        break;
      case 13LL:
        result = sub_4B9A30((__int64)a1, **(const char ***)(a4 + 8));
        break;
      case 14LL:
        result = sub_47B260((__int64)a1, *(_QWORD *)(a4 + 8), **(_DWORD **)(a4 + 16), a6);
        break;
      case 15LL:
        result = (__int64)sub_542830(a1);
        break;
      case 16LL:
        result = sub_47BF70((__int64)a1, *(const QT::QString **)(a4 + 8));
        break;
      case 17LL:
        result = sub_47F9F0(a1);
        break;
      default:
        return v36 - __readfsqword(0x28u);
    }
  }
  return result;
}
