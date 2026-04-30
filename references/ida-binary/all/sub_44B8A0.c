__int64 __fastcall sub_44B8A0(QT::QAbstractItemView **a1)
{
  const char *v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // r13d
  size_t v6; // r14
  __int64 v7; // rcx
  const char *v8; // r12
  int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rbp
  size_t v12; // r14
  bool v13; // al
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rbx
  _QWORD *v23; // rax
  void *v24; // r13
  int v25; // r14d
  _BYTE *v26; // rax
  char v27; // [rsp+7h] [rbp-B9h]
  QT::QAbstractItemView *v28; // [rsp+10h] [rbp-B0h]
  __int64 v29; // [rsp+20h] [rbp-A0h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+28h] [rbp-98h] BYREF
  char v31; // [rsp+30h] [rbp-90h]
  __int64 v32; // [rsp+38h] [rbp-88h] BYREF
  __int128 v33; // [rsp+40h] [rbp-80h]
  _BYTE *v34; // [rsp+58h] [rbp-68h] BYREF
  __int128 v35; // [rsp+60h] [rbp-60h]
  int v36; // [rsp+70h] [rbp-50h]
  unsigned __int64 v37; // [rsp+80h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v30 = worklists_edit_view_action_t___vtable;
  v1 = (const char *)&v32;
  v31 = 1;
  v32 = 0;
  v33 = 0;
  v27 = sub_446BA0((__int64 (__fastcall ***)(_QWORD, __int64))&v30, &v32, (__int64)a1);
  v2 = v33;
  v3 = v32;
  if ( !(_QWORD)v33 )
  {
    v4 = 1;
    if ( !v32 )
      return v4;
LABEL_25:
    *(_QWORD *)&v33 = 0;
    qfree(v3, v1);
    return v4;
  }
  v6 = *(_QWORD *)(v32 + 32);
  v7 = v32;
  v8 = nullptr;
  v34 = nullptr;
  v35 = 0;
  if ( v6 )
  {
    v26 = (_BYTE *)qalloc_or_throw(v6);
    v1 = *(const char **)(v3 + 24);
    v34 = v26;
    *((_QWORD *)&v35 + 1) = v6;
    v8 = v26;
    memcpy(v26, v1, v6);
    *(_QWORD *)&v35 = v6;
    v7 = v32;
    v2 = v33;
  }
  v9 = *(_DWORD *)(v3 + 80);
  v10 = v7;
  v28 = *a1;
  v36 = v9;
  v11 = v7 + 88 * v2;
  if ( v11 != v7 )
  {
    do
    {
      v12 = *(_QWORD *)(v10 + 32);
      if ( v12 )
      {
        v24 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 32));
        memcpy(v24, *(const void **)(v10 + 24), v12);
        v25 = *(_DWORD *)(v10 + 80);
        v1 = &s1;
        if ( (_QWORD)v35 )
          v1 = v8;
        if ( strcmp((const char *)v24, v1) || v9 != v25 )
        {
          if ( v24 )
            qfree(v24, v1);
LABEL_12:
          v4 = 1;
          goto LABEL_13;
        }
        if ( v24 )
          qfree(v24, v1);
      }
      else
      {
        v13 = 1;
        if ( (_QWORD)v35 )
          v13 = *v8 == 0;
        if ( v9 != *(_DWORD *)(v10 + 80) || !v13 )
          goto LABEL_12;
      }
      v10 += 88;
    }
    while ( v11 != v10 );
  }
  v1 = (const char *)&v29;
  if ( (unsigned int)sub_449270(v28, &v29, (__int64)&v34, 0) )
    goto LABEL_12;
  if ( *(_QWORD *)(v29 + 8) != (_QWORD)v33 )
    goto LABEL_12;
  v1 = (const char *)&v34;
  v21 = QT::QAbstractItemView::model(v28);
  v22 = sub_442FF0(v21, (__int64)&v34);
  if ( !v22 )
    goto LABEL_12;
  v23 = sub_426230(v21, (const char *)&v34);
  v1 = (const char *)(2 - (unsigned int)(unsigned __int8)sub_4175F0((__int64)v23, v22));
  v4 = (unsigned __int8)(sub_44EFF0(v22, v1, 1) | v27);
LABEL_13:
  if ( v8 )
    qfree(v8, v1);
  v3 = v32;
  if ( v32 )
  {
    v14 = v33;
    if ( (_QWORD)v33 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v15 + v3);
        v18 = v17[6];
        if ( v18 )
        {
          v17[7] = 0;
          qfree(v18, v1);
        }
        v19 = v17[3];
        if ( v19 )
        {
          v17[4] = 0;
          qfree(v19, v1);
        }
        v20 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v20, v1);
        }
        ++v16;
        v3 = v32;
        v15 += 88;
      }
      while ( v14 != v16 );
    }
    goto LABEL_25;
  }
  return v4;
}
