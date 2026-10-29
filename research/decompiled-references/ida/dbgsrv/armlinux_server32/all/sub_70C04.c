/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70C04
// Address: 0x00070C04

//----- (00070C04) --------------------------------------------------------
int __fastcall sub_70C04(unsigned int a1, const char *a2)
{
  int v4; // r4
  int addr; // r0
  int v6; // r4
  int v7; // r9
  int v8; // r10
  _BYTE *v9; // r3
  size_t v10; // r0
  void *v11; // r3
  size_t v12; // r6
  void *v13; // r6
  int result; // r0
  char *v15; // r2
  size_t v16; // r11
  void *dest; // [sp+4h] [bp-8h]

  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(481);
  }
  v4 = 12 * a1;
  addr = _tls_get_addr(&dword_D33C4);
  v6 = v4 + 16;
  v7 = addr;
  v8 = addr + v6;
  v9 = *(_BYTE **)(addr + v6);
  if ( a2 )
  {
    if ( *a2 )
    {
      dest = *(void **)(addr + v6);
      v10 = strlen(a2);
      v11 = dest;
      v12 = v10;
      if ( v10 )
      {
        v16 = v10 + 1;
        if ( v10 + 1 > *(_DWORD *)(v8 + 8) )
        {
          v11 = sub_78018(v8, dest, v10 + 1, 1u);
          *(_DWORD *)(v7 + v6) = v11;
        }
        *(_DWORD *)(v8 + 4) = v16;
        memmove(v11, a2, v12);
        *(_BYTE *)(*(_DWORD *)(v7 + v6) + v12) = 0;
        v13 = *(void **)(v7 + v6);
      }
      else
      {
        v13 = dest;
        *(_DWORD *)(v8 + 4) = 0;
      }
    }
    else
    {
      if ( *(_DWORD *)(v8 + 8) <= 1u )
      {
        v9 = sub_78018(addr + v6, *(void **)(addr + v6), 2u, 1u);
        *(_DWORD *)(v7 + v6) = v9;
      }
      *(_DWORD *)(v8 + 4) = 2;
      *v9 = 32;
      *(_BYTE *)(*(_DWORD *)(v7 + v6) + 1) = 0;
      if ( *(_DWORD *)(v8 + 4) )
        v15 = *(char **)(v7 + v6);
      else
        v15 = &byte_D49E4;
      *v15 = 0;
      v13 = *(void **)(v7 + v6);
    }
  }
  else
  {
    v13 = *(void **)(addr + v6);
    if ( v9 )
    {
      *(_DWORD *)(v8 + 4) = 0;
      sub_77F70(v9);
      v13 = nullptr;
      *(_DWORD *)(v7 + v6) = 0;
      *(_DWORD *)(v8 + 8) = 0;
    }
  }
  result = _tls_get_addr(&dword_D33C4);
  *(_DWORD *)(result + 4 * a1) = v13;
  return result;
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
// D49E4: using guessed type char byte_D49E4;
// D6C20: using guessed type char under_debugger;
