__int64 __fastcall sub_3C70C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // eax
  QT::QAbstractItemView *v13; // rbp
  unsigned int v14; // r12d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  unsigned int v21; // ebp
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int128 v24; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-20h]

  v12 = *(_DWORD *)(a1 + 8);
  v25 = __readfsqword(0x28u);
  if ( v12 == 58 || v12 == 25 )
  {
    v16 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v17 = sub_3ACC10(v16, a2, a3, a4, a5);
      if ( v17 )
      {
        v14 = *(_DWORD *)(v17 + 12);
        v18 = *(_QWORD *)(v16 + 8);
        v19 = *(unsigned __int8 *)(*(_QWORD *)(v16 + 1000) + 57LL) + 64;
        v20 = *(_QWORD *)(v18 + 16);
        v21 = v19 | 0x10;
        if ( v20 )
        {
          if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, *(const QT::QObject **)(v18 + 16)) )
            goto LABEL_11;
        }
      }
    }
    return 0;
  }
  if ( v12 != 10 )
    return 0;
  v13 = *(QT::QAbstractItemView **)(a1 + 328);
  if ( !v13 )
    return 0;
  a5 = NAN;
  v24 = -1;
  sub_48FF00(v13);
  v14 = sub_3C5ED0(v13, &v24);
  if ( !v14 )
    return 0;
  v20 = sub_3C5C60(a1);
  v21 = 98;
  if ( !v20 )
    return 0;
LABEL_11:
  sub_3C6B30(v20, v14, nullptr, v21, a5, a6, a7, a8, v22, v23, a11, a12);
  return 1;
}
