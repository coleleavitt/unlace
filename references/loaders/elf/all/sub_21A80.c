__int64 __fastcall sub_21A80(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  char v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v2 + 520) != 3 )
    return 1;
  v4 = sub_3BD30(v2 + 80, 12);
  if ( !v4 )
    return 1;
  v5 = sub_3BD50(v2 + 80, v4);
  if ( !v5 )
    return 1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = v7 + 32;
  v9 = *(_BYTE *)(v6 + 617);
  v10 = *(_QWORD *)(v6 + 456) & (v7 + *(_QWORD *)(v5 + 32));
  if ( v10 < v7 + 32 )
    return 1;
  while ( 1 )
  {
    while ( !v9 )
    {
      while ( 1 )
      {
        v12 = v8;
        if ( v10 < v7 + 64 )
          return 1;
        if ( v8 != *(_QWORD *)(v5 + 16) )
          break;
        v7 = v8;
        v8 += 32;
      }
      v13 = v8 + 64;
      v7 = v8 + 32;
      if ( v10 < v8 + 64 )
        return 1;
      if ( v7 == *(_QWORD *)(v5 + 16) )
        goto LABEL_21;
      do
      {
        do
        {
          v12 = v7;
          v13 = v7 + 64;
          v7 += 32;
          if ( v10 < v13 )
            return 1;
        }
        while ( v7 != *(_QWORD *)(v5 + 16) );
LABEL_21:
        v7 = v13;
        if ( v10 < v12 + 96 )
          return 1;
      }
      while ( v13 != *(_QWORD *)(v5 + 16) );
LABEL_13:
      v8 = v7 + 32;
    }
    if ( !(unsigned __int8)equal_bytes(v7, &unk_6DCE0, 255, 32, 1) )
      break;
    auto_mark_range(v7, v7 + 1, 20);
    auto_mark_range(v7, v7 + 1, 30);
    set_name(v7, "resolve_extern_function", 6144);
    if ( v10 < v7 + 64 )
      return 1;
    if ( *(_QWORD *)(v5 + 16) != v8 )
      goto LABEL_10;
LABEL_26:
    v7 = v8;
    v8 += 32;
  }
  if ( v10 < v7 + 64 )
    return 1;
  if ( v8 == *(_QWORD *)(v5 + 16) )
    goto LABEL_26;
LABEL_10:
  v7 = v8;
  while ( 1 )
  {
    sub_21970(a1, v7);
    v11 = v7;
    v7 += 32;
    if ( v10 < v11 + 64 )
      return 1;
    if ( v7 == *(_QWORD *)(v5 + 16) )
      goto LABEL_13;
  }
}
