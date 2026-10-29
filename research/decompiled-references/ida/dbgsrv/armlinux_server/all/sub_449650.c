/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449650
// Address: 0x0000000000449650

//----- (0000000000449650) ----------------------------------------------------
__int64 __fastcall sub_449650(__int64 a1, __int64 *a2)
{
  __int64 v2; // x19
  __int64 v5; // x0
  char *v6; // x4
  char *v7; // x0
  __int64 *v8; // x0

  v2 = a1 + 24;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(char **)(a1 + 24);
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(v2 + 16) )
  {
    v7 = (char *)sub_491288(v2, *(void **)(a1 + 24), v5 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v7;
    v6 = v7;
    v5 = *(_QWORD *)(v2 + 8);
  }
  v8 = (__int64 *)&v6[32 * v5];
  *(_BYTE *)v8 = 2;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  ++*(_QWORD *)(v2 + 8);
  return sub_449520(v8, a2);
}
