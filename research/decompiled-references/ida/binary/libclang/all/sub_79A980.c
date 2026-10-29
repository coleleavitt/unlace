bool __fastcall sub_79A980(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  _BOOL4 v3; // eax
  __int64 v4; // rax
  unsigned __int64 *v5; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)v2;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0x16 )
      {
        LOBYTE(v3) = *(_QWORD *)(v2 - 8) <= 7u || (*(_QWORD *)(v2 - 8) & 7) != 0;
        if ( v3 )
          break;
      }
      v4 = *(_QWORD *)(sub_79A2E0(v2) + 16);
      v5 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v3 = ((v4 >> 2) & 1) == 0;
      if ( v3 )
      {
        if ( !v5 )
        {
          LOBYTE(v3) = 0;
          return v3;
        }
      }
      else
      {
        v2 = *v5;
        if ( !*v5 )
          return v3;
      }
    }
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  return v3;
}

