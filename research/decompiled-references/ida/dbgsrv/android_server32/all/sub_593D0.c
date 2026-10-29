/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_593D0
// Address: 0x000593D0

//----- (000593D0) --------------------------------------------------------
int __fastcall sub_593D0(int a1, int *a2)
{
  int v3; // r4
  int v4; // r0
  unsigned int *v5; // r0
  _BOOL4 v6; // r1
  unsigned int *v7; // r0
  unsigned int *v8; // r2
  int v9; // r6
  unsigned int *v10; // r0
  _BYTE *v11; // r0
  size_t v12; // r2
  char v14; // [sp+4h] [bp-214h]
  int v15; // [sp+8h] [bp-210h]
  _BOOL4 v16; // [sp+10h] [bp-208h]
  unsigned __int8 *v17; // [sp+14h] [bp-204h] BYREF
  unsigned int v18; // [sp+18h] [bp-200h]
  int v19; // [sp+1Ch] [bp-1FCh]
  void *v20; // [sp+20h] [bp-1F8h] BYREF
  size_t v21; // [sp+24h] [bp-1F4h]
  int v22; // [sp+28h] [bp-1F0h]
  _DWORD v23[10]; // [sp+2Ch] [bp-1ECh] BYREF
  _BYTE v24[448]; // [sp+54h] [bp-1C4h] BYREF

  v3 = 0;
  v4 = sub_2BCCC((int)v23, a2, 0, 0);
  sub_27920(v4, nullptr);
  if ( sub_27938((int)v23) && sub_27A6C((int)v23) && sub_2C81C((int)v23) )
  {
    v15 = sub_28478((int)v23);
    v14 = v24[440];
    v21 = 0;
    v20 = nullptr;
    v22 = 0;
    v18 = 0;
    v17 = nullptr;
    v19 = 0;
    v3 = 1;
    v5 = sub_31EE4((int)v24, 1, ".debug_info");
    v6 = 1;
    if ( !v5 )
    {
      v7 = sub_31EE4((int)v24, 1879048222, ".debug_info");
      v6 = 1;
      if ( !v7 )
        v6 = sub_31EE4((int)v24, 1, ".zdebug_info") != nullptr;
    }
    v16 = v6;
    v8 = sub_31EE4((int)v24, 7, ".note.gnu.build-id");
    if ( (v8 || (v8 = sub_31EE4((int)v24, 7, ".note.go.buildid")) != nullptr)
      && !(HIWORD(v8[9]) | (*((unsigned __int16 *)v8 + 17) + (v8[9] << 16))) )
    {
      sub_2DCFC((int)v24, (int)&v20, v8);
    }
    v9 = 1;
    v10 = sub_31EE4((int)v24, 1, ".gnu_debuglink");
    if ( v10 )
      sub_2F228((int)v23, &v17, v10[6], v10[7]);
    v11 = (_BYTE *)(a1 + 1034);
    if ( v18 > 1 )
      qstrncpy((unsigned int)v11, v17, 4096);
    else
      *v11 = 0;
    v12 = v21;
    *(_DWORD *)(a1 + 4) = v15;
    if ( v12 >> 10 )
      v12 = 1024;
    *(_WORD *)(a1 + 8) = v12;
    memmove((void *)(a1 + 10), v20, v12);
    *(_BYTE *)(a1 + 1) = v16;
    *(_BYTE *)a1 = v14;
    if ( !v21 && !v16 )
    {
      if ( v18 <= 1 )
        v9 = 0;
      v3 = v9;
    }
    if ( v17 )
    {
      v18 = 0;
      qfree(v17);
      v19 = 0;
      v17 = nullptr;
    }
    if ( v20 )
    {
      v21 = 0;
      qfree(v20);
      v22 = 0;
      v20 = nullptr;
    }
  }
  sub_283E4(v23);
  return v3;
}
