__int64 __fastcall sub_B3F600(__int64 a1)
{
  unsigned int v1; // ecx
  char v2; // dl
  char v3; // dl
  __int64 result; // rax

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1B;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = (2 * ((v2 & 2) != 0)) | ((v2 & 4) != 0 ? 0xC : 0) | (16 * ((v2 & 0x10) != 0)) | (32 * ((v2 & 8) != 0)) | v2 & 1;
  if ( (v3 & 0x10) != 0 )
    v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0xB | 0x10;
  result = v1 | 8;
  if ( (v3 & 8) == 0 )
    result = v1;
  if ( (v3 & 4) != 0 )
    result = (unsigned int)result | 4;
  if ( (v3 & 2) != 0 )
    return (unsigned int)result | 2;
  return result;
}

