unsigned __int64 __fastcall sub_2EA290(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  volatile signed __int32 *v4; // r12
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  QT::QAbstractItemModel *v7; // rdi
  QT::QAbstractItemModel *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v3 = *(_BYTE **)(a1 + 192);
  v18 = __readfsqword(0x28u);
  if ( v3 )
  {
    *v3 = 1;
    v4 = *(volatile signed __int32 **)(a1 + 200);
    *(_OWORD *)(a1 + 192) = 0;
    if ( v4 )
    {
      v5 = v4 + 2;
      if ( *((_QWORD *)v4 + 1) == 0x100000001LL )
      {
        *((_QWORD *)v4 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(
          v4,
          a2,
          v5);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
        }
        else
        {
          v6 = *((_DWORD *)v4 + 2);
          *((_DWORD *)v4 + 2) = v6 - 1;
        }
        if ( v6 == 1 )
          sub_28E9C0(v4);
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 72LL) = a2;
  v7 = *(QT::QAbstractItemModel **)(a1 + 80);
  v17 = 0;
  v16 = 0;
  sub_2E7380(v7, (__int64)&v16, 0);
  QT::QWidget::hide(*(QT::QWidget **)(a1 + 120));
  QT::QWidget::hide(*(QT::QWidget **)(a1 + 88));
  *(_QWORD *)(a1 + 160) = -1;
  if ( !(_DWORD)a2 )
  {
    v9 = *(QT::QAbstractItemModel **)(a1 + 80);
    sub_2E98A0((__int64)&v16);
    sub_2E75A0(v9, &v16);
    v10 = v16;
    if ( v16 )
    {
      v11 = v17;
      if ( (_QWORD)v17 )
      {
        v12 = 0;
        do
        {
          v13 = (__int64 *)(v10 + 48 * v12);
          v14 = v13[3];
          if ( v14 )
          {
            v13[4] = 0;
            qfree(v14, (const char *)&v16);
          }
          v15 = *v13;
          if ( *v13 )
          {
            v13[1] = 0;
            qfree(v15, (const char *)&v16);
          }
          ++v12;
          v10 = v16;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v17 = 0;
      qfree(v10, (const char *)&v16);
    }
  }
  return v18 - __readfsqword(0x28u);
}
