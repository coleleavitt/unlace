__int64 __fastcall sub_B63070(__int64 a1)
{
  char v1; // al
  char v2; // di
  char v3; // cl
  bool v4; // si
  char v5; // dl
  char v6; // al
  char v7; // dl
  char v8; // cl

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = 16 * ((v1 & 0x10) != 0);
  v3 = (v1 & 4) != 0 ? 0xC : 0;
  v4 = (v1 & 2) != 0;
  v5 = (32 * ((v1 & 8) != 0)) | v1 & 1;
  v6 = 8;
  v7 = (2 * v4) | v3 | v2 | v5;
  v8 = v7 & 0x10;
  if ( (v7 & 0x10) != 0 )
  {
    v6 = 24;
    v8 = 16;
  }
  if ( (v7 & 8) == 0 )
    v6 = v8;
  if ( (v7 & 4) != 0 )
    v6 |= 4u;
  if ( (v7 & 2) != 0 )
    v6 |= 2u;
  return v6 & 0x12;
}
