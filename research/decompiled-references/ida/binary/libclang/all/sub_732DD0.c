__int64 __fastcall sub_732DD0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rbp

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 == 1 )
  {
    sub_5FF0F0(a2, "[[clang::callback");
    sub_5FF0F0(a2, &byte_3B9466E);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = v10 + 4LL * *(unsigned int *)(a1 + 36);
    if ( v10 != v11 )
    {
      v12 = v10 + 4;
      sub_5FF0F0(a2, "(");
      sub_26238C0(a2, *(int *)(v12 - 4));
      while ( v11 != v12 )
      {
        v12 += 4;
        sub_5FF0F0(a2, ", ");
        sub_26238C0(a2, *(int *)(v12 - 4));
      }
      goto LABEL_8;
    }
LABEL_20:
    sub_5FF0F0(a2, &byte_3B9466E);
    return sub_5FF0F0(a2, "]]");
  }
  if ( v2 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::callback");
    sub_5FF0F0(a2, &byte_3B9466E);
    v3 = *(_QWORD *)(a1 + 40);
    v4 = v3 + 4LL * *(unsigned int *)(a1 + 36);
    if ( v3 != v4 )
    {
      v5 = v3 + 4;
      sub_5FF0F0(a2, "(");
      sub_26238C0(a2, *(int *)(v5 - 4));
      while ( v4 != v5 )
      {
        v5 += 4;
        sub_5FF0F0(a2, ", ");
        sub_26238C0(a2, *(int *)(v5 - 4));
      }
LABEL_8:
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, "]]");
    }
    goto LABEL_20;
  }
  sub_5FF0F0(a2, "__attribute__((callback");
  sub_5FF0F0(a2, &byte_3B9466E);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = v7 + 4LL * *(unsigned int *)(a1 + 36);
  if ( v7 == v8 )
  {
    sub_5FF0F0(a2, &byte_3B9466E);
  }
  else
  {
    v9 = v7 + 4;
    sub_5FF0F0(a2, "(");
    sub_26238C0(a2, *(int *)(v9 - 4));
    while ( v8 != v9 )
    {
      v9 += 4;
      sub_5FF0F0(a2, ", ");
      sub_26238C0(a2, *(int *)(v9 - 4));
    }
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
  }
  return sub_5FF0F0(a2, "))");
}

