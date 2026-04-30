unsigned __int64 __fastcall sub_1FEB10(QT::QAbstractScrollArea *this, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v16; // rax
  QT::QWidget *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rbx
  void *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // rax
  int v30; // esi
  struct _Unwind_Exception *v31; // rbx
  QT::QAbstractScrollArea *v32; // [rsp+0h] [rbp-88h] BYREF
  int v33; // [rsp+8h] [rbp-80h] BYREF
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int128 v35; // [rsp+18h] [rbp-70h]
  __int128 v36; // [rsp+28h] [rbp-60h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+48h] [rbp-40h]
  __int64 v39; // [rsp+50h] [rbp-38h]
  __int128 v40; // [rsp+58h] [rbp-30h]
  unsigned __int64 v41; // [rsp+68h] [rbp-20h]

  v41 = __readfsqword(0x28u);
  if ( !*((_BYTE *)this + 968) )
    return v41 - __readfsqword(0x28u);
  if ( !*((_QWORD *)this + 53) )
  {
    sub_1E69C0(a5, (__int64)this, a2, a3, a4);
LABEL_48:
    if ( under_debugger )
      goto LABEL_52;
    interr(40732, a2, v13, v14, a5);
LABEL_50:
    if ( !under_debugger )
    {
      v31 = (struct _Unwind_Exception *)interr(40731, a2, v9, v10, a5);
      sub_1E7570(&v32, (const char *)a2, v5, v6, a5);
      _Unwind_Resume(v31);
    }
LABEL_52:
    BUG();
  }
  v7 = *((_DWORD *)this + 104);
  switch ( v7 )
  {
    case 2:
      v8 = *((_QWORD *)this + 112);
      break;
    case 3:
      v8 = *((_QWORD *)this + 113);
      break;
    case 1:
      v8 = *((_QWORD *)this + 111);
      break;
    default:
      return v41 - __readfsqword(0x28u);
  }
  if ( v8 && *(_BYTE *)(v8 + 29) )
  {
    sub_1FE430((__int64)this, (__m128i *)a2, a3, a4);
    a5 = 0.0;
    v11 = *((_BYTE *)this + 881) == 0;
    v32 = this;
    v33 = 40;
    v34 = 0;
    v38 = 0;
    v39 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v40 = 0;
    if ( !v11 )
      goto LABEL_50;
    *((_BYTE *)this + 881) = 1;
    sub_1F4650((__int64)this, (__int64)&v33, 0, v10, 0.0);
    a2 = (__int64)&v36 + 8;
    if ( !(unsigned __int8)sub_1F4780((__int64)this, (__int64)&v36 + 8, (__int64)&v33, v12, 0.0) )
      goto LABEL_16;
    if ( v38 == *((_DWORD *)this + 212) && (_QWORD)v37 == *((_QWORD *)this + 104) )
    {
      if ( !(_QWORD)v37 )
        goto LABEL_16;
      v29 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)this + 103) + 8 * v29);
        v14 = *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8 * v29);
        v30 = *(_DWORD *)(v14 + 8);
        if ( ((v30 ^ *(_DWORD *)(v13 + 8)) & 0xFFFFFF) != 0 )
          break;
        if ( *(_QWORD *)v14 != *(_QWORD *)v13 )
          break;
        if ( *(_DWORD *)(v14 + 12) != *(_DWORD *)(v13 + 12) )
          break;
        a2 = v30 & 1;
        if ( (_DWORD)a2 )
        {
          a2 = *(_QWORD *)(v13 + 16);
          if ( *(_QWORD *)(v14 + 16) != a2 )
            break;
        }
        if ( (_QWORD)v37 == ++v29 )
          goto LABEL_16;
      }
    }
    *((_BYTE *)this + 880) = 1;
    a2 = (__int64)&v36 + 8;
    sub_1F4820((__int64)this, (__int64)&v36 + 8);
    v15 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)this + 760LL);
    if ( v15 == sub_1E6980 )
    {
      v16 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
      QT::QWidget::update(v16);
      v17 = *((QT::QWidget **)this + 96);
      if ( v17 && *(char *)(*((_QWORD *)v17 + 4) + 9LL) < 0 )
        QT::QWidget::update(v17);
    }
    else
    {
      v15(this);
    }
LABEL_16:
    if ( *((_BYTE *)v32 + 881) )
    {
      v18 = v39;
      *((_BYTE *)v32 + 881) = 0;
      if ( v18 )
      {
        *(_QWORD *)&v40 = 0;
        a5 = qfree(v18, (const char *)a2);
      }
      v19 = v37;
      v20 = *((_QWORD *)&v36 + 1);
      if ( (_QWORD)v37 )
      {
        v21 = 0;
        do
        {
          v22 = *(void **)(v20 + 8 * v21);
          if ( v22 )
          {
            a2 = 24;
            operator delete(v22, 0x18u);
            v20 = *((_QWORD *)&v36 + 1);
          }
          ++v21;
        }
        while ( v19 != v21 );
      }
      if ( v20 )
      {
        *(_QWORD *)&v37 = 0;
        a5 = qfree(v20, (const char *)a2, a5);
      }
      v23 = v34;
      if ( v34 )
      {
        v24 = v35;
        if ( (_QWORD)v35 )
        {
          v25 = 0;
          do
          {
            v26 = (__int64 *)(v23 + 24 * v25);
            v27 = *v26;
            if ( *v26 )
            {
              v26[1] = 0;
              a5 = qfree(v27, (const char *)a2, a5);
              v23 = v34;
            }
            ++v25;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v35 = 0;
        qfree(v23, (const char *)a2, a5);
      }
      return v41 - __readfsqword(0x28u);
    }
    goto LABEL_48;
  }
  return v41 - __readfsqword(0x28u);
}
