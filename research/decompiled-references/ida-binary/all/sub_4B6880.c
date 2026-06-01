unsigned __int64 __fastcall apply_tree_layout(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  const char *v8; // rsi
  __int64 v9; // rbp
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  __int128 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v3 = a3[1];
  if ( v3 )
  {
    v4 = *a3;
    v6 = 0;
    v7 = *a3;
    while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "partitions") )
    {
      ++v6;
      v7 += 40;
      if ( v3 == v6 )
        goto LABEL_13;
    }
    if ( *(_DWORD *)(v7 + 24) == 4 )
    {
      v8 = *(const char **)(v7 + 32);
      v12 = 0;
      v13 = 0;
      if ( (unsigned __int8)sub_518DE0(&v12, v8) )
      {
        v8 = (const char *)&v12;
        sub_51B6E0(*(QT::QSplitter **)(a2 + 104));
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12, v8);
      }
      v3 = a3[1];
      if ( !v3 )
        return v14 - __readfsqword(0x28u);
      v4 = *a3;
    }
LABEL_13:
    v9 = 0;
    while ( !*(_QWORD *)(v4 + 8) || strcmp(*(const char **)v4, "hide_handles") )
    {
      ++v9;
      v4 += 40;
      if ( v3 == v9 )
        return v14 - __readfsqword(0x28u);
    }
    if ( *(_DWORD *)(v4 + 24) == 5 )
      return QT::QSplitter::setHandleWidth(*(QT::QSplitter **)(a2 + 104), 0);
  }
  return v14 - __readfsqword(0x28u);
}
