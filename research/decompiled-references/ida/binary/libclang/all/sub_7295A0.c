__int64 __fastcall sub_7295A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 )
  {
    sub_5FF0F0(a2, "[[clang::annotate_type");
    sub_5FF0F0(a2, "(");
    v8 = sub_5FF0F0(a2, "\"");
    v9 = sub_722320(v8, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
    sub_5FF0F0(v9, "\"");
    sub_5FF0F0(a2, &byte_3B9466E);
    v10 = *(_QWORD *)(a1 + 56);
    v11 = v10 + 8LL * *(unsigned int *)(a1 + 48);
    while ( v11 != v10 )
    {
      v10 += 8;
      sub_5FF0F0(a2, ", ");
      sub_2623950(a2, *(_QWORD *)(v10 - 8));
    }
  }
  else
  {
    sub_5FF0F0(a2, "[[clang::annotate_type");
    sub_5FF0F0(a2, "(");
    v3 = sub_5FF0F0(a2, "\"");
    v4 = sub_722320(v3, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
    sub_5FF0F0(v4, "\"");
    sub_5FF0F0(a2, &byte_3B9466E);
    v5 = *(_QWORD *)(a1 + 56);
    v6 = v5 + 8LL * *(unsigned int *)(a1 + 48);
    while ( v6 != v5 )
    {
      v5 += 8;
      sub_5FF0F0(a2, ", ");
      sub_2623950(a2, *(_QWORD *)(v5 - 8));
    }
  }
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "]]");
}

