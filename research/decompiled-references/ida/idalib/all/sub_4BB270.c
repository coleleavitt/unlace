unsigned __int64 __fastcall sub_4BB270(__int64 a1)
{
  int v1; // edx
  __int64 place_class; // rbx
  int v3; // r12d
  unsigned int i; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  const char *v9; // rcx
  unsigned int v11; // [rsp+Ch] [rbp-6Ch] BYREF
  __int128 v12; // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  void *ptr; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v1 = *(_DWORD *)(a1 + 48);
  v12 = 0;
  v13 = 0;
  v14 = -1;
  v15 = 0;
  ptr = nullptr;
  place_class = get_place_class(nullptr, nullptr, v1);
  if ( place_class )
    ptr = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
  v3 = bookmarks_t_size((__int64)&v12, 0, 0.0);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      while ( 1 )
      {
        v11 = i;
        if ( (unsigned __int8)bookmarks_t_get(&v12, 0, &v11, 0) )
          break;
        if ( v3 == ++i )
          goto LABEL_8;
      }
      bookmarks_t_erase((__int64)&v12, v11, 0);
    }
  }
LABEL_8:
  v5 = *(_QWORD **)(a1 + 40);
  v6 = (_QWORD *)*v5;
  v7 = *v5 + 88LL * v5[1];
  if ( v7 != *v5 )
  {
    v8 = 0;
    do
    {
      if ( v6[9] != -1 )
      {
        v9 = haystack;
        if ( v6[7] )
          v9 = (const char *)v6[6];
        bookmarks_t_mark(v6, v8, 0, v9, 0);
        v8 = (unsigned int)(v8 + 1);
      }
      v6 += 11;
    }
    while ( (_QWORD *)v7 != v6 );
  }
  if ( ptr )
    qfree(ptr);
  return v17 - __readfsqword(0x28u);
}
