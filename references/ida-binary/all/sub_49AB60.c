unsigned __int64 __fastcall sub_49AB60(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  void (*v5)(void); // rax
  __int64 v6; // rsi
  const char *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE v13[32]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  __int128 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]
  char v18; // [rsp+50h] [rbp-38h]
  unsigned __int64 v19; // [rsp+58h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  v5 = *(void (**)(void))(*(_QWORD *)v3 + 672LL);
  if ( v5 != nullsub_263 )
  {
    v5();
    v3 = *(_QWORD *)(a1 + 40);
  }
  v18 = 0;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  v17 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v3 + 624LL))(v3, &v14, 7);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    v6 += 104;
  sub_4E15A0(v13, v6, 0, &v14);
  v7 = (const char *)a2;
  QT::QAbstractItemView::startDrag(a1, a2);
  sub_4E88B0(v13);
  sub_4DE2C0(&v16);
  v8 = v14;
  if ( v14 )
  {
    v9 = v15;
    if ( (_QWORD)v15 )
    {
      v10 = 0;
      do
      {
        v11 = v10++;
        sub_4DE2C0(32 * v11 + v8);
        v8 = v14;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v8, v7);
  }
  return v19 - __readfsqword(0x28u);
}
