__int64 __fastcall sub_B122D0(__int64 a1, const void *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // eax
  void *v8; // rax

  v6 = sub_99FDF0((__int64 *)(a1 + 2352), 56, 3u);
  *(_OWORD *)v6 = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = a4;
  *(_BYTE *)(v6 + 35) &= 0xFCu;
  v7 = *(_DWORD *)(v6 + 32);
  *(_BYTE *)(v6 + 38) &= 0xE0u;
  *(_DWORD *)(v6 + 40) = a3;
  *(_DWORD *)(v6 + 32) = v7 & 0xFF000000 | 0x101A2;
  *(_WORD *)(v6 + 36) = 85;
  v8 = (void *)sub_99FDF0((__int64 *)(a1 + 2352), (unsigned int)a3, 0);
  *(_QWORD *)(v6 + 48) = v8;
  if ( a3 )
    memcpy(v8, a2, *(unsigned int *)(v6 + 40));
  if ( (*(_BYTE *)(v6 + 34) & 0xF0) != 0xF0 || *(_QWORD *)v6 )
    return v6;
  *(_BYTE *)(v6 + 34) &= 0xFu;
  return v6;
}

