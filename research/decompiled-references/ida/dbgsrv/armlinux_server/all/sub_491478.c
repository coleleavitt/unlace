/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491478
// Address: 0x0000000000491478

//----- (0000000000491478) ----------------------------------------------------
__int64 __fastcall sub_491478(__int64 a1)
{
  int v2; // w0
  unsigned int v3; // w1
  size_t v5; // x0
  size_t v6; // x22
  unsigned __int64 v7; // x23
  void *v8; // x0
  char name[4096]; // [xsp+38h] [xbp-1008h] BYREF

  v2 = gethostname(name, 0x1000u);
  v3 = 0;
  if ( !v2 )
  {
    name[4095] = 0;
    v5 = strlen(name);
    v6 = v5;
    if ( v5 )
    {
      v7 = v5 + 1;
      v8 = *(void **)a1;
      if ( v7 > *(_QWORD *)(a1 + 16) )
      {
        v8 = sub_491288(a1, *(void **)a1, v7, 1u);
        *(_QWORD *)a1 = v8;
      }
      *(_QWORD *)(a1 + 8) = v7;
      memmove(v8, name, v6);
      v3 = 1;
      *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      return 1;
    }
  }
  return v3;
}
// 491478: could not find valid save-restore pair for x22
