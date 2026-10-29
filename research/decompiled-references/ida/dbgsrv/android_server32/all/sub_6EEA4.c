/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EEA4
// Address: 0x0006EEA4

//----- (0006EEA4) --------------------------------------------------------
bool __fastcall sub_6EEA4(int a1, int a2, int a3)
{
  int v5; // r1
  socklen_t v6; // r2
  struct sockaddr *p_addr; // r6
  int v8; // r1
  _BOOL4 result; // r0
  socklen_t v10; // [sp+0h] [bp-34h] BYREF
  char v11; // [sp+4h] [bp-30h] BYREF
  struct sockaddr addr; // [sp+20h] [bp-14h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 52);
  v6 = 16;
  if ( *(_BYTE *)(a1 + 52) )
    v6 = 28;
  v10 = v6;
  p_addr = &addr;
  if ( v5 )
    p_addr = (struct sockaddr *)&v11;
  v8 = getsockname(*(_DWORD *)(a1 + 28), p_addr, &v10);
  result = 0;
  if ( !v8 )
    return sub_6ECB8(a2, p_addr, v10, a3);
  return result;
}
