bool __fastcall sub_19A1E30(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // edx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(unsigned __int8 *)(v1 + 16);
  if ( (unsigned int)(v2 - 43) <= 1 || (unsigned __int8)(v2 - 25) <= 1u )
    return 0;
  result = 1;
  if ( (_BYTE)v2 == 13 )
    return ((*(_WORD *)(v1 + 18) >> 3) & 0x1FF) != 435;
  return result;
}
