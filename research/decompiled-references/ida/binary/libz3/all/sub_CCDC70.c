void (*__fastcall sub_CCDC70(__int64 a1, __int64 a2))()
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // rdi
  void (*result)(); // rax

  v2 = a1 + 24;
  sub_1863170(a1 + 24, a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v5 = a1 + 24;
  v6 = (unsigned __int64)v4 << 20;
  v7 = v4 == -1;
  v8 = -1;
  if ( !v7 )
    v8 = v6;
  *(_QWORD *)(v3 + 624) = v8;
  *(_DWORD *)(v3 + 636) = sub_1859960(v5, "max_steps", 0xFFFFFFFFLL);
  *(_DWORD *)(v3 + 632) = sub_1859960(v2, "max_depth", 1024);
  v9 = sub_1859610(v2, "bail_on_blowup", 0);
  v10 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(v3 + 640) = v9;
  result = *(void (**)())(*(_QWORD *)v10 + 64LL);
  if ( result != nullsub_366 )
    return (void (*)())((__int64 (__fastcall *)(__int64, __int64))result)(v10, v2);
  return result;
}

