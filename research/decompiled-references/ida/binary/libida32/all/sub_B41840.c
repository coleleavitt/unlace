__int64 __fastcall sub_B41840(__int64 a1, char a2)
{
  char v2; // al
  char v3; // r8
  char v4; // cl
  bool v5; // di
  char v6; // dl
  __int64 result; // rax
  char v8; // dl
  unsigned int v9; // ecx

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = 16 * ((v2 & 0x10) != 0);
  v4 = (v2 & 4) != 0 ? 0xC : 0;
  v5 = (v2 & 2) != 0;
  v6 = (32 * ((v2 & 8) != 0)) | v2 & 1;
  result = 8;
  v8 = (2 * v5) | v4 | v3 | v6;
  v9 = v8 & 0x10;
  if ( (v8 & 0x10) != 0 )
  {
    result = 24;
    v9 = 16;
  }
  if ( (v8 & 8) == 0 )
    result = v9;
  if ( (v8 & 4) != 0 )
    result = (unsigned int)result | 4;
  if ( (v8 & 2) != 0 )
    result = (unsigned int)result | 2;
  if ( a2 )
    return (unsigned int)result | 1;
  return result;
}

