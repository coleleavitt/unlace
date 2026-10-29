__int64 __fastcall sub_44BBE0(QT::QAbstractItemView **a1)
{
  const char *v1; // rsi
  __int64 v2; // rax
  char v3; // bl
  unsigned int v4; // r13d
  __int64 *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  const char *v14; // rdx
  const char *v15; // rdx
  __int64 *v16; // rbx
  const char *v17; // r12
  size_t v18; // r15
  __int64 *v19; // r14
  QT::QAbstractItemView *v20; // rcx
  int v21; // ebx
  __int64 *v22; // rbp
  size_t v23; // r15
  bool v24; // al
  bool v25; // bl
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // r13
  const char *v29; // rsi
  int v30; // r15d
  int v31; // ebx
  const char *v32; // rdx
  const char *v33; // rdx
  unsigned __int8 v34; // [rsp+Fh] [rbp-E9h]
  QT::QAbstractItemView *v35; // [rsp+18h] [rbp-E0h]
  __int64 **v36; // [rsp+28h] [rbp-D0h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+30h] [rbp-C8h] BYREF
  __int16 v38; // [rsp+38h] [rbp-C0h]
  QT::QAbstractItemView *v39; // [rsp+40h] [rbp-B8h]
  __int64 *v40; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+58h] [rbp-A0h]
  __int64 **v42; // [rsp+70h] [rbp-88h] BYREF
  __int64 v43; // [rsp+78h] [rbp-80h]
  char *v44; // [rsp+90h] [rbp-68h] BYREF
  __int128 v45; // [rsp+98h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v1 = (const char *)&v40;
  v37 = worklists_revert_action_t___vtable;
  v38 = 256;
  v40 = nullptr;
  v41 = 0;
  v39 = *a1;
  v34 = sub_446BA0((__int64 (__fastcall ***)(_QWORD, __int64))&v37, (__int64 *)&v40, (__int64)a1);
  v2 = v41;
  if ( !(_QWORD)v41 )
  {
    if ( (_BYTE)v38 )
    {
      v3 = 0;
    }
    else
    {
      v1 = (const char *)&v40;
      v3 = sub_449D00((__int64)&v37, (__int64)&v40);
      if ( !v3 )
      {
        v4 = v34;
        goto LABEL_5;
      }
      v1 = (const char *)v41;
      if ( !(_DWORD)v41 )
        goto LABEL_64;
      v42 = &v40;
      if ( !(_BYTE)v38 )
      {
        sub_447E60((__int64)&v44, (__int64)&v42);
        v14 = &s1;
        if ( (_QWORD)v45 )
          v14 = v44;
        v1 = "HIDECANCEL\nDo you really want to revert these files?\n%s";
        if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to revert these files?\n%s", v14) != 1 )
        {
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree(v44, "HIDECANCEL\nDo you really want to revert these files?\n%s", v15);
          }
          goto LABEL_4;
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44, "HIDECANCEL\nDo you really want to revert these files?\n%s", v15);
        }
        v1 = (const char *)v41;
        if ( !(_QWORD)v41 )
          goto LABEL_4;
      }
      if ( (unsigned __int8)sub_443870(v40, (__int64)v1, v38) )
      {
LABEL_64:
        v4 = 1;
        goto LABEL_5;
      }
    }
