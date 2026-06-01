__int64 __fastcall functions_dirtree_widget_t__::vfunc_5(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int8 **v9; // rdx
  bool v10; // al
  unsigned __int8 *v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rbp
  size_t v19; // r15
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  char *s; // [rsp+0h] [rbp-58h]
  char *sa; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  bool v30; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v2 = *(_WORD *)(a2 + 8);
  v31 = __readfsqword(0x28u);
  if ( v2 != 2004 )
  {
    if ( v2 != 2005 )
      return bookmarks_dirtree_widget_t__::vfunc_5(a1, a2);
    v5 = *(__int64 **)(a2 + 16);
    s = "off";
    if ( *(_BYTE *)(a1 + 2496) )
      s = (char *)"on";
    v6 = v5[1];
    if ( !v6 )
      goto LABEL_29;
    v7 = *v5;
    v8 = 0;
    while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "func_sync") )
    {
      ++v8;
      v7 += 40;
      if ( v6 == v8 )
        goto LABEL_29;
    }
    if ( *(_DWORD *)(v7 + 24) == 2 )
    {
      v9 = *(unsigned __int8 ***)(v7 + 32);
      v10 = 0;
      if ( !v9[1] )
        goto LABEL_32;
      v11 = *v9;
      v12 = *v11 - 111;
      if ( *v11 == 111 )
      {
        v12 = v11[1] - 110;
        if ( v11[1] == 110 )
          v12 = v11[2];
      }
    }
    else
    {
LABEL_29:
      v12 = *(_WORD *)s != 28271 || s[2];
    }
    v10 = v12 == 0;
LABEL_32:
    *(_BYTE *)(a1 + 2496) = v10;
    v30 = v10;
    v23 = sub_5313F0(unk_8CA9C0);
    if ( v23 )
      sub_537630(v23, 7, &v30);
    return bookmarks_dirtree_widget_t__::vfunc_5(a1, a2);
  }
  sa = "off";
  if ( *(_BYTE *)(a1 + 2496) )
    sa = (char *)"on";
  v13 = *(_QWORD *)(a2 + 24);
  v29 = *(_QWORD *)(a2 + 16);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a2 + 16);
    v15 = 0;
    while ( !*(_QWORD *)(v14 + 8) || strcmp(*(const char **)v14, "func_sync") )
    {
      ++v15;
      v14 += 40;
      if ( v13 == v15 )
        goto LABEL_36;
    }
  }
  else
  {
LABEL_36:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v13 + 1) )
    {
      v25 = qvector_reserve(a2 + 16, v29, v13 + 1, 40);
      v13 = *(_QWORD *)(a2 + 24);
      v29 = v25;
      *(_QWORD *)(a2 + 16) = v25;
    }
    v14 = v29 + 40 * v13;
    *(_QWORD *)v14 = 0;
    *(_OWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v24 = *(char **)v14;
    if ( *(_QWORD *)(v14 + 16) <= 9u )
    {
      v26 = qvector_reserve(v14, v24, 10, 1);
      *(_QWORD *)v14 = v26;
      v24 = (char *)v26;
    }
    *(_QWORD *)(v14 + 8) = 10;
    *(_QWORD *)v24 = 0x6E79735F636E7566LL;
    v24[8] = 99;
    *(_BYTE *)(*(_QWORD *)v14 + 9LL) = 0;
  }
  v16 = v14 + 24;
  v17 = operator new(0x18u);
  *(_QWORD *)v17 = 0;
  v18 = (__int64 *)v17;
  *(_OWORD *)(v17 + 8) = 0;
  v19 = strlen(sa);
  v20 = qvector_reserve(v18, 0, v19 + 1, 1);
  *v18 = v20;
  v18[1] = v19 + 1;
  if ( (_DWORD)v19 )
  {
    v21 = 0;
    do
    {
      v22 = v21++;
      *(_BYTE *)(v20 + v22) = sa[v22];
    }
    while ( v21 < (unsigned int)v19 );
  }
  *(_BYTE *)(*v18 + v19) = 0;
  if ( *(_DWORD *)v16 )
    jvalue_t_clear(v16);
  *(_DWORD *)v16 = 2;
  *(_QWORD *)(v16 + 8) = v18;
  return bookmarks_dirtree_widget_t__::vfunc_5(a1, a2);
}
