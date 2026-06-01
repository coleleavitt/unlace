unsigned __int64 __fastcall sub_6C3040(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al
  unsigned __int64 result; // rax
  unsigned int v5; // ecx

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v2 = *(_QWORD *)v2;
  v3 = *(_BYTE *)(v2 + 8) & 0x7F;
  if ( v3 == 18 )
    return v2 - 48;
  if ( v3 == 21 )
    return *(_QWORD *)(v2 + 40);
  v5 = v3 - 19;
  result = 0;
  if ( v5 <= 1 )
    return *(_QWORD *)(v2 + 40);
  return result;
}

