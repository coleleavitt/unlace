__int64 __fastcall sub_1D389E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 *v5; // rdi
  unsigned __int16 v6; // cx
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // cx
  __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  v9 = a2;
  v3 = sub_F22BD0(&v9, 0);
  if ( v3 && (*(_BYTE *)(v3 + 28) & 0x7F) == 0x44 && *(_DWORD *)(a1 + 24) == (*(_DWORD *)(v3 + 64) & 0xFFFFF) )
  {
    v5 = *(unsigned __int64 **)(a1 + 16);
    v6 = *(_WORD *)(v3 + 66);
    v7 = *v5;
    v8 = v6 >> 4;
    if ( (*v5 & 1) != 0 )
      *v5 = 2 * ((v7 >> 58 << 57) | ~(-1LL << (v7 >> 58)) & (~(-1LL << (v7 >> 58)) & (v7 >> 1) | (1LL << v8))) + 1;
    else
      *(_QWORD *)(*(_QWORD *)v7 + 8LL * (v8 >> 6)) |= 1LL << v8;
  }
  sub_BC8830(a1, v9);
  return 1;
}
