/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67CAC
// Address: 0x00067CAC

//----- (00067CAC) --------------------------------------------------------
int __fastcall sub_67CAC(int a1, _DWORD *a2)
{
  int v4; // r0
  unsigned int v5; // r3
  int result; // r0
  int v7; // r0
  socklen_t len; // [sp+4h] [bp-34h] BYREF
  struct sockaddr v9; // [sp+8h] [bp-30h] BYREF
  struct sockaddr addr; // [sp+18h] [bp-20h] BYREF

  if ( !*(_BYTE *)(a1 + 52) )
  {
    v7 = *(_DWORD *)(a1 + 28);
    len = 16;
    if ( !getsockname(v7, &v9, &len) )
      goto LABEL_3;
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 28);
  len = 28;
  if ( getsockname(v4, &addr, &len) )
    return 0;
LABEL_3:
  if ( *(_BYTE *)(a1 + 52) )
    v5 = *(unsigned __int16 *)addr.sa_data;
  else
    v5 = *(unsigned __int16 *)v9.sa_data;
  result = 1;
  *a2 = (unsigned __int16)__rev16(v5);
  return result;
}
