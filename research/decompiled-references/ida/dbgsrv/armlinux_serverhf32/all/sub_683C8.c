/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_683C8
// Address: 0x000683C8

//----- (000683C8) --------------------------------------------------------
char *__fastcall sub_683C8(int a1, void **a2, int a3)
{
  struct sockaddr *v5; // r7
  int v6; // r0
  int v8; // r0
  socklen_t len; // [sp+4h] [bp-14h] BYREF
  struct sockaddr v10; // [sp+8h] [bp-10h] BYREF
  struct sockaddr v11; // [sp+18h] [bp+0h] BYREF

  if ( *(_BYTE *)(a1 + 52) )
  {
    v5 = &v11;
    v6 = *(_DWORD *)(a1 + 28);
    len = 28;
    if ( getsockname(v6, &v11, &len) )
      return nullptr;
  }
  else
  {
    v5 = &v10;
    v8 = *(_DWORD *)(a1 + 28);
    len = 16;
    if ( getsockname(v8, &v10, &len) )
      return nullptr;
  }
  return sub_68198(a2, v5, len, a3);
}
