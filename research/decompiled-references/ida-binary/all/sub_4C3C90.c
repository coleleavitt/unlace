__int64 __fastcall sub_4C3C90(const char *a1, __int64 a2)
{
  const char *v3; // rbx
  QT::QWidget *v4; // r12
  size_t v5; // rax
  double v6; // xmm0_8
  void **v7; // rsi
  void **v8; // rbx
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // eax
  void *v12; // rcx
  QT::QWidget *v13; // rax
  unsigned int v14; // ebx
  const char *v16; // r14
  size_t v17; // rax
  double v18; // xmm0_8
  __int64 v19; // r14
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rax
  int v23; // [rsp-8h] [rbp-A8h]
  int v24; // [rsp+0h] [rbp-A0h]
  __int64 v25; // [rsp+8h] [rbp-98h] BYREF
  __int64 v26; // [rsp+10h] [rbp-90h] BYREF
  int v27[2]; // [rsp+18h] [rbp-88h] BYREF
  int v28[4]; // [rsp+20h] [rbp-80h]
  void *v29; // [rsp+38h] [rbp-68h] BYREF
  int v30; // [rsp+40h] [rbp-60h]
  int v31; // [rsp+44h] [rbp-5Ch]
  void *ptr[2]; // [rsp+48h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-48h]
  unsigned __int64 v34; // [rsp+60h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  *(_OWORD *)v28 = 0;
  *(_QWORD *)v27 = 0;
  v3 = sub_17DED0((__int64 *)v27, a1, 0);
  v4 = (QT::QWidget *)sub_47A690((__int64)QT::QCoreApplication::self);
  v5 = 0;
  if ( v3 )
    v5 = strlen(v3);
  v6 = QT::QString::fromUtf8(&v29, v5, v3);
  v7 = &v29;
  v8 = (void **)sub_4C6BB0(v4, &v29, v6);
  if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
  {
    free(v29);
    if ( v8 )
      goto LABEL_6;
LABEL_22:
    v14 = 0;
    goto LABEL_15;
  }
  if ( !v8 )
    goto LABEL_22;
LABEL_6:
  ++dword_8D1DC0;
  if ( (*(_DWORD *)(a2 + 88) & 0x80) != 0 )
  {
    if ( *(_QWORD *)(a2 + 80) || *(int *)(a2 + 56) >= 0 && *(int *)(a2 + 60) >= 0 )
    {
      v9 = v8[4];
      v10 = v9[7] + 1 - v9[5];
      v11 = v9[8] + 1 - v9[6];
      if ( !v11 || !v10 )
      {
        v10 = *(_DWORD *)(a2 + 56);
        v11 = *(_DWORD *)(a2 + 60);
      }
      v12 = *(void **)(a2 + 48);
      v30 = v10;
      v31 = v11;
      v29 = v12;
      v33 = 0;
      *(_OWORD *)ptr = 0;
      sub_4CAF60(v4);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    else
    {
      sub_4CAF60(v4);
    }
  }
  else
  {
    v16 = sub_17DED0((__int64 *)v27, *(const char **)a2, 0);
    v17 = 0;
    if ( v16 )
      v17 = strlen(v16);
    v18 = QT::QString::fromUtf8(&v29, v17, v16);
    v19 = sub_4C6BB0(v4, &v29, v18);
    if ( v19 || (v22 = sub_47A7A0((QT::QApplication *)QT::QCoreApplication::self), v19 = v22, v8 != (void **)v22) && v22 )
    {
      if ( (*(_DWORD *)(a2 + 88) & 0x50) != 0 )
      {
        v25 = 0;
        v20 = sub_4C6100(v4, v19, &v25);
        v21 = v20;
        if ( v20 > 0 )
        {
          v26 = 0;
          if ( (int)sub_4C6100(v4, v8, &v26) >= 0 && v26 == v25 )
            --v21;
        }
        else if ( v20 == -1 )
        {
          v21 = 0;
        }
        sub_4CA1E0(
          v4,
          v8,
          v19,
          (*(_DWORD *)(a2 + 88) >> 4) & 1,
          (unsigned int)((*(_DWORD *)(a2 + 88) & 0x20) == 0) + v21);
      }
      else
      {
        sub_4CBD40(v4, v8, v19);
      }
    }
    else
    {
      sub_4CAF50(v4, v23, v24, v25, v26, v27[0], v28[0], *(__int64 *)&v28[2]);
    }
    if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
      free(v29);
  }
  v7 = v8;
  sub_4CB2D0(v4);
  v13 = (QT::QWidget *)QT::QWidget::window((QT::QWidget *)v8);
  QT::QWidget::activateWindow(v13);
  v14 = 1;
  sub_4D2110(&v29);
LABEL_15:
  if ( *(_QWORD *)v27 )
  {
    *(_QWORD *)v28 = 0;
    qfree(*(_QWORD *)v27, (const char *)v7);
  }
  return v14;
}
