char __fastcall sub_1BCC890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  char result; // al
  unsigned __int8 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax

  v7 = a3;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0
    || (v11 = a4, v12 = sub_C1D490(a2, a2, a3, a4), (v13 = sub_F57E80(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL))) == 0)
    || (*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
    || (*(_BYTE *)(v13 + 17) & 4) != 0
    || (result = sub_1D3EC30(a1, a2, v7, v11)) == 0 )
  {
    v8 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD *)v8;
    if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) != 26 )
      v9 = sub_F63050(v9, a2, a3, a4);
    result = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0 && ((*(_BYTE *)(v9 + 19) >> 1) & 0xFu) - 9 <= 1 )
      return sub_18B0530(a1, v7, v9, a5, a6) == 0;
  }
  return result;
}
