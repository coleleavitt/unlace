unsigned __int64 __fastcall sub_52F270(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int8 (__fastcall *v10)(__int64, __int64, __int64 *); // rax
  unsigned __int64 v11; // r14
  unsigned __int8 (__fastcall *v12)(__int64, __int64, __int64 *); // rax
  __int64 v13; // rbp
  unsigned __int8 (__fastcall *v14)(__int64, __int64, __int64 *); // rax
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v2 = *a1;
  v19 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v2 + 104))(a1, a2, 1);
  v3 = (unsigned __int64)(*(_QWORD *)(a2 + 56) != 0) << 32;
  if ( *(_QWORD *)(a2 + 200) )
    v3 |= 0x4000000000uLL;
  if ( *(_BYTE *)(a2 + 336) )
  {
    v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89D580, *(const QT::QObject **)(a2 + 328));
    v8 = v3 | 0x800000000LL;
    if ( v7 )
      v8 = v3 | 0x1800000000LL;
    v15 = v8;
    v9 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a2 + 328));
    v10 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 448LL);
    v16 = -1;
    v17 = 0;
    v18 = 0;
    v11 = (unsigned __int64)v10(v9, 3, &v16) << 39;
    v12 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 448LL);
    v16 = -1;
    v17 = 0;
    v18 = 0;
    v13 = v12(v9, 4, &v16);
    v14 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 448LL);
    v16 = -1;
    v17 = 0;
    v3 = v15 | v11 | (v13 << 40);
    v18 = 0;
    if ( v14(v9, 5, &v16) )
      v3 |= 0x20000000000uLL;
    v4 = 4LL * sub_4A3510(*(_QWORD *)a2);
  }
  else
  {
    v4 = 0;
    if ( sub_4A3510(*(_QWORD *)a2) )
    {
      v3 |= 0x200000000uLL;
      v4 = 4;
    }
  }
  v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_895EA0, *(const QT::QObject **)a2);
  *(_QWORD *)(a2 + 352) = v3;
  if ( v5 )
    v4 |= 8uLL;
  *(_QWORD *)(a2 + 344) = v4;
  return v19 - __readfsqword(0x28u);
}
