/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4097F0
// Address: 0x00000000004097F0

//----- (00000000004097F0) ----------------------------------------------------
__int64 __fastcall sub_4097F0(__int64 a1, int a2, unsigned __int8 *a3, __int64 a4)
{
  const char *v6; // x21
  void *v7; // x0
  size_t v8; // x26
  __int64 v9; // x0
  __int64 v10; // x22
  size_t v11; // x25
  _BYTE *v12; // x0
  unsigned __int8 *v13[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( a2 != 1 )
    return 0;
  v13[0] = a3;
  v13[1] = &a3[a4];
  v6 = sub_48E720(v13, (unsigned __int64)&a3[a4], 0);
  v7 = *(void **)(a1 + 2008);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 2016) = 0;
    j__free(v7);
    *(_QWORD *)(a1 + 2008) = 0;
    *(_QWORD *)(a1 + 2024) = 0;
  }
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = *(_QWORD *)(a1 + 2016);
    if ( v9 )
    {
      v10 = v9 - 1;
      v11 = v8 + v9 - 1;
    }
    else
    {
      v11 = v8;
      v10 = 0;
    }
    v12 = *(_BYTE **)(a1 + 2008);
    if ( v11 + 1 > *(_QWORD *)(a1 + 2024) )
    {
      v12 = sub_491288(a1 + 2008, *(void **)(a1 + 2008), v11 + 1, 1u);
      *(_QWORD *)(a1 + 2008) = v12;
    }
    *(_QWORD *)(a1 + 2016) = v11 + 1;
    v12[v11] = 0;
    memmove((void *)(*(_QWORD *)(a1 + 2008) + v10), v6, v8);
  }
  return 1;
}
// 4097F0: could not find valid save-restore pair for x21
// 4097F0: could not find valid save-restore pair for x22
// 4097F0: could not find valid save-restore pair for x24
// 4097F0: could not find valid save-restore pair for x25
// 4097F0: could not find valid save-restore pair for x26
