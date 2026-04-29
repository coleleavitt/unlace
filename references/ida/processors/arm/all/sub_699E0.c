__int64 __fastcall sub_699E0(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r12

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(v4 + 41) = 1;
  v6 = (v5 >> 20) & 1;
  *(_BYTE *)(v4 + 45) = 8;
  *(_WORD *)(v4 + 46) = ((unsigned __int16)v5 >> 13) + 45;
  sub_69930(a1, *(_QWORD *)(a1 + 8) + 80LL, a2, v3);
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DBF0[4 * v6 + v3];
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
