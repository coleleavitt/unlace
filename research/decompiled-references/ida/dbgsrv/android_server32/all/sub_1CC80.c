/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CC80
// Address: 0x0001CC80

//----- (0001CC80) --------------------------------------------------------
int __fastcall sub_1CC80(int a1, _DWORD *a2)
{
  unsigned int v3; // r0
  _DWORD *v4; // r2
  int v5; // r3
  int v6; // r7
  _DWORD *v7; // r0
  int v8; // r4
  int v9; // r1
  _DWORD *v10; // r0
  char *v11; // r0
  int v12; // r1
  int *v14; // r0
  _DWORD v15[2]; // [sp+Ch] [bp-1Ch] BYREF
  int v16; // [sp+14h] [bp-14h]
  int v17; // [sp+18h] [bp-10h]
  int v18; // [sp+1Ch] [bp-Ch]
  int v19; // [sp+20h] [bp-8h]

  v3 = sub_1A26E(a1, v15);
  if ( v3 )
  {
    v14 = sub_1C78C(v3);
    sub_1C9E4("%s: %s\n", "td_thr_get_info", (const char *)v14);
  }
  if ( (v15[0] | 2) != 3 )
  {
    v4 = *(_DWORD **)(*a2 + 916);
    v5 = *a2 + 916;
    if ( !v4 )
      goto LABEL_11;
    do
    {
      v6 = v4[4];
      if ( v6 >= v16 )
        v5 = (int)v4;
      v7 = v4 + 1;
      if ( v6 >= v16 )
        v7 = v4;
      v4 = (_DWORD *)*v7;
    }
    while ( *v7 );
    if ( v5 == *a2 + 916 || v16 < *(_DWORD *)(v5 + 16) )
    {
LABEL_11:
      sub_1C7FC();
      v8 = a2[1];
      v19 = v16;
      v18 = v15[1];
      v17 = v15[0];
      v9 = *(_DWORD *)(v8 + 4);
      if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v9 + 1) )
      {
        v10 = *(_DWORD **)v8;
      }
      else
      {
        v10 = qvector_reserve(v8, *(void **)v8, v9 + 1, 0xCu);
        *(_DWORD *)v8 = v10;
        v9 = *(_DWORD *)(v8 + 4);
      }
      v10[3 * v9] = v17;
      v11 = (char *)&v10[3 * v9];
      v12 = v19;
      *((_DWORD *)v11 + 1) = v18;
      *((_DWORD *)v11 + 2) = v12;
      ++*(_DWORD *)(v8 + 4);
    }
  }
  return 0;
}
