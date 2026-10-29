/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4370A8
// Address: 0x00000000004370A8

//----- (00000000004370A8) ----------------------------------------------------
__int64 __fastcall sub_4370A8(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  char v5; // w23
  __int64 v6; // x20
  int v7; // w1
  char v8; // w19
  __int64 v9; // x1
  _BYTE *v10; // x0
  __int64 result; // x0
  char v12; // w19
  __int64 v13; // x1
  _BYTE *v14; // x0
  __int64 v15; // x19
  __int64 v16; // x1
  _BYTE *v17; // x0
  char v18; // w19
  __int64 v19; // x1
  _BYTE *v20; // x0

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 200);
  if ( a3 <= 0xFu )
  {
    v18 = a2 + a3;
    *(_BYTE *)(a1 + 212) = a2 + a3;
    v19 = *(_QWORD *)(v6 + 8);
    if ( (unsigned __int64)(v19 + 1) > *(_QWORD *)(v6 + 16) )
    {
      v20 = sub_491288(v6, *(void **)v6, v19 + 1, 1u);
      *(_QWORD *)v6 = v20;
      v19 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v20 = *(_BYTE **)v6;
    }
    v20[v19] = v18;
    ++*(_QWORD *)(v6 + 8);
    result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
    *(_DWORD *)(a1 + 208) = result;
  }
  else
  {
    v7 = a2 >> 3;
    if ( (unsigned __int8)a3 == a3 )
    {
      v12 = v7 + 0x80;
      *(_BYTE *)(a1 + 212) = v7 + 0x80;
      v13 = *(_QWORD *)(v6 + 8);
      if ( (unsigned __int64)(v13 + 1) > *(_QWORD *)(v6 + 16) )
      {
        v14 = sub_491288(v6, *(void **)v6, v13 + 1, 1u);
        *(_QWORD *)v6 = v14;
        v13 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v14 = *(_BYTE **)v6;
      }
      v14[v13] = v12;
      ++*(_QWORD *)(v6 + 8);
      v15 = *(_QWORD *)(a1 + 200);
      ++*(_DWORD *)(a1 + 208);
      v16 = *(_QWORD *)(v15 + 8);
      if ( (unsigned __int64)(v16 + 1) > *(_QWORD *)(v15 + 16) )
      {
        v17 = sub_491288(v15, *(void **)v15, v16 + 1, 1u);
        *(_QWORD *)v15 = v17;
        v16 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        v17 = *(_BYTE **)v15;
      }
      v17[v16] = v5;
      ++*(_QWORD *)(v15 + 8);
      result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
      *(_DWORD *)(a1 + 208) = result;
    }
    else
    {
      v8 = v7 - 127;
      *(_BYTE *)(a1 + 212) = v7 - 127;
      v9 = *(_QWORD *)(v6 + 8);
      if ( (unsigned __int64)(v9 + 1) > *(_QWORD *)(v6 + 16) )
      {
        v10 = sub_491288(v6, *(void **)v6, v9 + 1, 1u);
        *(_QWORD *)v6 = v10;
        v9 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v10 = *(_BYTE **)v6;
      }
      v10[v9] = v8;
      ++*(_QWORD *)(v6 + 8);
      ++*(_DWORD *)(a1 + 208);
      return sub_436010(a1, a3);
    }
  }
  return result;
}
