/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C100
// Address: 0x0043C100

//----- (0043C100) --------------------------------------------------------
void __stdcall sub_43C100(int a1, int *a2, unsigned int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // ecx
  LPVOID v7; // eax
  int *v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  LPVOID v13; // [esp+18h] [ebp-28h]
  unsigned int v14; // [esp+1Ch] [ebp-24h]
  unsigned int v15; // [esp+20h] [ebp-20h]
  LPVOID v16; // [esp+24h] [ebp-1Ch]
  unsigned int v17; // [esp+2Ch] [ebp-14h]
  int v18; // [esp+30h] [ebp-10h]
  int v19; // [esp+48h] [ebp+8h]

  v3 = a1 + 24;
  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      sub_40ACD0((_DWORD *)(v5 + *(_DWORD *)v3));
      v5 += 32;
      --v4;
    }
    while ( v4 );
  }
  v6 = a3;
  *(_DWORD *)(a1 + 28) = 0;
  if ( a3 > *(_DWORD *)(a1 + 32) )
  {
    v7 = sub_453B00(v3, *(void **)v3, a3, 0x20u);
    v6 = a3;
    *(_DWORD *)v3 = v7;
  }
  if ( v6 > 0 )
  {
    do
    {
      v8 = a2;
      v13 = nullptr;
      a2 += 8;
      v14 = 0;
      v9 = v8[3];
      v19 = *v8;
      v18 = v8[1];
      v15 = 0;
      if ( v9 )
      {
        v13 = sub_4539E0(v9);
        v15 = v9;
        sub_464310((unsigned int)v13, v8[2], v9);
        v14 = v9;
      }
      v10 = v8[6];
      v16 = nullptr;
      v17 = 0;
      if ( v10 )
      {
        v16 = sub_4539E0(v10);
        v17 = v10;
        sub_464310((unsigned int)v16, v8[5], v10);
      }
      else
      {
        v10 = 0;
      }
      v11 = *(_DWORD *)(v3 + 4) + 1;
      if ( v11 > *(_DWORD *)(v3 + 8) )
        *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v11, 0x20u);
      v12 = (_DWORD *)(*(_DWORD *)v3 + 32 * *(_DWORD *)(v3 + 4));
      *v12 = v19;
      v12[1] = v18;
      v12[2] = v13;
      v12[3] = v14;
      v12[4] = v15;
      v12[5] = v16;
      v12[6] = v10;
      v12[7] = v17;
      ++*(_DWORD *)(v3 + 4);
      --a3;
    }
    while ( a3 );
  }
}
