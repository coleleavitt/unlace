__int64 __fastcall sub_76B520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // dl
  unsigned __int16 v6; // cx
  __int64 result; // rax
  unsigned int v8; // edx

  v5 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v6 = v5 & 0x1F;
  LOBYTE(a5) = (unsigned __int8)v6 > 0xFu;
  result = (2 * ((v6 >> 1) & 1))
         | (**(_DWORD **)(a1 + 16) >> 14) & 0x1F
         | (16 * a5)
         | v5 & 1
         | (unsigned int)((v5 & 4) != 0 ? 0xC : 0);
  v8 = (2 * ((v5 & 2) != 0)) & 0x1B
     | (**(_DWORD **)(a1 + 16) >> 14) & 0x1B
     | (16 * ((v5 & 0x1Fu) > 0xF)) & 0x1B
     | v5 & 1
     | ((v5 & 4) != 0 ? 8 : 0);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    return v8;
  return result;
}

