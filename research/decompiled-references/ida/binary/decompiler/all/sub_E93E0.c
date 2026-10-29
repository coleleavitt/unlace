__int64 __fastcall sub_E93E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21)
{
  unsigned int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rbp
  int v24; // ebp
  char v25; // r13
  char v26; // al
  int v27; // r13d
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 j; // r13
  _QWORD *v32; // rbp
  __int64 v34; // r14
  __int64 i; // rbp
  __int64 v36; // rbp
  __int64 v37; // r13
  void *v38; // rax
  void *v39; // rax
  size_t na; // [rsp+0h] [rbp-B8h]
  size_t n; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+10h] [rbp-A8h]
  __int64 v43; // [rsp+18h] [rbp-A0h]
  void *v44; // [rsp+50h] [rbp-68h]

  v21 = *(_BYTE *)(a2 + 88) & 0xF0;
  if ( (*(_BYTE *)(a2 + 88) & 0xF0) == 0xC0 )
    v21 = *(_DWORD *)(a2 + 28);
  if ( v21 <= 0x10 )
    v21 = getinf();
  if ( v21 - 208 > 0x2F )
  {
    if ( !(unsigned __int8)calc_arglocs() )
    {
      if ( !under_debugger )
        sub_37EA20(51723);
LABEL_45:
      BUG();
    }
    v22 = *(_QWORD *)(a2 + 8);
    v42 = 0;
    v43 = 0;
    if ( v22 )
    {
      v34 = 0;
      v42 = qalloc_or_throw();
      for ( i = v42; ; i = v42 )
      {
        v36 = 80 * v34 + i;
        v37 = *(_QWORD *)a2 + 80 * v34;
        *(_DWORD *)v36 = 0;
        copy_argloc();
        *(_QWORD *)(v36 + 16) = 0;
        *(_OWORD *)(v36 + 24) = 0;
        if ( *(_QWORD *)(v37 + 24) )
        {
          na = *(_QWORD *)(v37 + 24);
          v38 = (void *)qalloc_or_throw();
          *(_QWORD *)(v36 + 16) = v38;
          *(_QWORD *)(v36 + 32) = na;
          memcpy(v38, *(const void **)(v37 + 16), na);
          *(_QWORD *)(v36 + 24) = na;
        }
        *(_QWORD *)(v36 + 40) = 0;
        *(_OWORD *)(v36 + 48) = 0;
        if ( *(_QWORD *)(v37 + 48) )
        {
          n = *(_QWORD *)(v37 + 48);
          v39 = (void *)qalloc_or_throw();
          *(_QWORD *)(v36 + 40) = v39;
          *(_QWORD *)(v36 + 56) = n;
          memcpy(v39, *(const void **)(v37 + 40), n);
          *(_QWORD *)(v36 + 48) = n;
        }
        *(_QWORD *)(v36 + 64) = 0;
        copy_tinfo_t();
        ++v34;
        *(_DWORD *)(v36 + 72) = *(_DWORD *)(v37 + 72);
        if ( v22 == v34 )
          break;
      }
      v43 = v22;
    }
    copy_tinfo_t();
    copy_argloc();
    v23 = *(_QWORD *)(a2 + 72);
    v44 = 0;
    if ( v23 )
    {
      v44 = (void *)qalloc_or_throw();
      memcpy(v44, *(const void **)(a2 + 64), 8 * v23);
    }
    v24 = 0;
    v25 = 0;
    if ( *(_QWORD *)(a2 + 8) )
    {
      do
      {
        v26 = sub_E2A00(a1, a2, v24++);
        v25 |= v26;
      }
      while ( (unsigned __int64)v24 < *(_QWORD *)(a2 + 8) );
      if ( v25 )
      {
        calc_arglocs();
        if ( *(_QWORD *)(a2 + 8) )
        {
          v27 = 0;
          v28 = 0;
          do
          {
            if ( (get_tinfo_property() & 0xF) == 9 && (unsigned int)compare_arglocs() )
            {
              copy_tinfo_t();
              v29 = *(_QWORD *)(a2 + 8);
              if ( v29 - 1 == v28 )
                goto LABEL_16;
              calc_arglocs();
              if ( (unsigned int)compare_arglocs() )
              {
                if ( !under_debugger )
                  sub_37EA20(52111);
                goto LABEL_45;
              }
            }
            v29 = *(_QWORD *)(a2 + 8);
LABEL_16:
            v28 = ++v27;
          }
          while ( v27 < v29 );
        }
      }
    }
    if ( v44 )
      qfree();
    cleanup_argloc();
    clear_tinfo_t();
    v30 = v42;
    if ( v42 )
    {
      if ( v43 )
      {
        for ( j = 0; j != v43; ++j )
        {
          v32 = (_QWORD *)(v30 + 80 * j);
          clear_tinfo_t();
          if ( v32[5] )
          {
            v32[6] = 0;
            qfree();
          }
          if ( v32[2] )
          {
            v32[3] = 0;
            qfree();
          }
          cleanup_argloc();
          v30 = v42;
        }
      }
      qfree();
    }
  }
  return create_tinfo();
}
