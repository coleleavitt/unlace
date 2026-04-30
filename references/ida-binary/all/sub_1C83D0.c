__int64 __fastcall sub_1C83D0(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 (__fastcall **v16)(); // rdi
  __int64 *v17; // r13
  __int64 *v18; // rbp
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rdx
  QT::QAbstractItemView *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 *v30; // rsi
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v34; // [rsp+0h] [rbp-88h]
  void *src; // [rsp+8h] [rbp-80h]
  int v36; // [rsp+10h] [rbp-78h]
  int v37; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall **v38)(); // [rsp+20h] [rbp-68h] BYREF
  __int128 v39; // [rsp+28h] [rbp-60h]
  __int128 v40; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v41 = __readfsqword(0x28u);
  v5 = a1[1];
  if ( v5 )
  {
    do
    {
      v6 = (__int64 *)(*a1 + 40 * v4);
      v7 = *v6;
      if ( *v6 )
      {
        v8 = v6[1];
        if ( v8 )
        {
          for ( i = 0; i != v8; ++i )
          {
            v10 = (__int64 *)(v7 + 24 * i);
            v11 = *v10;
            if ( *v10 )
            {
              v10[1] = 0;
              qfree(v11, a2);
              v7 = *v6;
            }
          }
        }
        v6[1] = 0;
        qfree(v7, a2);
      }
      ++v4;
    }
    while ( v5 != v4 );
  }
  a1[1] = 0;
  v12 = sub_4A0300(a2, a3, (int)a2, v36, v37, (int)v38, v39, *((__int64 *)&v39 + 1));
  v13 = v12;
  if ( v12 )
  {
    if ( v34 >= 0 )
    {
      sub_1C58B0(a1, v12, v34);
      return 1;
    }
    if ( v34 == 0x8000000000000002LL )
    {
      v14 = (const char *)&v38;
      v38 = nullptr;
      *(_QWORD *)&v40 = -1;
      v39 = 0;
      sub_4A6DB0(v12);
      if ( (_QWORD)v40 != -1 )
      {
        v14 = (const char *)v13;
        sub_1C58B0(a1, v13, v40);
      }
      v16 = v38;
      if ( !v38 )
        return 1;
LABEL_21:
      *(_QWORD *)&v39 = 0;
      qfree(v16, v14);
      return 1;
    }
    if ( (unsigned __int64)v34 <= 0x8000000000000002LL )
    {
      if ( v34 != 0x8000000000000000LL )
      {
        v14 = (const char *)&v38;
        v38 = nullptr;
        *(_QWORD *)&v40 = -1;
        v39 = 0;
        v15 = sub_4A6DB0(v12);
        v16 = v38;
        if ( v15 )
        {
          v17 = (__int64 *)&v38[v39];
          if ( v17 != (__int64 *)v38 )
          {
            v18 = (__int64 *)v38;
            do
            {
              v14 = (const char *)v13;
              sub_1C58B0(a1, v13, *v18++);
            }
            while ( v17 != v18 );
            v16 = v38;
          }
        }
        if ( !v16 )
          return 1;
        goto LABEL_21;
      }
      v24 = nullptr;
LABEL_40:
      v26 = a1[1];
      v27 = *a1;
      if ( a1[2] < (unsigned __int64)(v26 + 1) )
      {
        v32 = qvector_reserve(a1, v27, v26 + 1, 40);
        *a1 = v32;
        v27 = v32;
        v26 = a1[1];
      }
      v28 = v27 + 40 * v26;
      *(_QWORD *)v28 = 0;
      *(_QWORD *)(v28 + 24) = 12;
      *(_QWORD *)(v28 + 32) = -1;
      *(_OWORD *)(v28 + 8) = 0;
      ++a1[1];
      if ( v13 )
      {
        v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 432LL);
        if ( v29 == sub_1C4300 )
          v30 = (__int64 *)(v13 + 2032);
        else
          v30 = (__int64 *)v29(v13);
        sub_1C5440((__int64 *)v28, v30);
      }
      else
      {
        v31 = (__int64 *)(*(__int64 (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)v24 + 864LL))(v24);
        sub_1C5440((__int64 *)v28, v31);
      }
      return 1;
    }
    if ( v34 == 0x8000000000000003LL )
    {
      v20 = 0;
      v21 = sub_4A0DB0(v12);
      v22 = v21;
      if ( v21 )
      {
        do
        {
          v23 = v20++;
          sub_1C58B0(a1, v13, v23);
        }
        while ( v22 != v20 );
      }
      return 1;
    }
  }
  else
  {
    v24 = (QT::QAbstractItemView *)sub_5210D0(src);
    if ( v24 )
    {
      if ( v34 >= 0 )
      {
        v38 = (__int64 (__fastcall **)())sub_48E270(v24);
        *(_QWORD *)&v39 = v25;
        if ( v38 != (__int64 (__fastcall **)())-1LL || !v25 )
          sub_1C5BC0(a1, v24, (__int64)&v38);
        return 1;
      }
      if ( v34 == 0x8000000000000003LL )
      {
        sub_48A8E0(&v38, v24);
        *((_QWORD *)&v40 + 1) = a1;
        v38 = get_tabular_view_rows_impl;
        sub_48AAF0(&v38);
        return 1;
      }
      if ( (unsigned __int64)v34 <= 0x8000000000000003LL )
      {
        if ( v34 == 0x8000000000000001LL )
        {
          v38 = nullptr;
          v40 = -1;
          sub_48FF00(v24);
          return 1;
        }
        if ( v34 == 0x8000000000000002LL )
        {
          v39 = 0;
          v38 = nullptr;
          v40 = -1;
          sub_48FF00(v24);
          if ( !*((_QWORD *)&v40 + 1) )
            sub_1C5BC0(a1, v24, (__int64)&v40);
          return 1;
        }
        goto LABEL_40;
      }
    }
  }
  return 0;
}
