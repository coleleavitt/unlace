__int64 __fastcall sub_388060(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v4; // rsi
  int v5; // eax
  __int64 v6; // rbx
  _BYTE *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rax
  size_t v13; // rbx
  __int64 first_seg; // rax
  __int64 v15; // rax
  __int64 name_ea; // rax
  void *v18; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v19; // [rsp+8h] [rbp-E0h]
  __int64 (__fastcall **v20)(); // [rsp+20h] [rbp-C8h] BYREF
  int v21; // [rsp+28h] [rbp-C0h]
  __int64 v22; // [rsp+30h] [rbp-B8h]
  void *src; // [rsp+40h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-A0h]
  __int128 v25; // [rsp+60h] [rbp-88h] BYREF
  __int64 v26; // [rsp+70h] [rbp-78h]
  unsigned __int64 v27; // [rsp+78h] [rbp-70h]
  __int64 v28; // [rsp+80h] [rbp-68h]
  void *ptr; // [rsp+88h] [rbp-60h]
  void *v30; // [rsp+90h] [rbp-58h]
  __int128 v31; // [rsp+98h] [rbp-50h]
  void *v32; // [rsp+A8h] [rbp-40h]
  __int128 v33; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v34; // [rsp+C8h] [rbp-20h]

  v2 = *a1;
  v34 = __readfsqword(0x28u);
  v4 = haystack;
  if ( *(_QWORD *)(v2 + 8) )
    v4 = *(const char **)v2;
  sub_3792E0(4u, v4);
  if ( a2 )
  {
    v5 = getinf(5);
    if ( v5 != 11 && v5 != 2 )
    {
      getinf(12);
      callui();
    }
  }
  if ( getinf(15) != -1 )
  {
    v18 = nullptr;
    v19 = 0;
    v6 = getinf(16);
    if ( (get_flags_ex(v6, 4) & 0x4000) != 0 )
    {
      if ( get_ea_name(&v18, v6, 512, 0) > 0 )
        goto LABEL_10;
      v7 = v18;
      if ( *((_QWORD *)&v19 + 1) > 5u )
      {
LABEL_9:
        *(_QWORD *)&v19 = 6;
        *(_DWORD *)v7 = 1918989427;
        v7[4] = 116;
        *((_BYTE *)v18 + 5) = 0;
LABEL_10:
        add_entry(v6, v6, v18, 1, 0);
        auto_mark_range(v6, v6 + 1, 20);
        auto_mark_range(v6, v6 + 1, 30);
        v8 = getinf(18);
        if ( v8 == -1 )
        {
          name_ea = get_name_ea(-1, "main");
          v8 = name_ea;
          if ( name_ea == -1 )
          {
            v8 = get_name_ea(-1, "_main");
            setinf(18, v8);
            if ( v8 == -1 )
              v8 = v6;
          }
          else
          {
            setinf(18, name_ea);
          }
        }
        v22 = v8;
        v21 = -1;
        v20 = off_2B25850;
        src = nullptr;
        *(_OWORD *)n = 0;
        src = (void *)qvector_reserve(&src, 0, 11, 1);
        n[0] = 11;
        strcpy((char *)src, "IDA View-A");
        v26 = 0;
        v27 = 0xFFFF0000FFFFFFFFLL;
        v28 = 1;
        ptr = &v20;
        v25 = 0;
        v12 = (void *)idaplace_t__clone(&v20, 0, v9, 0x7765695620414449LL, v10, v11, v18, v19, *((_QWORD *)&v19 + 1));
        v13 = n[0];
        ptr = v12;
        v30 = nullptr;
        v31 = 0;
        if ( n[0] )
        {
          v30 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v31 + 1) = v13;
          memcpy(v30, src, v13);
          *(_QWORD *)&v31 = v13;
        }
        v32 = nullptr;
        v33 = 0;
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        LODWORD(n[0]) = 0;
        src = (void *)-1LL;
        navstack_t_register_live(&src);
        navstack_t_init(&src, &v25, "IDA View-A", 0);
        navstack_t_set_current(&src, &v25, 1);
        navstack_t_deregister_live(&src);
        if ( ptr )
        {
          qfree(ptr);
          ptr = nullptr;
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
          v30 = nullptr;
          *((_QWORD *)&v31 + 1) = 0;
        }
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree(v32);
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
        }
        if ( ptr )
          qfree(ptr);
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v18);
        }
        goto LABEL_27;
      }
    }
    else
    {
      v7 = v18;
      if ( *((_QWORD *)&v19 + 1) > 5u )
        goto LABEL_9;
    }
    v18 = (void *)qvector_reserve(&v18, v7, 6, 1);
    v7 = v18;
    goto LABEL_9;
  }
LABEL_27:
  first_seg = get_first_seg();
  if ( first_seg )
  {
    while ( *(_BYTE *)(first_seg + 43) != 2 )
    {
      first_seg = get_next_seg(*(_QWORD *)first_seg);
      if ( !first_seg )
        return 1;
    }
    v15 = getinf(55);
    setinf(55, v15 | 0x10);
  }
  return 1;
}
