/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30FC8
// Address: 0x00030FC8

//----- (00030FC8) --------------------------------------------------------
int __fastcall sub_30FC8(int a1, int a2)
{
  int v3; // r1
  char *v4; // r0
  int v5; // r1
  char *v6; // r0
  int v7; // r3
  int v8; // r5
  int v9; // r3
  int v10; // r5
  char *v11; // r4
  unsigned int v12; // r5
  int i; // r7
  void *v14; // r0
  unsigned int v16; // [sp+Ch] [bp-48h]
  void *v17; // [sp+10h] [bp-44h] BYREF
  int v18; // [sp+14h] [bp-40h]
  int v19; // [sp+18h] [bp-3Ch]
  char *v20; // [sp+1Ch] [bp-38h]
  unsigned int v21; // [sp+20h] [bp-34h]
  int v22; // [sp+24h] [bp-30h]
  void *v23; // [sp+28h] [bp-2Ch]
  int v24; // [sp+2Ch] [bp-28h]
  int v25; // [sp+30h] [bp-24h]
  int v26; // [sp+34h] [bp-20h]
  int v27; // [sp+38h] [bp-1Ch]
  int v28; // [sp+3Ch] [bp-18h]
  int v29; // [sp+40h] [bp-14h]
  int v30; // [sp+44h] [bp-10h]
  int v31; // [sp+48h] [bp-Ch]
  char v32; // [sp+4Ch] [bp-8h]
  int v33; // [sp+50h] [bp-4h]

  sub_30F28((int)&v17, a2);
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(char **)a1;
  }
  else
  {
    v4 = (char *)qvector_reserve(a1, *(void **)a1, v3 + 1, 0x40u);
    *(_DWORD *)a1 = v4;
    v3 = *(_DWORD *)(a1 + 4);
  }
  v5 = v3 << 6;
  *(_DWORD *)&v4[v5] = v17;
  v17 = nullptr;
  v6 = &v4[v5];
  *((_DWORD *)v6 + 1) = v18;
  v18 = 0;
  *((_DWORD *)v6 + 2) = v19;
  v19 = 0;
  *((_DWORD *)v6 + 3) = v20;
  v20 = nullptr;
  *((_DWORD *)v6 + 4) = v21;
  v21 = 0;
  *((_DWORD *)v6 + 5) = v22;
  v22 = 0;
  *((_DWORD *)v6 + 6) = v23;
  v23 = nullptr;
  *((_DWORD *)v6 + 7) = v24;
  v24 = 0;
  *((_DWORD *)v6 + 8) = v25;
  v25 = 0;
  v6 += 36;
  v7 = v27;
  v8 = v28;
  *(_DWORD *)v6 = v26;
  *((_DWORD *)v6 + 1) = v7;
  *((_DWORD *)v6 + 2) = v8;
  v6 += 12;
  v9 = v30;
  v10 = v31;
  *(_DWORD *)v6 = v29;
  *((_DWORD *)v6 + 1) = v9;
  *((_DWORD *)v6 + 2) = v10;
  v6[12] = v32;
  ++*(_DWORD *)(a1 + 4);
  if ( v23 )
  {
    v24 = 0;
    qfree(v23);
    v25 = 0;
    v23 = nullptr;
  }
  v11 = v20;
  if ( v20 )
  {
    v16 = v21;
    if ( v21 )
    {
      v12 = 1;
      for ( i = 8; ; i += 28 )
      {
        v14 = *(void **)&v11[i - 8];
        if ( v14 )
        {
          *(_DWORD *)&v11[i - 4] = 0;
          qfree(v14);
          *(_DWORD *)&v11[i - 8] = 0;
          *(_DWORD *)&v11[i] = 0;
        }
        if ( v12 >= v16 )
          break;
        ++v12;
        v11 = v20;
      }
      v11 = v20;
    }
    v21 = 0;
    qfree(v11);
    v22 = 0;
    v20 = nullptr;
  }
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  return _stack_chk_guard - v33;
}
