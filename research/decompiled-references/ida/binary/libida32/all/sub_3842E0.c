__int64 __fastcall sub_3842E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v4; // rsi
  int v5; // eax
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v17; // rbp
  _BYTE *v18; // rsi
  unsigned int name_ea; // eax
  __int64 (**v20)(void); // [rsp+0h] [rbp-D8h] BYREF
  int v21; // [rsp+8h] [rbp-D0h]
  unsigned int v22; // [rsp+Ch] [rbp-CCh]
  void *v23; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+18h] [rbp-C0h]
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-A0h]
  __int128 v27; // [rsp+50h] [rbp-88h] BYREF
  __int64 v28; // [rsp+60h] [rbp-78h]
  unsigned __int64 v29; // [rsp+68h] [rbp-70h]
  __int64 v30; // [rsp+70h] [rbp-68h]
  void *ptr; // [rsp+78h] [rbp-60h]
  void *v32; // [rsp+80h] [rbp-58h]
  __int128 v33; // [rsp+88h] [rbp-50h]
  void *v34; // [rsp+98h] [rbp-40h]
  __int128 v35; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v36; // [rsp+B8h] [rbp-20h]

  v2 = *a1;
  v36 = __readfsqword(0x28u);
  v4 = haystack;
  if ( *(_QWORD *)(v2 + 8) )
    v4 = *(const char **)v2;
  sub_375980(4u, v4);
  if ( a2 )
  {
    v5 = getinf(5);
    if ( v5 != 11 && v5 != 2 )
    {
      getinf(12);
      callui();
    }
  }
  if ( (unsigned int)getinf(15) != -1 )
  {
    v23 = nullptr;
    v24 = 0;
    v7 = getinf(16);
    if ( (get_flags_ex(v7, 4) & 0x4000) == 0 || get_ea_name(&v23, v7, 512, 0) <= 0 )
    {
      v18 = v23;
      if ( *((_QWORD *)&v24 + 1) <= 5u )
      {
        v23 = (void *)qvector_reserve(&v23, v23, 6, 1);
        v18 = v23;
      }
      *(_QWORD *)&v24 = 6;
      *(_DWORD *)v18 = 1918989427;
      v18[4] = 116;
      *((_BYTE *)v23 + 5) = 0;
    }
    add_entry(v7, v7, v23, 1, 0);
    auto_mark_range(v7, v7 + 1, 20);
    auto_mark_range(v7, v7 + 1, 30);
    v8 = getinf(18);
    if ( v8 == -1 )
    {
      name_ea = get_name_ea(0xFFFFFFFFLL, "main");
      v8 = name_ea;
      if ( name_ea == -1 )
      {
        v8 = get_name_ea(0xFFFFFFFFLL, "_main");
        setinf(18, v8);
        if ( v8 == -1 )
          v8 = v7;
      }
      else
      {
        setinf(18, name_ea);
      }
    }
    v22 = v8;
    v21 = -1;
    v20 = off_2AFC770;
    src = nullptr;
    *(_OWORD *)n = 0;
    src = (void *)qvector_reserve(&src, 0, 11, 1);
    n[0] = 11;
    strcpy((char *)src, "IDA View-A");
    v28 = 0;
    v29 = 0xFFFF0000FFFFFFFFLL;
    v30 = 1;
    ptr = &v20;
    v27 = 0;
    v12 = (void *)((__int64 (__fastcall *)(__int64 (***)(void), _QWORD, __int64, __int64, __int64, __int64))idaplace_t__clone)(
                    &v20,
                    0,
                    v9,
                    0x7765695620414449LL,
                    v10,
                    v11);
    v17 = n[0];
    ptr = v12;
    v32 = nullptr;
    v33 = 0;
    if ( n[0] )
    {
      v32 = (void *)qalloc_or_throw(n[0], 0, v13, v14, v15, v16);
      *((_QWORD *)&v33 + 1) = v17;
      memcpy(v32, src, v17);
      *(_QWORD *)&v33 = v17;
    }
    v34 = nullptr;
    v35 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    src = (void *)0xFFFFFFFFLL;
    navstack_t_register_live(&src);
    navstack_t_init(&src, &v27, "IDA View-A", 0);
    navstack_t_set_current(&src, &v27, 1);
    navstack_t_deregister_live(&src);
    if ( ptr )
    {
      qfree(ptr);
      ptr = nullptr;
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
      v32 = nullptr;
      *((_QWORD *)&v33 + 1) = 0;
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    if ( ptr )
      qfree(ptr);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
  return 1;
}

