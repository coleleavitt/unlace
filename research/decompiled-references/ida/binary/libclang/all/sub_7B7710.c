unsigned __int64 __fastcall sub_7B7710(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 v2; // al
  unsigned __int64 result; // rax
  unsigned int v4; // ecx

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  v2 = *(_BYTE *)(v1 + 8) & 0x7F;
  if ( v2 == 18 )
    return v1 - 48;
  if ( v2 == 21 )
    return *(_QWORD *)(v1 + 40);
  v4 = v2 - 19;
  result = 0;
  if ( v4 <= 1 )
    return *(_QWORD *)(v1 + 40);
  return result;
}

