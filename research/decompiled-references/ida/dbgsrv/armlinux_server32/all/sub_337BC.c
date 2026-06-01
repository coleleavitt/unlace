/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_337BC
// Address: 0x000337BC

//----- (000337BC) --------------------------------------------------------
void __fastcall sub_337BC(int a1, int a2, int a3)
{
  signed int v6; // r3
  const char *v7; // r2
  int *v8; // r3
  __int64 v9; // r0
  signed int v10; // r6
  unsigned int v11; // r2
  int *v12; // r1
  __int64 v13; // r2
  char *v14; // r0
  signed int v15[3]; // [sp+10h] [bp-2Ch] BYREF
  void *v16; // [sp+1Ch] [bp-20h] BYREF
  int v17; // [sp+20h] [bp-1Ch]
  int v18; // [sp+24h] [bp-18h]
  void *ptr; // [sp+28h] [bp-14h] BYREF
  int v20; // [sp+2Ch] [bp-10h]
  int v21; // [sp+30h] [bp-Ch]

  v6 = *(_DWORD *)(a3 + 32);
  v15[1] = *(_DWORD *)(a3 + 36);
  v15[0] = v6;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v16 = sub_78018((int)&v16, nullptr, 2u, 1u);
  v17 = 2;
  *(_BYTE *)v16 = 63;
  *((_BYTE *)v16 + 1) = 0;
  sub_3266C(a1, (int)&v16, (unsigned int *)a3);
  ptr = nullptr;
  v20 = 0;
  v21 = 0;
  if ( v17 )
    v7 = (const char *)v16;
  else
    v7 = (const char *)&dword_8DB98;
  sub_188E0((int)&ptr, "Size of %s", v7);
  if ( v20 )
    v8 = (int *)ptr;
  else
    v8 = &dword_8DB98;
  HIDWORD(v9) = v15;
  LODWORD(v9) = *(_DWORD *)(*(_DWORD *)(a1 + 132) + 364);
  sub_31F4C(v9, 1u, (int)v8, *(_QWORD *)(a3 + 24), -1);
  v10 = v15[0];
  v11 = *(_DWORD *)(a2 + 4);
  if ( v15[0] > v11 )
  {
    v14 = *(char **)a2;
    if ( v15[0] > *(_DWORD *)(a2 + 8) )
    {
      v14 = (char *)sub_78018(a2, *(void **)a2, v15[0], 1u);
      v11 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)a2 = v14;
    }
    memset(&v14[v11], 0, v10 - v11);
    *(_DWORD *)(a2 + 4) = v10;
  }
  else if ( v15[0] < v11 )
  {
    *(_DWORD *)(a2 + 4) = v15[0];
  }
  v12 = *(int **)(a1 + 132);
  LODWORD(v13) = *(_DWORD *)(a3 + 24);
  HIDWORD(v13) = v12[93];
  sub_74D98(v12[91], v13 + __PAIR64__(*(_DWORD *)(a3 + 28), v12[92]), 0);
  sub_2A420(*(_DWORD *)(a1 + 132), *(void **)a2, v15[0], 0);
  if ( ptr )
  {
    v20 = 0;
    sub_77F70(ptr);
  }
  if ( v16 )
  {
    v17 = 0;
    sub_77F70(v16);
  }
}
// 8DB98: using guessed type int dword_8DB98;
