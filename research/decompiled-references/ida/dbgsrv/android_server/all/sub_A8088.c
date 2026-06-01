/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8088
// Address: 0x00000000000A8088

//----- (00000000000A8088) ----------------------------------------------------
__int64 __fastcall sub_A8088(__int64 a1, unsigned int *a2)
{
  bool v4; // zf
  socklen_t v5; // w8
  int v6; // w0
  struct sockaddr *v7; // x1
  __int64 result; // x0
  _BYTE *v9; // x8
  socklen_t len; // [xsp+4h] [xbp-6Ch] BYREF
  char v11; // [xsp+8h] [xbp-68h] BYREF
  _BYTE v12[6]; // [xsp+Ah] [xbp-66h] BYREF
  char v13; // [xsp+28h] [xbp-48h] BYREF
  _BYTE v14[22]; // [xsp+2Ah] [xbp-46h] BYREF

  *(_QWORD *)&v14[14] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_BYTE *)(a1 + 100) == 0;
  if ( *(_BYTE *)(a1 + 100) )
    v5 = 28;
  else
    v5 = 16;
  len = v5;
  v6 = *(_DWORD *)(a1 + 56);
  if ( v4 )
    v7 = (struct sockaddr *)&v13;
  else
    v7 = (struct sockaddr *)&v11;
  if ( getsockname(v6, v7, &len) )
    return 0;
  result = 1;
  if ( *(_BYTE *)(a1 + 100) )
    v9 = v12;
  else
    v9 = v14;
  *a2 = bswap32(*(unsigned __int16 *)v9) >> 16;
  return result;
}
