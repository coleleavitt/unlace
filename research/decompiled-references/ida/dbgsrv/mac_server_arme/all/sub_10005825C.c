/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005825C
// Address: 0x000000010005825C

//----- (000000010005825C) ----------------------------------------------------
_QWORD *__fastcall sub_10005825C(_QWORD *result, __int64 a2)
{
  int v3; // w8
  size_t v4; // x20
  _QWORD *v5; // x22
  void *v6; // x21
  void *v7; // x8
  void *v8; // x8
  _QWORD *v9; // x20
  size_t v10; // x20
  _QWORD *v11; // x21
  void *v12; // x0
  _QWORD *v13; // x22

  if ( result != (_QWORD *)a2 )
  {
    v3 = *(_DWORD *)result;
    if ( *(int *)a2 < -1 )
    {
      if ( v3 >= -1 )
      {
        v8 = (void *)result[1];
        if ( v8 )
        {
          v9 = result;
          result[2] = 0;
          qfree(v8);
          result = v9;
          v9[1] = 0;
          v9[3] = 0;
        }
      }
      result[1] = *(_QWORD *)(a2 + 8);
      goto LABEL_16;
    }
    if ( v3 < -1 )
    {
      result[1] = 0;
      result[2] = 0;
      result[3] = 0;
      v10 = *(_QWORD *)(a2 + 16);
      if ( v10 )
      {
        v11 = result;
        v12 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
        v11[1] = v12;
        v11[3] = v10;
        memcpy(v12, *(const void **)(a2 + 8), v10);
        result = v11;
        v11[2] = v10;
      }
      goto LABEL_16;
    }
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
    {
      v5 = result;
      v6 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
      memcpy(v6, *(const void **)(a2 + 8), v4);
      result = v5;
      v7 = (void *)v5[1];
      if ( !v7 )
        goto LABEL_15;
    }
    else
    {
      v6 = nullptr;
      v7 = (void *)result[1];
      if ( !v7 )
      {
LABEL_15:
        result[1] = v6;
        result[2] = v4;
        result[3] = v4;
LABEL_16:
        *(_DWORD *)result = *(_DWORD *)a2;
        return result;
      }
    }
    result[2] = 0;
    v13 = result;
    qfree(v7);
    result = v13;
    goto LABEL_15;
  }
  return result;
}
