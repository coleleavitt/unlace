__int64 __fastcall sub_76C780(__int64 a1, int a2)
{
  unsigned __int8 v3; // r10
  __int64 v4; // r8
  unsigned __int8 v5; // r9
  _DWORD **v6; // rcx
  _DWORD **i; // rsi
  _DWORD *v8; // rdx
  int v9; // eax
  char v11; // dl
  unsigned __int8 v12; // cl

  v3 = *(_BYTE *)(a1 + 19) & 0x40;
  v4 = 8LL * (*(_WORD *)(a1 + 16) & 0x7FFF);
  v5 = v3 >> 6;
  v6 = (_DWORD **)(a1 + 8LL * (v3 >> 6) + 32);
  for ( i = &v6[(unsigned __int64)v4 / 8]; i != v6; a2 |= (*v8 >> 14) & 0x10 )
    v8 = *v6++;
  if ( v3 )
  {
    v9 = (**(_DWORD **)(a1 + 32) >> 14) & 0x10 | a2;
  }
  else
  {
    v11 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + v4 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    if ( (v11 & 4) != 0 )
      v3 = 12;
    v12 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + v4 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
    v9 = v3 & 0x1F | v12 & 2 | (16 * (v12 > 0xFu)) & 0x1F | v11 & 1 | a2;
  }
  if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) != 0 )
    return (**(_DWORD **)(a1 + 8LL * (v5 + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32) >> 14) & 0x1E
         | (unsigned int)v9;
  else
    return v9 | 0xEu;
}

