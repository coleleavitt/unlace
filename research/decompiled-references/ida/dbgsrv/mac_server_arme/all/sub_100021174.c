/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021174
// Address: 0x0000000100021174

//----- (0000000100021174) ----------------------------------------------------
__int64 __fastcall sub_100021174(__int64 a1, __int64 a2)
{
  char *idcv_attr; // x0
  char *v4; // x20
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x23
  void *v8; // x0

  if ( *(_QWORD *)(a1 + 48) )
  {
    idcv_attr = next_idcv_attr((char *)a1, *(char **)(a1 + 40));
    if ( idcv_attr )
      goto LABEL_3;
LABEL_7:
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 8) = 0;
    return 0;
  }
  idcv_attr = next_idcv_attr((char *)a1, &byte_10007AE40);
  if ( !idcv_attr )
    goto LABEL_7;
LABEL_3:
  v4 = idcv_attr;
  v5 = strlen(idcv_attr);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v5 )
  {
    v6 = v5;
    v7 = v5 + 1;
    if ( v5 == -1 )
    {
      v8 = nullptr;
    }
    else
    {
      v8 = qvector_reserve((_QWORD *)(a2 + 8), nullptr, v7, 1u);
      *(_QWORD *)(a2 + 8) = v8;
    }
    *(_QWORD *)(a2 + 16) = v7;
    memmove(v8, v4, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
  }
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
