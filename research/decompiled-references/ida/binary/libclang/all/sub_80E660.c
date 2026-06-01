bool __fastcall sub_80E660(__int64 a1)
{
  bool result; // al
  __int64 *v2; // rdx
  __int64 v3; // rdx

  result = 1;
  if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
  {
    v2 = *(__int64 **)(a1 + 16);
    return (unsigned int)((__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v2) >> 3) == 1
        && (v3 = *v2) != 0
        && ((*(_BYTE *)(v3 + 1) & 6) == 0
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL) != 47)
        && (*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a1 + 8) & 7LL) == (*(_QWORD *)&byte_8[*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v3 + 8) & 7LL);
  }
  return result;
}

