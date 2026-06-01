/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D044
// Address: 0x000000000005D044

//----- (000000000005D044) ----------------------------------------------------
__int64 __fastcall sub_5D044(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x9
  __int64 v3; // x10
  __int64 v4; // x8
  unsigned __int64 v5; // x9
  size_t v6; // x20
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x22
  const void *v9; // x21
  char *v10; // x24
  __int64 v12; // x23
  __int64 (__fastcall *v13)(char *, const void *, size_t); // x25
  int i; // w0

  v2 = a1[2];
  v3 = a1[6];
  v4 = a1[9];
  if ( v2 )
    v5 = v2 - 1;
  else
    v5 = 0;
  if ( v3 )
    v6 = v3 - 1;
  else
    v6 = 0;
  *(_QWORD *)(a2 + 8) = -1;
  if ( v6 - 1 < v5 )
  {
    v7 = v5 + 1;
    v8 = v7 - v6;
    if ( v7 != v6 )
    {
      v9 = (const void *)a1[5];
      v10 = (char *)a1[1];
      v12 = 0;
      if ( v4 )
      {
        v13 = (__int64 (__fastcall *)(char *, const void *, size_t))memicmp;
        goto LABEL_12;
      }
      v13 = (__int64 (__fastcall *)(char *, const void *, size_t))&memcmp;
      for ( i = memcmp(v10, v9, v6); i; i = v13(&v10[v12], v9, v6) )
      {
        if ( ++v12 >= v8 )
          return 0;
LABEL_12:
        ;
      }
      *(_QWORD *)(a2 + 8) = v12;
    }
  }
  return 0;
}
