/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98430
// Address: 0x00098430

//----- (00098430) --------------------------------------------------------
char __cdecl sub_98430(int a1, int a2)
{
  char v2; // cl
  int v3; // eax
  socklen_t v4; // eax
  struct sockaddr *p_addr; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  bool v8; // zf
  socklen_t v9; // eax
  struct sockaddr *v10; // eax
  socklen_t addr_len; // [esp+4h] [ebp-48h] BYREF
  _BYTE v13[32]; // [esp+8h] [ebp-44h] BYREF
  struct sockaddr addr; // [esp+28h] [ebp-24h] BYREF
  unsigned int v15; // [esp+38h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  if ( a2 )
  {
    v2 = *(_BYTE *)(a2 + 52);
    *(_BYTE *)(a1 + 52) = v2;
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 != -1 )
      goto LABEL_15;
    v4 = 28;
    if ( !v2 )
      v4 = 16;
    addr_len = v4;
    p_addr = (struct sockaddr *)v13;
    if ( !v2 )
      p_addr = &addr;
    v3 = accept(*(_DWORD *)(a2 + 28), p_addr, &addr_len);
    *(_DWORD *)(a1 + 28) = v3;
    if ( v3 != -1 )
    {
LABEL_15:
      fcntl(v3, 2, 1);
      return 1;
    }
    v7 = (_DWORD *)__errno(v6);
    while ( *v7 == 4 )
    {
      v8 = *(_BYTE *)(a1 + 52) == 0;
      v9 = 28;
      if ( !*(_BYTE *)(a1 + 52) )
        v9 = 16;
      addr_len = v9;
      v10 = (struct sockaddr *)v13;
      if ( v8 )
        v10 = &addr;
      v3 = accept(*(_DWORD *)(a2 + 28), v10, &addr_len);
      *(_DWORD *)(a1 + 28) = v3;
      if ( v3 != -1 )
        goto LABEL_15;
    }
    *(_DWORD *)(a1 + 44) = "accept";
    *(_DWORD *)(a1 + 48) = *v7;
  }
  return 0;
}
// 984AC: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
