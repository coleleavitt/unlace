__int64 __fastcall detach_tinfo_t(unsigned __int64 *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  void *v5; // rbp
  void **v6; // rcx
  void **v7; // r8
  __int64 v8; // [rsp+0h] [rbp-B8h] BYREF
  void *v9; // [rsp+8h] [rbp-B0h] BYREF
  void *v10; // [rsp+10h] [rbp-A8h] BYREF
  void *v11; // [rsp+18h] [rbp-A0h] BYREF
  void *v12; // [rsp+20h] [rbp-98h] BYREF
  __int128 v13; // [rsp+28h] [rbp-90h]
  void *v14; // [rsp+40h] [rbp-78h] BYREF
  __int128 v15; // [rsp+48h] [rbp-70h]
  void *v16; // [rsp+60h] [rbp-58h] BYREF
  __int128 v17; // [rsp+68h] [rbp-50h]
  void *ptr; // [rsp+80h] [rbp-38h] BYREF
  __int128 v19; // [rsp+88h] [rbp-30h]
  unsigned __int64 v20; // [rsp+98h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( *a1 > 0xFF
    && ((v3 = sub_51B750(*(_QWORD *)(qword_2CA1698 + 1632), *a1), *(_QWORD *)(v3 + 32)) || *(_DWORD *)(v3 + 64) > 1u) )
  {
    v12 = nullptr;
    v4 = *a1;
    v14 = nullptr;
    v16 = nullptr;
    ptr = nullptr;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    if ( v4 > 0xFF )
      get_tinfo_pdata(&ptr, v4, 5);
    v1 = serialize_tinfo(&v12, &v14, &v16, a1, 272);
    if ( (_BYTE)v1 )
    {
      v5 = ptr;
      get_tinfo_pdata(&v8, *a1, 3);
      v6 = (void **)v14;
      v7 = (void **)v16;
      v9 = v12;
      v10 = v14;
      if ( v14 )
        v6 = &v10;
      v11 = v16;
      if ( v16 )
        v7 = &v11;
      v1 = deserialize_tinfo(a1, v8, &v9, v6, v7, v5);
      if ( !(_BYTE)v1 )
      {
        if ( !under_debugger )
          interr(3120);
        BUG();
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
  }
  else
  {
    return 1;
  }
  return v1;
}

