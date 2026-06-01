__int64 __fastcall sub_5DEF20(__int64 a1, __m128i a2, double a3)
{
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rdi

  sub_5CE930((_QWORD *)a1, *(_QWORD *)(a1 + 112));
  v3 = 8;
  if ( *(_DWORD *)(a1 + 208) != 1 )
    v3 = 8 * (*(_BYTE *)(a1 + 730) >> 7);
  if ( !sub_5DD360(a1, *(_QWORD *)(a1 + 112), v3, 1u, a2, a3) )
    return 0xFFFFFFFFLL;
  result = sub_5DCBB0(a1, *(_QWORD *)(a1 + 112), 1, a2, a3);
  if ( (_DWORD)result )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 112);
  if ( (*(_BYTE *)(v5 + 186) & 0xF) == 0xD && (~*(_BYTE *)(v5 + 186) & 0x30) != 0 )
  {
    sub_5C8300(v5);
    return 0;
  }
  return result;
}

