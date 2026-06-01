__int64 __fastcall sub_CAFA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *(unsigned __int8 *)(a1 + 16);
  if ( (unsigned __int8)(v4 - 2) <= 4u )
    return a1;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    return 0;
  return sub_F63050(a1, a2, (unsigned int)(v4 - 2), a4);
}
