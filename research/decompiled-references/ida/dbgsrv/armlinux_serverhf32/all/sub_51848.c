/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51848
// Address: 0x00051848

//----- (00051848) --------------------------------------------------------
int __fastcall sub_51848(int a1, int a2)
{
  __int16 *v3; // r5
  __int16 *v4; // r4
  int i; // r3
  int (__fastcall *v6)(int); // r3
  int v7; // r1
  int v8; // r4
  int v10; // r1
  int v11; // r2
  int (__fastcall *v12)(int); // r1
  int v13; // r3
  int v14; // r2
  bool v15; // nf
  int v16; // r3
  int v17; // r0
  int v18; // r4
  const char *v19; // r1

  v3 = *(__int16 **)(*(_DWORD *)(a1 + 8) + 4 * a2);
  v4 = v3;
LABEL_2:
  for ( i = *v4; i != -1; i = *v4 )
  {
    if ( i )
    {
      if ( !*(_BYTE *)(a1 + 16) )
      {
        v6 = *(int (__fastcall **)(int))a1;
        v7 = *(int *)(a1 + 4) >> 1;
        if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
          v6 = *(int (__fastcall **)(int))((char *)v6 + *(_DWORD *)(a1 + v7));
        if ( v6(a1 + v7) )
          return 0;
        *(_BYTE *)(a1 + 16) = 1;
        i = *v4;
      }
      if ( i != *(unsigned __int16 *)(a1 + 36) )
        goto LABEL_11;
      *(_BYTE *)(a1 + 16) = 0;
    }
    v10 = v4[1];
    if ( v10 != -1 && !sub_51848(a1, v10, v10 + 1) )
      return 0;
    if ( *((unsigned __int8 *)v4 + 5) == 255 )
      goto LABEL_24;
    v11 = *(_DWORD *)(a1 + 12);
    v12 = *(int (__fastcall **)(int))(v11 + 8 * *((unsigned __int8 *)v4 + 5));
    v13 = *(_DWORD *)(v11 + 8 * *((unsigned __int8 *)v4 + 5) + 4);
    v14 = v13 >> 1;
    v16 = v13 << 31;
    v15 = v16 < 0;
    if ( v16 < 0 )
      v16 = *(_DWORD *)(a1 + v14);
    if ( v15 )
      v12 = *(int (__fastcall **)(int))((char *)v12 + v16);
    v17 = v12(a1 + v14);
    if ( v17 != 1507 )
    {
      if ( v17 )
        return 0;
LABEL_24:
      v18 = *((unsigned __int8 *)v4 + 4);
      if ( v18 != 255 )
      {
        v4 = &v3[3 * v18];
        goto LABEL_2;
      }
      return 1;
    }
    *(_BYTE *)(a1 + 16) = 1;
LABEL_11:
    v4 += 3;
  }
  v8 = v4[1];
  if ( !v8 )
    return 1;
  if ( v8 == 67 )
  {
    if ( *(_DWORD *)(a1 + 28) )
      v19 = *(const char **)(a1 + 24);
    else
      v19 = (const char *)&dword_8DA5C;
    sub_70A98(0, v19);
  }
  sub_70A2C(v8);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
