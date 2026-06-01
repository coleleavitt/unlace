/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_add
// Address: 0x00072EE4

//----- (00072EE4) --------------------------------------------------------
int __fastcall cliopts_t_add(int a1, int *a2, int a3)
{
  int v3; // r4
  int v5; // r1
  char *v6; // r0
  char *v7; // r0
  int v10; // [sp+10h] [bp-18h]
  int v11; // [sp+14h] [bp-14h]
  int v12; // [sp+18h] [bp-10h]
  int v13; // [sp+1Ch] [bp-Ch]
  int v14; // [sp+20h] [bp-8h]
  int v15; // [sp+24h] [bp-4h]

  if ( a3 )
  {
    v3 = a3;
    v5 = *(_DWORD *)(a1 + 4);
    do
    {
      v10 = *a2;
      v11 = a2[1];
      v12 = a2[2];
      v13 = a2[3];
      v14 = a2[4];
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v5 + 1) )
      {
        v6 = *(char **)a1;
      }
      else
      {
        v6 = (char *)qvector_reserve(a1, *(void **)a1, v5 + 1, 0x14u);
        *(_DWORD *)a1 = v6;
        v5 = *(_DWORD *)(a1 + 4);
      }
      v7 = &v6[20 * v5];
      *(_DWORD *)v7 = v10;
      *((_DWORD *)v7 + 1) = v11;
      v7 += 8;
      *(_DWORD *)v7 = v12;
      *((_DWORD *)v7 + 1) = v13;
      *((_DWORD *)v7 + 2) = v14;
      v5 = *(_DWORD *)(a1 + 4) + 1;
      *(_DWORD *)(a1 + 4) = v5;
      --v3;
      a2 += 5;
    }
    while ( v3 );
  }
  return _stack_chk_guard - v15;
}
// 72F50: variable 'v15' is possibly undefined
