/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A8B0
// Address: 0x000000000044A8B0

//----- (000000000044A8B0) ----------------------------------------------------
__int64 __fastcall sub_44A8B0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  int v6; // w1
  __int64 v7; // x19
  __int64 *v8; // x21
  __int64 v9; // x22
  char *v10; // x3
  __int64 *v11; // x0
  __int64 v12; // x4
  __int64 v14[4]; // [xsp+48h] [xbp-28h] BYREF

  if ( !a4 )
    return a2;
  v6 = a5 - (a3 - a2);
  if ( v6 >= 0 && a5 > v6 )
  {
    v7 = a1 + 24;
    v8 = (__int64 *)(a4 + 32LL * v6);
    v9 = a4 + 32 + 32 * ((unsigned int)(a5 - 1 - v6) + (__int64)v6);
    do
    {
      LOBYTE(v14[0]) = 2;
      memset(&v14[1], 0, 24);
      sub_4488B8(v14, v8);
      v12 = *(_QWORD *)(v7 + 8);
      if ( (unsigned __int64)(v12 + 1) <= *(_QWORD *)(v7 + 16) )
      {
        v10 = *(char **)v7;
      }
      else
      {
        v10 = (char *)sub_491288(v7, *(void **)v7, v12 + 1, 0x20u);
        v12 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)v7 = v10;
      }
      v11 = (__int64 *)&v10[32 * v12];
      *(_BYTE *)v11 = 2;
      v11[1] = 0;
      v11[2] = 0;
      v11[3] = 0;
      sub_4488B8(v11, v14);
      v8 += 4;
      ++*(_QWORD *)(v7 + 8);
      sub_448310(v14);
    }
    while ( v8 != (__int64 *)v9 );
  }
  return a3;
}
