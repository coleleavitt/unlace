unsigned __int64 __fastcall sub_B96090(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( ((v2 + 52) & 0x7Fu) <= 1 || (unsigned int)v2 - 53 <= 1 )
    a1 = sub_B72ED0(a1);
  v3 = *(_QWORD *)(*(_QWORD *)(sub_B8BF30(a1) + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (unsigned int)*(unsigned __int8 *)(v3 + 16) - 25;
  if ( (unsigned int)v5 > 1 )
    v3 = sub_F63050(v3, a2, v5, v4);
  v6 = *(_QWORD *)&byte_8[*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFF0LL];
  return v6 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v6 | (unsigned __int8)*(_QWORD *)(v3 + 24)) & 7;
}
