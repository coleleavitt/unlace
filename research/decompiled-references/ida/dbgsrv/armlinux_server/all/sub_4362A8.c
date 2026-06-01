/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4362A8
// Address: 0x00000000004362A8

//----- (00000000004362A8) ----------------------------------------------------
__int64 __fastcall sub_4362A8(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  unsigned int v4; // w1
  unsigned int v5; // w0
  __int64 v7; // x20
  unsigned __int64 v8; // x21
  char *v9; // x0
  unsigned __int64 v10; // x3
  int v11; // w22
  __int64 v12; // x20
  __int64 v13; // x1
  _BYTE *v14; // x0

  v3 = *(_QWORD *)(a1 + 224);
  v2 = *(_QWORD *)(a1 + 232);
  v4 = *(_DWORD *)(v3 + 4 * v2 - 4);
  if ( v2 )
    *(_QWORD *)(a1 + 232) = v2 - 1;
  v5 = *(_DWORD *)(a1 + 208);
  if ( v5 - 4 != v4 )
    goto LABEL_7;
  if ( v5 <= 4 )
  {
    if ( !under_debugger )
      sub_492270(708);
    __break(0x3E8u);
LABEL_7:
    sub_43D210(*(_QWORD *)(a1 + 200), v4, v5 - 4 - v4);
    *(_BYTE *)(a1 + 212) = -1;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 200);
  v8 = v5 - 5;
  *(_DWORD *)(a1 + 208) = v8;
  v9 = *(char **)v7;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(unsigned __int8 *)(*(_QWORD *)v7 + (unsigned int)v8);
  if ( v8 > v10 )
  {
    if ( v8 > *(_QWORD *)(v7 + 16) )
    {
      v9 = (char *)sub_491288(v7, *(void **)v7, v8, 1u);
      *(_QWORD *)v7 = v9;
      v10 = *(_QWORD *)(v7 + 8);
    }
    memset(&v9[v10], 0, v8 - v10);
    *(_QWORD *)(v7 + 8) = v8;
  }
  else if ( v8 < v10 )
  {
    *(_QWORD *)(v7 + 8) = v8;
  }
  *(_BYTE *)(a1 + 212) = -87;
  if ( v11 == 171 )
  {
    v12 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -85;
    v13 = *(_QWORD *)(v12 + 8);
    if ( (unsigned __int64)(v13 + 1) > *(_QWORD *)(v12 + 16) )
    {
      v14 = sub_491288(v12, *(void **)v12, v13 + 1, 1u);
      *(_QWORD *)v12 = v14;
      v13 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      v14 = *(_BYTE **)v12;
    }
    v14[v13] = -85;
    ++*(_QWORD *)(v12 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_436010(a1, 0);
    sub_436010(a1, 0);
    return 0;
  }
  return sub_434A08(a1);
}
// 52451C: using guessed type char under_debugger;
