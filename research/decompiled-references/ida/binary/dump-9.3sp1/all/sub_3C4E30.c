__int64 sub_3C4E30()
{
  __int64 func; // rax
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 i; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 j; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v20; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A0h]
  __int128 v23; // [rsp+20h] [rbp-98h]
  _QWORD v24[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v25; // [rsp+40h] [rbp-78h]
  __int128 v26; // [rsp+48h] [rbp-70h]
  char v27; // [rsp+60h] [rbp-58h]
  __int128 v28; // [rsp+68h] [rbp-50h]
  __int64 v29; // [rsp+78h] [rbp-40h]
  unsigned __int64 v30; // [rsp+88h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  func = get_func();
  if ( !func )
    return throw_idc_exception();
  v1 = func;
  v2 = sub_339CA0();
  v21 = v1;
  v26 = 0;
  v24[0] = 0;
  v24[1] = -1;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  sub_14CDC0(&v20, v2, &v21, v24, 0);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  v4 = v20;
  if ( v20 )
  {
    v20 = 0;
    find_idc_class();
    idcv_object();
    v27 = 2;
    v28 = 0;
    v29 = 0;
    free_idcv();
    v27 = 8;
    *(_QWORD *)&v28 = v4;
    set_idcv_attr();
    v5 = 0;
    free_idcv();
  }
  else
  {
    sub_3310F0((__int64)&v21, (__int64)v24, v3);
    v5 = throw_idc_exception();
    if ( v21 )
    {
      v22 = 0;
      qfree(v21);
    }
  }
  v6 = (__int64 *)v20;
  if ( v20 )
  {
    if ( (*(_DWORD *)(v20 + 104))-- == 1 )
    {
      sub_258970(v6);
      v8 = v6[23];
      if ( v8 )
      {
        v9 = v6[24];
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = (__int64 *)(v8 + 24 * i);
            v12 = *v11;
            if ( *v11 )
            {
              v11[1] = 0;
              qfree(v12);
              v8 = v6[23];
            }
          }
        }
        v6[24] = 0;
        qfree(v8);
      }
      v13 = v6[20];
      if ( v13 )
      {
        v6[21] = 0;
        qfree(v13);
      }
      v14 = v6[16];
      if ( v14 )
      {
        v15 = v6[17];
        if ( v15 )
        {
          for ( j = 0; j != v15; ++j )
          {
            v17 = (__int64 *)(v14 + 32 * j);
            v18 = *v17;
            if ( *v17 )
            {
              v17[1] = 0;
              qfree(v18);
              v14 = v6[16];
            }
          }
        }
        v6[17] = 0;
        qfree(v14);
      }
      sub_255050((__int64)(v6 + 2));
      j__qfree((__int64)v6);
    }
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v5;
}
