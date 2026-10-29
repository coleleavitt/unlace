__int64 __fastcall sub_7A21F0(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rdi

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( ((v1 + 54) & 0x7Fu) <= 1 || (unsigned int)v1 - 51 <= 1 )
    a1 = sub_77AA60(a1);
  v2 = *(_QWORD *)(*(_QWORD *)(sub_7984D0(a1) + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v2 + 16) - 25 > 1 )
    v2 = sub_B0D320(v2);
  return *(_QWORD *)&byte_8[*(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v2 + 24) & 7LL;
}

