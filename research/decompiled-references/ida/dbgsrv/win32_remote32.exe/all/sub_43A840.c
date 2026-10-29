/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A840
// Address: 0x0043A840

//----- (0043A840) --------------------------------------------------------
unsigned int *__thiscall sub_43A840(unsigned int *this, _DWORD *a2)
{
  unsigned int *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // ecx
  char *v6; // esi
  int v7; // edi
  int v8; // ecx
  unsigned int v9; // ebx
  LPVOID v10; // eax
  unsigned int v11; // ebx
  LPVOID v12; // eax
  char *v14; // [esp+10h] [ebp-24h]
  char *v15; // [esp+14h] [ebp-20h]
  unsigned int v17; // [esp+20h] [ebp-14h]
  unsigned int v18; // [esp+24h] [ebp-10h]

  v2 = this;
  v3 = 0;
  v17 = 0;
  v4 = a2[1];
  v18 = v4;
  if ( v4 )
  {
    v15 = (char *)sub_4539E0(40 * v4);
    v5 = -12 - (_DWORD)v15;
    v17 = v4;
    v6 = v15 + 12;
    do
    {
      v14 = v6 - 12;
      v7 = (int)&v6[v5 + *a2];
      v8 = *(_DWORD *)(v7 + 4);
      *(_DWORD *)v14 = *(_DWORD *)v7;
      *((_DWORD *)v14 + 1) = v8;
      *((_DWORD *)v6 - 1) = 0;
      *(_DWORD *)v6 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v9 = *(_DWORD *)(v7 + 12);
      if ( v9 )
      {
        v10 = sub_4539E0(*(_DWORD *)(v7 + 12));
        *((_DWORD *)v6 - 1) = v10;
        *((_DWORD *)v6 + 1) = v9;
        sub_464310((unsigned int)v10, *(_DWORD *)(v7 + 8), v9);
        *(_DWORD *)v6 = v9;
      }
      *((_DWORD *)v6 + 2) = 0;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 4) = 0;
      v11 = *(_DWORD *)(v7 + 24);
      if ( v11 )
      {
        v12 = sub_4539E0(v11);
        *((_DWORD *)v6 + 2) = v12;
        *((_DWORD *)v6 + 4) = v11;
        sub_464310((unsigned int)v12, *(_DWORD *)(v7 + 20), v11);
        *((_DWORD *)v6 + 3) = v11;
      }
      v5 = -12 - (_DWORD)v15;
      *((_DWORD *)v6 + 5) = *(_DWORD *)(v7 + 32);
      v6[24] = *(_BYTE *)(v7 + 36);
      v6[25] = *(_BYTE *)(v7 + 37);
      v6 += 40;
      --v18;
    }
    while ( v18 );
    v2 = this;
    v3 = (unsigned int)v15;
  }
  if ( *v2 )
  {
    sub_415E00(v2, 0);
    sub_453A20((void *)*v2);
    v2[2] = 0;
  }
  *v2 = v3;
  v2[1] = v17;
  v2[2] = v17;
  return v2;
}
