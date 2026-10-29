char __fastcall sub_B08B30(__int64 a1)
{
  _DWORD *v1; // rdx
  int v2; // eax

  v1 = *(_DWORD **)(a1 + 40);
  if ( *(_BYTE *)(a1 + 39) )
  {
    LOBYTE(v2) = 0;
    if ( v1 )
      return (*v1 >> 18) & 1;
  }
  else
  {
    LOBYTE(v2) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F) >> 4;
  }
  return v2;
}
