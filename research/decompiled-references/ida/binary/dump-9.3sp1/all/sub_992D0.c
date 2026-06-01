__int64 __fastcall sub_992D0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rcx
  unsigned int v4; // ebp
  int v5; // r8d
  int v6; // r9d
  __int64 i; // rbx
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rbx

  if ( (*(_BYTE *)(a2 + 5) & 8) == 0 )
  {
    if ( !under_debugger )
      sub_383060(50987);
    BUG();
  }
  v2 = sub_98DA0(a1, a2, a2 + 32);
  v4 = sub_98DA0(a1, a2, a2 + 48) + v2;
  if ( v4 )
  {
    for ( i = *(_QWORD *)(a2 + 16); i; v4 += v9 + v8 )
    {
      while ( (*(_BYTE *)(i + 5) & 8) == 0 )
      {
        i = *(_QWORD *)(i + 16);
        if ( !i )
          goto LABEL_8;
      }
      v8 = sub_98DA0(a1, i, i + 32);
      v9 = sub_98DA0(a1, i, i + 48);
      i = *(_QWORD *)(i + 16);
    }
  }
LABEL_8:
  if ( (unsigned int)sub_99090(a1, a2, (_BYTE *)(a2 + 64), v3, v5, v6) == 1 )
  {
    v14 = *(_QWORD *)(a2 + 8);
    ++v4;
    for ( ; v14; v14 = *(_QWORD *)(v14 + 8) )
    {
      if ( (*(_BYTE *)(v14 + 5) & 8) != 0 )
        v4 += sub_99090(a1, v14, (_BYTE *)(v14 + 64), v10, v11, v12);
    }
  }
  return v4;
}
