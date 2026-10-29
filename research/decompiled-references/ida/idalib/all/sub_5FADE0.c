__int64 __fastcall sub_5FADE0(__int64 a1, __m128i a2, double a3)
{
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rdi

  sub_5EA710((_QWORD *)a1, *(_QWORD *)(a1 + 120));
  v3 = 8;
  if ( *(_DWORD *)(a1 + 216) != 1 )
    v3 = 8 * (*(_BYTE *)(a1 + 746) >> 7);
  if ( !sub_5F9220(a1, *(_QWORD *)(a1 + 120), v3, 1u, a2, a3) )
    return 0xFFFFFFFFLL;
  result = sub_5F8A50(a1, *(_QWORD *)(a1 + 120), 1, a2, a3);
  if ( (_DWORD)result )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(v5 + 186) & 0xF) == 0xD && (~*(_BYTE *)(v5 + 186) & 0x30) != 0 )
  {
    sub_5E4020(v5);
    return 0;
  }
  return result;
}
