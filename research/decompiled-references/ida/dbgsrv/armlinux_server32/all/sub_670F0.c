/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_670F0
// Address: 0x000670F0

//----- (000670F0) --------------------------------------------------------
int __fastcall sub_670F0(int a1, int a2, int a3)
{
  int (*v5)(void); // r3
  int v6; // r4
  int v7; // r5
  int v8; // r7
  int (*v9)(); // r2
  const char *v10; // r0
  const char *v11; // r4
  size_t v12; // r0
  size_t v13; // r5
  int v14; // r4
  unsigned int v16; // r6
  void *v17; // r0
  const char *v18; // r1
  int v20; // [sp+10h] [bp-Ch] BYREF

  v5 = *(int (**)(void))(*(_DWORD *)a1 + 12);
  if ( (char *)v5 == (char *)sub_66EF8 )
    v6 = *(_DWORD *)(a1 + 52);
  else
    v6 = v5();
  sub_66B38(&v20, v6, 1, a3);
  if ( !a3 )
  {
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
  do
  {
    while ( sub_666B8(v6) > 0 )
    {
      v7 = sub_666A0(v6);
      if ( v7 <= 0 )
        goto LABEL_6;
      a3 -= v7;
      a2 += v7;
      sub_66B60(&v20);
      if ( !a3 )
        goto LABEL_16;
    }
    v7 = -1;
LABEL_6:
    v8 = sub_666A8(v6);
  }
  while ( v8 == -21015 );
  v9 = *(int (**)())(*(_DWORD *)a1 + 24);
  if ( v9 != nullsub_7 )
    ((void (__fastcall *)(int))v9)(a1);
  if ( !v7 || (*(_BYTE *)(a1 + 4) = 1, v8 == -15059582) )
  {
    v14 = -1;
  }
  else
  {
    v10 = (const char *)sub_666B0(v6);
    v11 = v10;
    if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
    {
      v16 = v12 + 1;
      v17 = *(void **)(a1 + 8);
      if ( v16 > *(_DWORD *)(a1 + 16) )
      {
        v17 = sub_78018(a1 + 8, *(void **)(a1 + 8), v16, 1u);
        *(_DWORD *)(a1 + 8) = v17;
      }
      v18 = v11;
      v14 = -1;
      *(_DWORD *)(a1 + 12) = v16;
      memmove(v17, v18, v13);
      *(_BYTE *)(*(_DWORD *)(a1 + 8) + v13) = 0;
    }
    else
    {
      v14 = -1;
      *(_DWORD *)(a1 + 12) = 0;
    }
  }
LABEL_17:
  sub_66B50(&v20);
  return v14;
}
// 5792C: using guessed type int nullsub_7();
