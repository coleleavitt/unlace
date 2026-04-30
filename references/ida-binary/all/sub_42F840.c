__int64 __fastcall sub_42F840(QT::QAbstractItemView *this, const char *a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r13
  size_t v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  const void *v15[11]; // [rsp+20h] [rbp-58h] BYREF

  v15[3] = (const void *)__readfsqword(0x28u);
  if ( (unsigned __int8)sub_521430() && (v6 = QT::QAbstractItemView::model(this), a3 < *(_QWORD *)(v6 + 336)) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 328) + 8 * a3);
    v13 = nullptr;
    v14 = 0;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
      {
        v12 = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v7 + 8));
        *((_QWORD *)&v14 + 1) = v8;
        v13 = v12;
        memcpy(v12, *(const void **)v7, v8);
        *(_QWORD *)&v14 = v8;
      }
    }
    else
    {
      v13 = (_BYTE *)qvector_reserve(&v13, 0, 1, 1);
      *(_QWORD *)&v14 = 1;
      *v13 = 0;
    }
    sub_42B280(v15, (__int64)&v13);
    v9 = sub_426230(v15, (const char *)&v13);
    v10 = sub_4170E0((__int64)v9);
    v11 = sub_42ACF0(v10, v15);
    v4 = (*(__int64 (__fastcall **)(QT::QAbstractItemView *, const char *, unsigned __int64, _BYTE **, const void **, __int64))(*(_QWORD *)this + 1160LL))(
           this,
           a2,
           a3,
           &v13,
           v15,
           v11);
    if ( v15[0] )
    {
      v15[1] = nullptr;
      qfree(v15[0], a2);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13, a2);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
