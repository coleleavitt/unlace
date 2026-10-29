/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FA58
// Address: 0x000000000046FA58

//----- (000000000046FA58) ----------------------------------------------------
size_t __fastcall sub_46FA58(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x21
  int v6; // w0
  char v7; // w1
  size_t result; // x0
  unsigned __int64 v9; // x2
  unsigned __int8 *v10; // x21
  unsigned __int64 v12; // x2
  unsigned __int8 *v13; // x21
  size_t v15; // x22
  unsigned __int64 v16; // x24
  void *v17; // x0
  size_t v18; // x19
  unsigned __int64 v19; // x23
  void *v20; // x0

  v4 = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
  *(_QWORD *)(a1 + 64) = v4;
  v5 = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1 + 16 * v4;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1 + v5;
  v6 = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  v7 = v6 & 7;
  result = (unsigned int)(v6 >> 4);
  *(_BYTE *)(a1 + 72) = result;
  *(_BYTE *)(a1 + 73) = v7;
  v10 = *(unsigned __int8 **)a2;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 > *(_QWORD *)a2 )
  {
    result = (size_t)(v10 + 1);
    if ( *v10 )
    {
      while ( v9 != result )
      {
        if ( !*(unsigned __int8 *)result++ )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      *(_QWORD *)a2 = result;
      if ( v10 )
      {
        result = strlen((const char *)v10);
        v15 = result;
        if ( result )
        {
          v16 = result + 1;
          v17 = *(void **)(a1 + 16);
          if ( v16 > *(_QWORD *)(a1 + 32) )
          {
            v17 = sub_491288(a1 + 16, *(void **)(a1 + 16), v16, 1u);
            *(_QWORD *)(a1 + 16) = v17;
          }
          *(_QWORD *)(a1 + 24) = v16;
          memmove(v17, v10, v15);
          result = *(_QWORD *)(a1 + 16);
          *(_BYTE *)(result + v15) = 0;
          goto LABEL_7;
        }
      }
    }
  }
  *(_QWORD *)(a1 + 24) = 0;
LABEL_7:
  v13 = *(unsigned __int8 **)a2;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 <= *(_QWORD *)a2 )
    goto LABEL_12;
  result = (size_t)(v13 + 1);
  if ( *v13 )
  {
    while ( v12 != result )
    {
      if ( !*(unsigned __int8 *)result++ )
        goto LABEL_19;
    }
    goto LABEL_12;
  }
LABEL_19:
  *(_QWORD *)a2 = result;
  if ( !v13 || (result = strlen((const char *)v13), (v18 = result) == 0) )
  {
LABEL_12:
    *(_QWORD *)(a1 + 48) = 0;
    return result;
  }
  v19 = result + 1;
  v20 = *(void **)(a1 + 40);
  if ( v19 > *(_QWORD *)(a1 + 56) )
  {
    v20 = sub_491288(a1 + 40, *(void **)(a1 + 40), v19, 1u);
    *(_QWORD *)(a1 + 40) = v20;
  }
  *(_QWORD *)(a1 + 48) = v19;
  memmove(v20, v13, v18);
  result = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(result + v18) = 0;
  return result;
}
// 46FA58: could not find valid save-restore pair for x22
// 46FA58: could not find valid save-restore pair for x23
