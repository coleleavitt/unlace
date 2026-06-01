__int64 __fastcall sub_A72C00(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx

  v2 = *(_DWORD **)(a2 + 24);
  if ( !v2 )
    return 0;
  if ( *v2 != 5 )
    return 0;
  v4 = (unsigned int)v2[1];
  if ( (unsigned int)v4 > 0x17 )
    return 0;
  v5 = -8531969;
  LOBYTE(v5) = !_bittest64(&v5, v4);
  return (unsigned int)v5;
}

