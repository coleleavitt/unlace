__int64 __fastcall sub_B64320(__int64 a1)
{
  char v1; // al
  char v2; // di
  char v3; // cl
  bool v4; // si
  char v5; // dl
  __int64 result; // rax
  char v7; // dl
  unsigned int v8; // ecx

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = 16 * ((v1 & 0x10) != 0);
  v3 = (v1 & 4) != 0 ? 0xC : 0;
  v4 = (v1 & 2) != 0;
  v5 = (32 * ((v1 & 8) != 0)) | v1 & 1;
  result = 8;
  v7 = (2 * v4) | v3 | v2 | v5;
  v8 = v7 & 0x10;
  if ( (v7 & 0x10) != 0 )
  {
    result = 24;
    v8 = 16;
  }
  if ( (v7 & 8) == 0 )
    result = v8;
  if ( (v7 & 4) != 0 )
    result = (unsigned int)result | 4;
  if ( (v7 & 2) != 0 )
    return (unsigned int)result | 2;
  return result;
}
