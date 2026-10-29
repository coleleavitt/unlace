unsigned __int64 __fastcall sub_1D38400(__int64 a1)
{
  char v1; // cl
  __int64 v2; // r9
  char v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 19);
  v2 = 8LL * *(unsigned __int16 *)(a1 + 22) + 48;
  v3 = BYTE3(*(_QWORD *)(a1 + 16));
  v4 = (v3 & 0x40) != 0;
  v5 = (a1 + v2 + ((v3 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 0x40) != 0 )
    v4 += (*(_BYTE *)(((a1 + v2 + ((v1 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
  result = v5 + 8 * v4;
  if ( (((unsigned __int8)v1 >> 1) & 0xF) == 2 )
    return v5 + 8 * ((*(_WORD *)((a1 + v2 + ((v1 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v4);
  return result;
}
