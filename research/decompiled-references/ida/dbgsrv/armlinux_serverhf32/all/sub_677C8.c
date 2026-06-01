/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_677C8
// Address: 0x000677C8

//----- (000677C8) --------------------------------------------------------
void *__fastcall sub_677C8(int a1, int a2)
{
  int (*v3)(void); // r5
  int v4; // r0
  int v5; // r3
  int v6; // r6
  unsigned __int8 *v7; // r5
  unsigned __int8 *v8; // r2
  int v9; // r5
  int v10; // r8
  _BYTE *v11; // r0
  void *v12; // r6
  __suseconds_t v14; // r0
  int v15; // r1
  void *v16; // r0
  __suseconds_t v17; // r0
  int v18; // r1
  int v19; // [sp+Ch] [bp-2Ch]
  unsigned int v20; // [sp+10h] [bp-28h] BYREF
  char v21; // [sp+14h] [bp-24h]
  char v22[28]; // [sp+18h] [bp-20h] BYREF

  v3 = *(int (**)(void))(*(_DWORD *)a1 + 12);
  if ( (char *)v3 == (char *)sub_66D7C )
  {
    v4 = *(_DWORD *)(a1 + 52);
  }
  else
  {
    v19 = a2;
    v4 = v3();
    a2 = v19;
  }
  if ( !v4 )
    return nullptr;
  v5 = *(unsigned __int8 *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 4) )
    return nullptr;
  v6 = *(_DWORD *)(a1 + 28);
  if ( v6 )
  {
    v7 = *(unsigned __int8 **)(a1 + 24);
    if ( *v7 != a2 )
    {
      v8 = v7 + 8;
      do
      {
        if ( ++v5 == v6 )
          break;
        v8 += 8;
      }
      while ( v7[8 * v5] != a2 );
    }
  }
  if ( sub_66F74(a1, (int)&v20, 5) )
    return nullptr;
  v9 = bswap32(v20);
  v20 = v9;
  if ( v9 < 0 || (v9 > 0x2000 ? (v10 = (*(_BYTE *)(a1 + 37) ^ 1) & 1) : (v10 = 0), v10) )
  {
    v12 = nullptr;
    v14 = sub_78DE0();
    sub_66C90(v22, 25, v14, v15, 0);
    sub_67730("%s rpc: bad packet length", v22);
  }
  else
  {
    v11 = sub_77D94(v9 + 5);
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v20;
      v11[4] = v21;
      if ( sub_66F74(a1, (int)(v11 + 5), v9) )
      {
        v16 = v12;
        v12 = nullptr;
        sub_77E08(v16);
      }
    }
    else
    {
      v17 = sub_78DE0();
      sub_66C90(v22, 25, v17, v18, 0);
      sub_67730("%s rpc: no local memory", v22);
    }
  }
  return v12;
}
// 678B0: variable 'v15' is possibly undefined
// 678DA: variable 'v18' is possibly undefined
