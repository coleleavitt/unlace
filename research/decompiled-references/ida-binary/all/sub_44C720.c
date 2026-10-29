__int64 __fastcall sub_44C720(QT::QAbstractItemView *this, _QWORD *a2, char a3)
{
  char **v6; // rax
  char **p_s1; // rsi
  __int64 v9; // rbx
  char **v10; // rdi
  const char *v11; // rsi
  char v12; // al
  __int64 v13; // rbx
  unsigned int v14; // ebx
  _QWORD *v16; // rax
  const char **v17; // rax
  char *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 i; // rcx
  int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  char *v26; // rcx
  const char *v27; // rdx
  const char *v28; // rdx
  __int64 *v29; // [rsp+8h] [rbp-90h] BYREF
  const char *v30; // [rsp+10h] [rbp-88h] BYREF
  __int128 v31; // [rsp+18h] [rbp-80h]
  char *s1; // [rsp+30h] [rbp-68h] BYREF
  __int128 v33; // [rsp+38h] [rbp-60h]
  int v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v6 = (char **)QT::QAbstractItemView::model(this);
  p_s1 = &s1;
  v9 = (__int64)v6;
  v34 = 0;
  s1 = nullptr;
  v10 = v6;
  v33 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(char **, char **, _QWORD *))*v6 + 67))(v6, &s1, a2) )
  {
    v11 = (const char *)&v30;
    v31 = 0;
    v30 = nullptr;
    v12 = sub_442E70(v9, (__int64 *)&v30, a2);
    v13 = (__int64)v30;
    if ( !v12 )
    {
      if ( v30 )
        qfree(v30, (const char *)&v30);
      goto LABEL_5;
    }
    p_s1 = (char **)&v30;
    v10 = &s1;
    sub_442560((__int64 *)&s1, (__int64)&v30);
    if ( v13 )
    {
      v10 = (char **)v13;
      qfree(v13, (const char *)&v30);
    }
  }
  v16 = sub_426230(v10, (const char *)p_s1);
  v17 = (const char **)sub_4170A0((__int64)v16);
  if ( v17[1] )
  {
    v11 = *v17;
    v18 = (char *)&::s1;
    if ( (_QWORD)v33 )
      v18 = s1;
  }
  else
  {
    v11 = &::s1;
    if ( !(_QWORD)v33 )
      goto LABEL_15;
    v18 = s1;
  }
  if ( strcmp(v18, v11) )
    goto LABEL_5;
LABEL_15:
  v11 = (const char *)&v29;
  if ( a3 )
  {
    if ( !(unsigned int)sub_449270(this, &v29, (__int64)&s1, 0) )
    {
      v19 = v29;
      v20 = v29[1];
      if ( v20 )
        goto LABEL_18;
    }
LABEL_5:
    v14 = 0;
    goto LABEL_6;
  }
  v24 = sub_4482D0(this, (const char *)&v29, (__int64)&s1);
  v25 = v24;
  if ( v24 )
  {
    if ( v24 != 37 )
    {
      v30 = nullptr;
      v26 = (char *)&::s1;
      v31 = 0;
      if ( (_QWORD)v33 )
        v26 = s1;
      sub_169A50((__int64 *)&v30, (__int64)"/%d@%s", v34, v26);
      v27 = &::s1;
      if ( (_QWORD)v31 )
        v27 = v30;
      v11 = "Failed to retrieve worklist files for %s";
      sub_416980(v25, (__int64)"Failed to retrieve worklist files for %s", v27);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30, "Failed to retrieve worklist files for %s", v28);
      }
    }
    goto LABEL_5;
  }
  v19 = v29;
  v20 = v29[1];
LABEL_18:
  v21 = *v19;
  for ( i = v21 + 88 * v20; v21 != i; v21 += 88 )
  {
    v23 = *(_DWORD *)(v21 + 72);
    if ( v23 )
    {
      if ( v23 != *(_DWORD *)(v21 + 76) )
        goto LABEL_5;
    }
  }
  v14 = 1;
LABEL_6:
  if ( s1 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(s1, v11);
  }
  return v14;
}
