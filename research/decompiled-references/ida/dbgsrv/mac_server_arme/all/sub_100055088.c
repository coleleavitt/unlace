/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055088
// Address: 0x0000000100055088

//----- (0000000100055088) ----------------------------------------------------
__int64 __fastcall sub_100055088(__int64 a1, __int64 a2)
{
  _QWORD *v3; // x21
  char *v4; // x8
  __int64 v5; // x9
  __int64 v6; // x20
  char *v7; // x0
  char *v8; // x22
  _QWORD *v9; // x2
  const char *v10; // x0

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (char *)v3[13];
  v5 = v3[14];
  if ( v3[15] < (unsigned __int64)(v5 + 1) )
  {
    v6 = a2;
    v7 = (char *)qvector_reserve(v3 + 13, (_QWORD *)v3[13], v5 + 1, 0x78u);
    a2 = v6;
    v4 = v7;
    v3[13] = v7;
    v5 = v3[14];
  }
  v8 = &v4[120 * v5];
  *((_QWORD *)v8 + 14) = 0;
  *((_OWORD *)v8 + 5) = 0u;
  *((_OWORD *)v8 + 6) = 0u;
  *((_OWORD *)v8 + 3) = 0u;
  *((_OWORD *)v8 + 4) = 0u;
  *((_OWORD *)v8 + 2) = 0u;
  *(_OWORD *)v8 = 0u;
  *((_OWORD *)v8 + 1) = 0u;
  ++v3[14];
  v9 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)v8 = *(unsigned int *)(a2 + 12);
  *((_DWORD *)v8 + 2) = *(_DWORD *)(a2 + 8);
  *((_QWORD *)v8 + 5) = 0;
  *((_QWORD *)v8 + 6) = *(int *)(a2 + 20);
  sub_10004AF44((__int64)(v8 + 16), (_QWORD *)a2, v9);
  *((_QWORD *)v8 + 7) = 0;
  *((_QWORD *)v8 + 8) = 0;
  if ( *((_QWORD *)v8 + 3) )
    v10 = *((const char **)v8 + 2);
  else
    v10 = &byte_10007AE40;
  if ( !strncmp(v10, ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