LABEL_4:
    v4 = (unsigned __int8)(v34 | v3);
    goto LABEL_5;
  }
  v16 = v40;
  v17 = nullptr;
  v44 = nullptr;
  v45 = 0;
  v18 = v40[4];
  v19 = v40;
  if ( v18 )
  {
    v44 = (char *)qalloc_or_throw(v40[4]);
    v17 = v44;
    *((_QWORD *)&v45 + 1) = v18;
    memcpy(v44, (const void *)v16[3], v18);
    v19 = v40;
    v2 = v41;
    *(_QWORD *)&v45 = v18;
  }
  v20 = *a1;
  v21 = *((_DWORD *)v16 + 20);
  v22 = &v19[11 * v2];
  v46 = v21;
  v35 = v20;
  if ( v22 == v19 )
  {
LABEL_42:
    if ( !(unsigned int)sub_449270(v35, &v42, (__int64)&v44, 0) && v42[1] == (__int64 *)v41 )
    {
      v26 = QT::QAbstractItemView::model(v35);
      v27 = sub_442FF0(v26, (__int64)&v44);
      if ( v27 )
      {
        v1 = (const char *)v27;
        v4 = (unsigned __int8)(worklists_revert_action_t__::vfunc_0((__int64)&v37, v27) | v34);
        goto LABEL_37;
      }
    }
LABEL_33:
    if ( !(_BYTE)v38 )
      goto LABEL_52;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v23 = v19[4];
    if ( v23 )
      break;
    v24 = 1;
    if ( (_QWORD)v45 )
      v24 = *v17 == 0;
    if ( v21 != *((_DWORD *)v19 + 20) || !v24 )
      goto LABEL_33;
LABEL_41:
    v19 += 11;
    if ( v22 == v19 )
      goto LABEL_42;
  }
  v28 = (void *)qalloc_or_throw(v19[4]);
  memcpy(v28, (const void *)v19[3], v23);
  v29 = &s1;
  v30 = *((_DWORD *)v19 + 20);
  if ( (_QWORD)v45 )
    v29 = v17;
  if ( !strcmp((const char *)v28, v29) && v21 == v30 )
  {
    if ( v28 )
      qfree(v28, v29);
    goto LABEL_41;
  }
  if ( !v28 )
    goto LABEL_33;
  qfree(v28, v29);
  if ( (_BYTE)v38 )
  {
LABEL_34:
    v25 = 0;
    v36 = &v40;
    goto LABEL_35;
  }
LABEL_52:
  v1 = (const char *)&v40;
  v31 = v41;
  if ( !(unsigned __int8)sub_449D00((__int64)&v37, (__int64)&v40) )
  {
    v4 = v34;
    goto LABEL_37;
  }
  v1 = (const char *)v41;
  if ( !(_DWORD)v41 )
    goto LABEL_66;
  v25 = (_DWORD)v41 != v31;
  v36 = &v40;
  if ( (_BYTE)v38 )
  {
LABEL_65:
    if ( !(unsigned __int8)sub_443870(v40, (__int64)v1, v38) )
      goto LABEL_36;
LABEL_66:
    v4 = 1;
    goto LABEL_37;
  }
  sub_447E60((__int64)&v42, (__int64)&v36);
  v32 = &s1;
  if ( v43 )
    v32 = (const char *)v42;
  v1 = "HIDECANCEL\nDo you really want to revert these files?\n%s";
  if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to revert these files?\n%s", v32) == 1 )
  {
    if ( v42 )
    {
      v43 = 0;
      qfree(v42, "HIDECANCEL\nDo you really want to revert these files?\n%s", v33);
    }
LABEL_35:
    v1 = (const char *)v41;
    if ( !(_QWORD)v41 )
      goto LABEL_36;
    goto LABEL_65;
  }
  if ( v42 )
  {
    v43 = 0;
    qfree(v42, "HIDECANCEL\nDo you really want to revert these files?\n%s", v33);
  }
LABEL_36:
  v4 = (unsigned __int8)(v34 | v25);
LABEL_37:
  if ( v17 )
    qfree(v17, v1);
LABEL_5:
  v5 = v40;
  if ( v40 )
  {
    v6 = v41;
    if ( (_QWORD)v41 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = &v5[v7];
        v10 = v5[v7 + 6];
        if ( v10 )
        {
          v9[7] = 0;
          qfree(v10, v1);
        }
        v11 = v9[3];
        if ( v11 )
        {
          v9[4] = 0;
          qfree(v11, v1);
        }
        v12 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v12, v1);
        }
        ++v8;
        v5 = v40;
        v7 += 11;
      }
      while ( v6 != v8 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v5, v1);
  }
  return v4;
}
