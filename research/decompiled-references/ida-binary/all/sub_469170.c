unsigned __int64 __fastcall sub_469170(
        QT::QCoreApplication **a1,
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
  char v12; // al
  unsigned __int64 result; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r12
  size_t v17; // rbp
  _BYTE **v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+8h] [rbp-70h]
  char *v20; // [rsp+10h] [rbp-68h] BYREF
  __int128 v21; // [rsp+18h] [rbp-60h]
  QT::QWidget *v22; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a2 )
    return v24 - __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0LL:
      v18 = (_BYTE **)a4;
      v12 = sub_2EA1A0(a1, **(QT::QObject ***)(a4 + 8), (QT::QEvent *)(unsigned int)a3);
      if ( *v18 )
        **v18 = v12;
      return v24 - __readfsqword(0x28u);
    case 1LL:
      result = sub_2EBA40(a1, *(const QT::QString **)(a4 + 8));
      break;
    case 2LL:
      result = sub_2E9EF0((QT::QWidget *)a1, *(int **)(a4 + 8));
      break;
    case 3LL:
      result = sub_2E6EC0((__int64)a1, *(int **)(a4 + 8), a5, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 6LL:
      v14 = *(_QWORD *)(a4 + 16);
      v22 = nullptr;
      v23 = 0;
      v15 = *(_QWORD *)(v14 + 8);
      if ( v15 )
      {
        v19 = a4;
        *((_QWORD *)&v23 + 1) = *(_QWORD *)(v14 + 8);
        v22 = (QT::QWidget *)qalloc_or_throw(8 * v15);
        memcpy(v22, *(const void **)v14, 8 * v15);
        *(_QWORD *)&v23 = v15;
        a4 = v19;
      }
      v16 = *(_QWORD *)(a4 + 8);
      v20 = nullptr;
      v21 = 0;
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v20 = (char *)qalloc_or_throw(*(_QWORD *)(v16 + 8));
        *((_QWORD *)&v21 + 1) = v17;
        memcpy(v20, *(const void **)v16, v17);
        *(_QWORD *)&v21 = v17;
      }
      sub_2EA480((__int64)a1, (const char **)&v20, (char *)&v22);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20, (const char *)&v20);
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22, (const char *)&v20);
      }
      return v24 - __readfsqword(0x28u);
    default:
      return v24 - __readfsqword(0x28u);
  }
  return result;
}
