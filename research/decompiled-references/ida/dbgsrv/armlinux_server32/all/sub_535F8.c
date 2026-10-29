/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_535F8
// Address: 0x000535F8

//----- (000535F8) --------------------------------------------------------
void __fastcall sub_535F8(_DWORD *a1, _DWORD *a2)
{
  int v3; // r8
  char *v4; // r0
  int v5; // r6
  int i; // r5
  char *v7; // r4
  void *v8; // r0
  void *v9; // r0
  int v10; // r10
  char *v12; // r4
  int v13; // r5
  int v14; // r0
  int v15; // r1
  size_t v16; // r9
  void *v17; // r0
  size_t v18; // r9
  void *v19; // r0
  char *v20; // [sp+4h] [bp-8h]

  v3 = a2[1];
  if ( v3 )
  {
    v10 = 0;
    v20 = (char *)sub_77FEC(40 * v3);
    v12 = v20;
    do
    {
      v13 = *a2 + v12 - v20;
      v14 = *(_DWORD *)v13;
      v15 = *(_DWORD *)(v13 + 4);
      *((_DWORD *)v12 + 2) = 0;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 0;
      *(_DWORD *)v12 = v14;
      *((_DWORD *)v12 + 1) = v15;
      v16 = *(_DWORD *)(v13 + 12);
      if ( v16 )
      {
        v17 = sub_77FEC(*(_DWORD *)(v13 + 12));
        *((_DWORD *)v12 + 4) = v16;
        *((_DWORD *)v12 + 2) = v17;
        memcpy(v17, *(const void **)(v13 + 8), v16);
        *((_DWORD *)v12 + 3) = v16;
      }
      *((_DWORD *)v12 + 5) = 0;
      *((_DWORD *)v12 + 6) = 0;
      *((_DWORD *)v12 + 7) = 0;
      v18 = *(_DWORD *)(v13 + 24);
      if ( v18 )
      {
        v19 = sub_77FEC(*(_DWORD *)(v13 + 24));
        *((_DWORD *)v12 + 5) = v19;
        *((_DWORD *)v12 + 7) = v18;
        memcpy(v19, *(const void **)(v13 + 20), v18);
        *((_DWORD *)v12 + 6) = v18;
      }
      ++v10;
      v12 += 40;
      *((_DWORD *)v12 - 2) = *(_DWORD *)(v13 + 32);
      *(v12 - 4) = *(_BYTE *)(v13 + 36);
      *(v12 - 3) = *(_BYTE *)(v13 + 37);
    }
    while ( v3 != v10 );
  }
  else
  {
    v20 = nullptr;
  }
  v4 = (char *)a1[59];
  if ( v4 )
  {
    v5 = a1[60];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[40 * i];
        v8 = *((void **)v7 + 5);
        if ( v8 )
        {
          *((_DWORD *)v7 + 6) = 0;
          sub_77F70(v8);
        }
        v9 = *((void **)v7 + 2);
        if ( v9 )
        {
          *((_DWORD *)v7 + 3) = 0;
          sub_77F70(v9);
        }
        v4 = (char *)a1[59];
      }
    }
    a1[60] = 0;
    sub_77F70(v4);
  }
  a1[61] = v3;
  a1[59] = v20;
  a1[60] = v3;
}
