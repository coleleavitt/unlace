char __fastcall sub_7D2D70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  LOBYTE(v1) = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 23LL) <= 0x3Fu )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      LOBYTE(v1) = 0;
      if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 32 <= 5 )
      {
        v1 = (*(__int64 *)(v2 + 56) >> 2) & 1;
        if ( ((*(__int64 *)(v2 + 56) >> 2) & 1) != 0 )
          LOBYTE(v1) = *(_QWORD *)((*(_QWORD *)(v2 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 40) != 0;
      }
    }
    else
    {
      LOBYTE(v1) = 0;
    }
  }
  return v1;
}

