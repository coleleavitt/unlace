/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: relocate_relobj
// Address: 0x0000000100073A8C

//----- (0000000100073A8C) ----------------------------------------------------
__int64 __fastcall relocate_relobj(__int64 result, __int64 a2, int a3)
{
  __int64 v3; // x8
  char *v4; // x10
  int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x11
  __int64 v8; // x19
  _QWORD *v9; // x24
  unsigned __int64 v11; // x21
  int v13; // w22
  unsigned int v14; // w0
  char *v15; // [xsp+0h] [xbp-40h] BYREF

  if ( result )
  {
    v3 = *(_QWORD *)(result + 40);
    if ( v3 )
    {
      v4 = *(char **)(result + 32);
      v5 = *v4;
      if ( v5 < 0 )
        return 0;
      v6 = v5 & 0xF;
      if ( v6 > 3 || __CFADD__(a2, *(_QWORD *)(result + 8)) )
        return 0;
      v7 = *(_QWORD *)(result + 24);
      v8 = a2 - v7;
      if ( a2 != v7 )
      {
        v9 = (_QWORD *)result;
        v15 = v4 + 1;
        v11 = (unsigned __int64)&v4[v3];
        if ( v4 + 1 < &v4[v3] )
        {
          v13 = 1 << v6;
          do
          {
            v14 = unpack_dd((unsigned __int64 *)&v15, v11);
            if ( v14 + v13 <= v14 || v9[1] <= (unsigned __int64)(v14 + v13) )
              return 0;
            reloc_value((unsigned int *)(*v9 + v14), v13, v8, a3);
          }
          while ( (unsigned __int64)v15 < v11 );
        }
        v9[3] = a2;
      }
    }
    return 1;
  }
  return result;
}
