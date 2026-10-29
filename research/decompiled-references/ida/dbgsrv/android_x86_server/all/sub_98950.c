/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98950
// Address: 0x00098950

//----- (00098950) --------------------------------------------------------
char __cdecl sub_98950(int a1, _DWORD *a2)
{
  bool v2; // zf
  socklen_t v3; // ecx
  struct sockaddr *p_addr; // ecx
  char *sa_data; // edx
  socklen_t len; // [esp+4h] [ebp-44h] BYREF
  int v8; // [esp+8h] [ebp-40h] BYREF
  struct sockaddr addr; // [esp+28h] [ebp-20h] BYREF
  unsigned int v10; // [esp+3Ch] [ebp-Ch]

  v10 = __readgsdword(0x14u);
  v2 = *(_BYTE *)(a1 + 52) == 0;
  v3 = 28;
  if ( !*(_BYTE *)(a1 + 52) )
    v3 = 16;
  len = v3;
  p_addr = (struct sockaddr *)&v8;
  if ( v2 )
    p_addr = &addr;
  if ( getsockname(*(_DWORD *)(a1 + 28), p_addr, &len) )
    return 0;
  sa_data = addr.sa_data;
  if ( *(_BYTE *)(a1 + 52) )
    sa_data = (char *)&v8 + 2;
  *a2 = (unsigned __int16)__ROL2__(*(_WORD *)sa_data, 8);
  return 1;
}
