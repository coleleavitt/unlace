__int64 __fastcall sub_82F20(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  bool v9; // zf
  __int64 v11; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  v5 = v3[14];
  v6 = v3[13];
  if ( v3[15] < (unsigned __int64)(v5 + 1) )
  {
    v11 = qvector_reserve(v3 + 13, v6, v5 + 1, 120);
    v5 = v3[14];
    v3[13] = v11;
    v6 = v11;
  }
  v7 = v6 + 120 * v5;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 112) = 0;
  memset(
    (void *)((v7 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v7 - (((_DWORD)v7 + 8) & 0xFFFFFFF8) + 120) >> 3));
  ++v3[14];
  *(_QWORD *)v7 = *(unsigned int *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 48) = *(int *)(a2 + 20);
  sub_82D80(v7 + 16, (__int64 *)a2, v4);
  v9 = *(_QWORD *)(v7 + 24) == 0;
  *(_OWORD *)(v7 + 56) = 0;
  if ( !v9 && !strncmp(*(const char **)(v7 + 16), ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
