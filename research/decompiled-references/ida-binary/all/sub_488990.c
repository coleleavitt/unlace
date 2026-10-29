__int64 __fastcall base_dirtree_widget_t::restore_buckets(_QWORD *a1, const char *a2, __int64 a3, _QWORD *a4)
{
  __int64 *v6; // rsi
  __int64 v7; // rbx
  char *v8; // r14
  __int64 v9; // rax
  __int64 v11; // rdi
  const char *v12; // rdi
  _QWORD *v13; // rbp
  const char *v14; // rsi
  const char **v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  char *v19; // r15
  char *s2; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v6 = (__int64 *)a1[4];
  if ( (~*((_BYTE *)v6 + 112) & 0x30) != 0 )
  {
    v7 = *v6;
    v8 = nullptr;
    if ( !(40 * v6[1]) )
      return 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 24);
      if ( v9 == *a4 )
      {
        if ( v9 )
          break;
      }
      v7 += 40;
      if ( v7 == *v6 + 40 * v6[1] )
        return 0;
    }
    goto LABEL_7;
  }
  v15 = (const char **)a1[3];
  s2 = nullptr;
  v21 = 0;
  v14 = *v15;
  dirtree_get_abspath_by_cursor(&s2, *v15, a3, 0);
  v16 = (__int64 *)a1[4];
  v8 = s2;
  v7 = *v16;
  v17 = 40 * v16[1];
  v18 = v7 + v17;
  if ( v17 )
  {
    v19 = (char *)&s1;
    if ( (_QWORD)v21 )
      v19 = s2;
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 8) > 1u )
      {
        v14 = v19;
        if ( !strcmp(*(const char **)v7, v19) )
          break;
      }
      v7 += 40;
      if ( v7 == v18 )
        goto LABEL_12;
    }
LABEL_7:
    v11 = a1[5];
    if ( *(_BYTE *)(v7 + 32) )
      QT::QTreeView::expand(v11, a2);
    else
      QT::QTreeView::collapse(v11, a2);
    v12 = *(const char **)v7;
    v13 = (_QWORD *)a1[4];
    if ( *(_QWORD *)v7 )
    {
      *(_QWORD *)(v7 + 8) = 0;
      qfree(v12, a2);
    }
    v14 = (const char *)(v7 + 40);
    memmove((void *)v7, (const void *)(v7 + 40), *v13 + 40LL * v13[1]-- - v7 - 40);
  }
LABEL_12:
  if ( v8 )
    qfree(v8, v14);
  return 0;
}
