/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67FF0
// Address: 0x00067FF0

//----- (00067FF0) --------------------------------------------------------
int __fastcall sub_67FF0(int a1, char a2, int a3)
{
  signed int v4; // r4
  int v7; // r8
  int v8; // r9
  _BOOL4 v9; // r3
  __suseconds_t v10; // r0
  unsigned int v11; // r1
  int v12; // r1
  int v13; // r3
  char *v14; // r4
  char *v15; // r0
  char *v16; // r4
  int v18; // [sp+10h] [bp-Ch]
  int v19; // [sp+14h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 12);
  v7 = 0;
  v8 = 0;
  v9 = v4 >= 0;
  if ( !*(_DWORD *)(a1 + 4) )
    v9 = 0;
  if ( v9 )
  {
    v10 = sub_78F48();
    v7 = sub_66608(v10, v11, v4);
    v8 = v12;
  }
  v13 = *(_DWORD *)(a1 + 20);
  LOBYTE(v18) = a2;
  v14 = *(char **)(a1 + 16);
  if ( (unsigned int)(v13 + 1) > *(_DWORD *)(a1 + 24) )
  {
    v15 = (char *)sub_78018(a1 + 16, *(void **)(a1 + 16), v13 + 1, 0x18u);
    v13 = *(_DWORD *)(a1 + 20);
    v14 = v15;
    *(_DWORD *)(a1 + 16) = v15;
  }
  v16 = &v14[24 * v13];
  *(_DWORD *)v16 = a3;
  *((_DWORD *)v16 + 1) = 0;
  *((_DWORD *)v16 + 2) = v7;
  *((_DWORD *)v16 + 3) = v8;
  v16 += 16;
  *(_DWORD *)v16 = v18;
  *((_DWORD *)v16 + 1) = v19;
  ++*(_DWORD *)(a1 + 20);
  return v18;
}
// 6801A: variable 'v11' is possibly undefined
// 68020: variable 'v12' is possibly undefined
// 68060: variable 'v18' is possibly undefined
// 68060: variable 'v19' is possibly undefined
