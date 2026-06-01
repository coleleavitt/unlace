unsigned __int64 __fastcall sub_497FB0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  __int128 v14; // [rsp+40h] [rbp-48h]
  char v15; // [rsp+50h] [rbp-38h]
  unsigned __int64 v16; // [rsp+58h] [rbp-30h]

  v2 = *a1;
  v16 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 808))(a1);
  v15 = 0;
  v4 = v3;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v3 + 208LL))(v3, &v11, 7);
  sub_4E15A0(v10, v4, a1, &v11);
  QT::QAbstractItemView::startDrag(a1, a2);
  sub_4E88B0(v10);
  sub_4DE2C0(&v13);
  v5 = v11;
  if ( v11 )
  {
    v6 = v12;
    if ( (_QWORD)v12 )
    {
      v7 = 0;
      do
      {
        v8 = v7++;
        sub_4DE2C0(32 * v8 + v5);
        v5 = v11;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v12 = 0;
    qfree(v5, (const char *)a2);
  }
  return v16 - __readfsqword(0x28u);
}
