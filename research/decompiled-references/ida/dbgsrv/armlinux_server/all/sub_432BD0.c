/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432BD0
// Address: 0x0000000000432BD0

//----- (0000000000432BD0) ----------------------------------------------------
__int64 __fastcall sub_432BD0(__int64 a1)
{
  __int64 v1; // x19
  __int64 v3; // x0
  char *v4; // x1
  unsigned __int64 v5; // x2
  char *v6; // x0
  __int64 v7; // x2

  v1 = a1 + 368;
  v3 = *(_QWORD *)(a1 + 376);
  v4 = *(char **)(a1 + 368);
  v5 = v3 + 1;
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(v1 + 16) )
  {
    v6 = (char *)sub_491288(v1, v4, v5, 0x10u);
    *(_QWORD *)(a1 + 368) = v6;
    v4 = v6;
    v3 = *(_QWORD *)(v1 + 8);
    v5 = v3 + 1;
  }
  *(_QWORD *)(v1 + 8) = v5;
  v7 = 16 * v3;
  *(_DWORD *)&v4[v7] = *(_DWORD *)(a1 + 208);
  return 0;
}
