/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A66F4
// Address: 0x00000000000A66F4

//----- (00000000000A66F4) ----------------------------------------------------
__int64 __fastcall sub_A66F4(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x22
  __int64 v4; // x21
  unsigned __int64 v5; // x0
  unsigned __int64 *v6; // x21
  unsigned __int64 v7; // t1
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD, _QWORD); // x8
  unsigned __int64 v9; // x20
  int v10; // w0
  const char *v11; // x8
  int v12; // w9
  __int64 result; // x0
  unsigned int v14; // w1
  unsigned __int64 v15; // x8

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 32);
  v4 = v2 + 32 * v1;
  v5 = qtime64();
  v7 = *(_QWORD *)(v4 - 16);
  v6 = (unsigned __int64 *)(v4 - 16);
  if ( v5 < v7 )
    return 0;
  v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
  if ( !v8 )
    return 0;
  v9 = v5;
  v10 = v8(*(unsigned __int8 *)(v2 + 24), *(_QWORD *)(v2 + 8), *(_QWORD *)v2, *(_QWORD *)(a1 + 16));
  if ( v10 == 2 )
  {
    v11 = "cancelled";
    v12 = -15059582;
    result = 1;
    goto LABEL_9;
  }
  if ( v10 == 1 )
  {
    v11 = "skip_iter";
    v12 = -21015;
    result = 0;
LABEL_9:
    *(_QWORD *)(a1 + 88) = v11;
    *(_DWORD *)(a1 + 96) = v12;
    return result;
  }
  v14 = *(_DWORD *)(a1 + 24);
  v15 = 0;
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      v15 = sub_A48CC(v9, v14);
  }
  *v6 = v15;
  return 0;
}
