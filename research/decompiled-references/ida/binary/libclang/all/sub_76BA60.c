__int64 __fastcall sub_76BA60(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // cl
  unsigned __int16 v3; // dx
  int v4; // eax
  _DWORD *v5; // rdx

  v1 = a1;
  v2 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = v2 & 0x1F;
  LOBYTE(a1) = (unsigned __int8)v3 > 0xFu;
  v4 = (2 * ((v3 >> 1) & 1)) | (16 * a1) | v2 & 1 | ((v2 & 4) != 0 ? 0xC : 0);
  v5 = *(_DWORD **)(v1 + 32);
  if ( v5 )
    v4 |= (*v5 >> 14) & 0x1F;
  return v4 & 0x1B;
}

