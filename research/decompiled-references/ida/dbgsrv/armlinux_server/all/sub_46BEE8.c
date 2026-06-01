/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BEE8
// Address: 0x000000000046BEE8

//----- (000000000046BEE8) ----------------------------------------------------
__int64 __fastcall sub_46BEE8(__int64 result, unsigned __int64 a2, __int64 a3)
{
  __int64 *v5; // x24
  unsigned __int64 v6; // x22
  __int64 v7; // x20
  __int64 v8; // x27
  __int64 v9; // x27
  __int64 v10; // x19
  size_t v11; // x23
  void *v12; // x0
  size_t v13; // x23
  void *v14; // x0
  void *v15; // x0

  v5 = (__int64 *)result;
  if ( *(_QWORD *)(result + 16) < a2 )
  {
    result = (__int64)sub_491288(result, *(void **)result, a2, 0x50u);
    *v5 = result;
  }
  v6 = v5[1];
  if ( v6 < a2 )
  {
    v7 = 80 * v6;
    while ( 1 )
    {
      v9 = *v5;
      v10 = v9 + v7;
      *(_QWORD *)(v9 + v7) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      if ( v11 )
      {
        v12 = sub_491248(*(_QWORD *)(a3 + 8));
        *(_QWORD *)(v9 + v7) = v12;
        *(_QWORD *)(v10 + 16) = v11;
        memcpy(v12, *(const void **)a3, v11);
        *(_QWORD *)(v10 + 8) = v11;
      }
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0;
      v13 = *(_QWORD *)(a3 + 32);
      if ( v13 )
      {
        v14 = sub_491248(*(_QWORD *)(a3 + 32));
        *(_QWORD *)(v10 + 24) = v14;
        *(_QWORD *)(v10 + 40) = v13;
        memcpy(v14, *(const void **)(a3 + 24), v13);
        *(_QWORD *)(v10 + 32) = v13;
        *(_QWORD *)(v10 + 48) = 0;
        *(_QWORD *)(v10 + 56) = 0;
        *(_QWORD *)(v10 + 64) = 0;
        v8 = *(_QWORD *)(a3 + 56);
        if ( v8 )
          goto LABEL_11;
LABEL_6:
        result = *(unsigned int *)(a3 + 72);
        ++v6;
        *(_DWORD *)(v10 + 72) = result;
        v7 += 80;
        if ( v6 == a2 )
          break;
      }
      else
      {
        *(_QWORD *)(v10 + 48) = 0;
        *(_QWORD *)(v10 + 56) = 0;
        *(_QWORD *)(v10 + 64) = 0;
        v8 = *(_QWORD *)(a3 + 56);
        if ( !v8 )
          goto LABEL_6;
LABEL_11:
        v15 = sub_491248(16 * v8);
        *(_QWORD *)(v10 + 48) = v15;
        *(_QWORD *)(v10 + 64) = v8;
        ++v6;
        v7 += 80;
        memcpy(v15, *(const void **)(a3 + 48), 16 * v8);
        *(_QWORD *)(v10 + 56) = v8;
        result = *(unsigned int *)(a3 + 72);
        *(_DWORD *)(v10 + 72) = result;
        if ( v6 == a2 )
          break;
      }
    }
  }
  v5[1] = a2;
  return result;
}
