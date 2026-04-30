__int64 __fastcall sub_449A90(QT::QAbstractItemView *a1, const char **a2, __int64 a3, int a4)
{
  char v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // r13
  __int64 v13; // rdi
  const char *v14; // rsi
  char v15; // al
  __int64 *v16; // r15
  __int64 v17; // r15
  __int64 v18; // [rsp+8h] [rbp-C0h]
  __int64 v20; // [rsp+28h] [rbp-A0h] BYREF
  const char **v21; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  __int64 *v23; // [rsp+40h] [rbp-88h] BYREF
  __int128 v24; // [rsp+48h] [rbp-80h]
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  __int128 v26; // [rsp+68h] [rbp-60h]
  int v27; // [rsp+78h] [rbp-50h]
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 8) )
  {
    v21 = a2;
    v22 = a4;
    v6 = a4;
    v7 = QT::QAbstractItemView::model(a1);
    v8 = *(_QWORD *)(a3 + 8);
    v9 = v7;
    if ( (unsigned __int64)a2[2] < v8 )
    {
      *a2 = (const char *)qvector_reserve(a2, *a2, v8, 48);
      v8 = *(_QWORD *)(a3 + 8);
    }
    v10 = *(_QWORD **)a3;
    v11 = 2 * v8;
    v12 = &v10[v11];
    if ( &v10[v11] != v10 )
    {
      while ( 1 )
      {
        v14 = (const char *)&v25;
        v25 = 0;
        v27 = 0;
        v26 = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v9 + 536LL))(v9, &v25, v10) )
          break;
        if ( v6 >= 0 )
        {
          v14 = (const char *)&v23;
          if ( !(unsigned int)sub_449270(a1, &v23, (__int64)&v25, 1) )
          {
            v18 = *v23 + 88 * v23[1];
            if ( v18 != *v23 )
            {
              v17 = *v23;
              do
              {
                v14 = (const char *)&v25;
                sub_441FD0(&v21, (__int64)&v25, v17);
                v17 += 88;
              }
              while ( v18 != v17 );
            }
          }
          goto LABEL_13;
        }
        v13 = v25;
        if ( v25 )
          goto LABEL_8;
LABEL_9:
        v10 += 2;
        if ( v12 == v10 )
          return 1;
      }
      v14 = (const char *)&v23;
      v23 = nullptr;
      v24 = 0;
      v15 = sub_442E70(v9, (__int64 *)&v23, v10);
      v16 = v23;
      if ( v15 )
      {
        v14 = (const char *)&v20;
        if ( (unsigned __int8)sub_4463F0(v9, &v20, (__int64)&v23, (__int64)&v25) )
        {
          v14 = (const char *)&v25;
          sub_441FD0(&v21, (__int64)&v25, v20);
        }
      }
      if ( v16 )
        qfree(v16, v14);
LABEL_13:
      v13 = v25;
      if ( !v25 )
        goto LABEL_9;
LABEL_8:
      *(_QWORD *)&v26 = 0;
      qfree(v13, v14);
      goto LABEL_9;
    }
  }
  return 1;
}
