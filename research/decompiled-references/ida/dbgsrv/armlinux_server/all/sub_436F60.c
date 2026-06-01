/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436F60
// Address: 0x0000000000436F60

//----- (0000000000436F60) ----------------------------------------------------
__int64 __fastcall sub_436F60(__int64 a1, char a2, unsigned __int16 a3)
{
  char v5; // w23
  __int64 v7; // x19
  char v8; // w21
  __int64 v9; // x1
  _BYTE *v10; // x0
  __int64 result; // x0
  __int64 v12; // x1
  _BYTE *v13; // x0
  __int64 v14; // x19
  __int64 v15; // x1
  _BYTE *v16; // x0

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int8)a3 == a3 )
  {
    *(_BYTE *)(a1 + 212) = a2;
    v12 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int64)(v12 + 1) > *(_QWORD *)(v7 + 16) )
    {
      v13 = sub_491288(v7, *(void **)v7, v12 + 1, 1u);
      *(_QWORD *)v7 = v13;
      v12 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v13 = *(_BYTE **)v7;
    }
    v13[v12] = a2;
    ++*(_QWORD *)(v7 + 8);
    v14 = *(_QWORD *)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    v15 = *(_QWORD *)(v14 + 8);
    if ( (unsigned __int64)(v15 + 1) > *(_QWORD *)(v14 + 16) )
    {
      v16 = sub_491288(v14, *(void **)v14, v15 + 1, 1u);
      *(_QWORD *)v14 = v16;
      v15 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v16 = *(_BYTE **)v14;
    }
    v16[v15] = v5;
    ++*(_QWORD *)(v14 + 8);
    result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
    *(_DWORD *)(a1 + 208) = result;
  }
  else
  {
    v8 = a2 + 1;
    *(_BYTE *)(a1 + 212) = a2 + 1;
    v9 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int64)(v9 + 1) > *(_QWORD *)(v7 + 16) )
    {
      v10 = sub_491288(v7, *(void **)v7, v9 + 1, 1u);
      *(_QWORD *)v7 = v10;
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v10 = *(_BYTE **)v7;
    }
    v10[v9] = v8;
    ++*(_QWORD *)(v7 + 8);
    ++*(_DWORD *)(a1 + 208);
    return sub_436010(a1, a3);
  }
  return result;
}
