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
  char v11; // al
  char v13; // dl
  unsigned int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // ebp
  char v19; // r13
  bool v20; // zf
  char v21; // al
  int v22; // r13d
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rdi
  __int64 j; // r13
  _QWORD *v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v33; // r14
  __int64 i; // rbp
  __int64 v35; // rbp
  __int64 v36; // r13
  void *v37; // rax
  void *v38; // rax
  void *v39; // rax
  const void *v40; // rsi
  size_t na; // [rsp+0h] [rbp-B8h]
  size_t n; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-A8h]
  __int64 v44; // [rsp+18h] [rbp-A0h]
  __int64 v45; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v46[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v47; // [rsp+48h] [rbp-70h]
  void *v48; // [rsp+50h] [rbp-68h]
  __int128 v49; // [rsp+58h] [rbp-60h]
  char v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v11 = *(_BYTE *)(a2 + 88);
  v51 = __readfsqword(0x28u);
  v13 = v11;
  v14 = v11 & 0xF0;
  if ( (v13 & 0xF0) == 0xC0 )
    v14 = *(_DWORD *)(a2 + 28);
  if ( v14 <= 0x10 )
    v14 = getinf(99);
  if ( v14 - 208 > 0x2F )
  {
    if ( !(unsigned __int8)calc_arglocs(a2) )
    {
      if ( !under_debugger )
        sub_383060(51723);
LABEL_45:
      BUG();
    }
    v15 = *(_QWORD *)(a2 + 8);
    v43 = 0;
    v44 = 0;
    if ( v15 )
    {
      v33 = 0;
      v43 = qalloc_or_throw(80 * v15);
      for ( i = v43; ; i = v43 )
      {
        v35 = 80 * v33 + i;
        v36 = *(_QWORD *)a2 + 80 * v33;
        *(_DWORD *)v35 = 0;
        copy_argloc(v35, v36);
        *(_QWORD *)(v35 + 16) = 0;
        *(_OWORD *)(v35 + 24) = 0;
        if ( *(_QWORD *)(v36 + 24) )
        {
          na = *(_QWORD *)(v36 + 24);
          v37 = (void *)qalloc_or_throw(na);
          *(_QWORD *)(v35 + 16) = v37;
          *(_QWORD *)(v35 + 32) = na;
          memcpy(v37, *(const void **)(v36 + 16), na);
          *(_QWORD *)(v35 + 24) = na;
        }
        *(_QWORD *)(v35 + 40) = 0;
        *(_OWORD *)(v35 + 48) = 0;
        if ( *(_QWORD *)(v36 + 48) )
        {
          n = *(_QWORD *)(v36 + 48);
          v38 = (void *)qalloc_or_throw(n);
          *(_QWORD *)(v35 + 40) = v38;
          *(_QWORD *)(v35 + 56) = n;
          memcpy(v38, *(const void **)(v36 + 40), n);
          *(_QWORD *)(v35 + 48) = n;
        }
        *(_QWORD *)(v35 + 64) = 0;
        copy_tinfo_t(v35 + 64, v36 + 64);
        ++v33;
        *(_DWORD *)(v35 + 72) = *(_DWORD *)(v36 + 72);
        if ( v15 == v33 )
          break;
      }
      v44 = v15;
    }
    v45 = 0;
    copy_tinfo_t(&v45, a2 + 32);
    v46[0] = 0;
    copy_argloc(v46, a2 + 40);
    v16 = *(_QWORD *)(a2 + 56);
    v17 = *(_QWORD *)(a2 + 72);
    v48 = nullptr;
    v49 = 0;
    v47 = v16;
    if ( v17 )
    {
      v39 = (void *)qalloc_or_throw(8 * v17);
      v40 = *(const void **)(a2 + 64);
      v48 = v39;
      *((_QWORD *)&v49 + 1) = v17;
      memcpy(v39, v40, 8 * v17);
      *(_QWORD *)&v49 = v17;
    }
    v18 = 0;
    v19 = 0;
    v20 = *(_QWORD *)(a2 + 8) == 0;
    v50 = *(_BYTE *)(a2 + 88);
    if ( !v20 )
    {
      do
      {
        v21 = sub_F1880(a1, a2, v18++);
        v19 |= v21;
      }
      while ( (unsigned __int64)v18 < *(_QWORD *)(a2 + 8) );
      if ( v19 )
      {
        calc_arglocs(a2);
        if ( *(_QWORD *)(a2 + 8) )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            v25 = 80 * v23;
            v26 = 80 * v23 + *(_QWORD *)a2;
            if ( (get_tinfo_property(*(_QWORD *)(v26 + 64), 2) & 0xF) == 9
              && (unsigned int)compare_arglocs(v26, v25 + v43) )
            {
              copy_tinfo_t(v26 + 64, v25 + v43 + 64);
              v24 = *(_QWORD *)(a2 + 8);
              if ( v24 - 1 == v23 )
                goto LABEL_16;
              calc_arglocs(a2);
              if ( (unsigned int)compare_arglocs(v26, v25 + v43) )
              {
                if ( !under_debugger )
                  sub_383060(52111);
                goto LABEL_45;
              }
            }
            v24 = *(_QWORD *)(a2 + 8);
LABEL_16:
            v23 = ++v22;
          }
          while ( v22 < v24 );
        }
      }
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    cleanup_argloc(v46);
    clear_tinfo_t(&v45);
    v27 = v43;
    if ( v43 )
    {
      if ( v44 )
      {
        for ( j = 0; j != v44; ++j )
        {
          v29 = (_QWORD *)(v27 + 80 * j);
          clear_tinfo_t(v29 + 8);
          v30 = v29[5];
          if ( v30 )
          {
            v29[6] = 0;
            qfree(v30);
          }
          v31 = v29[2];
          if ( v31 )
          {
            v29[3] = 0;
            qfree(v31);
          }
          cleanup_argloc(v29);
          v27 = v43;
        }
      }
      qfree(v27);
    }
  }
  return create_tinfo(a1 + 37, 12, 12, a2);
}
