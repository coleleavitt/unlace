/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416EF8
// Address: 0x0000000000416EF8

//----- (0000000000416EF8) ----------------------------------------------------
bool __fastcall sub_416EF8(_QWORD *a1)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x23
  __int64 v4; // x19
  __int64 v5; // x3
  int v6; // w19
  char *v7; // x0
  _BOOL4 v8; // w24
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x20
  char *v12; // x19
  void *v13; // x0
  void *v14; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v17; // [xsp+48h] [xbp-18h]
  __int64 v18; // [xsp+50h] [xbp-10h]

  v2 = a1 + 17;
  v3 = a1 + 21;
  v4 = ((__int64)(a1[21] - a1[22]) >> 3) + ((__int64)(a1[19] - a1[17]) >> 3);
  v5 = 7 * (((__int64)(a1[24] - a1[20]) >> 3) - 1);
  ptr = nullptr;
  v17 = 0;
  v18 = 0;
  v6 = v5 - -954437177 * v4;
  if ( (unsigned int)sub_415E40((__int64)a1, (__int64 *)&ptr, 0) == 1 )
    sub_415768((__int64)a1, &ptr);
  v7 = (char *)ptr;
  v8 = 7 * (((__int64)(v3[3] - v2[3]) >> 3) - 1)
     - 0x71C71C71C71C71C7LL * (((__int64)(a1[21] - v3[1]) >> 3) + ((__int64)(v2[2] - a1[17]) >> 3)) != v6;
  if ( ptr )
  {
    v9 = v17;
    if ( v17 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = &v7[v10];
        v13 = *(void **)&v7[v10 + 40];
        if ( v13 )
        {
          *((_QWORD *)v12 + 6) = 0;
          j__free(v13);
        }
        v14 = *((void **)v12 + 2);
        if ( v14 )
        {
          *((_QWORD *)v12 + 3) = 0;
          j__free(v14);
        }
        ++v11;
        v10 += 80;
        v7 = (char *)ptr;
      }
      while ( v9 != v11 );
    }
    v17 = 0;
    j__free(v7);
  }
  return v8;
}
