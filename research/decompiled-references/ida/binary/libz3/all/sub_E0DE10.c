__int64 __fastcall sub_E0DE10(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *(_DWORD **)(a2 + 24);
  LODWORD(v3) = 0;
  if ( v2 )
  {
    if ( *v2 == *(_DWORD *)(a1 + 16) )
    {
      v4 = (unsigned int)v2[1];
      if ( (unsigned int)v4 <= 0x2C )
      {
        v3 = 0x1C0000823000LL;
        LOBYTE(v3) = _bittest64(&v3, v4);
      }
    }
  }
  return (unsigned int)v3;
}

