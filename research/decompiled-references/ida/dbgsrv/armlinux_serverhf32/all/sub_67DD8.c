/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67DD8
// Address: 0x00067DD8

//----- (00067DD8) --------------------------------------------------------
int __fastcall sub_67DD8(int a1, int a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // r3
  struct sockaddr *p_addr; // r1
  int *v8; // r0
  socklen_t addr_len; // [sp+4h] [bp-34h] BYREF
  char v10; // [sp+8h] [bp-30h] BYREF
  struct sockaddr addr; // [sp+18h] [bp-20h] BYREF

  v2 = a2;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 28);
    v5 = *(unsigned __int8 *)(a2 + 52);
    *(_BYTE *)(a1 + 52) = v5;
    if ( v4 == -1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          p_addr = &addr;
          addr_len = 28;
        }
        else
        {
          addr_len = 16;
          p_addr = (struct sockaddr *)&v10;
        }
        v4 = accept(*(_DWORD *)(v2 + 28), p_addr, &addr_len);
        *(_DWORD *)(a1 + 28) = v4;
        if ( v4 != -1 )
          break;
        v8 = _errno_location();
        if ( *v8 != 4 )
        {
          v2 = 0;
          *(_DWORD *)(a1 + 44) = "accept";
          *(_DWORD *)(a1 + 48) = *v8;
          return v2;
        }
        v5 = *(unsigned __int8 *)(a1 + 52);
      }
    }
    v2 = 1;
    fcntl(v4, 2, 1);
  }
  return v2;
}
