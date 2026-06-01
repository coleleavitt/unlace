__int64 __fastcall sub_7BB6F0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char v2; // al
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  v2 = *(_BYTE *)(v1 + 8) & 0x7F;
  if ( v2 == 21 )
    return v1 - 48;
  if ( v2 != 20 )
    return 0;
  result = *(_QWORD *)(v1 + 40);
  if ( result )
  {
    v4 = *(_QWORD *)(v1 - 8);
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 7) != 0 )
      v5 = 0;
    return sub_7BB510(result, v5);
  }
  return result;
}

