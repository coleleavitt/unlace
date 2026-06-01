__int64 sub_33C7A0()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+8h] [rbp-F0h] BYREF
  _BYTE v14[16]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-D8h]
  __int64 v16; // [rsp+28h] [rbp-D0h]
  __int64 v17; // [rsp+38h] [rbp-C0h]
  __int64 v18; // [rsp+40h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-A0h]
  __int64 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-88h]
  __int64 v22; // [rsp+78h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-70h]
  __int64 v24; // [rsp+90h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-58h]
  __int64 v26; // [rsp+A8h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-40h]
  __int64 v28; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v29; // [rsp+D8h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v0 = qalloc_or_throw(232);
  sub_279C10(v0);
  sub_4A3550(v14, v0, 0, 0);
  v13 = 0;
  sub_4AE210(v0, &v13, v14);
  v1 = sub_49EE00(v0);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 2152) = 3;
    *(_QWORD *)(v1 + 2144) = &off_866600;
  }
  if ( v27 )
  {
    v28 = 0;
    qfree(v27, (const char *)&v13);
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25, (const char *)&v13);
  }
  v2 = v23;
  if ( v23 )
  {
    v3 = v24;
    if ( v24 )
    {
      v4 = 0;
      do
      {
        v5 = (__int64 *)(v2 + 24 * v4);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6, (const char *)&v13);
          v2 = v23;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    v24 = 0;
    qfree(v2, (const char *)&v13);
  }
  v7 = v21;
  if ( v21 )
  {
    v8 = v22;
    if ( v22 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v7 + 24 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11, (const char *)&v13);
          v7 = v21;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    v22 = 0;
    qfree(v7, (const char *)&v13);
  }
  if ( v19 )
  {
    v20 = 0;
    qfree(v19, (const char *)&v13);
  }
  if ( v17 )
  {
    v18 = 0;
    qfree(v17, (const char *)&v13);
  }
  if ( v15 )
  {
    v16 = 0;
    qfree(v15, (const char *)&v13);
  }
  return 1;
}
