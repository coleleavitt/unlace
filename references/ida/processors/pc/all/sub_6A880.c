__int64 __fastcall sub_6A880(__int64 a1, char *a2, char a3, __int64 *a4)
{
  __int64 i; // r12
  _QWORD *v5; // rbp
  char v7; // al
  char *v8; // rbx
  int v9; // eax
  __int64 *v10; // rdx
  __int64 v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rdi
  __int64 j; // r13
  _QWORD *v15; // rbx
  size_t v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  struct _Unwind_Exception *v23; // rbx
  __int64 v24; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a2 || a3 )
    return v25 - __readfsqword(0x28u);
  if ( (get_aflags() & 0x2000000) != 0 )
    goto LABEL_31;
  v7 = *a2;
  v8 = a2;
  if ( *a2 == 106 )
  {
    if ( a2[1] != 95 )
      goto LABEL_31;
    v7 = a2[2];
    v8 = a2 + 2;
  }
  if ( v7 == 64 )
    v7 = *++v8;
  if ( v7 == 95 )
  {
    do
      ++v8;
    while ( *v8 == 95 );
  }
  if ( strlen(v8) <= 0xF
    || strncmp(v8, "RTC_Check_", 0xAu)
    || (v9 = strncmp(v8 + 11, "_to_", 4u)) != 0
    || (v8[16] & 0xBF) != 0 )
  {
LABEL_31:
    getinf();
    if ( (int)demangle_name() <= 0 )
    {
      v17 = strlen(a2);
      if ( v17 > 0xA && !strcmp(&a2[v17 - 11], "::`vftable'") )
      {
        if ( !a4 )
          return sub_6A5D0(a1);
        v18 = a4[1];
        v19 = (__int64 *)(*a4 + 8 * v18);
        if ( (__int64 *)*a4 == v19 )
          goto LABEL_40;
        v20 = (__int64 *)*a4;
        while ( *v20 != a1 )
        {
          if ( v19 == ++v20 )
            goto LABEL_40;
        }
        if ( v19 == v20 )
        {
LABEL_40:
          if ( a4[2] < (unsigned __int64)(v18 + 1) )
          {
            v21 = qvector_reserve();
            v22 = a4[1];
            *a4 = v21;
            v19 = (__int64 *)(v21 + 8 * v22);
          }
          *v19 = a1;
          ++a4[1];
        }
      }
    }
    return v25 - __readfsqword(0x28u);
  }
  v10 = qword_177440;
  while ( v8[10] - 48 != *((char *)v10 + 8) || v8[15] - 48 != *((char *)v10 + 9) )
  {
    ++v9;
    v10 += 2;
    if ( v9 == 6 )
      goto LABEL_31;
  }
  v11 = v9;
  v12 = &qword_177440[2 * v9];
  if ( !*(_BYTE *)v12 )
  {
    get_scalar_bt();
    copy_tinfo_t();
    clear_tinfo_t();
    get_scalar_bt();
    v24 = qvector_reserve();
    *(_DWORD *)v24 = 0;
    *(_QWORD *)(v24 + 8) = 0;
    *(_QWORD *)(v24 + 16) = 0;
    *(_QWORD *)(v24 + 40) = 0;
    *(_QWORD *)(v24 + 64) = 0;
    *(_DWORD *)(v24 + 72) = 0;
    *(_OWORD *)(v24 + 24) = 0;
    *(_OWORD *)(v24 + 48) = 0;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( LOBYTE(qword_177440[2 * v11 + 1]) == 8 )
      getinf_flag();
    create_tinfo();
    if ( !*(_BYTE *)v12 )
    {
      if ( !under_debugger )
      {
        v23 = (struct _Unwind_Exception *)interr();
        clear_tinfo_t();
        cleanup_argloc();
        clear_tinfo_t();
        if ( v24 )
        {
          for ( i = 0; i != 1; ++i )
          {
            v5 = (_QWORD *)(v24 + 80 * i);
            clear_tinfo_t();
            if ( v5[5] )
            {
              v5[6] = 0;
              qfree();
            }
            if ( v5[2] )
            {
              v5[3] = 0;
              qfree();
            }
            cleanup_argloc();
          }
          qfree();
        }
        _Unwind_Resume(v23);
      }
      BUG();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v13 = v24;
    if ( v24 )
    {
      for ( j = 0; j != 1; ++j )
      {
        v15 = (_QWORD *)(v13 + 80 * j);
        clear_tinfo_t();
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v13 = v24;
      }
      qfree();
    }
  }
  return apply_tinfo();
}
