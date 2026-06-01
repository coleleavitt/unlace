unsigned __int64 __fastcall sub_16ABB00(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, __m128 a6)
{
  int *v8; // rbx
  __int64 *v9; // rax

  v8 = (int *)(a4 & 0xFFFFFFFFFFFFFFFELL);
  v9 = (__int64 *)sub_1E855F0(a1, a3, *(_QWORD *)((a4 & 0xFFFFFFFFFFFFFFFELL) + 8));
  if ( (*(_BYTE *)(a3 + 720) & 1) != 0 || ((**(_DWORD **)a3 >> 12) & 0x7F) == 0x45 )
    return 1;
  else
    return sub_16AB670(a1, a2, v9, v8, a5, a6);
}
