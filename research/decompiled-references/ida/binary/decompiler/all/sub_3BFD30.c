__int64 __fastcall sub_3BFD30(__int64 a1)
{
  __int64 v1; // rdi
  __int64 func; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  const char *v6; // rsi
  unsigned int v7; // r12d
  _QWORD *v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 i; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 j; // rbp
  _QWORD *v17; // rax
  __int64 v19; // [rsp+8h] [rbp-B0h] BYREF
  const char *v20; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A0h]
  __int128 v22; // [rsp+20h] [rbp-98h]
  _QWORD v23[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+40h] [rbp-78h]
  __int128 v25; // [rsp+48h] [rbp-70h]
  char v26; // [rsp+60h] [rbp-58h]
  __int128 v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+78h] [rbp-40h]
  unsigned __int64 v29; // [rsp+88h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  func = get_func();
  if ( !func )
    return throw_idc_exception();
  v3 = func;
  v4 = sub_336860(v1);
  v20 = (const char *)v3;
  v25 = 0;
  v23[0] = 0;
  v23[1] = -1;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  sub_14A830(&v19, v4, &v20, v23, 0);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  v5 = v19;
  if ( v19 )
  {
    v19 = 0;
    find_idc_class();
    idcv_object();
    v26 = 2;
    v27 = 0;
    v28 = 0;
    free_idcv();
    v6 = "__ptr";
    v26 = 8;
    *(_QWORD *)&v27 = v5;
    set_idcv_attr();
    v7 = 0;
    free_idcv();
  }
  else
  {
    sub_32DC50(&v20, v23);
    v6 = s1;
    if ( v21 )
      v6 = v20;
    v7 = throw_idc_exception();
    if ( v20 )
    {
      v21 = 0;
      qfree();
    }
  }
  v8 = (_QWORD *)v19;
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 104))-- == 1 )
    {
      sub_255EB0(v8, v6);
      v10 = v8[23];
      if ( v10 )
      {
        v11 = v8[24];
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = (_QWORD *)(v10 + 24 * i);
            if ( *v13 )
            {
              v13[1] = 0;
              qfree();
              v10 = v8[23];
            }
          }
        }
        v8[24] = 0;
        qfree();
      }
      if ( v8[20] )
      {
        v8[21] = 0;
        qfree();
      }
      v14 = v8[16];
      if ( v14 )
      {
        v15 = v8[17];
        if ( v15 )
        {
          for ( j = 0; j != v15; ++j )
          {
            v17 = (_QWORD *)(v14 + 32 * j);
            if ( *v17 )
            {
              v17[1] = 0;
              qfree();
              v14 = v8[16];
            }
          }
        }
        v8[17] = 0;
        qfree();
      }
      sub_252570(v8 + 2);
      j__qfree();
    }
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v7;
}
