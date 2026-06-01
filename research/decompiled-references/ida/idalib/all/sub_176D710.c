__int64 __fastcall sub_176D710(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v3; // rbx
  void **v4; // rax
  void **v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned int v10; // eax

  v3 = (void **)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL);
  v4 = sub_176A140(a1, v3, a3);
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v6 == 1 )
    return 1;
  v7 = *a1;
  v8 = *(_QWORD *)(a2 + 32);
  v9 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(v7 + 12632) && v5 == v3 && v8 == v9 )
    return sub_19A3E40(v7, a2);
  v10 = sub_EEC140(v8);
  return sub_18D9980(v7, *(unsigned int *)(a2 + 16), v5, v10, v9);
}
