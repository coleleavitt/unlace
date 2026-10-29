char __fastcall sub_B08AF0(__int64 a1)
{
  _DWORD *v1; // rdx
  __int16 v2; // ax

  v1 = *(_DWORD **)(a1 + 40);
  if ( *(_BYTE *)(a1 + 39) )
  {
    LOBYTE(v2) = 0;
    if ( v1 )
      LOBYTE(v2) = ((*v1 >> 14) & 0xC) != 0;
  }
  else
  {
    return (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 2) & 1;
  }
  return v2;
}
