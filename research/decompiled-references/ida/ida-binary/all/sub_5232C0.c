__int64 __fastcall sub_5232C0(
        QT::QAbstractItemView *this,
        __int64 (__fastcall ***a2)(_QWORD, QT::QAbstractItemView *, char *, __int64 *, __int64 *),
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v7)(QT::QAbstractItemView *); // rax
  double v8; // xmm0_8
  char *v9; // r14
  const char *v10; // rsi
  unsigned int v11; // r12d
  const char **v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbx
  const char **v15; // rax
  const char *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v22; // edx
  int v23; // edx
  __int64 v24; // [rsp+8h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+10h] [rbp-D0h]
  const char **v26; // [rsp+28h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+30h] [rbp-B0h]
  __int64 v28; // [rsp+48h] [rbp-98h] BYREF
  __int128 v29; // [rsp+50h] [rbp-90h]
  __int64 v30; // [rsp+68h] [rbp-78h] BYREF
  __int128 v31; // [rsp+70h] [rbp-70h]
  __int64 v32; // [rsp+80h] [rbp-60h] BYREF
  __int128 v33; // [rsp+88h] [rbp-58h]
  char v34; // [rsp+98h] [rbp-48h]
  unsigned __int64 v35; // [rsp+A0h] [rbp-40h]

  v5 = *(_QWORD *)this;
  v35 = __readfsqword(0x28u);
  v30 = 0;
  v7 = *(__int64 (__fastcall **)(QT::QAbstractItemView *))(v5 + 968);
  v34 = 0;
  v32 = 0;
  v31 = 0;
  v33 = 0;
  if ( v7 == sub_51F1D0 )
    sub_4962F0(this, (__int64)&v30, 7);
  else
    ((void (__fastcall *)(QT::QAbstractItemView *, __int64 *, __int64))v7)(this, &v30, 7);
  v8 = 0.0;
  *((_DWORD *)this + 496) |= 0x200u;
  if ( !a3 )
    a3 = &v24;
  v24 = 0;
  v25 = 0;
  v26 = nullptr;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  sub_48EA50(this, (__int64)&v28, a3, -1, (__int64)&v26);
  v9 = (char *)(*(__int64 (__fastcall **)(QT::QAbstractItemView *, __int64 *, __int64, double))(*(_QWORD *)this + 1032LL))(
                 this,
                 &v30,
                 7,
                 0.0);
  v10 = (const char *)this;
  v11 = (**a2)(a2, this, v9, a3, &v28);
  if ( v11 == 2 )
  {
    if ( v9 )
    {
      v22 = *((_DWORD *)v9 + 34);
      if ( (v22 & 1) != 0 )
      {
        sub_48EC20(this, &v26, 0.0);
        v22 = *((_DWORD *)v9 + 34);
      }
      v23 = (v22 >> 1) & 1;
    }
    else
    {
      LOBYTE(v23) = 0;
    }
    v10 = v9;
    sub_4E0B20((__int64)this + 304, (__int64)v9, v23);
  }
  else if ( v9 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    v8 = qfree(v28, v10);
  }
  v12 = v26;
  if ( v26 )
  {
    v13 = v27;
    if ( (_QWORD)v27 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[3 * v14];
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = nullptr;
          v8 = qfree(v16, v10, v8);
          v12 = v26;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v27 = 0;
    v8 = qfree(v12, v10, v8);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    v8 = qfree(v24, v10, v8);
  }
  *((_DWORD *)this + 496) &= ~0x200u;
  sub_4DE2C0(&v32);
  v17 = v30;
  if ( v30 )
  {
    v18 = v31;
    if ( (_QWORD)v31 )
    {
      v19 = 0;
      do
      {
        v20 = v19++;
        sub_4DE2C0((__int64 *)(32 * v20 + v17));
        v17 = v30;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v17, v10, v8);
  }
  return v11;
}
