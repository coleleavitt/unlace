unsigned __int64 __fastcall sub_42D4D0(QT::QAbstractItemView *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 (*v4)(); // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v35; // [rsp+8h] [rbp-1B0h]
  __int64 v36; // [rsp+20h] [rbp-198h] BYREF
  __int128 v37; // [rsp+28h] [rbp-190h]
  __int64 v38; // [rsp+38h] [rbp-180h] BYREF
  __int128 v39; // [rsp+40h] [rbp-178h]
  char v40; // [rsp+50h] [rbp-168h]
  __int64 v41; // [rsp+60h] [rbp-158h] BYREF
  __int128 v42; // [rsp+68h] [rbp-150h]
  __int64 v43; // [rsp+78h] [rbp-140h]
  __int128 v44; // [rsp+80h] [rbp-138h]
  __int64 v45; // [rsp+90h] [rbp-128h]
  __int128 v46; // [rsp+98h] [rbp-120h]
  __int128 v47; // [rsp+A8h] [rbp-110h]
  __int64 v48; // [rsp+B8h] [rbp-100h]
  __int128 v49; // [rsp+C0h] [rbp-F8h]
  int v50; // [rsp+D0h] [rbp-E8h]
  __int64 (__fastcall **v51)(); // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-D0h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-C8h]
  __int64 v54; // [rsp+100h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+108h] [rbp-B0h]
  char v56; // [rsp+118h] [rbp-A0h]
  int v57; // [rsp+120h] [rbp-98h]
  __int64 v58; // [rsp+128h] [rbp-90h]
  __int128 v59; // [rsp+130h] [rbp-88h]
  __int128 v60; // [rsp+140h] [rbp-78h]
  __int64 v61; // [rsp+150h] [rbp-68h]
  __int128 v62; // [rsp+158h] [rbp-60h]
  int v63; // [rsp+168h] [rbp-50h]
  unsigned __int64 v64; // [rsp+178h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v3 = *((_QWORD *)this + 28);
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v48 = 0;
  v50 = 0;
  v44 = 0;
  v46 = 0;
  v47 = -1;
  v49 = 0;
  v35 = 0;
  v41 = 0;
  v34 = 0;
  v4 = *(__int64 (**)())(*(_QWORD *)v3 + 16LL);
  if ( v4 != sub_429F10 )
  {
    a2 = (const char *)&v34;
    if ( ((unsigned __int8 (__fastcall *)(__int64, __int64 *))v4)(v3, &v34) )
    {
      a2 = (const char *)&v34;
      if ( (unsigned __int8)sub_48D5C0(&v41, &v34) )
      {
        *((_DWORD *)this + 59) |= 2u;
        v40 = 0;
        v37 = 0;
        *((_DWORD *)this + 496) |= 0x200u;
        v36 = 0;
        v38 = 0;
        v51 = &filtered_widget_mixin_update_strategy_t___vtable;
        v52 = 0;
        v54 = 0;
        v56 = 0;
        v57 = 0;
        v39 = 0;
        v53 = 0;
        v55 = 0;
        sub_4DE320(&v52, &v36);
        v51 = &standalone_dirtree_update_strategy_t___vtable;
        v57 = 7;
        v58 = 0;
        v61 = 0;
        v63 = 0;
        v59 = 0;
        v60 = -1;
        v62 = 0;
        v21 = QT::QAbstractItemView::model(this);
        (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64 *))(*(_QWORD *)v21 + 504LL))(
          v21,
          &v51,
          &v41);
        if ( (*(_BYTE *)(QT::QAbstractItemView::model(this) + 120LL) & 8) != 0 )
        {
          QT::QTreeView::collapseAll(this);
          (*(void (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)this + 888LL))(this);
        }
        a2 = (const char *)&v41;
        sub_4971D0(this);
        v51 = &standalone_dirtree_update_strategy_t___vtable;
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree(v61, (const char *)&v41);
        }
        if ( v58 )
        {
          *(_QWORD *)&v59 = 0;
          qfree(v58, (const char *)&v41);
        }
        v51 = &filtered_widget_mixin_update_strategy_t___vtable;
        sub_4DE2C0(&v54);
        v26 = v52;
        if ( v52 )
        {
          v27 = v53;
          if ( (_QWORD)v53 )
          {
            v28 = 0;
            do
            {
              v29 = v28++;
              sub_4DE2C0(32 * v29 + v26);
              v26 = v52;
            }
            while ( v27 != v28 );
          }
          *(_QWORD *)&v53 = 0;
          qfree(v26, (const char *)&v41, v22, v23, v24, v25, v34, v35);
        }
        sub_4DE2C0(&v38);
        v30 = v36;
        if ( v36 )
        {
          v31 = v37;
          if ( (_QWORD)v37 )
          {
            v32 = 0;
            do
            {
              v33 = v32++;
              sub_4DE2C0(32 * v33 + v30);
              v30 = v36;
            }
            while ( v31 != v32 );
          }
          *(_QWORD *)&v37 = 0;
          qfree(v30, (const char *)&v41);
        }
        *((_DWORD *)this + 496) &= ~0x200u;
      }
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34, a2);
    }
    v16 = v48;
    if ( v48 )
    {
      v17 = v49;
      if ( (_QWORD)v49 )
      {
        v18 = 0;
        do
        {
          v19 = (__int64 *)(v16 + 48 * v18);
          v20 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            qfree(v20, a2);
            v16 = v48;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v49 = 0;
      qfree(v16, a2);
    }
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, a2);
  }
  v5 = v43;
  if ( v43 )
  {
    v6 = v44;
    if ( (_QWORD)v44 )
    {
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v5 + 24 * v7);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = v43;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v5, a2);
  }
  v10 = v41;
  if ( v41 )
  {
    v11 = v42;
    if ( (_QWORD)v42 )
    {
      v12 = 0;
      do
      {
        v13 = (__int64 *)(v10 + 40 * v12);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v10 = v41;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v10, a2);
  }
  return v64 - __readfsqword(0x28u);
}
