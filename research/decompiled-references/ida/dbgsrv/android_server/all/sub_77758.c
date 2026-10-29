/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77758
// Address: 0x0000000000077758

//----- (0000000000077758) ----------------------------------------------------
__int64 __fastcall sub_77758(__int64 a1, __int64 a2)
{
  int v4; // w8
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  bool v8; // cc
  const void *v9; // x0
  __int64 v10; // x8
  const void *v11; // x1
  __int64 v12; // x9
  size_t v13; // x19
  size_t v14; // x20
  size_t v15; // x2
  int v16; // w8
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x9
  int v19; // w8
  int v20; // w9

  v4 = sub_77588((unsigned __int8 *)a1, (unsigned __int8 *)a2) - 2;
  result = 1;
  switch ( v4 )
  {
    case 0:
    case 7:
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(a2 + 8);
      v8 = v6 < v7;
      if ( v6 <= v7 )
        goto LABEL_27;
      goto LABEL_26;
    case 1:
      return ecmp((unsigned __int16 *)(a1 + 8), (unsigned __int16 *)(a2 + 8));
    case 3:
      return *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8);
    case 4:
      v19 = *(_DWORD *)(a1 + 8);
      v20 = *(_DWORD *)(a2 + 8);
      v8 = v19 < v20;
      if ( v19 > v20 )
        goto LABEL_26;
LABEL_27:
      if ( v8 )
        result = 0xFFFFFFFFLL;
      else
        result = 0;
      break;
    case 5:
      v9 = *(const void **)(a1 + 8);
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(const void **)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
      if ( v10 )
        v13 = v10 - 1;
      else
        v13 = 0;
      if ( v12 )
        v14 = v12 - 1;
      else
        v14 = 0;
      if ( v13 >= v14 )
        v15 = v14;
      else
        v15 = v13;
      LODWORD(result) = memcmp(v9, v11, v15);
      v16 = result;
      if ( (_DWORD)result )
        result = (unsigned int)result;
      else
        result = 0xFFFFFFFFLL;
      if ( v13 >= v14 && !v16 )
        return v13 > v14;
      return result;
    case 6:
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_QWORD *)(a2 + 8);
      if ( v17 > v18 )
      {
LABEL_26:
        result = 1;
      }
      else if ( v17 >= v18 )
      {
        result = 0;
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
      break;
    default:
      return result;
  }
  return result;
}
