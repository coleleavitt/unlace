/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_636E0
// Address: 0x000636E0

//----- (000636E0) --------------------------------------------------------
int __fastcall sub_636E0(int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r0
  int v7; // r0
  signed int v8; // r0
  int v9; // r0
  signed int v10; // r0
  size_t v12; // [sp+8h] [bp-108h]
  int v13; // [sp+Ch] [bp-104h] BYREF
  void *v14; // [sp+10h] [bp-100h]
  size_t v15; // [sp+14h] [bp-FCh]
  size_t v16; // [sp+18h] [bp-F8h]
  int v17; // [sp+1Ch] [bp-F4h]
  void *v18; // [sp+20h] [bp-F0h]
  size_t v19; // [sp+24h] [bp-ECh]
  size_t v20; // [sp+28h] [bp-E8h]
  _BYTE v21[224]; // [sp+2Ch] [bp-E4h] BYREF
  int v22; // [sp+10Ch] [bp-4h]

  v5 = a1[1];
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *a1 > a3 || *a1 + (a1[2] << 8) <= a3 )
      {
        sub_63820((int)a1, a2, a3);
      }
      else
      {
        v7 = *(_DWORD *)a3;
        v14 = nullptr;
        v13 = v7;
        v15 = 0;
        v16 = 0;
        v8 = *(_DWORD *)(a3 + 8);
        if ( v8 )
        {
          v12 = *(_DWORD *)(a3 + 8);
          v14 = qalloc_or_throw(v8);
          v16 = v12;
          qmemcpy(v14, *(const void **)(a3 + 4), v12);
          v15 = v12;
        }
        v9 = *(_DWORD *)(a3 + 16);
        v18 = nullptr;
        v17 = v9;
        v19 = 0;
        v20 = 0;
        v10 = *(_DWORD *)(a3 + 24);
        if ( v10 )
        {
          v20 = *(_DWORD *)(a3 + 24);
          v18 = qalloc_or_throw(v10);
          qmemcpy(v18, *(const void **)(a3 + 20), v20);
          v19 = v20;
        }
        qmemcpy(v21, (const void *)(a3 + 32), sizeof(v21));
        sub_63820((int)a1, a2, (int)&v13);
        if ( v18 )
        {
          v19 = 0;
          qfree(v18);
          v20 = 0;
          v18 = nullptr;
        }
        if ( v14 )
        {
          v15 = 0;
          qfree(v14);
          v16 = 0;
          v14 = nullptr;
        }
      }
    }
  }
  else
  {
    sub_63666(a1, a2);
  }
  return _stack_chk_guard - v22;
}
