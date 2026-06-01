__int64 __fastcall sub_79B9B0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // ecx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  v2 = sub_79B8A0(v1);
  if ( (_BYTE)v2 )
  {
    while ( 1 )
    {
      v3 = *(_BYTE *)(v1 + 8) & 0x7F;
      if ( (unsigned __int8)v3 <= 0x10u )
      {
        v4 = 65922;
        LOBYTE(v2) = _bittest64(&v4, v3);
        return v2;
      }
      if ( (unsigned __int8)v3 <= 0x1Fu )
        break;
      if ( (unsigned __int8)v3 <= 0x25u )
        return v2;
      if ( (unsigned int)(unsigned __int8)v3 - 56 > 4 )
        break;
      if ( (unsigned int)(unsigned __int8)v3 - 57 <= 2 )
      {
        v6 = *(_QWORD *)(v1 + 64);
        if ( v6 )
        {
          if ( (*(_BYTE *)(v6 + 10) & 0x20) != 0 )
            return v2;
        }
      }
      v7 = *(_QWORD *)(sub_79A2E0(v1) + 16);
      v1 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) != 0 )
        v1 = *(_QWORD *)(v1 + 8);
    }
    return 0;
  }
  return v2;
}

