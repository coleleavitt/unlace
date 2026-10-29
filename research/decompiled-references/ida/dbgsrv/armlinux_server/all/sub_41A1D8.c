/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A1D8
// Address: 0x000000000041A1D8

//----- (000000000041A1D8) ----------------------------------------------------
__int64 __fastcall sub_41A1D8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x19
  char *v6; // x0
  __int64 v7; // x3
  char *v8; // x2
  __int64 result; // x0

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(char **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v5 + 16) )
  {
    v6 = (char *)sub_491288(v5, *(void **)v5, v7 + 1, 0x28u);
    v7 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)v5 = v6;
  }
  v8 = &v6[40 * v7];
  *((_QWORD *)v8 + 1) = 0;
  *((_QWORD *)v8 + 2) = 0;
  *((_QWORD *)v8 + 3) = 0;
  ++*(_QWORD *)(v5 + 8);
  *(_QWORD *)v8 = a3;
  *((_WORD *)v8 + 16) = *(_WORD *)(a2 + 2);
  result = *(unsigned __int16 *)(a2 + 4);
  *((_WORD *)v8 + 17) = result;
  return result;
}
