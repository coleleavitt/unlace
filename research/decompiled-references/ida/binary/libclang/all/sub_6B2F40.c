bool __fastcall sub_6B2F40(__int64 a1)
{
  __int64 v1; // rdi
  bool result; // al
  __int64 v3; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v1 + 16) - 34 > 1 )
    v1 = sub_B0D320(v1);
  result = 0;
  if ( *(_BYTE *)(v1 + 19) >> 2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v3 + 16) == 13 )
      return ((*(_WORD *)(v3 + 18) >> 3) & 0x1FF) == 488;
  }
  return result;
}

