/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B750
// Address: 0x000000010005B750

//----- (000000010005B750) ----------------------------------------------------
void __fastcall sub_10005B750(void **a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  char *v9; // x25
  int v10; // w0
  char *v11; // x26
  size_t v12; // x22
  unsigned __int64 v13; // x9
  char *v14; // x8
  const void *v15; // x1
  unsigned __int64 v16; // x8
  void *v18; // x0
  void *v19[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v20; // [xsp+10h] [xbp-70h]

  v6 = (int)unpack_dd(a3, a3[1]);
  if ( a1[1] != (void *)v6 )
  {
    *(_OWORD *)v19 = 0u;
    v20 = 0u;
    sub_10005BFA4(a1, v6, (unsigned __int64)v19);
    if ( v19[1] )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19[1]);
    }
  }
  if ( (int)v6 >= 1 )
  {
    v7 = 0;
    v8 = 32 * v6;
    do
    {
      v9 = (char *)*a1;
      *(_DWORD *)&v9[v7] = unpack_dd(a3, a3[1]);
      v10 = unpack_dd(a3, a3[1]);
      v11 = &v9[v7];
      v12 = v10;
      v13 = *(_QWORD *)&v9[v7 + 16];
      if ( v13 >= v10 )
      {
        if ( v13 != v10 )
        {
          LOBYTE(v19[0]) = 0;
          sub_100019CE4((_QWORD **)v11 + 1, v10, v19);
        }
      }
      else
      {
        v14 = *((char **)v11 + 1);
        if ( *((_QWORD *)v11 + 3) < (unsigned __int64)v10 )
        {
          v14 = (char *)qvector_reserve((_QWORD *)v11 + 1, *((_QWORD **)v11 + 1), v10, 1u);
          *((_QWORD *)v11 + 1) = v14;
          v13 = *((_QWORD *)v11 + 2);
        }
        bzero(&v14[v13], v12 - v13);
        *((_QWORD *)v11 + 2) = v12;
      }
      if ( a2 )
      {
        *(_DWORD *)&v9[v7 + 4] = unpack_dd(a3, a3[1]);
        v15 = (const void *)*a3;
        v16 = *a3 + v12;
        if ( v16 >= *a3 && v16 <= a3[1] )
        {
          v18 = *((void **)v11 + 1);
          *a3 = v16;
          memcpy(v18, v15, v12);
        }
      }
      v7 += 32;
    }
    while ( v8 != v7 );
  }
}
