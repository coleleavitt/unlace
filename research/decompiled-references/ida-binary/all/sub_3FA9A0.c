__int64 __fastcall sub_3FA9A0(__int64 a1, QT::QWidget *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  QT::QWidget *v7; // rax
  __int64 v8; // r9
  char *v9; // rcx
  QT::QWidget *v10; // r12
  __int64 v11; // rax
  char *v12; // r15
  __int64 v13; // rdx
  QT::QWidget **v14; // rsi
  QT::QWidget **v15; // rax
  QT::QWidget **v16; // r13
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  QT::QWidget **v21; // rbx
  int *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  char *v25; // rbx
  char *v26; // rsi
  char *v27; // rdx
  int *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-40h]

  result = *(_QWORD *)(a1 + 160);
  if ( result > 0 )
  {
    v4 = *(_QWORD *)(a1 + 152);
    v5 = v4 + 8 * result;
    result = v4;
    do
    {
      v6 = result;
      if ( v5 == result )
        return result;
      result += 8;
    }
    while ( *(QT::QWidget **)(result - 8) != a2 );
    if ( v6 - v4 == -8 )
      return result;
    v7 = (QT::QWidget *)QT::QApplication::focusWidget((QT::QApplication *)a1);
    v9 = *(char **)(a1 + 152);
    v10 = v7;
    v11 = *(_QWORD *)(a1 + 160);
    v12 = v9;
    v13 = 8 * v11;
    v14 = (QT::QWidget **)&v9[8 * v11];
    if ( v11 > 0 )
    {
      v15 = *(QT::QWidget ***)(a1 + 152);
      while ( 1 )
      {
        v16 = v15;
        if ( v15 == v14 )
          break;
        if ( *v15++ == a2 )
        {
          v17 = ((char *)v16 - v9) >> 3;
          goto LABEL_12;
        }
      }
    }
    LODWORD(v17) = -1;
LABEL_12:
    v18 = v13;
    v19 = v13 >> 5;
    v20 = v18 >> 3;
    if ( v19 > 0 )
    {
      v21 = *(QT::QWidget ***)(a1 + 152);
      while ( a2 != *v21 )
      {
        if ( a2 == v21[1] )
        {
          ++v21;
          goto LABEL_19;
        }
        if ( a2 == v21[2] )
        {
          v21 += 2;
          goto LABEL_19;
        }
        if ( a2 == v21[3] )
        {
          v21 += 3;
          goto LABEL_19;
        }
        v21 += 4;
        if ( &v9[32 * v19] == (char *)v21 )
        {
          v20 = v14 - v21;
          goto LABEL_39;
        }
      }
      goto LABEL_19;
    }
    v21 = *(QT::QWidget ***)(a1 + 152);
LABEL_39:
    if ( v20 != 2 )
    {
      if ( v20 != 3 )
      {
        if ( v20 != 1 )
          goto LABEL_29;
        goto LABEL_42;
      }
      if ( a2 == *v21 )
        goto LABEL_19;
      ++v21;
    }
    if ( a2 == *v21 )
      goto LABEL_19;
    ++v21;
LABEL_42:
    if ( a2 == *v21 )
    {
LABEL_19:
      if ( v21 != v14 )
      {
        v22 = *(int **)(a1 + 144);
        v23 = a1 + 144;
        if ( !v22 || *v22 > 1 )
        {
          sub_3F9FE0(a1 + 144, 0, 0, 0, v23, v8);
          v9 = *(char **)(a1 + 152);
          v23 = a1 + 144;
        }
        v24 = *(_QWORD *)(a1 + 160);
        v25 = (char *)((char *)v21 - v12);
        v26 = &v25[(_QWORD)v9 + 8];
        v27 = &v9[8 * v24];
        if ( v9 == &v25[(_QWORD)v9] )
        {
          if ( v26 != v27 )
            *(_QWORD *)(a1 + 152) = v26;
        }
        else if ( v26 != v27 )
        {
          v33 = v23;
          memmove(&v25[(_QWORD)v9], v26, v27 - v26);
          v24 = *(_QWORD *)(a1 + 160);
          v23 = v33;
        }
        *(_QWORD *)(a1 + 160) = v24 - 1;
        v28 = *(int **)(a1 + 144);
        if ( !v28 || *v28 > 1 )
          sub_3F9FE0(v23, 0, 0, 0, v23, v8);
      }
    }
LABEL_29:
    QT::QLayout::removeWidget(*(QT::QLayout **)(a1 + 136), a2);
    QT::QObject::deleteLater(a2);
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a1 + 160) != 0);
    v29 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL));
    v30 = v29;
    if ( v29 )
    {
      ++*(_DWORD *)(v29 + 452);
      v31 = v29 + 452;
      v32 = operator new(0x38u);
      *(_DWORD *)v32 = 1;
      *(_QWORD *)(v32 + 8) = sub_3FA3C0;
      *(_QWORD *)(v32 + 16) = a1;
      *(_QWORD *)(v32 + 24) = v10;
      *(_DWORD *)(v32 + 36) = v17;
      *(_QWORD *)(v32 + 40) = v30;
      *(_QWORD *)(v32 + 48) = v31;
      *(_BYTE *)(v32 + 32) = v10 == a2;
      QT::QTimer::singleShotImpl(0, 0, 0);
    }
    return sub_473400(a1);
  }
  return result;
}
