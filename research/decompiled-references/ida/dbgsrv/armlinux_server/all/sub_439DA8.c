/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439DA8
// Address: 0x0000000000439DA8

//----- (0000000000439DA8) ----------------------------------------------------
__int64 __fastcall sub_439DA8(__int64 a1, const char *a2)
{
  __int64 v2; // x23
  _DWORD *v4; // x22
  _QWORD *v5; // x0
  size_t v6; // x19
  _QWORD *v7; // x21
  _QWORD *v8; // x0
  __int64 v9; // x3
  __int64 result; // x0
  void *v11; // x0
  const void *v12; // x1
  _DWORD *v13; // x1
  _DWORD *v14; // x22
  _QWORD *v15; // x0
  size_t v16; // x23
  _QWORD *v17; // x21
  unsigned __int64 v18; // x1
  __int64 v19; // x3
  _QWORD *v20; // x0
  void *v21; // x0
  const void *v22; // x1

  v2 = a1 + 40;
  sub_40CD68(a1 + 40, "%s.%s", a2, a2);
  v4 = sub_49E050(0x20u);
  *v4 = 1;
  v4[6] = 0;
  v5 = sub_49E050(0x18u);
  v6 = *(_QWORD *)(v2 + 8);
  *v5 = 0;
  v5[1] = 0;
  v7 = v5;
  v5[2] = 0;
  if ( v6 )
  {
    v11 = sub_491248(v6);
    v12 = *(const void **)(a1 + 40);
    *v7 = v11;
    v7[2] = v6;
    memcpy(v11, v12, v6);
    v7[1] = v6;
  }
  *((_QWORD *)v4 + 2) = v7;
  v8 = *(_QWORD **)(a1 + 344);
  v9 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int64)(v9 + 1) > *(_QWORD *)(a1 + 360) )
  {
    v8 = sub_491288(a1 + 344, *(void **)(a1 + 344), v9 + 1, 8u);
    *(_QWORD *)(a1 + 344) = v8;
    v9 = *(_QWORD *)(a1 + 352);
  }
  v8[v9] = v4;
  ++*(_QWORD *)(a1 + 352);
  result = sub_433780(a1);
  if ( !(_DWORD)result )
  {
    v13 = *(_DWORD **)(a1 + 40);
    if ( *(_QWORD *)(v2 + 16) <= 4u )
    {
      v13 = sub_491288(v2, v13, 5u, 1u);
      *(_QWORD *)(a1 + 40) = v13;
    }
    *(_QWORD *)(v2 + 8) = 5;
    *v13 = *(_DWORD *)"this";
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL) = 0;
    v14 = sub_49E050(0x20u);
    *v14 = 1;
    v14[6] = 0;
    v15 = sub_49E050(0x18u);
    v16 = *(_QWORD *)(v2 + 8);
    *v15 = 0;
    v15[1] = 0;
    v17 = v15;
    v15[2] = 0;
    if ( v16 )
    {
      v21 = sub_491248(v16);
      v22 = *(const void **)(a1 + 40);
      *v17 = v21;
      v17[2] = v16;
      memcpy(v21, v22, v16);
      v17[1] = v16;
    }
    v19 = *(_QWORD *)(a1 + 352);
    v18 = *(_QWORD *)(a1 + 360);
    *((_QWORD *)v14 + 2) = v17;
    v20 = *(_QWORD **)(a1 + 344);
    if ( v19 + 1 > v18 )
    {
      v20 = sub_491288(a1 + 344, *(void **)(a1 + 344), v19 + 1, 8u);
      *(_QWORD *)(a1 + 344) = v20;
      v19 = *(_QWORD *)(a1 + 352);
    }
    v20[v19] = v14;
    ++*(_QWORD *)(a1 + 352);
    result = sub_4394E8(a1, 0, 0);
    if ( !(_DWORD)result )
      return sub_434CE0(a1);
  }
  return result;
}
