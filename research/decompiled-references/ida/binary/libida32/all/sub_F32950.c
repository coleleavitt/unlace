bool __fastcall sub_F32950(__int64 a1)
{
  bool result; // al

  result = 1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 29 )
    return (*(_BYTE *)(a1 + 18) & 8) != 0;
  return result;
}

