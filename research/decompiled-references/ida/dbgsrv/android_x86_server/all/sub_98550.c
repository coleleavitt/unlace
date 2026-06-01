/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98550
// Address: 0x00098550

//----- (00098550) --------------------------------------------------------
bool __cdecl sub_98550(int a1, int a2, char a3)
{
  bool v3; // zf
  socklen_t v4; // edx
  struct sockaddr *p_addr; // esi
  socklen_t len; // [esp+4h] [ebp-44h] BYREF
  int v8; // [esp+8h] [ebp-40h] BYREF
  struct sockaddr addr; // [esp+28h] [ebp-20h] BYREF
  unsigned int v10; // [esp+3Ch] [ebp-Ch]

  v10 = __readgsdword(0x14u);
  v3 = *(_BYTE *)(a1 + 52) == 0;
  v4 = 28;
  if ( !*(_BYTE *)(a1 + 52) )
    v4 = 16;
  len = v4;
  p_addr = (struct sockaddr *)&v8;
  if ( v3 )
    p_addr = &addr;
  return !getpeername(*(_DWORD *)(a1 + 28), p_addr, &len) && sub_985F0(a2, p_addr, len, a3);
}
