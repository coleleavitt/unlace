__int64 __fastcall sub_73FE60(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbp

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 )
  {
    sub_5FF0F0(a2, "[[clang::lifetime_capture_by");
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
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((lifetime_capture_by");
    sub_5FF0F0(a2, &byte_3B9466E);
    v3 = *(_QWORD *)(a1 + 40);
    v4 = v3 + 4LL * *(unsigned int *)(a1 + 36);
    if ( v3 == v4 )
    {
      sub_5FF0F0(a2, &byte_3B9466E);
    }
    else
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
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, ")");
    }
    return sub_5FF0F0(a2, "))");
  }
}

