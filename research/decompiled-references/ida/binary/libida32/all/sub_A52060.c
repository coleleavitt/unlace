__int64 __fastcall sub_A52060(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 89LL) & 1) != 0 && (unsigned int)v2 - 2 <= 1 )
    return sub_A4EC50(a1, a2);
  if ( (unsigned __int8)(v2 - 2) > 4u && (unsigned __int8)(v2 - 25) > 1u )
    return a2;
  return sub_A51FE0((_QWORD *)a1, a2);
}

