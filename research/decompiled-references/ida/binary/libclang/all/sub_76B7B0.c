__int64 __fastcall sub_76B7B0(__int64 a1)
{
  int v1; // esi
  char v2; // dl
  unsigned __int16 v3; // cx
  char v4; // r8
  int v5; // edi
  int v6; // ecx
  __int64 result; // rax
  unsigned int v8; // edx

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1F;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = v2 & 0x1F;
  LOBYTE(a1) = (unsigned __int8)v3 > 0xFu;
  v4 = v2 & 4;
  v5 = 16 * a1;
  v6 = 2 * ((v3 >> 1) & 1);
  result = v6 | v1 | v5 | v2 & 1 | (unsigned int)((v2 & 4) != 0 ? 0xC : 0);
  v8 = v6 & 0x1B | v1 & 0x1B | v5 & 0x1B | v2 & 1 | ((v2 & 4) != 0 ? 8 : 0);
  if ( !v4 )
    return v8;
  return result;
}

