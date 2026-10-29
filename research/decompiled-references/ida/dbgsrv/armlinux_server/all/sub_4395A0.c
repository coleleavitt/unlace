/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4395A0
// Address: 0x00000000004395A0

//----- (00000000004395A0) ----------------------------------------------------
bool __fastcall sub_4395A0(__int64 a1)
{
  _DWORD *v3; // x22
  _QWORD *v4; // x0
  size_t v5; // x21
  _QWORD *v6; // x20
  _QWORD *v7; // x0
  __int64 v8; // x3
  void *v9; // x0
  const void *v10; // x1

  if ( (unsigned int)sub_4381F0(a1, 1) )
    return 1;
  v3 = sub_49E050(0x20u);
  *v3 = 1;
  v3[6] = 0;
  v4 = sub_49E050(0x18u);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  if ( v5 )
  {
    v9 = sub_491248(v5);
    v10 = *(const void **)(a1 + 40);
    *v6 = v9;
    v6[2] = v5;
    memcpy(v9, v10, v5);
    v6[1] = v5;
  }
  *((_QWORD *)v3 + 2) = v6;
  v7 = *(_QWORD **)(a1 + 344);
  v8 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(a1 + 360) )
  {
    v7 = sub_491288(a1 + 344, *(void **)(a1 + 344), v8 + 1, 8u);
    *(_QWORD *)(a1 + 344) = v7;
    v8 = *(_QWORD *)(a1 + 352);
  }
  v7[v8] = v3;
  ++*(_QWORD *)(a1 + 352);
  return (unsigned int)sub_4394E8(a1, 0, 0) != 0;
}
