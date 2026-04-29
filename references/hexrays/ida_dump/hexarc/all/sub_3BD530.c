__int64 __fastcall sub_3BD530(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 func; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 idc_class; // rax
  unsigned int v10; // r12d
  __int64 *v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 i; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 j; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  const char *v25; // rsi
  __int64 v26; // [rsp+8h] [rbp-B0h] BYREF
  const char *v27; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-A0h]
  __int128 v29; // [rsp+20h] [rbp-98h]
  _QWORD v30[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+40h] [rbp-78h]
  __int128 v32; // [rsp+48h] [rbp-70h]
  char v33[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v34; // [rsp+68h] [rbp-50h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  unsigned __int64 v36; // [rsp+88h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v36 = __readfsqword(0x28u);
  func = get_func(v2);
  if ( !func )
    return throw_idc_exception(a2, "No function at the specified address");
  v5 = func;
  v6 = sub_3320F0();
  v27 = (const char *)v5;
  v32 = 0;
  v30[0] = 0;
  v30[1] = -1;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  sub_146700(&v26, v6, &v27, v30, 0);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  v8 = v26;
  if ( v26 )
  {
    v26 = 0;
    idc_class = find_idc_class("cfunc_t");
    idcv_object(a2, idc_class);
    v33[0] = 2;
    v34 = 0;
    v35 = 0;
    free_idcv(v33);
    v33[0] = 8;
    *(_QWORD *)&v34 = v8;
    set_idcv_attr(a2, "__ptr", v33, 0);
    v10 = 0;
    free_idcv(v33);
  }
  else
  {
    sub_329A90((__int64)&v27, (__int64)v30, v7);
    v25 = s1;
    if ( v28 )
      v25 = v27;
    v10 = throw_idc_exception(a2, v25);
    if ( v27 )
    {
      v28 = 0;
      qfree(v27);
    }
  }
  v11 = (__int64 *)v26;
  if ( v26 )
  {
    if ( (*(_DWORD *)(v26 + 104))-- == 1 )
    {
      sub_2515F0(v11);
      v13 = v11[23];
      if ( v13 )
      {
        v14 = v11[24];
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v16 = (__int64 *)(v13 + 24 * i);
            v17 = *v16;
            if ( *v16 )
            {
              v16[1] = 0;
              qfree(v17);
              v13 = v11[23];
            }
          }
        }
        v11[24] = 0;
        qfree(v13);
      }
      v18 = v11[20];
      if ( v18 )
      {
        v11[21] = 0;
        qfree(v18);
      }
      v19 = v11[16];
      if ( v19 )
      {
        v20 = v11[17];
        if ( v20 )
        {
          for ( j = 0; j != v20; ++j )
          {
            v22 = (__int64 *)(v19 + 32 * j);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              qfree(v23);
              v19 = v11[16];
            }
          }
        }
        v11[17] = 0;
        qfree(v19);
      }
      sub_24DCD0((__int64)(v11 + 2));
      j__qfree(v11);
    }
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return v10;
}
