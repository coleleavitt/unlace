/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63820
// Address: 0x00063820

//----- (00063820) --------------------------------------------------------
unsigned int *__fastcall sub_63820(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r5
  void **v4; // r7
  unsigned int v5; // r4
  void *v6; // r6
  unsigned int *v7; // r4
  unsigned int v8; // r1
  int v9; // r5
  int v10; // r6
  char *v11; // r0
  char *v12; // r7
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r4
  unsigned int v18; // r5
  _DWORD *v19; // r0
  void **v20; // r6
  int v21; // r7
  void *v23; // [sp+4h] [bp-20h]
  void **v24; // [sp+8h] [bp-1Ch]
  int v25; // [sp+Ch] [bp-18h]
  unsigned int *v26; // [sp+10h] [bp-14h]
  unsigned int *v27; // [sp+10h] [bp-14h]
  char *v29; // [sp+1Ch] [bp-8h]
  char *v30; // [sp+20h] [bp-4h]

  v3 = a2;
  v4 = (void **)a1;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 >= a2 )
  {
    v7 = (unsigned int *)(a1 + 4);
  }
  else
  {
    v25 = a3;
    v30 = (char *)qvector_reserve(a1, nullptr, a2, 0x100u);
    v6 = v4[2];
    v4[2] = (void *)v5;
    v7 = (unsigned int *)(v4 + 1);
    v29 = (char *)*v4;
    v8 = v3;
    v9 = (int)v4[1] - 1;
    if ( v9 < 0 )
    {
      v15 = *v4;
      v3 = v8;
    }
    else
    {
      v23 = v6;
      v26 = (unsigned int *)(v4 + 1);
      v24 = v4;
      v10 = 0;
      do
      {
        *(_DWORD *)&v30[v10] = *(_DWORD *)&v29[v10];
        v11 = &v30[v10];
        v12 = &v29[v10];
        *((_DWORD *)v11 + 1) = *(_DWORD *)&v29[v10 + 4];
        *((_DWORD *)v12 + 1) = 0;
        *((_DWORD *)v11 + 2) = *(_DWORD *)&v29[v10 + 8];
        *((_DWORD *)v12 + 2) = 0;
        *((_DWORD *)v11 + 3) = *(_DWORD *)&v29[v10 + 12];
        *((_DWORD *)v12 + 3) = 0;
        *((_DWORD *)v11 + 4) = *(_DWORD *)&v29[v10 + 16];
        *((_DWORD *)v11 + 5) = *(_DWORD *)&v29[v10 + 20];
        *((_DWORD *)v12 + 5) = 0;
        *((_DWORD *)v11 + 6) = *(_DWORD *)&v29[v10 + 24];
        *((_DWORD *)v12 + 6) = 0;
        *((_DWORD *)v11 + 7) = *(_DWORD *)&v29[v10 + 28];
        *((_DWORD *)v12 + 7) = 0;
        qmemcpy(&v30[v10 + 32], &v29[v10 + 32], 0xE0u);
        v13 = *(void **)&v29[v10 + 20];
        if ( v13 )
        {
          *((_DWORD *)v12 + 6) = 0;
          qfree(v13);
          *((_DWORD *)v12 + 5) = 0;
          *((_DWORD *)v12 + 7) = 0;
        }
        v14 = *((void **)v12 + 1);
        if ( v14 )
        {
          *((_DWORD *)v12 + 2) = 0;
          qfree(v14);
          *((_DWORD *)v12 + 1) = 0;
          *((_DWORD *)v12 + 3) = 0;
        }
        v10 += 256;
        --v9;
      }
      while ( v9 >= 0 );
      v4 = v24;
      v15 = *v24;
      v3 = a2;
      v7 = v26;
      v6 = v23;
    }
    qfree(v15);
    v4[2] = v6;
    *v4 = v30;
    a3 = v25;
  }
  v27 = v7;
  v16 = *v7;
  if ( *v7 < v3 )
  {
    v17 = a2 - v16;
    v18 = v16 << 8;
    do
    {
      v19 = (char *)*v4 + v18;
      v20 = v4;
      v21 = a3;
      sub_63930(v19, a3);
      a3 = v21;
      v4 = v20;
      v18 += 256;
      --v17;
    }
    while ( v17 );
  }
  *v27 = a2;
  return v27;
}
