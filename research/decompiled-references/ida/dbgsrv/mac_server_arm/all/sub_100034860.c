/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034860
// Address: 0x0000000100034860

//----- (0000000100034860) ----------------------------------------------------
__int64 __fastcall sub_100034860(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x25
  const char *v5; // x21
  __int64 v6; // x23
  const char *v7; // x0
  int v8; // w0
  const char *v9; // x1

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      v5 = a2[1] ? (const char *)*a2 : &byte_100075A30;
      v6 = a1 + 8;
      do
      {
        if ( *(_QWORD *)(v4 + 40) )
          v7 = *(const char **)(v4 + 32);
        else
          v7 = &byte_100075A30;
        v8 = strcmp(v7, v5);
        if ( v8 >= 0 )
          v6 = v4;
        v4 = *(_QWORD *)(v4 + (((unsigned int)v8 >> 28) & 8));
      }
      while ( v4 );
      if ( v6 != a1 + 8 )
      {
        v9 = *(_QWORD *)(v6 + 40) ? *(const char **)(v6 + 32) : &byte_100075A30;
        if ( (strcmp(v5, v9) & 0x80000000) == 0 )
          break;
      }
    }
    if ( !*(_QWORD *)(a1 + 24) )
      return 0xFFFFFFFFLL;
    a1 = sub_10002DD14(*(int *)(a1 + 24));
  }
  return *(unsigned int *)(v6 + 56);
}
// 100075A30: using guessed type char byte_100075A30;
