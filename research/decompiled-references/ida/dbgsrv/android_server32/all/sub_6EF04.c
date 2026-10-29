/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EF04
// Address: 0x0006EF04

//----- (0006EF04) --------------------------------------------------------
int __fastcall sub_6EF04(int a1, unsigned int *a2)
{
  int v4; // r0
  socklen_t v5; // r1
  struct sockaddr *p_addr; // r1
  int v7; // r1
  _BYTE *v8; // r5
  int result; // r0
  char *sa_data; // r0
  socklen_t len; // [sp+4h] [bp-34h] BYREF
  struct sockaddr addr; // [sp+8h] [bp-30h] BYREF
  char v13; // [sp+24h] [bp-14h] BYREF
  __int16 v14; // [sp+26h] [bp-12h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 52);
  v5 = 16;
  if ( v4 )
    v5 = 28;
  len = v5;
  p_addr = (struct sockaddr *)&v13;
  if ( v4 )
    p_addr = &addr;
  v7 = getsockname(*(_DWORD *)(a1 + 28), p_addr, &len);
  v8 = (_BYTE *)(a1 + 52);
  result = 0;
  if ( !v7 )
  {
    sa_data = (char *)&v14;
    if ( *v8 )
      sa_data = addr.sa_data;
    *a2 = ((*(unsigned __int16 *)sa_data << 24) + ((*(unsigned __int16 *)sa_data << 8) & 0xFF0000u)) >> 16;
    return 1;
  }
  return result;
}
