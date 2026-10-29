unsigned __int64 __fastcall sub_1CB0D30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int8 v4; // cl
  int v5; // eax
  __int64 v6; // rax
  unsigned __int8 v7; // cl

  LODWORD(v2) = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = **(_QWORD **)(a2 + 16);
    if ( v3 )
    {
      v4 = *(_BYTE *)(v3 + 28) & 0x7F;
      v5 = v4;
      LOBYTE(v2) = ((v4 + 52) & 0x7Fu) > 1 && (unsigned int)v4 - 53 > 1;
      if ( !(_BYTE)v2 )
      {
        v6 = sub_B72ED0(v3);
        if ( !v6 )
          return (unsigned int)v2;
        v4 = *(_BYTE *)(v6 + 28) & 0x7F;
        v5 = v4;
      }
      LODWORD(v2) = 0;
      if ( (unsigned int)(v5 - 68) <= 6 )
      {
        v7 = (v4 + 67) & 0x7F;
        if ( v7 <= 0xBu )
          return (0xA81uLL >> v7) & 1;
      }
    }
  }
  return (unsigned int)v2;
}
