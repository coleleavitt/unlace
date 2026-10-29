/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060A90
// Address: 0x0000000100060A90

//----- (0000000100060A90) ----------------------------------------------------
bool __fastcall sub_100060A90(__int64 a1, unsigned int *a2)
{
  bool v4; // zf
  socklen_t v5; // w8
  sockaddr *v6; // x1
  int v7; // w0
  _BYTE *v8; // x8
  socklen_t v10; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v11[28]; // [xsp+Ch] [xbp-54h] BYREF
  _BYTE v12[16]; // [xsp+28h] [xbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 100) == 0;
  if ( *(_BYTE *)(a1 + 100) )
    v5 = 28;
  else
    v5 = 16;
  v10 = v5;
  if ( v4 )
    v6 = (sockaddr *)v12;
  else
    v6 = (sockaddr *)v11;
  v7 = getsockname(*(_DWORD *)(a1 + 56), v6, &v10);
  if ( !v7 )
  {
    if ( *(_BYTE *)(a1 + 100) )
      v8 = v11;
    else
      v8 = v12;
    *a2 = bswap32(*((unsigned __int16 *)v8 + 1)) >> 16;
  }
  return v7 == 0;
}
