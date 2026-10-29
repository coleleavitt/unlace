__int64 __fastcall sub_743600(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int *v5; // rsi
  void *v6; // rdi
  size_t v7; // r12
  const void *v8; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((ns_error_domain");
  sub_5FF0F0(a2, "(");
  v3 = sub_5FF0F0(a2, &byte_3B9466E);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *(unsigned int **)(v4 + 16);
    v6 = *(void **)(v3 + 32);
    v7 = *v5;
    v8 = v5 + 4;
    if ( *(_QWORD *)(v3 + 24) - (_QWORD)v6 < v7 )
    {
      v3 = sub_26240F0(v3, v8, v7);
    }
    else if ( v7 )
    {
      memcpy(v6, v8, v7);
      *(_QWORD *)(v3 + 32) += v7;
    }
  }
  sub_5FF0F0(v3, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

