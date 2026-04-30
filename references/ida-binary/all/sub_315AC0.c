__int64 sub_315AC0()
{
  int v0; // eax
  __int64 v1; // rbx
  unsigned __int64 v2; // r12
  int *v3; // rax
  QT::QAction *v4; // r13
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE *v7; // rdx
  _BYTE *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rbx
  __int64 v45; // rdi
  QT::QAction *v47; // [rsp+8h] [rbp-180h] BYREF
  QT::QAction *v48; // [rsp+10h] [rbp-178h] BYREF
  QT::QAction *v49; // [rsp+18h] [rbp-170h] BYREF
  QT::QAction *v50; // [rsp+20h] [rbp-168h] BYREF
  QT::QAction *v51; // [rsp+28h] [rbp-160h] BYREF
  QT::QAction *v52; // [rsp+30h] [rbp-158h] BYREF
  QT::QAction *v53; // [rsp+38h] [rbp-150h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v55; // [rsp+48h] [rbp-140h]
  int *v56; // [rsp+50h] [rbp-138h]
  _QWORD v57[7]; // [rsp+60h] [rbp-128h] BYREF
  char v58; // [rsp+98h] [rbp-F0h] BYREF
  char v59; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v60; // [rsp+120h] [rbp-68h]
  __int64 v61; // [rsp+128h] [rbp-60h]
  __int64 v62; // [rsp+138h] [rbp-50h]
  __int64 v63; // [rsp+140h] [rbp-48h]
  unsigned __int64 v64; // [rsp+158h] [rbp-30h]

  v64 = __readfsqword(0x28u);
  sub_53DC50(qword_8CD748, "DebuggerWindows");
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v0 = (_DWORD)v56 - 1;
  if ( (int)v56 - 1 >= 0 )
  {
    v1 = 8LL * v0;
    v2 = 8 * (v0 - (unsigned __int64)(unsigned int)v0);
    while ( 1 )
    {
      v4 = *(QT::QAction **)(v55 + v1);
      if ( (unsigned __int8)QT::QAction::isSeparator(v4)
        || (QT::QAction *)unk_8CA5A8 == v4
        || !(unsigned __int8)QT::QAction::isEnabled(v4) )
      {
        if ( !ptr || *(int *)ptr > 1 )
          sub_1821F0((__int64)&ptr, 0, 0, 0, v5, v6);
        v3 = v56;
        v7 = (_BYTE *)(v55 + 8LL * (_QWORD)v56);
        v8 = (_BYTE *)(v55 + v1 + 8);
        if ( v55 == v55 + v1 )
        {
          if ( v8 != v7 )
            v55 += v1 + 8;
        }
        else if ( v8 != v7 )
        {
          memmove((void *)(v55 + v1), v8, v7 - v8);
          v3 = v56;
        }
        v56 = (int *)((char *)v3 - 1);
      }
      if ( v1 == v2 )
        break;
      v1 -= 8;
    }
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA280) )
  {
    v47 = qword_8CA280;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v47, v9, v10, v11);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v12, v13);
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA380) )
  {
    v48 = qword_8CA380;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v48, v14, v15, v16);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v17, v18);
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA360) )
  {
    v49 = qword_8CA360;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v49, v19, v20, v21);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v22, v23);
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA390) )
  {
    v50 = qword_8CA390;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v50, v24, v25, v26);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v27, v28);
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA378) )
  {
    v51 = qword_8CA378;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v51, v29, v30, v31);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v32, v33);
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA2C8) )
  {
    v52 = qword_8CA2C8;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v52, v34, v35, v36);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v37, v38);
  }
  if ( (unsigned __int8)QT::QAction::isEnabled(qword_8CA2C0) )
  {
    v53 = qword_8CA2C0;
    sub_1825D0((int **)&ptr, v56, (__int64 *)&v53, v39, v40, v41);
    if ( !ptr || *(int *)ptr > 1 )
      sub_1821F0((__int64)&ptr, 0, 0, 0, v42, v43);
  }
  sub_311540((__int64)v57, (__int64)"Quick debug view", (__int64)&ptr);
  sub_311860((QT::QApplication *)v57);
  v57[0] = qo_chooser_t___vtable;
  if ( v62 )
  {
    v63 = 0;
    qfree(v62, "Quick debug view");
  }
  if ( v60 )
  {
    v61 = 0;
    qfree(v60, "Quick debug view");
  }
  v44 = &v59;
  v57[0] = &stru_86F6A0;
  do
  {
    v45 = *(_QWORD *)v44;
    if ( *(_QWORD *)v44 )
    {
      *((_QWORD *)v44 + 1) = 0;
      qfree(v45, "Quick debug view");
    }
    v44 -= 24;
  }
  while ( v44 != &v58 );
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return 1;
}
