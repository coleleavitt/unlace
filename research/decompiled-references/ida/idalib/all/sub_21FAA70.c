unsigned __int64 __fastcall sub_21FAA70(__int64 a1, char a2)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ecx
  void *v4; // r8
  int v5; // ebx
  size_t v6; // r12
  _QWORD *v7; // rax
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  unsigned __int64 result; // rax
  unsigned int v11; // esi
  unsigned int v12; // ebx
  bool v13; // zf
  unsigned int v14; // ecx

  v2 = *(_DWORD **)a1;
  *(_BYTE *)(a1 + 20) = (8 * (a2 & 1)) | *(_BYTE *)(a1 + 20) & 0xF0 | 2;
  v3 = v2[2] + 64;
  *(_DWORD *)(a1 + 16) = *v2;
  if ( v3 > 0x7F )
  {
    v14 = v3 >> 6;
    v4 = *(void **)(a1 + 8);
    v6 = v14 - 1;
    v5 = v14 << 6;
  }
  else
  {
    v4 = (void *)(a1 + 8);
    v5 = 64;
    v6 = 0;
  }
  v7 = memset(v4, 255, v6 * 8);
  v8 = *(_DWORD **)a1;
  v9 = v7;
  result = 0;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  v12 = v5 - v11;
  if ( v12 <= 0x3F )
  {
    result = 0xFFFFFFFFFFFFFFFFLL >> v12;
    v13 = v8[4] == 1;
    v9[v6] = 0xFFFFFFFFFFFFFFFFLL >> v12;
    if ( !v13 )
      return result;
  }
  else
  {
    v13 = v8[4] == 1;
    v9[v6] = 0;
    if ( !v13 )
      return result;
  }
  if ( v8[5] == 1 && v11 > 1 )
    *v9 &= ~1uLL;
  return result;
}
