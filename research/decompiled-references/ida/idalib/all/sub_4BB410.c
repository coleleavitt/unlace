unsigned __int64 __fastcall sub_4BB410(__int64 a1)
{
  int v1; // edx
  __int64 place_class; // rbx
  __int64 v3; // rax
  int v4; // r13d
  unsigned int i; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // r8
  const char *v13; // rcx
  unsigned int v15; // [rsp+Ch] [rbp-7Ch] BYREF
  __int128 v16; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v1 = *(_DWORD *)(a1 + 48);
  v16 = 0;
  v17 = 0;
  v18 = -1;
  v19 = 0;
  ptr = nullptr;
  place_class = get_place_class(nullptr, nullptr, v1);
  if ( place_class )
    ptr = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
  v3 = sub_55C400(qword_2CCB598);
  v4 = bookmarks_t_size((__int64)&v16, v3, 0.0);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        v15 = i;
        v6 = sub_55C400(qword_2CCB598);
        if ( (unsigned __int8)bookmarks_t_get(&v16, 0, &v15, v6) )
          break;
        if ( v4 == ++i )
          goto LABEL_8;
      }
      v7 = sub_55C400(qword_2CCB598);
      bookmarks_t_erase((__int64)&v16, v15, v7);
    }
  }
LABEL_8:
  v8 = *(__int64 **)(a1 + 40);
  v9 = *v8;
  v10 = *v8 + 96 * v8[1];
  if ( v10 != *v8 )
  {
    v11 = 0;
    do
    {
      while ( !*(_DWORD *)(v9 + 80) )
      {
        v9 += 96;
        if ( v9 == v10 )
          goto LABEL_15;
      }
      v12 = sub_55C400(qword_2CCB598);
      v13 = haystack;
      if ( *(_QWORD *)(v9 + 56) )
        v13 = *(const char **)(v9 + 48);
      bookmarks_t_mark(v9, v11, 0, v13, v12);
      v9 += 96;
      ++v11;
    }
    while ( v9 != v10 );
  }
LABEL_15:
  if ( ptr )
    qfree(ptr);
  return v21 - __readfsqword(0x28u);
}
