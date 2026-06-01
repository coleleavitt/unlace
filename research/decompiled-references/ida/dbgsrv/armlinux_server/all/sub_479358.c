/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479358
// Address: 0x0000000000479358

//----- (0000000000479358) ----------------------------------------------------
__int64 __fastcall sub_479358(__int64 a1, _DWORD *a2)
{
  struct sockaddr *p_addr; // x1
  int v5; // w0
  unsigned int v6; // w1
  unsigned int v7; // w0
  socklen_t len; // [xsp+24h] [xbp-3Ch] BYREF
  char v10; // [xsp+28h] [xbp-38h] BYREF
  unsigned __int16 v11; // [xsp+2Ah] [xbp-36h]
  struct sockaddr addr; // [xsp+38h] [xbp-28h] BYREF

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
  v5 = getsockname(*(_DWORD *)(a1 + 56), p_addr, &len);
  v6 = 0;
  if ( !v5 )
  {
    if ( *(_BYTE *)(a1 + 100) )
      v7 = *(unsigned __int16 *)addr.sa_data;
    else
      v7 = v11;
    v6 = 1;
    *a2 = (unsigned __int16)__rev16(v7);
  }
  return v6;
}
