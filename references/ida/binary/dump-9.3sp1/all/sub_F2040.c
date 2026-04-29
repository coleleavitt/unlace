__int64 __fastcall sub_F2040(
        _QWORD *a1,
        __int64 a2,
        _DWORD a3,
        _DWORD a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  int v18; // ebp
  char v19; // r13
  char v20; // al
  int v21; // r13d
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 j; // r13
  _QWORD *v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v30; // r14
  __int64 i; // rbp
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r13
  const void *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rax
  void *v39; // rax
  size_t na; // [rsp+0h] [rbp-B8h]
  size_t n; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+10h] [rbp-A8h]
  __int64 v43; // [rsp+18h] [rbp-A0h]
  void *v44; // [rsp+50h] [rbp-68h]

  v11 = *(_BYTE *)(a2 + 88) & 0xF0;
  if ( (*(_BYTE *)(a2 + 88) & 0xF0) == 0xC0 )
    v11 = *(_DWORD *)(a2 + 28);
  if ( v11 <= 0x10 )
    v11 = getinf();
  if ( v11 - 208 > 0x2F )
  {
    if ( !(unsigned __int8)calc_arglocs() )
    {
      if ( !under_debugger )
        sub_383060(51723);
LABEL_45:
      BUG();
    }
    v14 = *(_QWORD *)(a2 + 8);
    v42 = 0;
    v43 = 0;
    if ( v14 )
    {
      v30 = 0;
      v42 = qalloc_or_throw(80 * v14, a2, v12, v13);
      for ( i = v42; ; i = v42 )
      {
        v33 = 80 * v30 + i;
        v34 = *(_QWORD *)a2 + 80 * v30;
        *(_DWORD *)v33 = 0;
        v35 = (const void *)v34;
        copy_argloc();
        *(_QWORD *)(v33 + 16) = 0;
        *(_OWORD *)(v33 + 24) = 0;
        v37 = *(_QWORD *)(v34 + 24);
        if ( v37 )
        {
          na = *(_QWORD *)(v34 + 24);
          v38 = (void *)qalloc_or_throw(na, v34, v36, v37);
          *(_QWORD *)(v33 + 16) = v38;
          *(_QWORD *)(v33 + 32) = na;
          v35 = *(const void **)(v34 + 16);
          memcpy(v38, v35, na);
          *(_QWORD *)(v33 + 24) = na;
        }
        *(_QWORD *)(v33 + 40) = 0;
        *(_OWORD *)(v33 + 48) = 0;
        v32 = *(_QWORD *)(v34 + 48);
        if ( v32 )
        {
          n = *(_QWORD *)(v34 + 48);
          v39 = (void *)qalloc_or_throw(n, (__int64)v35, v36, v32);
          *(_QWORD *)(v33 + 40) = v39;
          *(_QWORD *)(v33 + 56) = n;
          memcpy(v39, *(const void **)(v34 + 40), n);
          *(_QWORD *)(v33 + 48) = n;
        }
        *(_QWORD *)(v33 + 64) = 0;
        copy_tinfo_t();
        ++v30;
        *(_DWORD *)(v33 + 72) = *(_DWORD *)(v34 + 72);
        if ( v14 == v30 )
          break;
      }
      v43 = v14;
    }
    copy_tinfo_t();
    copy_argloc();
    v17 = *(_QWORD *)(a2 + 72);
    v44 = nullptr;
    if ( v17 )
    {
      v44 = (void *)qalloc_or_throw(8 * v17, a2 + 40, v15, v16);
      memcpy(v44, *(const void **)(a2 + 64), 8 * v17);
    }
    v18 = 0;
    v19 = 0;
    if ( *(_QWORD *)(a2 + 8) )
    {
      do
      {
        v20 = sub_F1880(a1, a2, v18++);
        v19 |= v20;
      }
      while ( (unsigned __int64)v18 < *(_QWORD *)(a2 + 8) );
      if ( v19 )
      {
        calc_arglocs();
        if ( *(_QWORD *)(a2 + 8) )
        {
          v21 = 0;
          v22 = 0;
          do
          {
            if ( (get_tinfo_property() & 0xF) == 9 && (unsigned int)compare_arglocs() )
            {
              copy_tinfo_t();
              v23 = *(_QWORD *)(a2 + 8);
              if ( v23 - 1 == v22 )
                goto LABEL_16;
              calc_arglocs();
              if ( (unsigned int)compare_arglocs() )
              {
                if ( !under_debugger )
                  sub_383060(52111);
                goto LABEL_45;
              }
            }
            v23 = *(_QWORD *)(a2 + 8);
LABEL_16:
            v22 = ++v21;
          }
          while ( v21 < v23 );
        }
      }
    }
    if ( v44 )
      qfree((__int64)v44);
    cleanup_argloc();
    clear_tinfo_t();
    v24 = v42;
    if ( v42 )
    {
      if ( v43 )
      {
        for ( j = 0; j != v43; ++j )
        {
          v26 = (_QWORD *)(v24 + 80 * j);
          clear_tinfo_t();
          v27 = v26[5];
          if ( v27 )
          {
            v26[6] = 0;
            qfree(v27);
          }
          v28 = v26[2];
          if ( v28 )
          {
            v26[3] = 0;
            qfree(v28);
          }
          cleanup_argloc();
          v24 = v42;
        }
      }
      qfree(v24);
    }
  }
  return create_tinfo();
}
