/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33A50
// Address: 0x00033A50

//----- (00033A50) --------------------------------------------------------
void __fastcall sub_33A50(int a1, int a2, int a3)
{
  signed int v4; // r2
  signed int v6; // r1
  unsigned int v8; // r2
  const char *v9; // r2
  int *v10; // r3
  __int64 v11; // r0
  signed int v12; // r7
  unsigned int v13; // r2
  int *v14; // r1
  __int64 v15; // r2
  char *v16; // r0
  signed int v17[3]; // [sp+10h] [bp-28h] BYREF
  void *v18; // [sp+1Ch] [bp-1Ch] BYREF
  int v19; // [sp+20h] [bp-18h]
  int v20; // [sp+24h] [bp-14h]
  void *ptr; // [sp+28h] [bp-10h] BYREF
  int v22; // [sp+2Ch] [bp-Ch]

  if ( !*(_BYTE *)(a1 + 36) )
    sub_14980();
  v4 = *(_DWORD *)(a3 + 32);
  v6 = *(_DWORD *)(a3 + 36);
  v18 = nullptr;
  v17[0] = v4;
  v17[1] = v6;
  v8 = *(_DWORD *)a3;
  v19 = 0;
  v20 = 0;
  sub_33734(&ptr, a1, v8);
  if ( v22 )
    v9 = (const char *)ptr;
  else
    v9 = (const char *)&dword_8DB98;
  sub_188E0((int)&v18, "Size of %s", v9);
  if ( ptr )
  {
    v22 = 0;
    sub_77F70(ptr);
  }
  if ( v19 )
    v10 = (int *)v18;
  else
    v10 = &dword_8DB98;
  HIDWORD(v11) = v17;
  LODWORD(v11) = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 364);
  sub_31F4C(v11, 1u, (int)v10, *(_QWORD *)(a3 + 8), -1);
  v12 = v17[0];
  v13 = *(_DWORD *)(a2 + 4);
  if ( v17[0] > v13 )
  {
    v16 = *(char **)a2;
    if ( v17[0] > *(_DWORD *)(a2 + 8) )
    {
      v16 = (char *)sub_78018(a2, *(void **)a2, v17[0], 1u);
      v13 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)a2 = v16;
    }
    memset(&v16[v13], 0, v12 - v13);
    *(_DWORD *)(a2 + 4) = v12;
  }
  else if ( v17[0] < v13 )
  {
    *(_DWORD *)(a2 + 4) = v17[0];
  }
  v14 = *(int **)(a1 + 32);
  LODWORD(v15) = *(_DWORD *)(a3 + 8);
  HIDWORD(v15) = v14[93];
  sub_74D98(v14[91], v15 + __PAIR64__(*(_DWORD *)(a3 + 12), v14[92]), 0);
  sub_2A420(*(_DWORD *)(a1 + 32), *(void **)a2, v17[0], 0);
  if ( v18 )
  {
    v19 = 0;
    sub_77F70(v18);
  }
}
// 8DB98: using guessed type int dword_8DB98;
