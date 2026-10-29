/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetz
// Address: 0x000ABBA0

//----- (000ABBA0) --------------------------------------------------------
int __cdecl qlgetz(unsigned int a1, int off, int a3, int a4, unsigned int a5)
{
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int v10; // esi
  int v11; // eax
  char v12; // al
  int v14; // [esp+8h] [ebp-24h]
  int v15; // [esp+Ch] [ebp-20h]
  char dest; // [esp+17h] [ebp-15h] BYREF
  unsigned int v17; // [esp+18h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  if ( (int)a5 <= 0 )
    return a4;
  v5 = a3;
  v6 = off;
  if ( (a3 & off) == 0xFFFFFFFF )
  {
    v15 = 0;
    v14 = 0;
    goto LABEL_13;
  }
  if ( !a1 )
  {
    v15 = -1;
    v14 = -1;
    goto LABEL_13;
  }
  if ( *(int *)a1 >= 2 )
  {
    v7 = *(_DWORD *)(a1 + 16);
    v14 = *(_DWORD *)(a1 + 20);
LABEL_12:
    v15 = v7;
    *(_DWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 20) = v5;
    goto LABEL_13;
  }
  v8 = qfseek(*(FILE **)(a1 + 4), 0, 0, 1);
  v7 = -1;
  v9 = -1;
  if ( !v8 )
    v7 = qftell(*(FILE **)(a1 + 4));
  v14 = v9;
  if ( *(int *)a1 >= 2 )
  {
    v5 = a3;
    v6 = off;
    goto LABEL_12;
  }
  v15 = v7;
  if ( !qfseek(*(FILE **)(a1 + 4), off, a3, 0) )
    qftell(*(FILE **)(a1 + 4));
LABEL_13:
  v10 = 1;
  while ( v10 < a5 && a1 )
  {
    v11 = *(int *)a1 < 2 ? qfread(*(FILE **)(a1 + 4), &dest, 1) : sub_AB320(__SPAIR64__(&dest, a1), 1);
    if ( v11 != 1 )
      break;
    v12 = dest;
    *(_BYTE *)(a4 + v10++ - 1) = dest;
    if ( !v12 )
      goto LABEL_21;
  }
  *(_BYTE *)(a4 + v10 - 1) = 0;
  if ( !a1 )
    return a4;
LABEL_21:
  if ( (a3 & off) != 0xFFFFFFFF )
  {
    if ( *(int *)a1 < 2 )
    {
      if ( !qfseek(*(FILE **)(a1 + 4), v15, v14, 0) )
        qftell(*(FILE **)(a1 + 4));
    }
    else
    {
      *(_DWORD *)(a1 + 16) = v15;
      *(_DWORD *)(a1 + 20) = v14;
    }
  }
  return a4;
}
// ABCBD: conditional instruction was optimized away because edi.4!=0
// ABC4D: variable 'v9' is possibly undefined
