/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C170
// Address: 0x000000000045C170

//----- (000000000045C170) ----------------------------------------------------
void __fastcall sub_45C170(_QWORD *a1, _QWORD *a2)
{
  char *v3; // x24
  __int64 v4; // x23
  char *v5; // x0
  __int64 v6; // x25
  __int64 v7; // x20
  __int64 v8; // x21
  char *v9; // x19
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x25
  char *v14; // x19
  signed __int64 v15; // x20
  __int64 v16; // x3
  size_t v17; // x21
  void *v18; // x0
  size_t v19; // x21
  void *v20; // x0

  v3 = nullptr;
  v4 = a2[1];
  if ( v4 )
  {
    v12 = 0;
    v3 = (char *)sub_491248(80 * v4);
    v14 = v3;
    do
    {
      v15 = *a2 + v14 - v3;
      v16 = *(_QWORD *)(v15 + 8);
      *(_QWORD *)v14 = *(_QWORD *)v15;
      *((_QWORD *)v14 + 1) = v16;
      *((_QWORD *)v14 + 2) = 0;
      *((_QWORD *)v14 + 3) = 0;
      *((_QWORD *)v14 + 4) = 0;
      v17 = *(_QWORD *)(v15 + 24);
      if ( v17 )
      {
        v18 = sub_491248(*(_QWORD *)(v15 + 24));
        *((_QWORD *)v14 + 2) = v18;
        *((_QWORD *)v14 + 4) = v17;
        memcpy(v18, *(const void **)(v15 + 16), v17);
        *((_QWORD *)v14 + 3) = v17;
      }
      *((_QWORD *)v14 + 5) = 0;
      *((_QWORD *)v14 + 6) = 0;
      *((_QWORD *)v14 + 7) = 0;
      v19 = *(_QWORD *)(v15 + 48);
      if ( v19 )
      {
        v20 = sub_491248(*(_QWORD *)(v15 + 48));
        *((_QWORD *)v14 + 5) = v20;
        *((_QWORD *)v14 + 7) = v19;
        memcpy(v20, *(const void **)(v15 + 40), v19);
        *((_QWORD *)v14 + 6) = v19;
      }
      v14 += 80;
      *((_QWORD *)v14 - 2) = *(_QWORD *)(v15 + 64);
      ++v12;
      *(v14 - 8) = *(_BYTE *)(v15 + 72);
      *(v14 - 7) = *(_BYTE *)(v15 + 73);
    }
    while ( v4 != v12 );
  }
  v5 = (char *)a1[57];
  if ( v5 )
  {
    v6 = a1[58];
    if ( v6 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = &v5[v8];
        v10 = *(void **)&v5[v8 + 40];
        if ( v10 )
        {
          *((_QWORD *)v9 + 6) = 0;
          j__free(v10);
        }
        v11 = *((void **)v9 + 2);
        if ( v11 )
        {
          *((_QWORD *)v9 + 3) = 0;
          j__free(v11);
        }
        ++v7;
        v8 += 80;
        v5 = (char *)a1[57];
      }
      while ( v6 != v7 );
    }
    a1[58] = 0;
    j__free(v5);
  }
  a1[57] = v3;
  a1[58] = v4;
  a1[59] = v4;
}
