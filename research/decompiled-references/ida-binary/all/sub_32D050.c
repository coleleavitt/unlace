__int64 __fastcall sub_32D050(const QT::QObject **a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // eax
  const char *v5; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 *next_hidden_range; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87BDA0, *a1);
  if ( v1 )
  {
    v2 = v1;
    v14 = 0;
    v13 = 0;
    v15 = 0;
    if ( (unsigned __int8)sub_32B970(&v11, &v12, &v14, &v13, 0.0)
      && (v3 = v13,
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 504LL))(v13),
          v5 = (const char *)v4,
          sub_2BFB60(v3, v4)) )
    {
      v8 = v12;
      v9 = v11;
      if ( v11 < v12 )
      {
        del_hidden_range(v11);
        do
          next_hidden_range = (unsigned __int64 *)get_next_hidden_range(v9);
        while ( next_hidden_range && *next_hidden_range < v8 && (unsigned __int8)del_hidden_range(*next_hidden_range) );
      }
      invalidate_visea_cache();
      v6 = 1;
    }
    else
    {
      v5 = nullptr;
      v6 = sub_32B6F0(v2, 0);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, v5);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
