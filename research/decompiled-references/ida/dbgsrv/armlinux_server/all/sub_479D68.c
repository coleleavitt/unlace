/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479D68
// Address: 0x0000000000479D68

//----- (0000000000479D68) ----------------------------------------------------
__int64 __fastcall sub_479D68(__int64 a1, __int64 a2, char a3)
{
  struct sockaddr *p_addr; // x20
  int v6; // w0
  unsigned int v7; // w1
  socklen_t len; // [xsp+34h] [xbp-3Ch] BYREF
  char v10; // [xsp+38h] [xbp-38h] BYREF
  struct sockaddr addr; // [xsp+48h] [xbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 100) )
  {
    p_addr = &addr;
    len = 28;
  }
  else
  {
    p_addr = (struct sockaddr *)&v10;
    len = 16;
  }
  v6 = getsockname(*(_DWORD *)(a1 + 56), p_addr, &len);
  v7 = 0;
  if ( !v6 )
    return sub_4799E0(a2, p_addr, len, a3);
  return v7;
}
