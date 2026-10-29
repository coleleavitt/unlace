__int64 __fastcall sub_748480(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // r12
  void *v6; // rdi
  unsigned __int64 v7; // r13
  const void *v8; // rsi
  __int64 v10; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "[[omp::assume");
  sub_5FF0F0(a2, "(");
  v4 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v4 )
  {
    v10 = sub_26240F0(a2, "\"", 1);
    v6 = *(void **)(v10 + 32);
    v5 = v10;
  }
  else
  {
    *v4 = 34;
    v5 = a2;
    v6 = (void *)(*(_QWORD *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 32) = v6;
  }
  v7 = *(unsigned int *)(a1 + 36);
  v8 = *(const void **)(a1 + 40);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 < v7 )
  {
    v5 = sub_26240F0(v5, v8, *(unsigned int *)(a1 + 36));
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    memcpy(v6, v8, *(unsigned int *)(a1 + 36));
    *(_QWORD *)(v5 + 32) += v7;
  }
  sub_5FF0F0(v5, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "]]");
}

