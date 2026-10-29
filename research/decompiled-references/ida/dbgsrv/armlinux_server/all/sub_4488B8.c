/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4488B8
// Address: 0x00000000004488B8

//----- (00000000004488B8) ----------------------------------------------------
__int64 __fastcall sub_4488B8(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // x19
  unsigned int v4; // w0
  __int64 v5; // x1
  size_t v7; // x21
  __int64 v8; // x0
  void *v9; // x0

  if ( a1 == a2 )
    return 0;
  v3 = a1;
  if ( *(_BYTE *)a1 == 10 )
    goto LABEL_15;
  while ( 1 )
  {
    sub_448310(v3);
    v4 = *(unsigned __int8 *)a2;
    *(_BYTE *)v3 = v4;
    if ( v4 == 6 )
    {
      *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
      return 0;
    }
    if ( v4 > 6 )
      break;
    switch ( v4 )
    {
      case 3u:
        goto LABEL_9;
      case 5u:
        v8 = a2[1];
        v3[1] = v8;
        ++*(_DWORD *)(v8 + 48);
        return 0;
      case 2u:
LABEL_18:
        v3[1] = a2[1];
        return 0;
    }
LABEL_13:
    a1 = (__int64 *)(unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(283);
    __break(0x3E8u);
LABEL_15:
    v3 = sub_448A08(a1, 1);
    if ( !v3 )
      return sub_4869A0();
  }
  if ( v4 == 8 )
    goto LABEL_18;
  if ( v4 >= 8 )
  {
    if ( v4 == 9 )
      goto LABEL_18;
    if ( v4 == 10 )
    {
LABEL_9:
      v5 = a2[2];
      v3[1] = a2[1];
      v3[2] = v5;
      return 0;
    }
    goto LABEL_13;
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v7 = a2[2];
  if ( v7 )
  {
    v9 = sub_491248(a2[2]);
    v3[1] = (__int64)v9;
    v3[3] = v7;
    memcpy(v9, (const void *)a2[1], v7);
    v3[2] = v7;
  }
  return 0;
}
// 4488B8: could not find valid save-restore pair for x21
// 4488B8: could not find valid save-restore pair for x22
// 52451C: using guessed type char under_debugger;
