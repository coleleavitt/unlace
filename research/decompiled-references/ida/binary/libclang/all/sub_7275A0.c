bool __fastcall sub_7275A0(__int64 a1)
{
  _QWORD *v1; // rdx
  bool result; // al

  v1 = *(_QWORD **)(a1 + 40);
  if ( !*(_BYTE *)(a1 + 35) )
    return (*(_BYTE *)(*(_QWORD *)(*v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1Fu) > 0xF;
  result = 0;
  if ( v1 )
    return ((*(_DWORD *)v1 >> 14) & 0x1Fu) > 0xF;
  return result;
}

