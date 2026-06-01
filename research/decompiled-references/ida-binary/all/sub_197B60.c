__int64 __fastcall sub_197B60(const __m128i *a1, __int64 a2, __int64 a3, __int64 **a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v9; // rbp
  __int32 v10; // eax
  __m128i v11; // xmm0
  __int64 v12; // rdi
  const QT::QObject *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebp
  int v18; // r9d
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  __m128i v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+28h] [rbp-30h]
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v6 = 0;
  if ( a4[1] )
  {
    v9 = **a4;
    v10 = a1[160].m128i_i32[0];
    v19 = _mm_loadu_si128(a1 + 158);
    v11 = _mm_loadu_si128(a1 + 159);
    v12 = a1[160].m128i_i64[1];
    v22 = 0;
    LODWORD(v21) = v10;
    v20 = v11;
    if ( v12 )
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 **, __int64, __int64, __int64, __int64, __int64, __int64, _DWORD))(*(_QWORD *)v12 + 16LL))(
              v12,
              a2,
              a3,
              a4,
              a5,
              a6,
              v19.m128i_i64[0],
              v19.m128i_i64[1],
              v20.m128i_i64[0],
              v20.m128i_i64[1],
              v21);
    v13 = nullptr;
    if ( (unsigned int)bookmarks_t_get_by_inode(&v19, 0, v9, a1[161].m128i_i64[0]) == -1 )
    {
      v6 = 0;
    }
    else
    {
      v17 = (QT::QGuiApplication::keyboardModifiers((QT::QGuiApplication *)&v19) & 0x2000000) == 0 ? 7 : 3;
      if ( !a1[157].m128i_i8[0]
        && (v13 = (const QT::QObject *)a1[156].m128i_i64[1]) != nullptr
        && (v13 = (const QT::QObject *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v13)) != nullptr
        || (a1[161].m128i_i8[8] & 1) != 0
        && qword_8CC7C0
        && (v13 = (const QT::QObject *)&v19,
            (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, _QWORD))(*(_QWORD *)qword_8CC7C0 + 688LL))(
              qword_8CC7C0,
              &v19,
              0))
        && (v13 = (const QT::QObject *)qword_8CC7C0) != nullptr )
      {
        callui(
          149,
          (_DWORD)v13,
          (unsigned int)&v19,
          v17,
          (unsigned int)&callui,
          v18,
          *(_OWORD *)&v19,
          *(_OWORD *)&v20,
          v21);
      }
      v6 = 2;
    }
    if ( v22 )
      qfree(v22, v13, v14, v15, v16);
  }
  return v6;
}
