char __fastcall sub_1BD21B0(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 && ((*(_WORD *)(v1 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v3 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL);
    if ( (unsigned __int8)v3 > 0x2Au )
      return (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u;
    v4 = 0x40600000800LL;
    result = 1;
    if ( !_bittest64(&v4, v3) )
      return (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u;
  }
  return result;
}
