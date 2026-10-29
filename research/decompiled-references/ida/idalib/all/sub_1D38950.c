__int64 __fastcall sub_1D38950(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // cx

  v2 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x2F && *(_DWORD *)(a1 + 24) == (*(_DWORD *)(v2 + 68) & 0xFFFFF) )
  {
    v4 = *(unsigned __int64 **)(a1 + 16);
    v5 = *v4;
    v6 = *(_WORD *)(v2 + 70) >> 4;
    if ( (*v4 & 1) != 0 )
      *v4 = 2 * ((v5 >> 58 << 57) | ~(-1LL << (v5 >> 58)) & (~(-1LL << (v5 >> 58)) & (v5 >> 1) | (1LL << v6))) + 1;
    else
      *(_QWORD *)(*(_QWORD *)v5 + 8LL * (v6 >> 6)) |= 1LL << v6;
  }
  return 1;
}
