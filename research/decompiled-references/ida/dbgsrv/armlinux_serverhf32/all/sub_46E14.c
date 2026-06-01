/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E14
// Address: 0x00046E14

//----- (00046E14) --------------------------------------------------------
int __fastcall sub_46E14(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r1
  int v7; // r8
  int v8; // r10
  unsigned __int8 *v9; // r7
  char *v10; // r2
  char *v11; // r0
  int v12; // r3
  int v14; // [sp+8h] [bp-2Ch]
  unsigned __int8 v16[8]; // [sp+10h] [bp-24h] BYREF
  int v17; // [sp+18h] [bp-1Ch]
  int v18; // [sp+1Ch] [bp-18h]
  int v19; // [sp+20h] [bp-14h]
  int v20; // [sp+24h] [bp-10h]

  if ( !a4 )
    return a2;
  v6 = a5 - (a3 - a2);
  if ( v6 >= 0 && a5 > v6 )
  {
    v7 = 0;
    v8 = a5 - v6;
    v9 = (unsigned __int8 *)(a4 + 24 * v6);
    v14 = a1 + 12;
    do
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v16[0] = 2;
      sub_459A0(v16, v9);
      v12 = *(_DWORD *)(a1 + 16);
      if ( (unsigned int)(v12 + 1) <= *(_DWORD *)(a1 + 20) )
      {
        v10 = *(char **)(a1 + 12);
      }
      else
      {
        v10 = (char *)sub_77EB0(v14, *(void **)(a1 + 12), v12 + 1, 0x18u);
        v12 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 12) = v10;
      }
      v11 = &v10[24 * v12];
      *v11 = 2;
      *((_DWORD *)v11 + 2) = 0;
      *((_DWORD *)v11 + 3) = 0;
      *((_DWORD *)v11 + 4) = 0;
      *((_DWORD *)v11 + 5) = 0;
      sub_459A0((unsigned __int8 *)v11, v16);
      ++v7;
      v9 += 24;
      ++*(_DWORD *)(a1 + 16);
      sub_455C8(v16);
    }
    while ( v8 != v7 );
  }
  return a3;
}
