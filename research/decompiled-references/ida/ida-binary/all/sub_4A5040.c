__int64 __fastcall sub_4A5040(__int64 a1, const char *a2, int a3, double a4)
{
  const char *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  const char *v20; // [rsp+0h] [rbp-108h] BYREF
  __int128 v21; // [rsp+8h] [rbp-100h]
  __int64 v22[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+38h] [rbp-D0h]
  __int64 v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-20h]

  v37 = __readfsqword(0x28u);
  sub_49EF20(a1, (__int64)a2, a4);
  v21 = 0;
  v20 = nullptr;
  sub_169A50((__int64 *)&v20, (__int64)"%s:%d", a2, a3);
  v5 = &s1;
  if ( (_QWORD)v21 )
    v5 = v20;
  sub_4A3550(v22, a1, v5, 1);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, v22);
  v8 = v7;
  if ( v7 )
    sub_4DF8B0(v7 + 104, v22);
  if ( v35 )
  {
    v36 = 0;
    qfree(v35, (const char *)v22);
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33, (const char *)v22);
  }
  v9 = v31;
  if ( v31 )
  {
    v10 = v32;
    if ( v32 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v9 + 24 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, (const char *)v22);
          v9 = v31;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v32 = 0;
    qfree(v9, (const char *)v22);
  }
  v14 = v29;
  if ( v29 )
  {
    v15 = v30;
    if ( v30 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 24 * v16);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, (const char *)v22);
          v14 = v29;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v30 = 0;
    qfree(v14, (const char *)v22);
  }
  if ( v27 )
  {
    v28 = 0;
    qfree(v27, (const char *)v22);
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25, (const char *)v22);
  }
  if ( v23 )
  {
    v24 = 0;
    qfree(v23, (const char *)v22);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, (const char *)v22);
  }
  return v8;
}
