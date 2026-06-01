bool __fastcall sub_F34840(_QWORD *a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
    return ((*(_WORD *)(v1 + 18) >> 3) & 0x1FF) == 431;
  return result;
}

