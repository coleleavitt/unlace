/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD640
// Address: 0x080BD640

//----- (080BD640) --------------------------------------------------------
int __cdecl sub_80BD640(int a1, _DWORD *a2)
{
  socklen_t v2; // edx
  struct sockaddr *p_addr; // eax
  int v4; // edx
  int result; // eax
  __int16 v6; // ax
  socklen_t len; // [esp+0h] [ebp-40h] BYREF
  char v8; // [esp+4h] [ebp-3Ch] BYREF
  __int16 v9; // [esp+6h] [ebp-3Ah]
  struct sockaddr addr; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v11; // [esp+30h] [ebp-10h]

  v11 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v2 = 28;
    p_addr = &addr;
  }
  else
  {
    v2 = 16;
    p_addr = (struct sockaddr *)&v8;
  }
  len = v2;
  v4 = getsockname(*(_DWORD *)(a1 + 28), p_addr, &len);
  result = 0;
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 52) )
      v6 = *(_WORD *)addr.sa_data;
    else
      v6 = v9;
    *a2 = (unsigned __int16)__ROL2__(v6, 8);
    result = 1;
  }
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
