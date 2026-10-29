bool __fastcall sub_16C4770(__int64 a1)
{
  bool result; // al
  int v2; // ecx

  result = 1;
  v2 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v2 - 25) > 1 )
    return (unsigned __int8)(v2 - 2) <= 4u && (_BYTE)v2 != 3;
  return result;
}
