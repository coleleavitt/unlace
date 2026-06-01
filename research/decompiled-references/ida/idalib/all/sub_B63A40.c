__int64 __fastcall sub_B63A40(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  char v3; // al
  bool v4; // si
  char v5; // dl
  char v6; // al
  char v7; // dl
  char v8; // cl

  v1 = *(_QWORD *)(a1 + 40);
  if ( ((v1 >> 1) & 3) == 0 )
    return (*(_DWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) >> 14) & 0x1B;
  result = 0;
  if ( ((*(__int64 *)(a1 + 40) >> 1) & 3) == 1 )
  {
    v3 = *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v4 = (v3 & 2) != 0;
    v5 = (32 * ((v3 & 8) != 0)) | v3 & 1;
    v6 = 8;
    v7 = (2 * v4)
       | ((*(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
       | (16 * ((*(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x10) != 0))
       | v5;
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
    return v6 & 0x13;
  }
  return result;
}
