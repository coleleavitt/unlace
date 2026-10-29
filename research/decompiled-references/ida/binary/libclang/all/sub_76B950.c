__int64 __fastcall sub_76B950(__int64 a1, int a2)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  __int64 result; // rax
  unsigned int v5; // edx

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a2) = (unsigned __int8)v2 > 0xFu;
  v3 = 16 * a2;
  result = (2 * ((v2 >> 1) & 1))
         | v3
         | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  v5 = (2 * ((v2 >> 1) & 1))
     | v3
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
     | 4;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    return v5;
  return result;
}

