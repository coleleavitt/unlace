void __fastcall sub_69930(__int64 a1, __int64 a2, __int16 a3, char a4)
{
  int v4; // r12d
  int v6; // r14d
  __int64 v7; // rsi

  v4 = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a2 + 1) = 4;
  *(_WORD *)(a2 + 6) = a3;
  v6 = v4 >> 21;
  *(_QWORD *)(a2 + 16) = (v4 & 0x7F) << a4;
  *(_BYTE *)(a2 + 5) = get_dtype_by_size();
  if ( (v4 & 0x800000) == 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) |= 0x10u;
  v7 = *(_QWORD *)(a1 + 8);
  if ( ((unsigned __int8)v6 & HIBYTE(v4) & 1) != 0 )
  {
    *(_DWORD *)(v7 + 28) |= 0x20u;
    v7 = *(_QWORD *)(a1 + 8);
  }
  else if ( ((unsigned __int8)v6 & (unsigned __int8)~HIBYTE(v4) & 1) != 0 )
  {
    *(_DWORD *)(v7 + 28) |= 0x80u;
    v7 = *(_QWORD *)(a1 + 8);
  }
  sub_1E470(*(_QWORD *)a1, v7, a2, 1);
}
