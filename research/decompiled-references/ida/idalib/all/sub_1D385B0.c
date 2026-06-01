__int64 __fastcall sub_1D385B0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned int v4; // edx
  unsigned __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 24) != (*(_WORD *)(a2 + 20) & 0x7FFF) )
    return 1;
  v3 = *(unsigned __int64 **)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 22);
  v5 = *v3;
  if ( (*v3 & 1) != 0 )
    *v3 = 2 * ((v5 >> 58 << 57) | ~(-1LL << (v5 >> 58)) & (~(-1LL << (v5 >> 58)) & (v5 >> 1) | (1LL << v4))) + 1;
  else
    *(_QWORD *)(*(_QWORD *)v5 + 8LL * (v4 >> 6)) |= 1LL << *(_WORD *)(a2 + 22);
  return 1;
}
