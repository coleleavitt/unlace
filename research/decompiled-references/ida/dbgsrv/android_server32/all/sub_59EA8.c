/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59EA8
// Address: 0x00059EA8

//----- (00059EA8) --------------------------------------------------------
void __fastcall sub_59EA8(int a1, int a2, int a3)
{
  size_t v5; // r0
  size_t v6; // r6
  unsigned int v7; // r7
  void *v8; // r0
  size_t v9; // r2
  int v10; // r0
  int v11; // r6
  size_t v12; // r3
  unsigned int v13; // r7
  _BYTE *v14; // r0
  int v15; // r7
  unsigned __int8 *v16; // r5
  size_t v17; // [sp+0h] [bp-Ch]
  size_t v18; // [sp+4h] [bp-8h]

  *(_DWORD *)(a2 + 4) = 0;
  if ( !a3 )
  {
    v5 = strlen((const char *)(a1 + 1034));
    if ( v5 )
    {
      v6 = v5;
      v7 = v5 + 1;
      if ( *(_DWORD *)(a2 + 8) >= v5 + 1 )
      {
        v8 = *(void **)a2;
      }
      else
      {
        v8 = qvector_reserve(a2, *(void **)a2, v7, 1u);
        *(_DWORD *)a2 = v8;
      }
      *(_DWORD *)(a2 + 4) = v7;
      memmove(v8, (const void *)(a1 + 1034), v6);
      *(_BYTE *)(*(_DWORD *)a2 + v6) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
    v9 = _strlen_chk("|", 2);
    v10 = *(_DWORD *)(a2 + 4);
    v11 = v10 - 1;
    if ( !v10 )
      v11 = 0;
    v12 = v11 + v9;
    v13 = v11 + v9 + 1;
    if ( *(_DWORD *)(a2 + 8) >= v13 )
    {
      v14 = *(_BYTE **)a2;
    }
    else
    {
      v17 = v11 + v9;
      v18 = v9;
      v14 = qvector_reserve(a2, *(void **)a2, v11 + v9 + 1, 1u);
      v12 = v17;
      v9 = v18;
      *(_DWORD *)a2 = v14;
    }
    *(_DWORD *)(a2 + 4) = v13;
    v14[v12] = 0;
    memmove((void *)(*(_DWORD *)a2 + v11), "|", v9);
    v15 = *(unsigned __int16 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 8) )
    {
      v16 = (unsigned __int8 *)(a1 + 10);
      do
      {
        sub_28C8C(a2, "%02X", *v16);
        --v15;
        ++v16;
      }
      while ( v15 );
    }
  }
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
