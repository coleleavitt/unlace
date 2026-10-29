/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B454
// Address: 0x0007B454

//----- (0007B454) --------------------------------------------------------
void __fastcall sub_7B454(int a1)
{
  __int64 v2; // r0
  int v3; // r6
  unsigned int v4; // r7
  unsigned int v5; // r6
  void *v6; // r0
  unsigned int v7; // [sp+0h] [bp-4h]

  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  HIDWORD(v2) = *(_DWORD *)(a1 + 8);
  LODWORD(v2) = *(_DWORD *)(HIDWORD(v2) + 8);
  v3 = *(_DWORD *)(HIDWORD(v2) + 12);
  *(_DWORD *)(a1 + 20) = v3;
  *(_DWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v4 = *(_DWORD *)(HIDWORD(v2) + 16);
  *(_DWORD *)(a1 + 40) = v4;
  if ( v4 )
  {
    HIDWORD(v2) = v3;
    if ( v2 < 1 || v3 )
    {
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      v7 = v2;
      *(_DWORD *)(a1 + 36) = qalloc(v2);
      v5 = ((unsigned int)((__int64)(v7 + (unsigned __int64)v4 - 1) / v4) + 7) >> 3;
      v6 = qalloc(v5);
      *(_DWORD *)(a1 + 32) = v6;
      if ( v6 && *(_DWORD *)(a1 + 36) )
      {
        memset(v6, 0, v5);
      }
      else
      {
        qfree(*(void **)(a1 + 36));
        *(_DWORD *)(a1 + 36) = 0;
        qfree(*(void **)(a1 + 32));
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 32) = 0;
      }
    }
  }
}
