/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DAB8
// Address: 0x000000000042DAB8

//----- (000000000042DAB8) ----------------------------------------------------
__int64 __fastcall sub_42DAB8(__int64 a1, __int64 a2)
{
  unsigned int v2; // w23
  __int64 v4; // x19
  __int64 v5; // x20
  const char *v6; // x0
  __int64 v8; // x0
  int v9; // w25
  int v10; // w22
  unsigned __int64 v11; // x2
  __int64 v12; // x20
  int v13; // w2

  v2 = *(unsigned __int8 *)(a1 + 32);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(20082);
    __break(0x3E8u);
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 56LL * *(_QWORD *)(a1 + 16);
  if ( v4 == v5 )
    return 0;
  while ( 1 )
  {
    v6 = (const char *)&qword_4B2D48;
    if ( *(_QWORD *)(v4 + 8) )
      v6 = *(const char **)v4;
    if ( !strcmp(v6, "GNU") && *(_DWORD *)(v4 + 48) == 3 )
      break;
    v4 += 56;
    if ( v4 == v5 )
      return 0;
  }
  v8 = *(_QWORD *)(v4 + 32);
  if ( !v8 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    return v2;
  }
  v9 = v8 - 1;
  *(_QWORD *)(a2 + 8) = 0;
  v10 = v8 - 1;
  v11 = 2 * ((int)v8 - 1);
  if ( (unsigned __int64)(int)v11 > *(_QWORD *)(a2 + 16) )
    *(_QWORD *)a2 = sub_491288(a2, *(void **)a2, v11, 1u);
  v12 = 0;
  if ( v9 > 0 )
  {
    do
    {
      if ( v12 | *(_QWORD *)(v4 + 32) )
        v13 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 24) + v12);
      else
        v13 = 0;
      ++v12;
      sub_42D148(a2, "%02x", v13);
    }
    while ( v10 > (int)v12 );
  }
  return v2;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
