__int64 __fastcall sub_449700(__int64 a1, char *a2, QT::QAbstractItemView **a3)
{
  const char *v3; // rbx
  __int64 v4; // rbp
  size_t v5; // r15
  __int64 v6; // r14
  int v8; // ebp
  __int64 i; // r12
  size_t v10; // r13
  bool v11; // al
  const char *v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v16; // rax
  void *v17; // r15
  int v18; // r13d
  const char *v19; // rsi
  int v20; // eax
  _BYTE *v21; // rax
  const void *v22; // rsi
  QT::QAbstractItemView *v24; // [rsp+10h] [rbp-80h]
  __int64 v25; // [rsp+20h] [rbp-70h] BYREF
  _BYTE *v26; // [rsp+28h] [rbp-68h] BYREF
  __int128 v27; // [rsp+30h] [rbp-60h]
  int v28; // [rsp+40h] [rbp-50h]
  unsigned __int64 v29; // [rsp+50h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  v6 = *(_QWORD *)a2;
  v29 = __readfsqword(0x28u);
  v27 = 0;
  v26 = nullptr;
  if ( v5 )
  {
    v21 = (_BYTE *)qalloc_or_throw(v5);
    v22 = *(const void **)(v4 + 24);
    *((_QWORD *)&v27 + 1) = v5;
    v26 = v21;
    v3 = v21;
    memcpy(v21, v22, v5);
    *(_QWORD *)&v27 = v5;
    v6 = *(_QWORD *)a2;
  }
  v8 = *(_DWORD *)(v4 + 80);
  v24 = *a3;
  v28 = v8;
  for ( i = v6 + 88LL * *((_QWORD *)a2 + 1); v6 != i; v6 += 88 )
  {
    v10 = *(_QWORD *)(v6 + 32);
    if ( v10 )
    {
      v17 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 32));
      memcpy(v17, *(const void **)(v6 + 24), v10);
      v18 = *(_DWORD *)(v6 + 80);
      v19 = &s1;
      if ( (_QWORD)v27 )
        v19 = v3;
      v20 = strcmp((const char *)v17, v19);
      if ( v8 != v18 || v20 )
      {
        if ( v17 )
          qfree(v17, v19);
LABEL_9:
        v12 = a2;
        v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 8LL))(a1, a2);
        goto LABEL_10;
      }
      if ( v17 )
        qfree(v17, v19);
    }
    else
    {
      v11 = 1;
      if ( (_QWORD)v27 )
        v11 = *v3 == 0;
      if ( v8 != *(_DWORD *)(v6 + 80) || !v11 )
        goto LABEL_9;
    }
  }
  if ( (unsigned int)sub_449270(v24, &v25, (__int64)&v26, 0) )
    goto LABEL_9;
  if ( *((_QWORD *)a2 + 1) != *(_QWORD *)(v25 + 8) )
    goto LABEL_9;
  v16 = QT::QAbstractItemView::model(v24);
  v12 = (const char *)sub_442FF0(v16, (__int64)&v26);
  if ( !v12 )
    goto LABEL_9;
  v13 = (**(__int64 (__fastcall ***)(__int64, const char *))a1)(a1, v12);
LABEL_10:
  v14 = v13;
  if ( v3 )
    qfree(v3, v12);
  return v14;
}
