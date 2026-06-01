/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EBA4
// Address: 0x0006EBA4

//----- (0006EBA4) --------------------------------------------------------
int __fastcall sub_6EBA4(int a1, int a2)
{
  int v4; // r6
  int v5; // r2
  _BYTE *v6; // r7
  int v7; // r0
  socklen_t v8; // r0
  struct sockaddr *p_addr; // r1
  _DWORD *v10; // r6
  int v11; // r0
  socklen_t v12; // r1
  struct sockaddr *v13; // r1
  socklen_t addr_len; // [sp+8h] [bp-34h] BYREF
  struct sockaddr addr; // [sp+Ch] [bp-30h] BYREF
  _BYTE v17[16]; // [sp+28h] [bp-14h] BYREF

  v4 = 0;
  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a2 + 52);
    *(_BYTE *)(a1 + 52) = v5;
    v6 = (_BYTE *)(a1 + 52);
    v7 = *(_DWORD *)(a1 + 28);
    if ( v7 != -1 )
      goto LABEL_15;
    v8 = 16;
    if ( v5 )
      v8 = 28;
    addr_len = v8;
    p_addr = (struct sockaddr *)v17;
    if ( v5 )
      p_addr = &addr;
    v7 = accept(*(_DWORD *)(a2 + 28), p_addr, &addr_len);
    *(_DWORD *)(a1 + 28) = v7;
    if ( v7 == -1 )
    {
      v10 = (_DWORD *)_errno(-1);
      while ( *v10 == 4 )
      {
        v11 = (unsigned __int8)*v6;
        v12 = 16;
        if ( *v6 )
          v12 = 28;
        addr_len = v12;
        v13 = (struct sockaddr *)v17;
        if ( v11 )
          v13 = &addr;
        v7 = accept(*(_DWORD *)(a2 + 28), v13, &addr_len);
        *(_DWORD *)(a1 + 28) = v7;
        if ( v7 != -1 )
          goto LABEL_15;
      }
      *(_DWORD *)(a1 + 44) = "accept";
      *(_DWORD *)(a1 + 48) = *v10;
      return 0;
    }
    else
    {
LABEL_15:
      v4 = 1;
      fcntl(v7, 2, 1);
    }
  }
  return v4;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
