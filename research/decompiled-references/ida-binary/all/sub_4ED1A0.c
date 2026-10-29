_QWORD *__fastcall sub_4ED1A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v15[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-D8h]
  __int64 v17; // [rsp+18h] [rbp-D0h]
  __int64 v18; // [rsp+28h] [rbp-C0h]
  __int64 v19; // [rsp+30h] [rbp-B8h]
  __int64 v20; // [rsp+48h] [rbp-A0h]
  __int64 v21; // [rsp+50h] [rbp-98h]
  __int64 v22; // [rsp+60h] [rbp-88h]
  __int64 v23; // [rsp+68h] [rbp-80h]
  __int64 v24; // [rsp+78h] [rbp-70h]
  __int64 v25; // [rsp+80h] [rbp-68h]
  __int64 v26; // [rsp+90h] [rbp-58h]
  __int64 v27; // [rsp+98h] [rbp-50h]
  __int64 v28; // [rsp+A8h] [rbp-40h]
  __int64 v29; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v30; // [rsp+C8h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  v2 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
    sub_4A3550(v15, *(_QWORD *)(a2 + 104), nullptr, 1);
    v2 = (_QWORD *)sub_4A37D0(v3, (__int64)v15);
    if ( v28 )
    {
      v29 = 0;
      qfree(v28, (const char *)v15);
    }
    if ( v26 )
    {
      v27 = 0;
      qfree(v26, (const char *)v15);
    }
    v4 = v24;
    if ( v24 )
    {
      v5 = v25;
      if ( v25 )
      {
        v6 = 0;
        do
        {
          v7 = (__int64 *)(v4 + 24 * v6);
          v8 = *v7;
          if ( *v7 )
          {
            v7[1] = 0;
            qfree(v8, (const char *)v15);
            v4 = v24;
          }
          ++v6;
        }
        while ( v5 != v6 );
      }
      v25 = 0;
      qfree(v4, (const char *)v15);
    }
    v9 = v22;
    if ( v22 )
    {
      v10 = v23;
      if ( v23 )
      {
        v11 = 0;
        do
        {
          v12 = (__int64 *)(v9 + 24 * v11);
          v13 = *v12;
          if ( *v12 )
          {
            v12[1] = 0;
            qfree(v13, (const char *)v15);
            v9 = v22;
          }
          ++v11;
        }
        while ( v10 != v11 );
      }
      v23 = 0;
      qfree(v9, (const char *)v15);
    }
    if ( v20 )
    {
      v21 = 0;
      qfree(v20, (const char *)v15);
    }
    if ( v18 )
    {
      v19 = 0;
      qfree(v18, (const char *)v15);
    }
    if ( v16 )
    {
      v17 = 0;
      qfree(v16, (const char *)v15);
    }
  }
  return v2;
}
