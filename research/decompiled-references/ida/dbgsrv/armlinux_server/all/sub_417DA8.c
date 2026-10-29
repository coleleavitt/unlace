/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417DA8
// Address: 0x0000000000417DA8

//----- (0000000000417DA8) ----------------------------------------------------
__int64 __fastcall sub_417DA8(__int64 a1, int a2)
{
  char *v4; // x0
  __int64 v5; // x23
  __int64 v6; // x22
  __int64 i; // x21
  char *v8; // x19
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x1
  unsigned int v13; // w19

  v4 = *(char **)(a1 + 456);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 464);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = &v4[v6];
        v9 = *(void **)&v4[v6 + 40];
        if ( v9 )
        {
          *((_QWORD *)v8 + 6) = 0;
          j__free(v9);
        }
        v10 = *((void **)v8 + 2);
        if ( v10 )
        {
          *((_QWORD *)v8 + 3) = 0;
          j__free(v10);
        }
        v6 += 80;
        v4 = *(char **)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    j__free(v4);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v11 = *(_QWORD *)(a1 + 1880);
  *(_BYTE *)(a1 + 2118) = 0;
  sub_40E630(a1 + 1864, v11);
  *(_QWORD *)(a1 + 1880) = 0;
  *(_QWORD *)(a1 + 1904) = 0;
  *(_QWORD *)(a1 + 1888) = a1 + 1872;
  *(_QWORD *)(a1 + 1896) = a1 + 1872;
  if ( !(unsigned __int8)sub_45ED40(a1) )
    return 0;
  v13 = (unsigned __int8)sub_416400(a1, a2, 2);
  if ( !v13 )
    return 0;
  sub_416EF8((_QWORD *)a1);
  return v13;
}
