unsigned __int64 __fastcall sub_491150(__int64 a1, _QWORD *a2, unsigned int a3)
{
  void *v4; // r13
  size_t v5; // rbx
  const char *v6; // r14
  __int64 v7; // rbx
  size_t v8; // r13
  unsigned __int64 v9; // r12
  _QWORD *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  const char *v23; // rsi
  __int64 v25; // r10
  size_t v26; // r8
  unsigned __int64 v27; // r11
  void *v28; // rdi
  unsigned __int64 v29; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v30; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v32; // [rsp+0h] [rbp-D0h]
  size_t na; // [rsp+8h] [rbp-C8h]
  size_t nc; // [rsp+8h] [rbp-C8h]
  size_t nb; // [rsp+8h] [rbp-C8h]
  size_t n; // [rsp+8h] [rbp-C8h]
  __int64 v37; // [rsp+10h] [rbp-C0h]
  __int64 v38; // [rsp+10h] [rbp-C0h]
  __int64 v39; // [rsp+10h] [rbp-C0h]
  __int64 v40; // [rsp+10h] [rbp-C0h]
  __int64 v42; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+30h] [rbp-A0h]
  void *v44; // [rsp+48h] [rbp-88h] BYREF
  void *v45; // [rsp+50h] [rbp-80h]
  size_t v46; // [rsp+58h] [rbp-78h]
  void *ptr; // [rsp+68h] [rbp-68h] BYREF
  __int128 v48; // [rsp+70h] [rbp-60h]
  _BYTE src[10]; // [rsp+86h] [rbp-4Ah] BYREF
  _QWORD v50[8]; // [rsp+90h] [rbp-40h] BYREF

  v50[0] = __readfsqword(0x28u);
  v43 = 0;
  v42 = 0;
  QT::QWidget::windowTitle((QT::QWidget *)&ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v44, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    free(ptr);
    v4 = v45;
    v5 = v46;
    if ( v45 )
      goto LABEL_4;
LABEL_34:
    v4 = &QT::QByteArray::_empty;
    goto LABEL_4;
  }
  v4 = v45;
  v5 = v46;
  if ( !v45 )
    goto LABEL_34;
LABEL_4:
  ptr = nullptr;
  v48 = 0;
  if ( !v5 )
    goto LABEL_5;
  v28 = nullptr;
  if ( v5 != -1 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
    v28 = ptr;
  }
  *(_QWORD *)&v48 = v5 + 1;
  memmove(v28, v4, v5);
  *((_BYTE *)ptr + v5) = 0;
  if ( (_QWORD)v48 )
    v6 = (const char *)ptr;
  else
LABEL_5:
    v6 = &s1;
  if ( v6 )
  {
    v7 = v43;
    v8 = strlen(v6) + 1;
    v9 = v8 + v43;
    if ( __CFADD__(v8, (_QWORD)v43) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_11;
        goto LABEL_10;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v7 = v43;
    v8 = 1;
    v6 = (const char *)&unk_5C2F25;
    v9 = v43 + 1;
    if ( (_QWORD)v43 == -1 )
    {
      v7 = -1;
      v6 = (const char *)&unk_5C2F25;
LABEL_10:
      *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_11;
    }
  }
  v21 = v42;
  v22 = v7;
  if ( *((_QWORD *)&v43 + 1) < v9 )
  {
    v42 = qvector_reserve(&v42, v42, v9, 1);
    v21 = v42;
    v22 = v43;
  }
  memset((void *)(v21 + v22), 0, v9 - v22);
  *(_QWORD *)&v43 = v9;
LABEL_11:
  memcpy((void *)(v42 + v7), v6, v8);
  v10 = (_QWORD *)*a2;
  v11 = *a2 + 16LL * a2[1];
  if ( *a2 != v11 )
  {
    while ( 1 )
    {
      v20 = pack_dq(src, v50, *v10) - (_QWORD)src;
      v26 = v20;
      if ( v20 )
        break;
LABEL_17:
      v14 = pack_dq(src, v50, v10[1]) - (_QWORD)src;
      v15 = v14;
      if ( v14 )
      {
        v16 = v43;
        v17 = v43 + v14;
        if ( !__CFADD__((_QWORD)v43, v14) )
          goto LABEL_19;
        if ( (unsigned __int64)v43 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
          v18 = v42;
          v19 = v43;
          if ( *((_QWORD *)&v43 + 1) < v17 )
          {
            v39 = v43;
            nb = v15;
            v31 = v17;
            v42 = qvector_reserve(&v42, v42, v17, 1);
            v18 = v42;
            v16 = v39;
            v19 = v43;
            v15 = nb;
            v17 = v31;
          }
          v38 = v16;
          nc = v15;
          v30 = v17;
          memset((void *)(v18 + v19), 0, v17 - v19);
          v15 = nc;
          v16 = v38;
          *(_QWORD *)&v43 = v30;
        }
        else if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((void *)(v16 + v42), src, v15);
      }
      v10 += 2;
      if ( (_QWORD *)v11 == v10 )
        goto LABEL_38;
    }
    v25 = v43;
    v27 = v43 + v20;
    if ( __CFADD__((_QWORD)v43, v20) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
        memcpy((void *)(v25 + v42), src, v26);
        goto LABEL_17;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = v42;
    v13 = v43;
    if ( *((_QWORD *)&v43 + 1) < v27 )
    {
      v40 = v43;
      n = v26;
      v32 = v27;
      v42 = qvector_reserve(&v42, v42, v27, 1);
      v12 = v42;
      v25 = v40;
      v13 = v43;
      v26 = n;
      v27 = v32;
    }
    v37 = v25;
    na = v26;
    v29 = v27;
    memset((void *)(v12 + v13), 0, v27 - v13);
    v26 = na;
    v25 = v37;
    *(_QWORD *)&v43 = v29;
    goto LABEL_16;
  }
LABEL_38:
  v23 = (const char *)v42;
  add_undo_record(a3, v42, v43);
  if ( ptr )
  {
    *(_QWORD *)&v48 = 0;
    qfree(ptr, v23);
  }
  if ( v44 && !_InterlockedSub((volatile signed __int32 *)v44, 1u) )
    free(v44);
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42, v23);
  }
  return v50[0] - __readfsqword(0x28u);
}
