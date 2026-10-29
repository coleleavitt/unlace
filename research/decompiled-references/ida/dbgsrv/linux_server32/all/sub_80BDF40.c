/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BDF40
// Address: 0x080BDF40

//----- (080BDF40) --------------------------------------------------------
int __cdecl sub_80BDF40(int a1, void **a2, char a3)
{
  socklen_t v3; // edx
  struct sockaddr *p_addr; // ebp
  int v5; // edx
  int result; // eax
  socklen_t len; // [esp+0h] [ebp-50h] BYREF
  char v8; // [esp+4h] [ebp-4Ch] BYREF
  struct sockaddr addr; // [esp+14h] [ebp-3Ch] BYREF
  unsigned int v10; // [esp+30h] [ebp-20h]

  v10 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v3 = 28;
    p_addr = &addr;
  }
  else
  {
    v3 = 16;
    p_addr = (struct sockaddr *)&v8;
  }
  len = v3;
  v5 = getpeername(*(_DWORD *)(a1 + 28), p_addr, &len);
  result = 0;
  if ( !v5 )
    result = sub_80BDC10(a2, p_addr, len, a3);
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
