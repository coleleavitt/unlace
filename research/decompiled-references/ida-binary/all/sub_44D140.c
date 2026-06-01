__int64 __fastcall sub_44D140(const char **this, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 *v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  const char *v16; // rsi
  char *v17; // r15
  char *v18; // rdi
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // r15
  char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // [rsp+10h] [rbp-A8h]
  const char **v25; // [rsp+18h] [rbp-A0h]
  const char *v26; // [rsp+20h] [rbp-98h]
  __int64 v27; // [rsp+30h] [rbp-88h] BYREF
  __int128 v28; // [rsp+38h] [rbp-80h]
  char *s1; // [rsp+50h] [rbp-68h] BYREF
  __int128 v30; // [rsp+58h] [rbp-60h]
  int v31; // [rsp+68h] [rbp-50h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v4 = a3;
  v5 = sub_51F0E0(this, a2, a3);
  if ( !(_BYTE)v5 )
    return 0;
  v6 = v5;
  if ( v4 == 2 )
  {
    if ( !*(_QWORD *)(a2 + 8) )
      return v6;
    v8 = QT::QAbstractItemView::model((QT::QAbstractItemView *)this);
    v9 = *(_QWORD **)a2;
    v10 = v8;
    v11 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)a2 != v11 )
    {
      do
      {
        if ( !(unsigned __int8)sub_442E70(v10, nullptr, v9) )
          return v6;
        v9 += 2;
      }
      while ( (_QWORD *)v11 != v9 );
    }
    return 0;
  }
  if ( v4 != 4 )
    return v6;
  v12 = (__int64 *)QT::QAbstractItemView::model((QT::QAbstractItemView *)this);
  v13 = sub_426230(this, (const char *)a2);
  v14 = sub_4170A0((__int64)v13);
  v15 = *(_QWORD **)a2;
  v25 = (const char **)v14;
  v24 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( v24 == *(_QWORD *)a2 )
    return 0;
  v26 = nullptr;
  do
  {
    s1 = nullptr;
    v31 = 0;
    v30 = 0;
    v19 = *v12;
    v28 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, char **, _QWORD *))(v19 + 536))(v12, &s1, v15) )
    {
      v16 = (const char *)&v27;
      v27 = 0;
      v20 = sub_442E70((__int64)v12, &v27, v15);
      v21 = v27;
      if ( !v20 || (v16 = nullptr, !(unsigned __int8)sub_4463F0((__int64)v12, nullptr, (__int64)&v27, (__int64)&s1)) )
      {
LABEL_23:
        if ( v21 )
          qfree(v21, v16);
        v17 = s1;
        goto LABEL_18;
      }
      if ( v25[1] )
      {
        v16 = *v25;
        v22 = (char *)&::s1;
        if ( !(_QWORD)v30 )
          goto LABEL_29;
      }
      else
      {
        if ( !(_QWORD)v30 )
        {
LABEL_30:
          if ( v21 )
            qfree(v21, v16);
          if ( s1 )
          {
            *(_QWORD *)&v30 = 0;
            qfree(s1, v16);
          }
          v26 = "Delete worklist(s) / file(s)";
          goto LABEL_38;
        }
        v16 = &::s1;
      }
      v22 = s1;
LABEL_29:
      if ( !strcmp(v22, v16) )
        goto LABEL_30;
      goto LABEL_23;
    }
    v16 = &::s1;
    if ( v25[1] )
      v16 = *v25;
    v17 = s1;
    v18 = (char *)&::s1;
    if ( (_QWORD)v30 )
      v18 = s1;
    if ( !strcmp(v18, v16) && !v26 )
    {
      v26 = &::s1;
      if ( *(this + 292) )
        v26 = *(this + 291);
    }
LABEL_18:
    if ( v17 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v17, v16);
    }
    v15 += 2;
  }
  while ( (_QWORD *)v24 != v15 );
  if ( !v26 )
    return 0;
LABEL_38:
  v23 = sub_5313F0(unk_8CA798);
  if ( v23 )
    sub_537630(v23, 1, v26);
  return v6;
}
