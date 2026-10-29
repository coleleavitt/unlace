__int64 __fastcall sub_7A9010(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v3; // rbp
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 136);
  if ( v1 == -1 )
  {
    v3 = *(__int64 **)(a1 + 144);
    v4 = v3[1];
    *(_QWORD *)(a1 + 136) = v4;
    v5 = v4 + 1;
    v6 = *v3;
    if ( v3[2] < v5 )
    {
      v9 = qvector_reserve(v3, v6, v5, 268);
      *v3 = v9;
      v6 = v9;
    }
    v7 = v6 + 268 * v3[1];
    v8 = v6 + 268 * *((_DWORD *)v3 + 2);
    *(_QWORD *)v7 = 0;
    *(_QWORD *)(v7 + 124) = 0;
    memset((void *)((v7 + 8) & 0xFFFFFFFFFFFFFFF8LL), 0, 8LL * ((v8 - (((_DWORD)v7 + 8) & 0xFFFFFFF8) + 132) >> 3));
    *(_QWORD *)(v7 + 132) = 0;
    *(_QWORD *)(v7 + 256) = 0;
    memset(
      (void *)((v7 + 140) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v7 - (((_DWORD)v7 + 140) & 0xFFFFFFF8) + 264) >> 3));
    *(_WORD *)(v7 + 264) = 0;
    ++v3[1];
    v1 = *(_QWORD *)(a1 + 136);
  }
  return **(_QWORD **)(a1 + 144) + 268 * v1;
}
