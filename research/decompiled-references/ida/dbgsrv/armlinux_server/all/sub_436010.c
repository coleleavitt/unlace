/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436010
// Address: 0x0000000000436010

//----- (0000000000436010) ----------------------------------------------------
__int64 __fastcall sub_436010(__int64 a1, unsigned __int16 a2)
{
  unsigned int v3; // w21
  char v4; // w22
  __int64 v5; // x19
  _BYTE *v6; // x0
  __int64 v7; // x3
  unsigned int v8; // w21
  __int64 v9; // x19
  __int64 v10; // x1
  _BYTE *v11; // x0
  __int64 result; // x0

  v3 = a2;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_BYTE **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v5 + 16) )
  {
    v6 = sub_491288(v5, *(void **)v5, v7 + 1, 1u);
    v7 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)v5 = v6;
  }
  v6[v7] = v4;
  v8 = v3 >> 8;
  ++*(_QWORD *)(v5 + 8);
  v9 = *(_QWORD *)(a1 + 200);
  ++*(_DWORD *)(a1 + 208);
  v10 = *(_QWORD *)(v9 + 8);
  if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(v9 + 16) )
  {
    v11 = sub_491288(v9, *(void **)v9, v10 + 1, 1u);
    *(_QWORD *)v9 = v11;
    v10 = *(_QWORD *)(v9 + 8);
  }
  else
  {
    v11 = *(_BYTE **)v9;
  }
  v11[v10] = v8;
  ++*(_QWORD *)(v9 + 8);
  result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
  *(_DWORD *)(a1 + 208) = result;
  return result;
}
