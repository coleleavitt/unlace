/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4397B0
// Address: 0x00000000004397B0

//----- (00000000004397B0) ----------------------------------------------------
__int64 __fastcall sub_4397B0(_QWORD *a1)
{
  __int64 v1; // x20
  unsigned int v3; // w22
  int v4; // w0
  __int64 v5; // x1
  int *v6; // x21
  __int64 v8; // x1
  char *v9; // x1

  v3 = sub_4387A8(a1);
  if ( v3 )
    return v3;
  v4 = *(_DWORD *)(a1[23] + 48LL);
  if ( !v4 )
  {
    v5 = a1[44];
    v6 = *(int **)(a1[43] + 8 * v5 - 8);
LABEL_12:
    if ( v5 )
    {
      v8 = v5 - 1;
      a1[44] = v8;
      if ( !v6 )
        goto LABEL_15;
    }
    else if ( !v6 )
    {
      return v3;
    }
    sub_4382E8((__int64)v6);
    j_j__free_0(v6);
    v8 = a1[44];
LABEL_15:
    if ( v8 )
    {
      if ( !under_debugger )
        sub_492270(270);
      __break(0x3E8u);
LABEL_18:
      if ( *(_QWORD *)(v1 + 64) )
        v9 = *(char **)(v1 + 56);
      else
        v9 = (char *)&qword_4B2D48;
      sub_486A58(0, v9);
      return sub_4869C8(56);
    }
    return v3;
  }
  while ( 1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8LL * v4);
    if ( (unsigned int)sub_444508(v1, v1 + 56) != 0x7FFFFFFF )
      return sub_4394E8((__int64)a1, 0, 0);
    v5 = a1[44];
    v6 = *(int **)(a1[43] + 8 * v5 - 8);
    if ( v6[6] > 0 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v1 + 48) )
      goto LABEL_12;
    v4 = *(_DWORD *)(a1[23] + 48LL);
  }
}
// 4398C0: variable 'v1' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
