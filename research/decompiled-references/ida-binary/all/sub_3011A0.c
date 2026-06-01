__int64 __fastcall sub_3011A0(__int64 a1, const QT::QObject *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  char *v10; // r12
  char *v11; // r14
  const char **v12; // rbp
  int i; // ebx
  const char *v14; // rsi
  int v15; // ebx
  const char **v16; // r13
  const char *v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  if ( qword_8CF010 == a2 )
    return 26;
  if ( !(unsigned __int8)sub_4A3510(a2) )
  {
    v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_887C80, a2);
    if ( v6 )
    {
      v2 = *(_DWORD *)(v6 + 2212);
      if ( (v2 & 0x80000000) == 0 )
        goto LABEL_8;
    }
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_89C920, a2) )
      return 30;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_87CC60, a2)
      || QT::QMetaObject::cast((QT::QMetaObject *)&off_888680, a2) )
    {
      return 27;
    }
    v19 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87C660, a2);
    if ( v19 )
    {
      v2 = 28;
      if ( *(_BYTE *)(v19 + 1032) )
        return 34;
      return v2;
    }
    v2 = 25;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_884740, a2) )
      return v2;
    v2 = 59;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, a2) )
      return v2;
    v2 = 58;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, a2) )
      return v2;
    v20 = QT::QMetaObject::cast((QT::QMetaObject *)&off_892540, a2);
    if ( v20 )
    {
      if ( *(_DWORD *)(v20 + 1116) == -1 )
        return 33;
      else
        return 32;
    }
    v2 = 31;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_880EC0, a2) )
      return v2;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88BBE0, a2) )
      return 30;
    v2 = 29;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88CF60, a2) )
      return v2;
    v2 = 38;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, a2) )
      return v2;
    v2 = 39;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88EB20, a2) )
      return v2;
    v2 = 40;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88EAE0, a2) )
      return v2;
    v2 = 37;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88DF20, a2) )
      return v2;
    v2 = 42;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_881B20, a2) )
      return v2;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_87B6A0, a2) )
      return 44;
    v2 = 45;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_879E60, a2) )
      return v2;
    v2 = 50;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88EE60, a2) )
      return v2;
    v2 = 51;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_87A380, a2) )
      return v2;
    v2 = 60;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_891AA0, a2) )
      return v2;
    v2 = 62;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, a2) )
      return v2;
    v2 = 63;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_878400, a2) )
      return v2;
    v2 = 65;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_8795C0, a2) )
      return v2;
    v2 = 66;
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_878E40, a2) )
      return v2;
    v21 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87D5C0, a2);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v21 + 1032);
      if ( v22 == 1 )
        return 46;
      if ( v22 == 3 )
        return 61;
      return 44;
    }
    v2 = 43;
    if ( a2 == (const QT::QObject *)sub_31D150(&xmmword_8CD9E0) )
      return v2;
    return (unsigned int)-1;
  }
  v2 = *((_DWORD *)a2 + 520);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_887C80, a2);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 2212);
      if ( v4 >= 0 )
        v2 = v4;
    }
LABEL_8:
    if ( v2 != 35 )
      return v2;
    goto LABEL_16;
  }
  v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_887C80, a2);
  if ( v7 )
  {
    v2 = *(_DWORD *)(v7 + 2212);
    if ( (v2 & 0x80000000) == 0 )
      goto LABEL_8;
  }
LABEL_16:
  v8 = *(_QWORD *)a2;
  s1 = nullptr;
  v24 = 0;
  (*(void (__fastcall **)(const QT::QObject *, char **))(v8 + 536))(a2, &s1);
  v9 = v24;
  v10 = s1;
  v11 = (char *)&::s1;
  v12 = (const char **)&off_863A40;
  if ( (_QWORD)v24 )
    v11 = s1;
  for ( i = 0; i != 23; ++i )
  {
    v14 = *v12;
    if ( !strcmp(v11, *v12) )
    {
      v2 = *((_DWORD *)&off_863A40 + 4 * i + 2);
LABEL_22:
      if ( v10 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v10, v14);
      }
      return v2;
    }
    v12 += 2;
  }
  v15 = 0;
  v16 = (const char **)&off_863A00;
  do
  {
    v17 = *v16;
    if ( !*v16 || (v18 = strlen(*v16)) == 0 || v9 && v9 - 1 >= v18 && (v14 = v17, !strncmp(v10, v17, v18)) )
    {
      v2 = (unsigned int)(&off_863A00)[2 * v15 + 1];
      goto LABEL_22;
    }
    ++v15;
    v16 += 2;
  }
  while ( v15 != 4 );
  if ( v10 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v10, v14, v18);
  }
  return 35;
}
