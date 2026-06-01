__int64 __fastcall sub_32CE00(
        const QT::QObject **a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 *v11; // rsi
  unsigned int v12; // ebx
  unsigned __int64 *hidden_range; // rax
  __int64 v15; // rdi
  unsigned __int64 *v16; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned __int64 *v19; // rbp
  unsigned __int64 v20; // rbx
  _QWORD *next_hidden_range; // rax
  const char *v22; // rdx
  int v23; // r9d
  unsigned int v24; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h] BYREF
  const char *v27; // [rsp+20h] [rbp-38h] BYREF
  __int128 v28; // [rsp+28h] [rbp-30h]
  unsigned __int64 v29; // [rsp+38h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87BDA0, *a1);
  if ( v9 )
  {
    v10 = v9;
    v11 = &v25;
    v25 = -1;
    v26 = -1;
    v27 = nullptr;
    v28 = 0;
    if ( !(unsigned __int8)sub_1F09E0(v9, (__int64 *)&v25, &v26) )
    {
      v11 = &v26;
      v26 = -1;
      v25 = -1;
      sub_32B970(&v25, &v26, (__int64 *)&v27, nullptr, 0.0);
    }
    if ( v25 == -1 || v26 == -1 )
    {
      v11 = (_QWORD *)(&dword_0 + 1);
      v12 = sub_32B6F0(v10, 1u);
    }
    else
    {
      hidden_range = (unsigned __int64 *)get_hidden_range(v25);
      if ( hidden_range && *hidden_range < v25 )
        goto LABEL_28;
      v15 = v26;
      v16 = (unsigned __int64 *)get_hidden_range(v26);
      if ( v16 )
      {
        if ( *v16 < v26 )
          goto LABEL_28;
      }
      v24 = -1;
      if ( (unsigned __int64)v28 > 1 )
        goto LABEL_15;
      if ( get_ea_name(&v27, v25, 64, 0) <= 0 )
        sub_32B8A0((__int64 *)&v27, v25);
      v11 = &v25;
      v15 = 1098;
      if ( !(unsigned int)sub_507F10(
                            1098,
                            (unsigned int)&v25,
                            (unsigned int)&v26,
                            (unsigned int)&v27,
                            (unsigned int)&v24,
                            v23) )
      {
LABEL_28:
        v12 = 0;
      }
      else
      {
LABEL_15:
        sub_1FDB10(0.0, a3, a4, a5, v17, v18, a8, a9, v15, (const char *)v11);
        v19 = (unsigned __int64 *)v26;
        v20 = v25;
        if ( v25 < v26 )
        {
          del_hidden_range(v25);
          do
            next_hidden_range = (_QWORD *)get_next_hidden_range(v20);
          while ( next_hidden_range
               && *next_hidden_range < (unsigned __int64)v19
               && (unsigned __int8)del_hidden_range(*next_hidden_range) );
          v19 = (unsigned __int64 *)v26;
          v20 = v25;
        }
        v22 = &s1;
        if ( (_QWORD)v28 )
          v22 = v27;
        v11 = v19;
        v12 = (unsigned __int8)add_hidden_range(v20, v19, v22, 0, 0, v24);
      }
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27, (const char *)v11);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
