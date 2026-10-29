bool __fastcall sub_BD7270(__int64 a1)
{
  bool result; // al
  __int64 *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax

  result = 1;
  if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
  {
    v2 = *(__int64 **)(a1 + 16);
    result = (unsigned int)((__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v2) >> 3) == 1
          && (v3 = *v2) != 0
          && ((v4 = *(_QWORD *)(a1 + 8), (*(_BYTE *)(v3 + 1) & 6) == 0)
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL) != 48)
          && (*(_QWORD *)&byte_8[*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL]
             | (unsigned __int8)*(_QWORD *)(v3 + 8))
            & 7) == (*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v4) & 7);
  }
  return result;
}

